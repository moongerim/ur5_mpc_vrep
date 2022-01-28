#!/usr/bin/env python
import numpy as np
import torch
import torch.nn as nn
import torch.optim as optim
import torch.nn.functional as F
import copy
import matplotlib
matplotlib.use('TkAgg')
import matplotlib.pyplot as plt
import os
import stream_tee as stream_tee
import __main__ as main
import csv
import rospy
from std_msgs.msg import Float64MultiArray
import time
torch.manual_seed(1)
import random
from math import sin,cos
from stream_tee import write_mat


class MyModel(nn.Module):
    def __init__(self, dev, input_size = 48, output_size = 6):
        super().__init__()
        self.dev = dev
        self.linear_1 = nn.Linear(in_features=input_size, out_features=200)
        self.linear_2 = nn.Linear(200, 200)
        self.linear_3 = nn.Linear(200, output_size)

    def forward(self, x):
        x = self.linear_1(x)
        x = torch.tanh(x)
        x = self.linear_2(x)
        x = torch.tanh(x)
        return self.linear_3(x)

class ENV:
    def __init__(self,model,run_name):
        self.run_name = run_name
        rospy.Subscriber("/CoppeliaSim_info", Float64MultiArray, self.callback)
        self.NN_solutions = Float64MultiArray()
        self.pub = rospy.Publisher('/NN_solutions', Float64MultiArray, queue_size=1)
        self.A = [0.0, -2.3, -0.9, -0.5, 1.3, 1.0]
        self.B = [2.8, -2.2, -1.0, -0.6, 1.4, 1.1]
        self.start = self.A
        self.goal = self.B
        self.robot_spheres = [0.1, 0.1, 0.15, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1]
        self.human_spheres = [0.5510,0.6010,0.5010,0.5010,0.5010,0.5010,0.5010,0.5010,0.4510,0.4510,0.4810,0.4810,0.5510,0.6010]
        self.model = model
        self.i = 0
        self.first = 0
        self.init_log_variables()
        
        
    def callback(self, data):
        self.observation = data.data[0:54]

    def done(self):
        max_diff = 0
        temp = 0
        arrive = False
        for i in range(6):
            temp = abs(self.goal[i]-self.observation[i])
            if temp>max_diff:
                max_diff = temp
        print(max_diff,self.threshold)
        if max_diff<self.threshold:
            print("-----Arrived------")
            arrive = True
            if self.start[0]==self.A[0]:
                self.start = self.B
                self.goal = self.A
                model.load_state_dict(torch.load('model_20211014_095021.pth'))
            else:
                self.start = self.A
                self.goal = self.B
                model.load_state_dict(torch.load('model_20211014_094102.pth'))
        return arrive

    def test(self, x_test):
        self.model.eval()
        prediction=[]
        with torch.no_grad():
            seq_data = np.array(x_test)
            seq_data = torch.tensor([i for i in seq_data], dtype=torch.float32).to(dev)
            prediction = self.model(seq_data)
        return prediction

    def step(self):
        t_nn = time.time()
        u = self.test(self.observation[0:48])
        elapsed_nn = time.time() - t_nn
        self.cposes()
        
        self.NN_solutions.data = [u[0],u[1],u[2],u[3],u[4],u[5],
             self.tp[0], self.tp[1], self.tp[2], self.tp[3], self.tp[4], self.tp[5],
             self.tp[6], self.tp[7], self.tp[8], self.tp[9], self.tp[10], self.tp[11],
             self.tp[12], self.tp[13], self.tp[14], self.tp[15], self.tp[16], self.tp[17],
             self.tp[18], self.tp[19], self.tp[20], self.tp[21], self.tp[22], self.tp[23],
             self.tp[24], self.tp[25], self.tp[26], self.tp[27], self.tp[28], self.tp[29],
             self.goal_ee[0],self.goal_ee[1],self.goal_ee[2],1]
        self.pub.publish(self.NN_solutions)
        self.min_dist()
        temp = list(u.cpu().numpy())
        tp_v = self.tp_vels(self.observation[0:6],temp)
        # print(tp_v)
        self.nn_actions.append(temp)
        self.joint_poses.append(self.observation[0:6])
        self.min_distances.append(self.minimum_dist)
        self.smallest_distances.append(self.smallest_dist)
        self.real_vels.append(self.observation[48:54])
        self.human_poses.append(self.observation[6:48])
        self.nn_time.append(elapsed_nn)
        self.test_point_vels.append(tp_v)
        self.test_point_cposes.append(self.tp)
        
    def reset(self):   
        self.init_variables()
        time.sleep(1)
        self.step()
    
    def min_dist(self):
        self.minimum_dist = [100]*10
        self.smallest_dist = 100
        for i in range(10):
            r_tp = self.tp[3*i:3*i+3]
            r_tp = np.array(r_tp)
            for j in range(14):
                h_tp = self.observation[j*3+6:j*3+9]
                h_tp = np.array(h_tp)
                dist = np.linalg.norm(r_tp-h_tp)
                temp = dist-self.robot_spheres[i] - self.human_spheres[j]
                if self.minimum_dist[i] > temp:
                    self.minimum_dist[i] = temp
            if self.smallest_dist > self.minimum_dist[i]:
                self.smallest_dist = self.minimum_dist[i]

    def cposes(self,theta=None):
        if theta is None:
            theta=self.observation[0:6]
        theta_1 = theta[0]
        theta_2 = theta[1]
        theta_3 = theta[2]
        theta_4 = theta[3]
        theta_5 = theta[4]
        theta_6 = theta[5]
        
        self.tp[0] = 1*(0.4*sin(theta_1)-0.425*cos(theta_1)*cos(theta_2))/3
        self.tp[1] = 1*(-0.4*cos(theta_1)-0.425*cos(theta_2)*sin(theta_1))/3
        self.tp[2] = 0.08945+(0.08945-0.425*sin(theta_2)-0.08945)/3
        self.tp[3] = 2*(0.2*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2))/3
        self.tp[4] = 2*(-0.2*cos(theta_1) - 0.425*cos(theta_2)*sin(theta_1))/3
        self.tp[5] = 0.08945+2*(0.08945-0.425*sin(theta_2)-0.08945)/3
        self.tp[6] = 0.11*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2)
        self.tp[7] = -0.11*cos(theta_1) - 0.425*cos(theta_2)*sin(theta_1)
        self.tp[8] = 0.08945  -0.425*sin(theta_2)
        self.tp[9] = -0.425*cos(theta_1)*cos(theta_2)+(-(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_1)*cos(theta_2)))/4
        self.tp[10] = -0.425*cos(theta_2)*sin(theta_1)+(-(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_2)*sin(theta_1)))/4
        self.tp[11] = 0.08945 - 0.425*sin(theta_2)+(0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3)-(0.08945 - 0.425*sin(theta_2)))/4
        self.tp[12] = -0.425*cos(theta_1)*cos(theta_2)+2*(-(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_1)*cos(theta_2)))/4
        self.tp[13] = -0.425*cos(theta_2)*sin(theta_1)+2*(-(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_2)*sin(theta_1)))/4
        self.tp[14] = 0.08945 - 0.425*sin(theta_2)+2*(0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3)-(0.08945 - 0.425*sin(theta_2)))/4
        self.tp[15] = -0.425*cos(theta_1)*cos(theta_2)+3*(-(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_1)*cos(theta_2)))/4
        self.tp[16] = -0.425*cos(theta_2)*sin(theta_1)+3*(-(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_2)*sin(theta_1)))/4
        self.tp[17] = 0.08945 - 0.425*sin(theta_2)+3*(0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3)-(0.08945 - 0.425*sin(theta_2)))/4
        self.tp[18] = -(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000
        self.tp[19] = -(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000
        self.tp[20] = 0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3)
        self.tp[21] = 0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)
        self.tp[22] = 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) - 0.425*cos(theta_2)*sin(theta_1) - 0.10915*cos(theta_1) - 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)
        self.tp[23] = 0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3)
        self.tp[24] = 0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.09465*cos(theta_4)*(cos(theta_1)*cos(theta_2)*sin(theta_3) + cos(theta_1)*cos(theta_3)*sin(theta_2)) - 0.09465*sin(theta_4)*(cos(theta_1)*sin(theta_2)*sin(theta_3) - 1.0*cos(theta_1)*cos(theta_2)*cos(theta_3)) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)
        self.tp[25] = 0.09465*cos(theta_4)*(cos(theta_2)*sin(theta_1)*sin(theta_3) + cos(theta_3)*sin(theta_1)*sin(theta_2)) - 0.425*cos(theta_2)*sin(theta_1) - 0.10915*cos(theta_1) - 0.09465*sin(theta_4)*(sin(theta_1)*sin(theta_2)*sin(theta_3) - 1.0*cos(theta_2)*cos(theta_3)*sin(theta_1)) + 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) - 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)
        self.tp[26] = 0.08945 - 0.39225*sin(theta_2 + theta_3) - 0.425*sin(theta_2) - 0.09465*cos(theta_2 + theta_3 + theta_4)
        self.tp[27] = 0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.0823*cos(theta_5)*sin(theta_1) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.0823*cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*sin(theta_5) + 0.09465*cos(theta_2 + theta_3)*cos(theta_1)*sin(theta_4) + 0.09465*sin(theta_2 + theta_3)*cos(theta_1)*cos(theta_4) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)
        self.tp[28] = 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) - 0.0823*cos(theta_1)*cos(theta_5) - 0.425*cos(theta_2)*sin(theta_1) - 0.10915*cos(theta_1) - 0.0823*cos(theta_2 + theta_3 + theta_4)*sin(theta_1)*sin(theta_5) + 0.09465*cos(theta_2 + theta_3)*sin(theta_1)*sin(theta_4) + 0.09465*sin(theta_2 + theta_3)*cos(theta_4)*sin(theta_1) - 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)
        self.tp[29] = 0.09465*sin(theta_2 + theta_3)*sin(theta_4) - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3) - sin(theta_5)*(0.0823*cos(theta_2 + theta_3)*sin(theta_4) + 0.0823*sin(theta_2 + theta_3)*cos(theta_4)) - 0.09465*cos(theta_2 + theta_3)*cos(theta_4) + 0.08945
    
    def tp_vels(self,theta,u):
        theta_1 = theta[0]
        theta_2 = theta[1]
        theta_3 = theta[2]
        theta_4 = theta[3]
        theta_5 = theta[4]
        theta_6 = theta[5]
        u_1 = u[0]
        u_2 = u[1]
        u_3 = u[2]    
        u_4 = u[3]
        u_5 = u[4]
        u_6 = u[5]
        tp_v = [0 for c in range(30)]
        tp_v[0] = (0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2))/3
        tp_v[1] = (0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2))/3
        tp_v[2] = (-0.425*u_2*cos(theta_2))/3
        tp_v[3] = 2*(0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2))/3
        tp_v[4] = 2*(0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2))/3
        tp_v[5] = 2*(-0.425*u_2*cos(theta_2))/3
        tp_v[6] = 0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2)
        tp_v[7] = 0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2)
        tp_v[8] = -0.425*u_2*cos(theta_2)
        tp_v[9] = 0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2)+1/4*(u_2*(0.425*cos(theta_1)*sin(theta_2) + 0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2)) + u_1*(0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + u_3*(0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2))-(0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2)))
        tp_v[10] = 0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2)+1/4*(u_3*(0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2)) - 1.0*u_1*(0.425*cos(theta_1)*cos(theta_2) - 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + u_2*(0.425*sin(theta_1)*sin(theta_2) + 0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2))-(0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2)))
        tp_v[11] = -0.425*u_2*cos(theta_2)+1/4*(- 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2)) - 0.39225*u_3*cos(theta_2 + theta_3)-(-0.425*u_2*cos(theta_2)))
        tp_v[12] = 0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2)+2/4*(u_2*(0.425*cos(theta_1)*sin(theta_2) + 0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2)) + u_1*(0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + u_3*(0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2))-(0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2)))
        tp_v[13] = 0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2)+2/4*(u_3*(0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2)) - 1.0*u_1*(0.425*cos(theta_1)*cos(theta_2) - 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + u_2*(0.425*sin(theta_1)*sin(theta_2) + 0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2))-(0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2)))
        tp_v[14] = -0.425*u_2*cos(theta_2)+2/4*(- 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2)) - 0.39225*u_3*cos(theta_2 + theta_3)-(-0.425*u_2*cos(theta_2)))
        tp_v[15] = 0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2)+3/4*(u_2*(0.425*cos(theta_1)*sin(theta_2) + 0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2)) + u_1*(0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + u_3*(0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2))-(0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2)))
        tp_v[16] = 0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2)+3/4*(u_3*(0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2)) - 1.0*u_1*(0.425*cos(theta_1)*cos(theta_2) - 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + u_2*(0.425*sin(theta_1)*sin(theta_2) + 0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2))-(0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2)))
        tp_v[17] = -0.425*u_2*cos(theta_2)+3/4*(- 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2)) - 0.39225*u_3*cos(theta_2 + theta_3)-(-0.425*u_2*cos(theta_2)))
        tp_v[18] = u_2*(0.425*cos(theta_1)*sin(theta_2) + 0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2)) + u_1*(0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + u_3*(0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2))
        tp_v[19] = u_3*(0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2)) - 1.0*u_1*(0.425*cos(theta_1)*cos(theta_2) - 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + u_2*(0.425*sin(theta_1)*sin(theta_2) + 0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2))
        tp_v[20] = - 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2)) - 0.39225*u_3*cos(theta_2 + theta_3)
        tp_v[21] = u_1*(0.10915*cos(theta_1) + 0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + 0.00025*u_2*cos(theta_1)*(1569.0*sin(theta_2 + theta_3) + 1700.0*sin(theta_2)) + 0.39225*u_3*sin(theta_2 + theta_3)*cos(theta_1)
        tp_v[22] = u_1*(0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + 0.00025*u_2*sin(theta_1)*(1569.0*sin(theta_2 + theta_3) + 1700.0*sin(theta_2)) + 0.39225*u_3*sin(theta_2 + theta_3)*sin(theta_1)
        tp_v[23] = - 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2)) - 0.39225*u_3*cos(theta_2 + theta_3)
        tp_v[24] = u_1*(0.10915*cos(theta_1) + 0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) - 0.09465*cos(theta_2 + theta_3)*sin(theta_1)*sin(theta_4) - 0.09465*sin(theta_2 + theta_3)*cos(theta_4)*sin(theta_1) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + 0.00005*u_2*cos(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 7845.0*sin(theta_2 + theta_3) + 8500.0*sin(theta_2)) + 0.00015*u_3*cos(theta_1)*(631.0*cos(theta_2 + theta_3 + theta_4) + 2615.0*sin(theta_2 + theta_3)) + 0.09465*u_4*cos(theta_2 + theta_3 + theta_4)*cos(theta_1)
        tp_v[25] = u_1*(0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) + 0.09465*cos(theta_2 + theta_3)*cos(theta_1)*sin(theta_4) + 0.09465*sin(theta_2 + theta_3)*cos(theta_1)*cos(theta_4) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + 0.00005*u_2*sin(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 7845.0*sin(theta_2 + theta_3) + 8500.0*sin(theta_2)) + 0.00015*u_3*sin(theta_1)*(631.0*cos(theta_2 + theta_3 + theta_4) + 2615.0*sin(theta_2 + theta_3)) + 0.09465*u_4*cos(theta_2 + theta_3 + theta_4)*sin(theta_1)
        tp_v[26] = 0.09465*u_2*sin(theta_2 + theta_3 + theta_4) + 0.09465*u_3*sin(theta_2 + theta_3 + theta_4) + 0.09465*u_4*sin(theta_2 + theta_3 + theta_4) - 0.39225*u_2*cos(theta_2 + theta_3) - 0.39225*u_3*cos(theta_2 + theta_3) - 0.425*u_2*cos(theta_2)
        tp_v[27] = u_1*(0.10915*cos(theta_1) + 0.0823*cos(theta_1)*cos(theta_5) + 0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.0823*cos(theta_2 + theta_3 + theta_4)*sin(theta_1)*sin(theta_5) - 0.09465*cos(theta_2 + theta_3)*sin(theta_1)*sin(theta_4) - 0.09465*sin(theta_2 + theta_3)*cos(theta_4)*sin(theta_1) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) - 1.0*u_5*(0.0823*sin(theta_1)*sin(theta_5) + 0.0823*cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*cos(theta_5)) + 0.00005*u_2*cos(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 823.0*cos(theta_2 + theta_3 + theta_4 - 1.0*theta_5) - 823.0*cos(theta_2 + theta_3 + theta_4 + theta_5) + 7845.0*sin(theta_2 + theta_3) + 8500.0*sin(theta_2)) + 0.00005*u_4*cos(theta_1)*(1646.0*sin(theta_2 + theta_3 + theta_4)*sin(theta_5) - 1893.0*sin(theta_2 + theta_3)*sin(theta_4) + 1893.0*cos(theta_2 + theta_3)*cos(theta_4)) + 0.00005*u_3*cos(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 823.0*cos(theta_2 + theta_3 + theta_4 - 1.0*theta_5) - 823.0*cos(theta_2 + theta_3 + theta_4 + theta_5) + 7845.0*sin(theta_2 + theta_3))
        tp_v[28] = u_5*(0.0823*cos(theta_1)*sin(theta_5) - 0.0823*cos(theta_2 + theta_3 + theta_4)*cos(theta_5)*sin(theta_1)) + u_1*(0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.0823*cos(theta_5)*sin(theta_1) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.0823*cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*sin(theta_5) + 0.09465*cos(theta_2 + theta_3)*cos(theta_1)*sin(theta_4) + 0.09465*sin(theta_2 + theta_3)*cos(theta_1)*cos(theta_4) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + 0.00005*u_2*sin(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 823.0*cos(theta_2 + theta_3 + theta_4 - 1.0*theta_5) - 823.0*cos(theta_2 + theta_3 + theta_4 + theta_5) + 7845.0*sin(theta_2 + theta_3) + 8500.0*sin(theta_2)) + 0.00005*u_4*sin(theta_1)*(1646.0*sin(theta_2 + theta_3 + theta_4)*sin(theta_5) - 1893.0*sin(theta_2 + theta_3)*sin(theta_4) + 1893.0*cos(theta_2 + theta_3)*cos(theta_4)) + 0.00005*u_3*sin(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 823.0*cos(theta_2 + theta_3 + theta_4 - 1.0*theta_5) - 823.0*cos(theta_2 + theta_3 + theta_4 + theta_5) + 7845.0*sin(theta_2 + theta_3))
        tp_v[29] = u_4*(0.09465*sin(theta_2 + theta_3 + theta_4) - 0.0823*cos(theta_2 + theta_3 + theta_4)*sin(theta_5)) - 1.0*u_3*(0.39225*cos(theta_2 + theta_3) - 0.09465*sin(theta_2 + theta_3 + theta_4) + 0.0823*cos(theta_2 + theta_3 + theta_4)*sin(theta_5)) - 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2) - 0.09465*cos(theta_2 + theta_3)*sin(theta_4) - 0.09465*sin(theta_2 + theta_3)*cos(theta_4) + 0.0823*cos(theta_2 + theta_3)*cos(theta_4)*sin(theta_5) - 0.0823*sin(theta_2 + theta_3)*sin(theta_4)*sin(theta_5)) - 0.0823*u_5*sin(theta_2 + theta_3 + theta_4)*cos(theta_5)
        return tp_v
    def init_variables(self):
        self.save_log()
        if self.first<3:
            self.threshold=0.25
            self.first+=1
        else:
            self.threshold=0.08
        self.i+=1
        self.init_log_variables()
        self.cposes(self.goal[0:6])
        self.goal_ee = [self.tp[27],self.tp[28],self.tp[29]]
        self.cposes(self.start[0:6])
        self.NN_solutions.data = [self.start[0],self.start[1],self.start[2],self.start[3],self.start[4],self.start[5],
                                  self.tp[0],self.tp[1],self.tp[2],self.tp[3],self.tp[4],self.tp[5],
                                  self.tp[6],self.tp[7],self.tp[8],self.tp[9], self.tp[10], self.tp[11],
                                  self.tp[12], self.tp[13], self.tp[14], self.tp[15], self.tp[16], self.tp[17],
                                  self.tp[18], self.tp[19], self.tp[20], self.tp[21], self.tp[22], self.tp[23],
                                  self.tp[24], self.tp[25], self.tp[26], self.tp[27], self.tp[28], self.tp[29],
                                  self.goal_ee[0],self.goal_ee[1],self.goal_ee[2],0]
        self.pub.publish(self.NN_solutions)

    def init_log_variables(self):
        self.nn_actions = []
        self.joint_poses = []
        self.human_poses = []
        self.min_distances = []
        self.smallest_distances = []
        self.real_vels = []
        self.nn_time = []
        self.observation = [0]*54
        self.minimum_dist = [100]*10
        self.smallest_dist = 100
        self.tp = [0 for c in range(30)]
        
        self.test_point_vels = []
        self.test_point_cposes = []
        self.arrive = False
        

    def save_log(self):
        write_mat('Network_log/' + self.run_name,
                        {'actions': self.nn_actions,
                        'joint_poses': self.joint_poses,
                        'human_poses':self.human_poses,
                        'min_dist': self.min_distances,
                        'smallest_dist': self.smallest_distances,
                        'real_vels': self.real_vels,
                        'start':self.goal,
                        'goal':self.start,
                        'nn_time':self.nn_time,
                        'test_point_vels':self.test_point_vels,
                        'test_point_cposes':self.test_point_cposes},
                        str(self.i))    

if __name__ == '__main__':
    rospy.init_node("pytorch_test", anonymous=True)
    run_name = stream_tee.generate_timestamp()
    dev = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
    model = MyModel(dev).to(dev)
    model.cuda()
    data_dir = '/home/robot/workspaces/ur5_mpc_vrep/weights'
    os.chdir(data_dir)
    model.load_state_dict(torch.load('model_20211014_094102.pth'))
    env = ENV(model,run_name)
    t = time.time()
    env.reset()
    i = 0
    rate = rospy.Rate(20) #hz
    while not rospy.is_shutdown():
        done = env.done()
        if done==True:
            elapsed = time.time() - t
            print("Episode ", i, ' time = ', elapsed)
            t = time.time()
            i+=1
            print("Episode", i, " is started")
            env.reset()
            t = time.time()
        else:
            env.step()
        rate.sleep()

    
        
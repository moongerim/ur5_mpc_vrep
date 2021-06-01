#!/usr/bin/env python3
import rospy
from std_msgs.msg import Float64MultiArray, Float64
import numpy as np
import os
from datetime import datetime
import scipy.io
from utils import get_model_dir, write_mat

# Velocity 
move_pub = rospy.Publisher('/MPC_solutions', Float64MultiArray, queue_size=1)
vel_data = Float64MultiArray()
velocity = [0,0,0,0,0,0]

# Reference
ref_pub = rospy.Publisher('/reference', Float64MultiArray, queue_size=1)
reference_data = Float64MultiArray()
reference = []
f_dir = '/home/robot/mpc_vrep/validation_trajectories/'
model_dir = get_model_dir()
run_name = model_dir.split('/')[1]
name = 'ref_25'
dataset = np.loadtxt(f_dir+name+'.csv', delimiter=',')
i=0

# Tool pose
tp = []
dist = 1
base_position = [0, 0, 0.81]

# Init variables for logging
dist_target = []
dist_obst = []
R_tot =[]
R_target_dist =[]
R_action =[]
R_obst =[]
Reference_list = []
Velocity_list = []
Tool_pose_list = []
DRL_costs = []
MPC_costs = []

def talker(data):
    global velocity
    velocity = data.data[6:12]

def reference_talker():
    global dataset, reference, i
    reference = dataset[i, 0:3]
    print(i, reference)
    i+=1


def reward(d_target, d_obst, u):
    # Huber loss
    if d_target <= 0.1:
        r_target_dist = -(0.5 * (d_target ** 2))
    else:
        r_target_dist = -(0.1 * d_target - 0.5 * (0.1 ** 2))
    r_target_dist *= 1000
    r_target_dist_quadratic=1000*(-(0.5 * (d_target ** 2)))
    # Compute action cost
    r_action = - (np.linalg.norm(u) ** 2)
    r_action *= 200

    # Compute obstacle distance
    r_obst = -(0.1 / (d_obst + 0.1)) ** 8
    r_obst *= 60
    r_tot = r_target_dist + r_action + r_obst
    return r_tot, r_target_dist, r_action, r_obst, r_target_dist_quadratic

def tp_talker(data):
    global tp
    tp = data.data[0:3]
    tp = np.array(tp)

def dist_talker(data):
    global dist
    dist = data.data
    print(dist)

def main():
    global velocity, reference, tp, i, base_position, dist, dist_target, dist_obst, R_tot, R_target_dist, R_action, R_obst, Reference_list, Velocity_list, Tool_pose_list, DRL_costs, MPC_costs
    rospy.init_node("data_logging", anonymous=True)

    rospy.Subscriber("/Solutions", Float64MultiArray, talker)
    rospy.Subscriber("/tp", Float64MultiArray, tp_talker)
    rospy.Subscriber("/dist", Float64, dist_talker)
    r = rospy.Rate(20)
    while not rospy.is_shutdown():
        reference_talker()
        reference_data.data = reference
        ref_pub.publish(reference_data) 
        # rospy.loginfo(reference)
        # rospy.loginfo(velocity)
        
        vel_data.data = velocity
        move_pub.publish(vel_data)

        # Cost calculation:
        ee_pos = tp + base_position
        u = velocity
        target_pos = reference + base_position

        # log
        d_target = np.linalg.norm(ee_pos - target_pos)
        d_obst = dist
        r_tot, r_target_dist, r_action, r_obst, r_target_dist_quadratic = reward(d_target, d_obst, u)
        drl_cost = r_target_dist + r_action
        mpc_cost = r_target_dist_quadratic + r_action

        dist_target.append(d_target)
        dist_obst.append(d_obst)
        R_tot.append(r_tot)
        R_target_dist.append(r_target_dist)
        R_action.append(r_action)
        R_obst.append(r_obst)
        Reference_list.append(reference)
        Velocity_list.append(velocity)
        Tool_pose_list.append(tp)
        DRL_costs.append(drl_cost)
        MPC_costs.append(mpc_cost)
        if i==800:
            write_mat('./log/' + run_name, {'ee_dist_mpc': dist_target, 'obst_avoidance_mpc': dist_obst, 'r_tot_mpc': R_tot,
                                'r_target_dist_mpc': R_target_dist,
                                'r_action_mpc': R_action, 'r_obst_mpc': R_obst, 'reference': Reference_list, 
                                'velocity': Velocity_list, 'tool_pose:': Tool_pose_list, 'DRL_cost': DRL_costs, 'MPC_cost': MPC_costs}, name)
        r.sleep()
    rospy.spin()
    print("exit")
    
if __name__ == '__main__': main()

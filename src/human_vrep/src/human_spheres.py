#!/usr/bin/env python
import rospy
import numpy as np
import time
import pandas as pd
import os
import csv
from std_msgs.msg import Float64MultiArray
import math
pos = '/home/robot/workspaces/ur5_mpc_vrep/dataframeB.csv'
# pos = '/home/robot/workspaces/ur5_mpc_vrep/Participant_909_Setup_A_Seq_1_Trial_1.xsens.bvh.csv'

pos = pd.read_csv(pos, quoting=csv.QUOTE_NONNUMERIC)
pos = pos.to_numpy()

human_spheres = rospy.Publisher('/Obstacle/human_spheres', Float64MultiArray, queue_size=1)

start_time = 0
      

def main():
    global pos
    rospy.init_node('human_control', anonymous=True)
    i=0
    while not rospy.is_shutdown():
        point_array = [0]*42
        
        for a in range(14):
            point_array[3*a] = (pos[i][3*a])/1000+1.5
            point_array[3*a+1] = (pos[i][3*a+1])/1000+1.5
            point_array[3*a+2] = (pos[i][3*a+2])/1000
            # point_array[3*a] = (pos[i][3*a])+2
            # point_array[3*a+1] = (pos[i][3*a+1])+2
            # point_array[3*a+2] = (pos[i][3*a+2])
        obstacle_data = Float64MultiArray()
        obstacle_data.data = point_array
        human_spheres.publish(obstacle_data)
        # print(point_array)
        time.sleep(0.01)
        i+=1
    rospy.spin()
    print("exit")    

if __name__ == '__main__': main()

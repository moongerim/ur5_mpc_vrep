#!/usr/bin/env python
import rospy
import numpy as np
import time
import pandas as pd
import os
import csv
from std_msgs.msg import Float64MultiArray
import math
pos = '/home/robot/mpc_vrep/dataframeB.csv'
pos = pd.read_csv(pos, quoting=csv.QUOTE_NONNUMERIC)
pos = pos.to_numpy()

human_spheres = rospy.Publisher('/human_spheres', Float64MultiArray, queue_size=1)

sphere_radiuses = [0.5510,0.6010,0.5010,0.5010,0.5010,0.5010,0.5010,0.5010,0.4510,0.4510,0.4810,0.4810,0.5510,0.6010]
start_time = 0

# def callback():
#     global pos, sphere_radiuses
#     for i in range (10000):
#         # send poses to vrep spheres:
#         point_array = [0]*42
#         for a in range(14):
#             point_array[3*a] = (pos[i][3*a])/1000
#             point_array[3*a+1] = (pos[i][3*a+1])/1000
#             point_array[3*a+2] = (pos[i][3*a+2])/1000
#         obstacle_data = Float64MultiArray()
#         obstacle_data.data = point_array
#         human_spheres.publish(obstacle_data)
#         print(point_array)
#         time.sleep(0.01)
        
#     print("The end of a data")           

def main():
    global pos, sphere_radiuses
    rospy.init_node('human_control', anonymous=True)
    i=0
    while not rospy.is_shutdown():
        point_array = [0]*42
        for a in range(14):
            point_array[3*a] = (pos[i][3*a])/1000
            point_array[3*a+1] = (pos[i][3*a+1])/1000
            point_array[3*a+2] = (pos[i][3*a+2])/1000
        obstacle_data = Float64MultiArray()
        obstacle_data.data = point_array
        human_spheres.publish(obstacle_data)
        print(point_array)
        time.sleep(0.01)
        i+=1
    rospy.spin()
    print("exit")    

if __name__ == '__main__': main()

## How to control the UR5 robot on VREP using MPC
roscore
coppeliasim, open the correct scene: coppelia /home/robot/workspaces/ur5_mpc_vrep/scene/UR5_pHRI_3.ttt -s
rosrun human_vrep human_sim
rosrun human_vrep human_spheres.py
rosrun mpc_low move_low
rosrun mpc_high move_high


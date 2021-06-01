## How to control the UR5 robot on VREP using MPC
roscore
coppeliasim, open the correct scene
rosrun human_vrep human_sim
rosrun human_vrep human_spheres.py
rosrun mpc_high move_high
rosrun mpc_low move_low
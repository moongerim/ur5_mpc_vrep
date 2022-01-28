## How to control the UR5 robot on VREP using MPC
roscore
coppeliasim, open the correct scene: coppelia /home/robot/workspaces/ur5_mpc_vrep/scene/UR5_pHRI_7.ttt -s
rosrun human_vrep human_sim
rosrun human_vrep human_spheres.py
rosrun mpc_low move_low
rosrun mpc_high move_high

## How to train?
source ./venv/bin/activate
cd workspaces/ur5_mpc_vrep/src/nn_train
./pytorch_train.py

## Testing 
roscore
coppeliasim, open the correct scene: coppelia /home/robot/workspaces/ur5_mpc_vrep/scene/UR5_pHRI_7_test.ttt -s
open /home/robot/workspaces/ur5_mpc_vrep/human_vrep/human_spheres.py file, and comment line below
`msg = rospy.wait_for_message("/HighController/start", Int32)`
rosrun human_vrep human_spheres.py
source ./venv/bin/activate
cd workspaces/ur5_mpc_vrep/src/nn_train
./pytorch_test.py
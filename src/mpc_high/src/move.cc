#include "gen3_mpc_joint/move.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <eigen3/Eigen/Dense>
#include <math.h>
#include "std_msgs/Int32.h"
#include <rosgraph_msgs/Clock.h>

using namespace std;

// ofstream myfile;
// ofstream goalfile;
ofstream myperffile;

// double p_control = 1.0000;

double vrep_time;
// int gripper = 0;
int rti_num =5;
MPC_solver myMpcSolver(rti_num);

float dist_v(Eigen::Vector3f v, Eigen::Vector3f w){
	return (v-w).norm();
}

// cartesian positions of the 10 test points:
Eigen::MatrixXf get_cpose(float theta_1, float theta_2, float theta_3, float theta_4, float theta_5, float theta_6){
  Eigen::MatrixXf mat(3,11);
  mat <<0, 1*(0.4*sin(theta_1)-0.425*cos(theta_1)*cos(theta_2))/3,  2*(0.2*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2))/3,   0.11*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2), -0.425*cos(theta_1)*cos(theta_2)+(-(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_1)*cos(theta_2)))/4, -0.425*cos(theta_1)*cos(theta_2)+2*(-(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_1)*cos(theta_2)))/4, -0.425*cos(theta_1)*cos(theta_2)+3*(-(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_1)*cos(theta_2)))/4, -(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000, 0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3), 0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.09465*cos(theta_4)*(cos(theta_1)*cos(theta_2)*sin(theta_3) + cos(theta_1)*cos(theta_3)*sin(theta_2)) - 0.09465*sin(theta_4)*(cos(theta_1)*sin(theta_2)*sin(theta_3) - 1.0*cos(theta_1)*cos(theta_2)*cos(theta_3)) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3), 0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.0823*cos(theta_5)*sin(theta_1) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.0823*cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*sin(theta_5) + 0.09465*cos(theta_2 + theta_3)*cos(theta_1)*sin(theta_4) + 0.09465*sin(theta_2 + theta_3)*cos(theta_1)*cos(theta_4) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3),
        0, 1*(-0.4*cos(theta_1)-0.425*cos(theta_2)*sin(theta_1))/3, 2*(-0.2*cos(theta_1) - 0.425*cos(theta_2)*sin(theta_1))/3, -0.11*cos(theta_1) - 0.425*cos(theta_2)*sin(theta_1), -0.425*cos(theta_2)*sin(theta_1)+(-(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_2)*sin(theta_1)))/4, -0.425*cos(theta_2)*sin(theta_1)+2*(-(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_2)*sin(theta_1)))/4, -0.425*cos(theta_2)*sin(theta_1)+3*(-(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_2)*sin(theta_1)))/4, -(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000, 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) - 0.425*cos(theta_2)*sin(theta_1) - 0.10915*cos(theta_1) - 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1), 0.09465*cos(theta_4)*(cos(theta_2)*sin(theta_1)*sin(theta_3) + cos(theta_3)*sin(theta_1)*sin(theta_2)) - 0.425*cos(theta_2)*sin(theta_1) - 0.10915*cos(theta_1) - 0.09465*sin(theta_4)*(sin(theta_1)*sin(theta_2)*sin(theta_3) - 1.0*cos(theta_2)*cos(theta_3)*sin(theta_1)) + 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) - 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1), 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) - 0.0823*cos(theta_1)*cos(theta_5) - 0.425*cos(theta_2)*sin(theta_1) - 0.10915*cos(theta_1) - 0.0823*cos(theta_2 + theta_3 + theta_4)*sin(theta_1)*sin(theta_5) + 0.09465*cos(theta_2 + theta_3)*sin(theta_1)*sin(theta_4) + 0.09465*sin(theta_2 + theta_3)*cos(theta_4)*sin(theta_1) - 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1),
        0, 0.08945+(0.08945-0.425*sin(theta_2)-0.08945)/3,          0.08945+2*(0.08945-0.425*sin(theta_2)-0.08945)/3, 0.08945  -0.425*sin(theta_2),                                  0.08945 - 0.425*sin(theta_2)+(0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3)-(0.08945 - 0.425*sin(theta_2)))/4,                       0.08945 - 0.425*sin(theta_2)+2*(0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3)-(0.08945 - 0.425*sin(theta_2)))/4,                      0.08945 - 0.425*sin(theta_2)+3*(0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3)-(0.08945 - 0.425*sin(theta_2)))/4,                      0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3),             0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3),                                                                                            0.08945 - 0.39225*sin(theta_2 + theta_3) - 0.425*sin(theta_2) - 0.09465*cos(theta_2 + theta_3 + theta_4),                                                                                                                                                                                                                                                                       0.09465*sin(theta_2 + theta_3)*sin(theta_4) - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3) - sin(theta_5)*(0.0823*cos(theta_2 + theta_3)*sin(theta_4) + 0.0823*sin(theta_2 + theta_3)*cos(theta_4)) - 0.09465*cos(theta_2 + theta_3)*cos(theta_4) + 0.08945;
 return mat;
}

// Introduce class to make safer goal change
class GoalFollower 
{ 
  // Access specifier 
  public: 
  double robot_spheres[10] = {0.1, 0.1, 0.15, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1};

  double human_sphere[56]= {10.0517,   0.5220,   1.0895,   0.1500,
                              10.0658,   0.4526,   0.8624,   0.2500,
                              10.0844,   0.7044,   0.9207,   0.1500,
                              10.2083,   0.3075,   1.0208,   0.1500,
                              10.0556,   0.6289,   0.7595,   0.1500,
                              10.2024,   0.2732,   0.8478,   0.1500,
                              10.0267,   0.5535,   0.5983,   0.1500,
                              10.1965,   0.2389,   0.6749,   0.1500,
                             -10.0208,   0.3964,   0.5857,   0.1000,
                              10.0546,   0.2951,   0.6132,   0.1000,
                             -10.1062,   0.2444,   0.5897,   0.1300,
                             -10.0998,   0.3062,   0.5387,   0.1300,
                              10.1908,   0.5290,   1.0016,   0.2000,
                              10.2106,   0.4602,   0.6915,   0.2500};

  double goal[6] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
  double comand_vel[6] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
  double joint_position[6] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};

  void change_goal(double new_goal[],int n) 
  { 
    for (int i=0; i<n; i++) goal[i] = new_goal[i];
    ROS_INFO("Goal set to: %.3f, %.3f, %.3f, %.3f, %.3f, %.3f", 
    goal[0], goal[1], goal[2], goal[3], goal[4], goal[5]); 
  }

  void change_obstacles_msg(const std_msgs::Float64MultiArray obstacle_data) 
  { 
    for (int i=0; i<56; i++)human_sphere[i] = obstacle_data.data[i];
  }

  void change_states_msg(const std_msgs::Float64MultiArray::ConstPtr& msg) 
  { 
    for (int i=0; i<6; i++) joint_position[i] = msg->data[i];
  }

}; 

void vrep_time_msg(const std_msgs::Float64& msg){
    vrep_time = msg.data;
    return;
}

int main(int argc, char **argv)
{
  myperffile.open("data_perf.csv", ios::out); 
  ros::init(argc, argv, "joint_controller_high");

  ros::NodeHandle n;
  ROS_INFO("Node Started");
  //--------------------------------
  GoalFollower my_follower;
  ros::Publisher chatter_pub = n.advertise<std_msgs::Float64MultiArray>("/HighController/mpc_high_positions", 1);
  ros::Publisher PauseHigh = n.advertise<std_msgs::Int32>("/HighController/pause", 1);
  ros::Publisher StartHigh = n.advertise<std_msgs::Int32>("/HighController/start", 1);
  while (PauseHigh.getNumSubscribers() < 1);
  std_msgs::Int32 msg;
  msg.data = 0;
  PauseHigh.publish(msg);

  ROS_INFO("Goal default to: %.3f, %.3f, %.3f, %.3f, %.3f, %.3f", 
	          my_follower.goal[0], my_follower.goal[1], my_follower.goal[2],my_follower.goal[3], my_follower.goal[4], my_follower.goal[5]);
  // goal in joint space
  // define key trajectory points
  double read_goal[2][6] = { 2.8, -2.2, -1.0, -0.6, 1.4, 1.1,
                              0.0, -2.3, -0.9, -0.5, 1.3, 1.0};

  // double read_goal[2][6] = { 2.8, -2.5, -0.9, -0.6, 1.3, 0.0,
  //                             0.0, -2.4, -0.8, -0.5, 1.4, 0.1};

  // double read_goal[2][6] = { 0.1051, -2.4726, -0.8902, -0.8021, 1.5812, 1.0324,
  //                            2.8589, -2.5701, -0.7931, -0.7024, 1.4821, 1.1125};

  double static_goal[6] = {read_goal[1][0], read_goal[1][1], read_goal[1][2], read_goal[1][3], read_goal[1][4], read_goal[1][5]};

  ros::Subscriber human_status = n.subscribe("/Obstacle/mpc_high_spheres", 1, &GoalFollower::change_obstacles_msg, &my_follower);
  ros::Subscriber joint_status = n.subscribe("/CoppeliaSim/joint_states_high", 1, &GoalFollower::change_states_msg, &my_follower);
  ros::Subscriber vrep_time_listener = n.subscribe("/CoppeliaSim/clock", 1, vrep_time_msg);
  
  std_msgs::Float64MultiArray joint_vel_values;

  // Big loop
  double loop_duration = 149.366667; // no pauses
  double start_motion_time = 4.00;
  double stop_human_time = (loop_duration*2);
  
  for (int big_loop_iteration=0; big_loop_iteration<3; big_loop_iteration++) {
    start_motion_time = big_loop_iteration*0.5 + 4.0;
    stop_human_time = big_loop_iteration*(loop_duration*2) + (loop_duration*2);
    //** Low level Loop      
    int row_index = 0;
    double loop_start_time = 0;
	  
	  ros::Rate goto_loop(20);
	  // ros::Duration(0.50).sleep();
	  while (vrep_time < start_motion_time + stop_human_time - (loop_duration*2)){
      printf("vrep time=%f, start_motion_time = %f, stop_human_time = %f\n", vrep_time, start_motion_time, stop_human_time);
      joint_vel_values.data.clear();
      for (int i = 0; i < 12; i++) joint_vel_values.data.push_back(0.0);
      for (int i = 0; i < 6; i++) joint_vel_values.data.push_back(static_goal[i]);
      for (int i = 0; i < 12; i++) joint_vel_values.data.push_back(0.0);
      joint_vel_values.data.push_back(10.0);
      chatter_pub.publish(joint_vel_values);
      ros::spinOnce();
      goto_loop.sleep();
	  };

	  int task = 0;
    int task_started = 0;
	  ros::Rate loop_rate(4); 

    std_msgs::Int32 msg_start;
    msg_start.data = 100;
    StartHigh.publish(msg_start);

	  while (ros::ok())
	  {
      // change to arrive check. add ~1.5s before next entrance
	    if (row_index==0) {
        if (task_started == 0) {
			    task = task + 1;
			    loop_start_time = vrep_time;
		    }
        task_started = 1;
      }

      // Goal reference position
      double currentState_targetValue[68];
      for (int i = 0; i < 6; ++i) currentState_targetValue[i] = my_follower.joint_position[i];
      for (int i = 0; i < 6; ++i) currentState_targetValue[i+6] = read_goal[row_index][i];
      for (int i = 0; i < 56; ++i) currentState_targetValue[i+12] = my_follower.human_sphere[i];

      // for (int i = 0; i < 68; ++i) printf("CRSV %i = %f\n", i, currentState_targetValue[i]);
      
      ROS_INFO("Goal set to: %.3f, %.3f, %.3f, %.3f, %.3f, %.3f", 
	    currentState_targetValue[6], currentState_targetValue[7], currentState_targetValue[8],
      currentState_targetValue[9], currentState_targetValue[10], currentState_targetValue[11]); 
      
      double cgoal[3];
      Eigen::MatrixXf cgoal_mat = get_cpose(read_goal[row_index][0], read_goal[row_index][1], 
		                                        read_goal[row_index][2], read_goal[row_index][3], 
                                            read_goal[row_index][4], read_goal[row_index][5]);
      cgoal[0] = cgoal_mat.coeff(0, 10);
      cgoal[1] = cgoal_mat.coeff(1, 10);
      cgoal[2] = cgoal_mat.coeff(2, 10);
      ROS_INFO("cartesian Goal set to: %.3f, %.3f, %.3f", cgoal[0], cgoal[1], cgoal[2]); 
      // end Cartesian Goal
 
      msg.data = 1;
      // PauseHigh.publish(msg);
      double* solutions=myMpcSolver.solve_mpc(currentState_targetValue, cgoal);

      msg.data = 0;
      // PauseHigh.publish(msg);
      
      //*********************** Apply control ********************************

      float max_diff = 0;
      for (int i = 0; i < 6; ++i) {
        if (abs(currentState_targetValue[i] - currentState_targetValue[i+6]) > max_diff) {
          max_diff = abs(currentState_targetValue[i] - currentState_targetValue[i+6]); 
        }
      }
      printf("max value %f, inv_marker = %f\n",max_diff,solutions[14]);
      if (max_diff < 0.01) {
        row_index = (row_index+1)%2;
      }

      //******************* get_min_dist **********************
	    float local_val = 10000;
	    double smallest_dist = 10000;
	    double min_dist[10] = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
		  Eigen::MatrixXf mat2 = get_cpose(my_follower.joint_position[0], my_follower.joint_position[1], 
                                       my_follower.joint_position[2], my_follower.joint_position[3], 
                                       my_follower.joint_position[4], my_follower.joint_position[5]);
	    for (int j = 0; j<10; j++){
        Eigen::Vector3f w;
        w = mat2.col(j+1).transpose();
        for (int i = 0; i < 14; i++) {
		      Eigen::Vector3f p(my_follower.human_sphere[i*4+0],my_follower.human_sphere[i*4+1],my_follower.human_sphere[i*4+2]);
		      local_val = dist_v(w, p)-my_follower.robot_spheres[j]-my_follower.human_sphere[i*4+3];
		      if (min_dist[j]>local_val) min_dist[j] = local_val;
		    }
		    if (smallest_dist > min_dist[j]) smallest_dist = min_dist[j];
	    }

      joint_vel_values.data.clear();
      for (int i = 0; i < 12; i++) joint_vel_values.data.push_back(solutions[i]);
      for (int i = 0; i < 12; i++)  joint_vel_values.data.push_back(currentState_targetValue[i]);
      for (int i = 0; i < 3; i++)  joint_vel_values.data.push_back(cgoal[i]);
      for (int i = 0; i < 3; i++) joint_vel_values.data.push_back(solutions[12+i]);
      joint_vel_values.data.push_back(max_diff);
      chatter_pub.publish(joint_vel_values);
      ros::spinOnce();
      loop_rate.sleep();
	  }
  }
  myperffile.close();
  return 0;
}


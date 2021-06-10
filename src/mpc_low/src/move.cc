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

ofstream myfile;
int rti_num = 20;

MPC_solver myMpcSolver(rti_num);
double gazebo_time;
int gripper = 0;

float dist_v(Eigen::Vector3f v, Eigen::Vector3f w){
	return (v-w).norm();
}
double d_1 =  0.08920;           // Offset of link 1
double d_4 =  0.10900;           // Offset of link 4
double d_5 =  0.09300;           // Offset of link 5
double d_6 =  0.08200;           // Offset of link 6
double a_2 = -0.42500;           // Length of link 2
double a_3 = -0.39243;			 // Length of link 3

// cartesian positions of the 8 test points:
Eigen::MatrixXf get_cpose(float theta_1, float theta_2, float theta_3, float theta_4, float theta_5, float theta_6){
  Eigen::MatrixXf mat(3,9);
  mat <<0, 0.11*sin(theta_1) + a_2*cos(theta_1)*cos(theta_2), (cos(theta_1)*(a_3*cos(theta_2 + theta_3) + 4.0*a_2*cos(theta_2)))/4, (cos(theta_1)*(a_3*cos(theta_2 + theta_3) + 2.0*a_2*cos(theta_2)))/2, (cos(theta_1)*(3.0*a_3*cos(theta_2 + theta_3) + 4.0*a_2*cos(theta_2)))/4, cos(theta_1)*(a_3*cos(theta_2 + theta_3) + a_2*cos(theta_2)), d_4*sin(theta_1) + a_2*cos(theta_1)*cos(theta_2) + a_3*cos(theta_1)*cos(theta_2)*cos(theta_3) - 1.0*a_3*cos(theta_1)*sin(theta_2)*sin(theta_3),      d_4*sin(theta_1) + d_5*(cos(theta_4)*(cos(theta_1)*cos(theta_2)*sin(theta_3) + cos(theta_1)*cos(theta_3)*sin(theta_2)) - 1.0*sin(theta_4)*(cos(theta_1)*sin(theta_2)*sin(theta_3) - 1.0*cos(theta_1)*cos(theta_2)*cos(theta_3))) + a_2*cos(theta_1)*cos(theta_2) + a_3*cos(theta_1)*cos(theta_2)*cos(theta_3) - 1.0*a_3*cos(theta_1)*sin(theta_2)*sin(theta_3),     0.11*cos(theta_5)*sin(theta_1) + d_6*(cos(theta_5)*sin(theta_1) - cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*sin(theta_5)) + d_4*sin(theta_1) - 0.11*cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*sin(theta_5) + a_2*cos(theta_1)*cos(theta_2) + d_5*sin(theta_2 + theta_3 + theta_4)*cos(theta_1) + a_3*cos(theta_1)*cos(theta_2)*cos(theta_3) - 1.0*a_3*cos(theta_1)*sin(theta_2)*sin(theta_3),
        0, a_2*cos(theta_2)*sin(theta_1) - 0.11*cos(theta_1), (sin(theta_1)*(a_3*cos(theta_2 + theta_3) + 4.0*a_2*cos(theta_2)))/4, (sin(theta_1)*(a_3*cos(theta_2 + theta_3) + 2.0*a_2*cos(theta_2)))/2, (sin(theta_1)*(3.0*a_3*cos(theta_2 + theta_3) + 4.0*a_2*cos(theta_2)))/4, sin(theta_1)*(a_3*cos(theta_2 + theta_3) + a_2*cos(theta_2)), a_2*cos(theta_2)*sin(theta_1) - 1.0*d_4*cos(theta_1) + a_3*cos(theta_2)*cos(theta_3)*sin(theta_1) - 1.0*a_3*sin(theta_1)*sin(theta_2)*sin(theta_3),  d_5*(cos(theta_4)*(cos(theta_2)*sin(theta_1)*sin(theta_3) + cos(theta_3)*sin(theta_1)*sin(theta_2)) - 1.0*sin(theta_4)*(sin(theta_1)*sin(theta_2)*sin(theta_3) - 1.0*cos(theta_2)*cos(theta_3)*sin(theta_1))) - 1.0*d_4*cos(theta_1) + a_2*cos(theta_2)*sin(theta_1) + a_3*cos(theta_2)*cos(theta_3)*sin(theta_1) - 1.0*a_3*sin(theta_1)*sin(theta_2)*sin(theta_3), a_2*cos(theta_2)*sin(theta_1) - 1.0*d_6*(cos(theta_1)*cos(theta_5) + cos(theta_2 + theta_3 + theta_4)*sin(theta_1)*sin(theta_5)) - 1.0*d_4*cos(theta_1) - 0.11*cos(theta_2 + theta_3 + theta_4)*sin(theta_1)*sin(theta_5) - 0.11*cos(theta_1)*cos(theta_5) + d_5*sin(theta_2 + theta_3 + theta_4)*sin(theta_1) + a_3*cos(theta_2)*cos(theta_3)*sin(theta_1) - 1.0*a_3*sin(theta_1)*sin(theta_2)*sin(theta_3),
        0, d_1 + a_2*sin(theta_2),                            d_1 + 0.25*a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2),             d_1 + 0.5*a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2),              d_1 + 0.75*a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2),                 d_1 + a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2),          d_1 + a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2),                                                                                                 d_1 + a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2) - 1.0*d_5*cos(theta_2 + theta_3 + theta_4),                                                                                                                                                                                                                                                                     d_1 - sin(theta_5)*(0.11*cos(theta_2 + theta_3)*sin(theta_4) + 0.11*sin(theta_2 + theta_3)*cos(theta_4)) + a_3*sin(theta_2 + theta_3) + 1.0*d_5*(1.0*sin(theta_2 + theta_3)*sin(theta_4) - 1.0*cos(theta_2 + theta_3)*cos(theta_4)) + a_2*sin(theta_2) - 1.0*d_6*sin(theta_5)*(1.0*cos(theta_2 + theta_3)*sin(theta_4) + sin(theta_2 + theta_3)*cos(theta_4));
  return mat;
}

Eigen::MatrixXf get_velocity(float theta_1, float theta_2, float theta_3, float theta_4, float theta_5, float theta_6,
float dq1, float dq2, float dq3, float dq4, float dq5, float dq6){
  Eigen::MatrixXf mat(24,6);
  mat << 0.11*cos(theta_1) - 1.0*a_2*cos(theta_2)*sin(theta_1), -1.0*a_2*cos(theta_1)*sin(theta_2), 0, 0, 0, 0,
  0.11*sin(theta_1) + a_2*cos(theta_1)*cos(theta_2), -1.0*a_2*sin(theta_1)*sin(theta_2), 0, 0, 0, 0,
  0, a_2*cos(theta_2), 0, 0, 0, 0,
  -0.25*sin(theta_1)*(a_3*cos(theta_2 + theta_3) + 4.0*a_2*cos(theta_2)), -0.25*cos(theta_1)*(a_3*sin(theta_2 + theta_3) + 4.0*a_2*sin(theta_2)), -0.25*a_3*sin(theta_2 + theta_3)*cos(theta_1), 0, 0, 0,
  0.25*cos(theta_1)*(a_3*cos(theta_2 + theta_3) + 4.0*a_2*cos(theta_2)), -0.25*sin(theta_1)*(a_3*sin(theta_2 + theta_3) + 4.0*a_2*sin(theta_2)), -0.25*a_3*sin(theta_2 + theta_3)*sin(theta_1), 0, 0, 0,
  0, 0.25*a_3*cos(theta_2 + theta_3) + a_2*cos(theta_2), 0.25*a_3*cos(theta_2 + theta_3), 0, 0, 0,
  -0.5*sin(theta_1)*(a_3*cos(theta_2 + theta_3) + 2.0*a_2*cos(theta_2)), -0.5*cos(theta_1)*(a_3*sin(theta_2 + theta_3) + 2.0*a_2*sin(theta_2)), -0.5*a_3*sin(theta_2 + theta_3)*cos(theta_1), 0, 0, 0,
  0.5*cos(theta_1)*(a_3*cos(theta_2 + theta_3) + 2.0*a_2*cos(theta_2)), -0.5*sin(theta_1)*(a_3*sin(theta_2 + theta_3) + 2.0*a_2*sin(theta_2)), -0.5*a_3*sin(theta_2 + theta_3)*sin(theta_1), 0, 0, 0,
  0, 0.5*a_3*cos(theta_2 + theta_3) + a_2*cos(theta_2), 0.5*a_3*cos(theta_2 + theta_3), 0, 0, 0,
  -0.25*sin(theta_1)*(3.0*a_3*cos(theta_2 + theta_3) + 4.0*a_2*cos(theta_2)), -0.25*cos(theta_1)*(3.0*a_3*sin(theta_2 + theta_3) + 4.0*a_2*sin(theta_2)), -0.75*a_3*sin(theta_2 + theta_3)*cos(theta_1), 0, 0, 0,
  0.25*cos(theta_1)*(3.0*a_3*cos(theta_2 + theta_3) + 4.0*a_2*cos(theta_2)), -0.25*sin(theta_1)*(3.0*a_3*sin(theta_2 + theta_3) + 4.0*a_2*sin(theta_2)), -0.75*a_3*sin(theta_2 + theta_3)*sin(theta_1), 0, 0, 0,
  0, 0.75*a_3*cos(theta_2 + theta_3) + a_2*cos(theta_2), 0.75*a_3*cos(theta_2 + theta_3), 0, 0, 0,
  -1.0*sin(theta_1)*(a_3*cos(theta_2 + theta_3) + a_2*cos(theta_2)), -1.0*cos(theta_1)*(a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2)), -1.0*a_3*sin(theta_2 + theta_3)*cos(theta_1), 0, 0, 0,
  cos(theta_1)*(a_3*cos(theta_2 + theta_3) + a_2*cos(theta_2)), -1.0*sin(theta_1)*(a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2)), -1.0*a_3*sin(theta_2 + theta_3)*sin(theta_1), 0, 0, 0,
  0, a_3*cos(theta_2 + theta_3) + a_2*cos(theta_2), a_3*cos(theta_2 + theta_3), 0, 0, 0,
  d_4*cos(theta_1) - 1.0*a_2*cos(theta_2)*sin(theta_1) - 1.0*a_3*cos(theta_2)*cos(theta_3)*sin(theta_1) + a_3*sin(theta_1)*sin(theta_2)*sin(theta_3), -1.0*cos(theta_1)*(a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2)), -1.0*a_3*sin(theta_2 + theta_3)*cos(theta_1), 0, 0, 0,
  d_4*sin(theta_1) + a_2*cos(theta_1)*cos(theta_2) + a_3*cos(theta_1)*cos(theta_2)*cos(theta_3) - 1.0*a_3*cos(theta_1)*sin(theta_2)*sin(theta_3), -1.0*sin(theta_1)*(a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2)), -1.0*a_3*sin(theta_2 + theta_3)*sin(theta_1), 0, 0, 0,
  0, a_3*cos(theta_2 + theta_3) + a_2*cos(theta_2), a_3*cos(theta_2 + theta_3), 0, 0, 0,
  d_4*cos(theta_1) - 1.0*d_5*(cos(theta_4)*(cos(theta_2)*sin(theta_1)*sin(theta_3) + cos(theta_3)*sin(theta_1)*sin(theta_2)) - 1.0*sin(theta_4)*(sin(theta_1)*sin(theta_2)*sin(theta_3) - 1.0*cos(theta_2)*cos(theta_3)*sin(theta_1))) - 1.0*a_2*cos(theta_2)*sin(theta_1) - 1.0*a_3*cos(theta_2)*cos(theta_3)*sin(theta_1) + 1.0*a_3*sin(theta_1)*sin(theta_2)*sin(theta_3), -1.0*cos(theta_1)*(a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2) - 1.0*d_5*cos(theta_2 + theta_3 + theta_4)), -1.0*cos(theta_1)*(a_3*sin(theta_2 + theta_3) - 1.0*d_5*cos(theta_2 + theta_3 + theta_4)), d_5*cos(theta_2 + theta_3 + theta_4)*cos(theta_1), 0, 0,
  1.0*d_4*sin(theta_1) + d_5*(cos(theta_4)*(cos(theta_1)*cos(theta_2)*sin(theta_3) + cos(theta_1)*cos(theta_3)*sin(theta_2)) - 1.0*sin(theta_4)*(cos(theta_1)*sin(theta_2)*sin(theta_3) - 1.0*cos(theta_1)*cos(theta_2)*cos(theta_3))) + a_2*cos(theta_1)*cos(theta_2) + a_3*cos(theta_1)*cos(theta_2)*cos(theta_3) - 1.0*a_3*cos(theta_1)*sin(theta_2)*sin(theta_3), -1.0*sin(theta_1)*(a_3*sin(theta_2 + theta_3) + a_2*sin(theta_2) - 1.0*d_5*cos(theta_2 + theta_3 + theta_4)), -1.0*sin(theta_1)*(a_3*sin(theta_2 + theta_3) - 1.0*d_5*cos(theta_2 + theta_3 + theta_4)), d_5*cos(theta_2 + theta_3 + theta_4)*sin(theta_1), 0, 0,
  0, a_3*cos(theta_2 + theta_3) + a_2*cos(theta_2) + d_5*sin(theta_2 + theta_3 + theta_4), a_3*cos(theta_2 + theta_3) + d_5*sin(theta_2 + theta_3 + theta_4), d_5*sin(theta_2 + theta_3 + theta_4), 0, 0,
  0.11*cos(theta_1)*cos(theta_5) + d_6*(cos(theta_1)*cos(theta_5) + cos(theta_2 + theta_3 + theta_4)*sin(theta_1)*sin(theta_5)) + d_4*cos(theta_1) + 0.11*cos(theta_2 + theta_3 + theta_4)*sin(theta_1)*sin(theta_5) - 1.0*a_2*cos(theta_2)*sin(theta_1) - 1.0*d_5*sin(theta_2 + theta_3 + theta_4)*sin(theta_1) - 1.0*a_3*cos(theta_2)*cos(theta_3)*sin(theta_1) + 1.0*a_3*sin(theta_1)*sin(theta_2)*sin(theta_3), 0.01*cos(theta_1)*(11.0*sin(theta_2 + theta_3 + theta_4)*sin(theta_5) - 100.0*a_2*sin(theta_2) + 100.0*d_5*cos(theta_2 + theta_3 + theta_4) - 100.0*a_3*cos(theta_2)*sin(theta_3) - 100.0*a_3*cos(theta_3)*sin(theta_2) + 100.0*d_6*sin(theta_2 + theta_3 + theta_4)*sin(theta_5)), 0.01*cos(theta_1)*(11.0*sin(theta_2 + theta_3 + theta_4)*sin(theta_5) + 100.0*d_5*cos(theta_2 + theta_3 + theta_4) - 100.0*a_3*cos(theta_2)*sin(theta_3) - 100.0*a_3*cos(theta_3)*sin(theta_2) + 100.0*d_6*sin(theta_2 + theta_3 + theta_4)*sin(theta_5)), 0.01*cos(theta_1)*(11.0*sin(theta_2 + theta_3 + theta_4)*sin(theta_5) + 100.0*d_5*cos(theta_2 + theta_3 + theta_4) + 100.0*d_6*sin(theta_2 + theta_3 + theta_4)*sin(theta_5)), -1.0*(d_6 + 0.11)*(sin(theta_1)*sin(theta_5) + cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*cos(theta_5)), 0,
  0.11*cos(theta_5)*sin(theta_1) + 1.0*d_4*sin(theta_1) + 1.0*d_6*(cos(theta_5)*sin(theta_1) - 1.0*cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*sin(theta_5)) - 0.11*cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*sin(theta_5) + a_2*cos(theta_1)*cos(theta_2) + d_5*sin(theta_2 + theta_3 + theta_4)*cos(theta_1) + a_3*cos(theta_1)*cos(theta_2)*cos(theta_3) - 1.0*a_3*cos(theta_1)*sin(theta_2)*sin(theta_3), 0.01*sin(theta_1)*(11.0*sin(theta_2 + theta_3 + theta_4)*sin(theta_5) - 100.0*a_2*sin(theta_2) + 100.0*d_5*cos(theta_2 + theta_3 + theta_4) - 100.0*a_3*cos(theta_2)*sin(theta_3) - 100.0*a_3*cos(theta_3)*sin(theta_2) + 100.0*d_6*sin(theta_2 + theta_3 + theta_4)*sin(theta_5)), 0.01*sin(theta_1)*(11.0*sin(theta_2 + theta_3 + theta_4)*sin(theta_5) + 100.0*d_5*cos(theta_2 + theta_3 + theta_4) - 100.0*a_3*cos(theta_2)*sin(theta_3) - 100.0*a_3*cos(theta_3)*sin(theta_2) + 100.0*d_6*sin(theta_2 + theta_3 + theta_4)*sin(theta_5)), 0.01*sin(theta_1)*(11.0*sin(theta_2 + theta_3 + theta_4)*sin(theta_5) + 100.0*d_5*cos(theta_2 + theta_3 + theta_4) + 100.0*d_6*sin(theta_2 + theta_3 + theta_4)*sin(theta_5)), (d_6 + 0.11)*(cos(theta_1)*sin(theta_5) - 1.0*cos(theta_2 + theta_3 + theta_4)*cos(theta_5)*sin(theta_1)), 0,
  0, a_3*cos(theta_2 + theta_3) + sin(theta_5)*(0.11*sin(theta_2 + theta_3)*sin(theta_4) - 0.11*cos(theta_2 + theta_3)*cos(theta_4)) + 1.0*d_5*(1.0*cos(theta_2 + theta_3)*sin(theta_4) + 1.0*sin(theta_2 + theta_3)*cos(theta_4)) + a_2*cos(theta_2) + 1.0*d_6*sin(theta_5)*(1.0*sin(theta_2 + theta_3)*sin(theta_4) - 1.0*cos(theta_2 + theta_3)*cos(theta_4)), a_3*cos(theta_2 + theta_3) - 0.11*cos(theta_2 + theta_3 + theta_4)*sin(theta_5) + d_5*sin(theta_2 + theta_3 + theta_4) - 1.0*d_6*cos(theta_2 + theta_3 + theta_4)*sin(theta_5), d_5*sin(theta_2 + theta_3 + theta_4) - 0.11*cos(theta_2 + theta_3 + theta_4)*sin(theta_5) - 1.0*d_6*cos(theta_2 + theta_3 + theta_4)*sin(theta_5), -1.0*sin(theta_2 + theta_3 + theta_4)*cos(theta_5)*(d_6 + 0.11), 0;
  
  Eigen::MatrixXf vec(6,1);
  vec << dq1, dq2, dq3, dq4, dq5, dq6;
	
  return mat*vec;
}
// Introduce class to make safer goal change
class GoalFollower 
{ 
    // Access specifier 
    public: 

    // Data Members 
    ros::Publisher chatter_pub;

    double robot_spheres[8] = {0.29, 0.13, 0.13, 0.13, 0.13, 0.15, 0.12, 0.18};
    double human_sphere[56]= {124.45,   85.11,   1749.08,   0.15,
                              199.27,   83.75,   1461.56,   0.6010,
                              98.34,   -126.49,  1558.72,   0.5010,
                              126.02,   302.08,  1570.41,   0.5010,
                              92.81,   -116.45,  1386.66,   0.5010,
                              117.63,  293.61,   1397.60,   0.5010,
                              87.28,   -106.41,  1214.60,   0.5010,
                              109.24,   285.14,  1224.80,   0.5010,
                              97.63,   -104.64,  1050.28,   0.4510,
                              116.14,   286.97,  1060.32,   0.4510,
                              112.92,   -101.01, 876.64,   0.4810,
                              128.76,   286.75,  886.33,   0.4810,
                              59.36,   89.71,   1600.76,   0.5510,
                              50.81,   98.26,   1291.22,   0.6010};

   double velocity_sphere[56]= {0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0,
                          0.0,   0.0,   0.0,   0.0};

    // CHANGED
    double goal[6] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
    double goal_queue[120] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
                            0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};

    // what comand vel is?
    double comand_vel[6] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
    double joint_position[6] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
    
    // cartesian poses of test points from vrep:
    double ctp_vrep[24] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    // linear velocities of test points from vrep:
    double ctv_vrep[24] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    // human sphere_test points distances:
    double dist_vrep[112] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    double human_vrep[42] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    double joint_speed[6] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
    // Member Functions() 
    void change_obstacles_msg(const std_msgs::Float64MultiArray obstacle_data) 
    { 
      for (int i=0; i<56; i++) human_sphere[i] = obstacle_data.data[i];
    }

    void change_human_speed_msg(const std_msgs::Float64MultiArray velocity_data) 
    { 
      for (int i=0; i<56; i++) velocity_sphere[i] = velocity_data.data[i];
    }

    void change_goal_msg(const std_msgs::Float64MultiArray joint_pose_values) 
    { 
      for (int j=0; j<5; j++) {
        for (int i=0; i<6; i++){
          goal_queue[j*6+i] = joint_pose_values.data[i]*(0.050*(j+5)) + joint_pose_values.data[i+12]; 
        }
      }
      for (int j=5; j<15; j++) {
        for (int i=0; i<6; i++){ 
          goal_queue[j*6+i] = joint_pose_values.data[i+6]*(0.050*(j-5)) + goal_queue[4*6+i]; 
        }
      }
      for (int i=0; i<6; i++) goal[i] = goal_queue[i];
      int correction_steps = 0;
      int joint_corrections = 0;
      for (int i = 0; i < 14; i++) {
        joint_corrections = 0;
        for (int j=0; j < 6; j++) {
          if ((joint_position[j] - goal_queue[i*6+j])>(goal_queue[(i+1)*6+j] - goal_queue[i*6+j])) joint_corrections++;
        }
        if (joint_corrections>3) correction_steps++;
      }
    }

    void change_goal_msg_test(const std_msgs::Float64MultiArray joint_pose_values) 
    {
      for (int j=0; j<5; j++) {
        for (int i=0; i<6; i++){ 
          goal_queue[j*6+i] = joint_pose_values.data[i]*(0.050*(j+5)) + joint_pose_values.data[i+12]; 
        }
      }
      for (int j=5; j<15; j++) {
        for (int i=0; i<6; i++){ 
          goal_queue[j*6+i] = joint_pose_values.data[i+6]*(0.050*(j-5)) + goal_queue[4*6+i]; 
        }
      }
      for (int i=0; i<6; i++) goal[i] = goal_queue[i];
      int correction_steps = 0;
      int joint_corrections = 0;
      for (int i = 0; i < 14; i++) {
        joint_corrections = 0;
        for (int j=0; j < 6; j++) {
          if ((joint_position[j] - goal_queue[i*6+j])>(goal_queue[(i+1)*6+j] - goal_queue[i*6+j])) joint_corrections++;
        }
        if (joint_corrections>3) correction_steps++;
       }
    }

    void change_states_msg(const std_msgs::Float64MultiArray::ConstPtr& msg) 
    {
      for (int i=0; i<6; i++) joint_position[i] = msg->data[i];
      for (int i=0; i<6; i++) joint_speed[i] = msg->data[i+6];
    }

    void test_points_poses(const std_msgs::Float64MultiArray::ConstPtr& msg) 
    {
      for (int i=0; i<24; i++) ctp_vrep[i] = msg->data[i];
    }

    void test_points_vel(const std_msgs::Float64MultiArray::ConstPtr& msg) 
    {
      for (int i=0; i<24; i++) ctv_vrep[i] = msg->data[i];
    }
    void distances(const std_msgs::Float64MultiArray::ConstPtr& msg) 
    {
      for (int i=0; i<112; i++) dist_vrep[i] = msg->data[i];
    }
    void vrep_h(const std_msgs::Float64MultiArray::ConstPtr& msg) 
    {
      for (int i=0; i<42; i++) human_vrep[i] = msg->data[i];
    }
    void SendVelocity(const std_msgs::Float64MultiArray joint_vel_values){
    	chatter_pub.publish(joint_vel_values);
	    return;
    }
}; 

int main(int argc, char **argv)
{
  myfile.open("data_low.csv", ios::out);
  ros::init(argc, argv, "joint_controller_low");

  ros::NodeHandle n;
  ROS_INFO("Node Started");

  GoalFollower my_follower;
  my_follower.chatter_pub = n.advertise<std_msgs::Float64MultiArray>("/MPC_solutions", 1);

  ros::Publisher PauseLow = n.advertise<std_msgs::Int32>("pauseLow", 1);
  while (PauseLow.getNumSubscribers() < 1);
  std_msgs::Int32 msg;
  msg.data = 0;
  PauseLow.publish(msg);
  
  ROS_INFO("Goal default to: %.3f, %.3f, %.3f, %.3f, %.3f, %.3f", 
	my_follower.goal[0], my_follower.goal[1], my_follower.goal[2],my_follower.goal[3], my_follower.goal[4], my_follower.goal[5]);

  ros::Subscriber vrep_test_points = n.subscribe("/testPointsPoses", 1, &GoalFollower::test_points_poses, &my_follower);
  ros::Subscriber vrep_test_points_vel = n.subscribe("/testPointsVel", 1, &GoalFollower::test_points_vel, &my_follower);
  ros::Subscriber vrep_distances = n.subscribe("/distance", 1, &GoalFollower::distances, &my_follower);
  ros::Subscriber vrep_human = n.subscribe("/humanRealPositions", 1, &GoalFollower::vrep_h, &my_follower);

  ros::Subscriber joint_status = n.subscribe("/joint_states_low", 1, &GoalFollower::change_states_msg, &my_follower);
  ros::Subscriber joint_goal = n.subscribe("/my_ur5/mpc_high_positions", 1, &GoalFollower::change_goal_msg, &my_follower);
  ros::Subscriber joint_goal_test = n.subscribe("/my_ur5/mpc_high_positions_test", 1, &GoalFollower::change_goal_msg_test, &my_follower);
  ros::Subscriber human_status = n.subscribe("/vrep/my_ur5/mpc_low_spheres", 1, &GoalFollower::change_obstacles_msg, &my_follower);
  ros::Subscriber human_speed = n.subscribe("/vrep/spheres_speed", 1, &GoalFollower::change_human_speed_msg, &my_follower);
  ros::Subscriber human_dist = n.subscribe("/vrep/spheres_speed", 1, &GoalFollower::change_human_speed_msg, &my_follower);
  double smallest_dist;
  double local_val;
  double dist_val[112] = {0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0};
  // cposes of 8 test points:
  double ctp[24] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  // linear vels of 8 test points:
  double ctv[24] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
//   min dist has 8 values for 8 test points:
  double min_dist[] = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
  ros::Rate loop_rate(20);

  while (ros::ok())
  {
    double currentState_targetValue[68];
    double tracking_goal[60];
    // define terminal goal
    for (int i=0; i<6; i++) my_follower.goal[i] = my_follower.goal_queue[i];
    // define tracking goal
    for (int i=0; i<60; i++) tracking_goal[i] = my_follower.goal_queue[i];
    // Check if arrived
    // float max_diff = 0;
    // float temp = 0;
    // for (int i = 0; i < 6; ++i) {
    //   temp = abs(my_follower.goal[i] - my_follower.joint_position[i]);
    //   if (temp > max_diff) {
    //     max_diff = temp; 
    //   }
    // }
    // Advance the goal
    for (int j=0; j<14; j++) {
      for (int i=0; i<6; i++){ 
        my_follower.goal_queue[j*6+i] = my_follower.goal_queue[(j+1)*6+i]; 
      }
    }
    for (int i=0; i<6; i++) my_follower.goal_queue[14*6+i] = my_follower.goal_queue[13*6+i];
      //******************* get_min_dist **********************
    local_val = 10000;
	  smallest_dist = 10000;
    // we have 8 test point on the ur5 robot:
    min_dist[0] = 10000; min_dist[1] = 10000; min_dist[2] = 10000; min_dist[3] = 10000;
    min_dist[4] = 10000; min_dist[5] = 10000; min_dist[6] = 10000; min_dist[7] = 10000;
    double spheres_dist[] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    Eigen::MatrixXf mat2 = get_cpose(my_follower.joint_position[0], my_follower.joint_position[1],
                                    my_follower.joint_position[2], my_follower.joint_position[3],
                                    my_follower.joint_position[4], my_follower.joint_position[5]);
    int iter = 0;
    for (int j = 0; j < 8; j++) {
      Eigen::Vector3f w;
      w = mat2.col(j+1).transpose();
      // printf("j = %i,w = %f,%f,%f\n",j,w[0],w[1],w[2]);
      ctp[j*3+0] = w[0];
      ctp[j*3+1] = w[1];
      ctp[j*3+2] = w[2];
      for (int k = 0; k < 14; k++) {
        Eigen::Vector3f p(my_follower.human_sphere[k*4+0],my_follower.human_sphere[k*4+1],my_follower.human_sphere[k*4+2]);
        local_val = dist_v(w, p) - my_follower.robot_spheres[j] - my_follower.human_sphere[k*4+3];
        dist_val[iter] = local_val;
        iter+=1;
        if (local_val < min_dist[j]) {
          min_dist[j] = local_val;
          spheres_dist[j] = my_follower.robot_spheres[j] + my_follower.human_sphere[k*4+3];
        }
      }
	    if (smallest_dist > min_dist[j]) smallest_dist = min_dist[j];
	  }
    // printf("CTP_form 8 = %f,%f,%f\n",ctp[21],ctp[22],ctp[23]);
    // Eigen::Vector3f end_effector_pose = mat2.col(7);

    double* solutions;
    if (smallest_dist >= 0.00) {
      // Goal reference position 
      for (int i = 0; i < 6; ++i) currentState_targetValue[i] = my_follower.joint_position[i];
      for (int i = 0; i < 6; ++i) currentState_targetValue[i+6] = my_follower.goal[i];
      for (int i = 0; i < 56; ++i) currentState_targetValue[i+12] = my_follower.human_sphere[i];
      msg.data = 1;
      // PauseLow.publish(msg);
      solutions = myMpcSolver.solve_mpc(currentState_targetValue, tracking_goal);
      msg.data = 0;
      // PauseLow.publish(msg);
    } else for (int i=0; i<8; i++) solutions[i] = 0;

        //******************* get_min_velocity **********************
    double max_vell[] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    Eigen::MatrixXf vell_mat = get_velocity(my_follower.joint_position[0], my_follower.joint_position[1], 
                       my_follower.joint_position[2], my_follower.joint_position[3], my_follower.joint_position[4],
                       my_follower.joint_position[5],
                       solutions[0], solutions[1], solutions[2],
                       solutions[3], solutions[4], solutions[5]);
    double max_linear_vell = 0;
    double temp_linear_vell = 0;
    for (int k=0; k<8; k++) {
      ctv[k*3+0] = vell_mat.coeff(k*3+0,0);
      ctv[k*3+1] = vell_mat.coeff(k*3+1,0);
      ctv[k*3+2] = vell_mat.coeff(k*3+2,0);
      temp_linear_vell = sqrt(vell_mat.coeff(k*3 + 0,0)*vell_mat.coeff(k*3 + 0,0) + vell_mat.coeff(k*3 + 1,0)*vell_mat.coeff(k*3 + 1,0) + vell_mat.coeff(k*3 + 2,0)*vell_mat.coeff(k*3 + 2,0));
      max_vell[k] = temp_linear_vell;
      if (max_linear_vell < temp_linear_vell) max_linear_vell = temp_linear_vell;
      // ROS_INFO("temp_linear_vell %.3f", temp_linear_vell);
    }
       //*********************** Apply control ********************************
	  double lin_vell_limit_arr[] = {10, 10, 10, 10, 10, 10, 10, 10};
    double lin_vell_scale = 10;
    double alpha = 0.85; //v_mpc_lim = alpha^2.*((min_dist_arr+spheres_dist).^2-spheres_dist.^2);

	  for (int i=0;i<8;i++) {
      lin_vell_limit_arr[i] = alpha*alpha*((min_dist[i]+spheres_dist[i])*(min_dist[i]+spheres_dist[i])-spheres_dist[i]*spheres_dist[i]);
      if (lin_vell_limit_arr[i]<0) lin_vell_limit_arr[i] = 0.00000000000000;
      double temp_scale = (lin_vell_limit_arr[i]/max_vell[i]);
      if (lin_vell_scale>temp_scale) lin_vell_scale = temp_scale;
    }
    if (lin_vell_scale<1.0) {
      for (int i = 0; i < 6; i++) solutions[i] = solutions[i]*lin_vell_scale;
    }
    // ROS_INFO("Max lin vell %.3f, Vel Index %.3f", max_linear_vell, lin_vell_scale);

    // prepare to send commands
    std_msgs::Float64MultiArray joint_vel_values;
    joint_vel_values.data.clear();
    for (int i = 0; i < 6; i++) joint_vel_values.data.push_back(solutions[i]);
    my_follower.SendVelocity(joint_vel_values);
    
    // save data
    if (myfile.is_open())
	  {
      myfile <<ctp[0]<<" "<<ctp[1]<<" "<<ctp[2]<<" "<<ctp[3]<<" "<<ctp[4]<<" "<<ctp[5]<<" "<<ctp[6]<<" "<<ctp[7]<<" ";
      myfile <<ctp[8]<<" "<<ctp[9]<<" "<<ctp[10]<<" " <<ctp[11]<< " " <<ctp[12]<<" " <<ctp[13]<<" " <<ctp[14]<<" ";
      myfile <<ctp[15]<<" "<<ctp[16]<<" "<<ctp[17]<<" "<<ctp[18]<<" "<<ctp[19]<<" "<<ctp[20]<<" "<<ctp[21]<<" ";
      myfile <<ctp[22]<<" "<<ctp[23]<<" "<<my_follower.ctp_vrep[0]<<" "<<my_follower.ctp_vrep[1]<<" "<<my_follower.ctp_vrep[2]<<" ";
      myfile <<my_follower.ctp_vrep[3]<<" "<<my_follower.ctp_vrep[4]<<" "<<my_follower.ctp_vrep[5]<<" "<<my_follower.ctp_vrep[6]<<" ";
      myfile <<my_follower.ctp_vrep[7]<<" "<<my_follower.ctp_vrep[8]<<" "<<my_follower.ctp_vrep[9]<<" "<<my_follower.ctp_vrep[10]<<" ";
      myfile <<my_follower.ctp_vrep[11]<<" "<<my_follower.ctp_vrep[12]<<" "<<my_follower.ctp_vrep[13]<<" "<<my_follower.ctp_vrep[14]<<" ";
      myfile <<my_follower.ctp_vrep[15]<<" "<<my_follower.ctp_vrep[16]<<" "<<my_follower.ctp_vrep[17]<<" "<<my_follower.ctp_vrep[18]<<" ";
      myfile <<my_follower.ctp_vrep[19]<<" "<<my_follower.ctp_vrep[20]<<" "<<my_follower.ctp_vrep[21]<<" "<<my_follower.ctp_vrep[22]<<" ";
      myfile <<my_follower.ctp_vrep[23]<<" ";
      myfile <<dist_val[0]<<" "<<dist_val[1]<<" "<<dist_val[2]<<" "<<dist_val[3]<<" "<<dist_val[4]<<" "<<dist_val[5]<<" ";
      myfile <<dist_val[6]<<" "<<dist_val[7]<<" "<<dist_val[8]<<" "<<dist_val[9]<<" "<<dist_val[10]<<" "<<dist_val[11]<<" ";
      myfile <<dist_val[12]<<" "<<dist_val[13]<<" "<<dist_val[14]<<" "<<dist_val[15]<<" "<<dist_val[16]<<" "<<dist_val[17]<<" ";
      myfile <<dist_val[18]<<" "<<dist_val[19]<<" "<<dist_val[20]<<" "<<dist_val[21]<<" "<<dist_val[22]<<" "<<dist_val[23]<<" ";
      myfile <<dist_val[24]<<" "<<dist_val[25]<<" "<<dist_val[26]<<" "<<dist_val[27]<<" "<<dist_val[28]<<" "<<dist_val[29]<<" ";
      myfile <<dist_val[30]<<" "<<dist_val[31]<<" "<<dist_val[32]<<" "<<dist_val[33]<<" "<<dist_val[34]<<" "<<dist_val[35]<<" ";
      myfile <<dist_val[36]<<" "<<dist_val[37]<<" "<<dist_val[38]<<" "<<dist_val[39]<<" "<<dist_val[40]<<" "<<dist_val[41]<<" ";
      myfile <<dist_val[42]<<" "<<dist_val[43]<<" "<<dist_val[44]<<" "<<dist_val[45]<<" "<<dist_val[46]<<" "<<dist_val[47]<<" ";
      myfile <<dist_val[48]<<" "<<dist_val[49]<<" "<<dist_val[50]<<" "<<dist_val[51]<<" "<<dist_val[52]<<" "<<dist_val[53]<<" ";
      myfile <<dist_val[54]<<" "<<dist_val[55]<<" "<<dist_val[56]<<" "<<dist_val[57]<<" "<<dist_val[58]<<" "<<dist_val[59]<<" ";
      myfile <<dist_val[60]<<" "<<dist_val[61]<<" "<<dist_val[62]<<" "<<dist_val[63]<<" "<<dist_val[64]<<" "<<dist_val[65]<<" ";
      myfile <<dist_val[66]<<" "<<dist_val[67]<<" "<<dist_val[68]<<" "<<dist_val[69]<<" "<<dist_val[70]<<" "<<dist_val[71]<<" ";
      myfile <<dist_val[72]<<" "<<dist_val[73]<<" "<<dist_val[74]<<" "<<dist_val[75]<<" "<<dist_val[76]<<" "<<dist_val[77]<<" ";
      myfile <<dist_val[78]<<" "<<dist_val[79]<<" "<<dist_val[80]<<" "<<dist_val[81]<<" "<<dist_val[82]<<" "<<dist_val[83]<<" ";
      myfile <<dist_val[84]<<" "<<dist_val[85]<<" "<<dist_val[86]<<" "<<dist_val[87]<<" "<<dist_val[88]<<" "<<dist_val[89]<<" ";
      myfile <<dist_val[90]<<" "<<dist_val[91]<<" "<<dist_val[92]<<" "<<dist_val[93]<<" "<<dist_val[94]<<" "<<dist_val[95]<<" ";
      myfile <<dist_val[96]<<" "<<dist_val[97]<<" "<<dist_val[98]<<" "<<dist_val[99]<<" "<<dist_val[100]<<" "<<dist_val[101]<<" ";
      myfile <<dist_val[102]<<" "<<dist_val[103]<<" "<<dist_val[104]<<" "<<dist_val[105]<<" "<<dist_val[106]<<" "<<dist_val[107]<<" ";
      myfile <<dist_val[108]<<" "<<dist_val[109]<<" "<<dist_val[110]<<" "<<dist_val[111]<<" "<<my_follower.dist_vrep[0]<<" ";
      myfile <<my_follower.dist_vrep[1]<<" "<<my_follower.dist_vrep[2]<<" "<<my_follower.dist_vrep[3]<<" "<<my_follower.dist_vrep[4]<<" ";
      myfile <<my_follower.dist_vrep[5]<<" "<<my_follower.dist_vrep[6]<<" "<<my_follower.dist_vrep[7]<<" "<<my_follower.dist_vrep[8]<<" ";
      myfile <<my_follower.dist_vrep[9]<<" "<<my_follower.dist_vrep[10]<<" "<<my_follower.dist_vrep[11]<<" "<<my_follower.dist_vrep[12]<<" ";
      myfile <<my_follower.dist_vrep[13]<<" "<<my_follower.dist_vrep[14]<<" "<<my_follower.dist_vrep[15]<<" "<<my_follower.dist_vrep[16]<<" ";
      myfile <<my_follower.dist_vrep[17]<<" "<<my_follower.dist_vrep[18]<<" "<<my_follower.dist_vrep[19]<<" "<<my_follower.dist_vrep[20]<<" ";
      myfile <<my_follower.dist_vrep[21]<<" "<<my_follower.dist_vrep[22]<<" "<<my_follower.dist_vrep[23]<<" "<<my_follower.dist_vrep[24]<<" ";
      myfile <<my_follower.dist_vrep[25]<<" "<<my_follower.dist_vrep[26]<<" "<<my_follower.dist_vrep[27]<<" "<<my_follower.dist_vrep[28]<<" ";
      myfile <<my_follower.dist_vrep[29]<<" "<<my_follower.dist_vrep[30]<<" "<<my_follower.dist_vrep[31]<<" "<<my_follower.dist_vrep[32]<<" ";
      myfile <<my_follower.dist_vrep[33]<<" "<<my_follower.dist_vrep[34]<<" "<<my_follower.dist_vrep[35]<<" "<<my_follower.dist_vrep[36]<<" ";
      myfile <<my_follower.dist_vrep[37]<<" "<<my_follower.dist_vrep[38]<<" "<<my_follower.dist_vrep[39]<<" "<<my_follower.dist_vrep[40]<<" ";
      myfile <<my_follower.dist_vrep[41]<<" "<<my_follower.dist_vrep[42]<<" "<<my_follower.dist_vrep[43]<<" "<<my_follower.dist_vrep[44]<<" ";
      myfile <<my_follower.dist_vrep[45]<<" "<<my_follower.dist_vrep[46]<<" "<<my_follower.dist_vrep[47]<<" "<<my_follower.dist_vrep[48]<<" ";
      myfile <<my_follower.dist_vrep[49]<<" "<<my_follower.dist_vrep[50]<<" "<<my_follower.dist_vrep[51]<<" "<<my_follower.dist_vrep[52]<<" ";
      myfile <<my_follower.dist_vrep[53]<<" "<<my_follower.dist_vrep[54]<<" "<<my_follower.dist_vrep[55]<<" "<<my_follower.dist_vrep[56]<<" ";
      myfile <<my_follower.dist_vrep[57]<<" "<<my_follower.dist_vrep[58]<<" "<<my_follower.dist_vrep[59]<<" "<<my_follower.dist_vrep[60]<<" ";
      myfile <<my_follower.dist_vrep[61]<<" "<<my_follower.dist_vrep[62]<<" "<<my_follower.dist_vrep[63]<<" "<<my_follower.dist_vrep[64]<<" ";
      myfile <<my_follower.dist_vrep[65]<<" "<<my_follower.dist_vrep[66]<<" "<<my_follower.dist_vrep[67]<<" "<<my_follower.dist_vrep[68]<<" ";
      myfile <<my_follower.dist_vrep[69]<<" "<<my_follower.dist_vrep[70]<<" "<<my_follower.dist_vrep[71]<<" "<<my_follower.dist_vrep[72]<<" ";
      myfile <<my_follower.dist_vrep[73]<<" "<<my_follower.dist_vrep[74]<<" "<<my_follower.dist_vrep[75]<<" "<<my_follower.dist_vrep[76]<<" ";
      myfile <<my_follower.dist_vrep[77]<<" "<<my_follower.dist_vrep[78]<<" "<<my_follower.dist_vrep[79]<<" "<<my_follower.dist_vrep[80]<<" ";
      myfile <<my_follower.dist_vrep[81]<<" "<<my_follower.dist_vrep[82]<<" "<<my_follower.dist_vrep[83]<<" "<<my_follower.dist_vrep[84]<<" ";
      myfile <<my_follower.dist_vrep[85]<<" "<<my_follower.dist_vrep[86]<<" "<<my_follower.dist_vrep[87]<<" "<<my_follower.dist_vrep[88]<<" ";
      myfile <<my_follower.dist_vrep[89]<<" "<<my_follower.dist_vrep[90]<<" "<<my_follower.dist_vrep[91]<<" "<<my_follower.dist_vrep[92]<<" ";
      myfile <<my_follower.dist_vrep[93]<<" "<<my_follower.dist_vrep[94]<<" "<<my_follower.dist_vrep[95]<<" "<<my_follower.dist_vrep[96]<<" ";
      myfile <<my_follower.dist_vrep[97]<<" "<<my_follower.dist_vrep[98]<<" "<<my_follower.dist_vrep[99]<<" "<<my_follower.dist_vrep[100]<<" ";
      myfile <<my_follower.dist_vrep[101]<<" "<<my_follower.dist_vrep[102]<<" "<<my_follower.dist_vrep[103]<<" "<<my_follower.dist_vrep[104]<<" ";
      myfile <<my_follower.dist_vrep[105]<<" "<<my_follower.dist_vrep[106]<<" "<<my_follower.dist_vrep[107]<<" "<<my_follower.dist_vrep[108]<<" ";
      myfile <<my_follower.dist_vrep[109]<<" "<<my_follower.dist_vrep[110]<<" "<<my_follower.dist_vrep[111]<<" ";
      myfile <<my_follower.human_sphere[0]<<" "<<my_follower.human_sphere[1]<<" "<<my_follower.human_sphere[2]<<" ";
      myfile <<my_follower.human_sphere[4]<<" "<<my_follower.human_sphere[5]<<" "<<my_follower.human_sphere[6]<<" ";
      myfile <<my_follower.human_sphere[8]<<" "<<my_follower.human_sphere[9]<<" "<<my_follower.human_sphere[10]<<" ";
      myfile <<my_follower.human_sphere[12]<<" "<<my_follower.human_sphere[13]<<" "<<my_follower.human_sphere[14]<<" ";
      myfile <<my_follower.human_sphere[16]<<" "<<my_follower.human_sphere[17]<<" "<<my_follower.human_sphere[18]<<" ";
      myfile <<my_follower.human_sphere[20]<<" "<<my_follower.human_sphere[21]<<" "<<my_follower.human_sphere[22]<<" ";
      myfile <<my_follower.human_sphere[24]<<" "<<my_follower.human_sphere[25]<<" "<<my_follower.human_sphere[26]<<" ";
      myfile <<my_follower.human_sphere[28]<<" "<<my_follower.human_sphere[29]<<" "<<my_follower.human_sphere[30]<<" ";
      myfile <<my_follower.human_sphere[32]<<" "<<my_follower.human_sphere[33]<<" "<<my_follower.human_sphere[34]<<" ";
      myfile <<my_follower.human_sphere[36]<<" "<<my_follower.human_sphere[37]<<" "<<my_follower.human_sphere[38]<<" ";
      myfile <<my_follower.human_sphere[40]<<" "<<my_follower.human_sphere[41]<<" "<<my_follower.human_sphere[42]<<" ";
      myfile <<my_follower.human_sphere[44]<<" "<<my_follower.human_sphere[45]<<" "<<my_follower.human_sphere[46]<<" ";
      myfile <<my_follower.human_sphere[48]<<" "<<my_follower.human_sphere[49]<<" "<<my_follower.human_sphere[50]<<" ";
      myfile <<my_follower.human_sphere[52]<<" "<<my_follower.human_sphere[53]<<" "<<my_follower.human_sphere[54]<<" ";
      myfile <<my_follower.human_vrep[0]<<" "<<my_follower.human_vrep[1]<<" "<<my_follower.human_vrep[2]<<" ";
      myfile <<my_follower.human_vrep[3]<<" "<<my_follower.human_vrep[4]<<" "<<my_follower.human_vrep[5]<<" ";
      myfile <<my_follower.human_vrep[6]<<" "<<my_follower.human_vrep[7]<<" "<<my_follower.human_vrep[8]<<" ";
      myfile <<my_follower.human_vrep[9]<<" "<<my_follower.human_vrep[10]<<" "<<my_follower.human_vrep[11]<<" ";
      myfile <<my_follower.human_vrep[12]<<" "<<my_follower.human_vrep[13]<<" "<<my_follower.human_vrep[14]<<" ";
      myfile <<my_follower.human_vrep[15]<<" "<<my_follower.human_vrep[16]<<" "<<my_follower.human_vrep[17]<<" ";
      myfile <<my_follower.human_vrep[18]<<" "<<my_follower.human_vrep[19]<<" "<<my_follower.human_vrep[20]<<" ";
      myfile <<my_follower.human_vrep[21]<<" "<<my_follower.human_vrep[22]<<" "<<my_follower.human_vrep[23]<<" ";
      myfile <<my_follower.human_vrep[24]<<" "<<my_follower.human_vrep[25]<<" "<<my_follower.human_vrep[26]<<" ";
      myfile <<my_follower.human_vrep[27]<<" "<<my_follower.human_vrep[28]<<" "<<my_follower.human_vrep[29]<<" ";
      myfile <<my_follower.human_vrep[30]<<" "<<my_follower.human_vrep[31]<<" "<<my_follower.human_vrep[32]<<" ";
      myfile <<my_follower.human_vrep[33]<<" "<<my_follower.human_vrep[34]<<" "<<my_follower.human_vrep[35]<<" ";
      myfile <<my_follower.human_vrep[36]<<" "<<my_follower.human_vrep[37]<<" "<<my_follower.human_vrep[38]<<" ";
      myfile <<my_follower.human_vrep[39]<<" "<<my_follower.human_vrep[40]<<" "<<my_follower.human_vrep[41]<<" ";
      myfile <<my_follower.joint_position[0]<<" "<<my_follower.joint_position[1]<<" "<<my_follower.joint_position[2]<<" ";
      myfile <<my_follower.joint_position[3]<<" "<<my_follower.joint_position[4]<<" "<<my_follower.joint_position[5]<<" ";
      myfile <<my_follower.goal[0]<<" "<<my_follower.goal[1]<<" "<<my_follower.goal[2]<<" "<<my_follower.goal[3]<<" ";
      myfile <<my_follower.goal[4]<<" "<<my_follower.goal[5]<<" "<<my_follower.joint_speed[0]<<" "<<my_follower.joint_speed[1]<<" ";
      myfile <<my_follower.joint_speed[2]<<" "<<my_follower.joint_speed[3]<<" "<<my_follower.joint_speed[4]<<" ";
      myfile <<my_follower.joint_speed[5]<<" "<<solutions[0]<<" " <<solutions[1]<<" "<<solutions[2]<<" "<<solutions[3]<<" ";
      myfile <<solutions[4]<<" "<<solutions[5]<<" "<<min_dist[0]<<" "<<min_dist[1]<<" "<<min_dist[2]<<" "<<min_dist[3]<<" ";
      myfile <<min_dist[4]<<" "<<min_dist[5]<<" "<<min_dist[6]<<" "<<min_dist[7]<<" "<<endl;
    }
    else cout << "Unable to open file";
    ros::spinOnce();
    loop_rate.sleep();
  }
  myfile.close();
  return 0;
}


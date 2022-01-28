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

// cartesian positions of the 10 test points:
// Eigen::MatrixXf get_cpose(float theta_1, float theta_2, float theta_3, float theta_4, float theta_5, float theta_6){
//   Eigen::MatrixXf mat(3,9);
//   mat <<0, (0.11*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2))/2,   0.11*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2), -0.425*cos(theta_1)*cos(theta_2)+(-(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_1)*cos(theta_2)))/2, 0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3), 0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.09465*cos(theta_4)*(cos(theta_1)*cos(theta_2)*sin(theta_3) + cos(theta_1)*cos(theta_3)*sin(theta_2)) - 0.09465*sin(theta_4)*(cos(theta_1)*sin(theta_2)*sin(theta_3) - 1.0*cos(theta_1)*cos(theta_2)*cos(theta_3)) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3),
//         0, (-0.11*cos(theta_1) - 0.425*cos(theta_2)*sin(theta_1))/2, -0.11*cos(theta_1) - 0.425*cos(theta_2)*sin(theta_1), -0.425*cos(theta_2)*sin(theta_1)+(-(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_2)*sin(theta_1)))/2, 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) - 0.425*cos(theta_2)*sin(theta_1) - 0.10915*cos(theta_1) - 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1), 0.09465*cos(theta_4)*(cos(theta_2)*sin(theta_1)*sin(theta_3) + cos(theta_3)*sin(theta_1)*sin(theta_2)) - 0.425*cos(theta_2)*sin(theta_1) - 0.10915*cos(theta_1) - 0.09465*sin(theta_4)*(sin(theta_1)*sin(theta_2)*sin(theta_3) - 1.0*cos(theta_2)*cos(theta_3)*sin(theta_1)) + 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) - 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1), 
//         0, (0.08945 -0.425*sin(theta_2))/2,                           0.08945 -0.425*sin(theta_2),                                 0.08945 - 0.425*sin(theta_2)+(0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3)-(0.08945 - 0.425*sin(theta_2)))/2,              0.08945 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3),                                                                                            0.08945 - 0.39225*sin(theta_2 + theta_3) - 0.425*sin(theta_2) - 0.09465*cos(theta_2 + theta_3 + theta_4);
//  return mat;
// }

Eigen::MatrixXf get_cpose(float theta_1, float theta_2, float theta_3, float theta_4, float theta_5, float theta_6){
Eigen::MatrixXf mat(3,8);
mat << 0, 0.06*sin(theta_1), (-0.425*cos(theta_1)*cos(theta_2))/2+0.14*sin(theta_1), -0.425*cos(theta_1)*cos(theta_2)+0.11*sin(theta_1), -0.425*cos(theta_1)*cos(theta_2)+(-(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_1)*cos(theta_2)))/3+0.02*sin(theta_1), -0.425*cos(theta_1)*cos(theta_2)+2*(-(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_1)*cos(theta_2)))/3+0.02*sin(theta_1), -(cos(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000+0.06*sin(theta_1), 0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.0823*cos(theta_5)*sin(theta_1) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.0823*cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*sin(theta_5) + 0.09465*cos(theta_2 + theta_3)*cos(theta_1)*sin(theta_4) + 0.09465*sin(theta_2 + theta_3)*cos(theta_1)*cos(theta_4) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)-0.05*sin(theta_1),
       0,-0.06*cos(theta_1), (-0.425*cos(theta_2)*sin(theta_1))/2-0.14*cos(theta_1), -0.425*cos(theta_2)*sin(theta_1)-0.11*cos(theta_1), -0.425*cos(theta_2)*sin(theta_1)+(-(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_2)*sin(theta_1)))/3-0.02*cos(theta_1), -0.425*cos(theta_2)*sin(theta_1)+2*(-(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-(-0.425*cos(theta_2)*sin(theta_1)))/3-0.02*cos(theta_1), -(sin(theta_1)*(1569.0*cos(theta_2 + theta_3) + 1700.0*cos(theta_2)))/4000-0.06*cos(theta_1), 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) - 0.0823*cos(theta_1)*cos(theta_5) - 0.425*cos(theta_2)*sin(theta_1) - 0.10915*cos(theta_1) - 0.0823*cos(theta_2 + theta_3 + theta_4)*sin(theta_1)*sin(theta_5) + 0.09465*cos(theta_2 + theta_3)*sin(theta_1)*sin(theta_4) + 0.09465*sin(theta_2 + theta_3)*cos(theta_4)*sin(theta_1) - 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)+0.05*cos(theta_1),
       0, 0.0894,            (0.0894 - 0.425*sin(theta_2))/2,                        0.0894 - 0.425*sin(theta_2),                       0.0894 - 0.425*sin(theta_2)+(0.0894 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3)-(0.0894 - 0.425*sin(theta_2)))/3,                                            0.0894 - 0.425*sin(theta_2)+2*(0.0894 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3)-(0.0894 - 0.425*sin(theta_2)))/3,                                            0.0894 - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3),                                 0.09465*sin(theta_2 + theta_3)*sin(theta_4) - 0.425*sin(theta_2) - 0.39225*sin(theta_2 + theta_3) - sin(theta_5)*(0.0823*cos(theta_2 + theta_3)*sin(theta_4) + 0.0823*sin(theta_2 + theta_3)*cos(theta_4)) - 0.09465*cos(theta_2 + theta_3)*cos(theta_4) + 0.08945;
	return mat;
}


Eigen::MatrixXf get_velocity(float theta_1, float theta_2, float theta_3, float theta_4, float theta_5, float theta_6,
                             float u_1, float u_2, float u_3, float u_4, float u_5, float u_6){
	Eigen::MatrixXf mat(30,1);
  mat <<(0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2))/3,
        (0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2))/3,
        (-0.425*u_2*cos(theta_2))/3,
        2*(0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2))/3,
        2*(0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2))/3,
        2*(-0.425*u_2*cos(theta_2))/3,
        0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2),
        0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2),
        -0.425*u_2*cos(theta_2),
        0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2)+1/4*(u_2*(0.425*cos(theta_1)*sin(theta_2) + 0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2)) + u_1*(0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + u_3*(0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2))-(0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2))),
        0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2)+1/4*(u_3*(0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2)) - 1.0*u_1*(0.425*cos(theta_1)*cos(theta_2) - 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + u_2*(0.425*sin(theta_1)*sin(theta_2) + 0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2))-(0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2))),
        -0.425*u_2*cos(theta_2)+1/4*(- 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2)) - 0.39225*u_3*cos(theta_2 + theta_3)-(-0.425*u_2*cos(theta_2))),
        0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2)+2/4*(u_2*(0.425*cos(theta_1)*sin(theta_2) + 0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2)) + u_1*(0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + u_3*(0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2))-(0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2))),
        0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2)+2/4*(u_3*(0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2)) - 1.0*u_1*(0.425*cos(theta_1)*cos(theta_2) - 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + u_2*(0.425*sin(theta_1)*sin(theta_2) + 0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2))-(0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2))),
        -0.425*u_2*cos(theta_2)+2/4*(- 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2)) - 0.39225*u_3*cos(theta_2 + theta_3)-(-0.425*u_2*cos(theta_2))),
        0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2)+3/4*(u_2*(0.425*cos(theta_1)*sin(theta_2) + 0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2)) + u_1*(0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + u_3*(0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2))-(0.425*u_1*cos(theta_2)*sin(theta_1) + 0.425*u_2*cos(theta_1)*sin(theta_2))),
        0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2)+3/4*(u_3*(0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2)) - 1.0*u_1*(0.425*cos(theta_1)*cos(theta_2) - 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + u_2*(0.425*sin(theta_1)*sin(theta_2) + 0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2))-(0.425*u_2*sin(theta_1)*sin(theta_2) - 0.425*u_1*cos(theta_1)*cos(theta_2))),
        -0.425*u_2*cos(theta_2)+3/4*(- 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2)) - 0.39225*u_3*cos(theta_2 + theta_3)-(-0.425*u_2*cos(theta_2))),
        u_2*(0.425*cos(theta_1)*sin(theta_2) + 0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2)) + u_1*(0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + u_3*(0.39225*cos(theta_1)*cos(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_3)*sin(theta_2)),
        u_3*(0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2)) - 1.0*u_1*(0.425*cos(theta_1)*cos(theta_2) - 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + u_2*(0.425*sin(theta_1)*sin(theta_2) + 0.39225*cos(theta_2)*sin(theta_1)*sin(theta_3) + 0.39225*cos(theta_3)*sin(theta_1)*sin(theta_2)),
        - 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2)) - 0.39225*u_3*cos(theta_2 + theta_3),
        u_1*(0.10915*cos(theta_1) + 0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + 0.00025*u_2*cos(theta_1)*(1569.0*sin(theta_2 + theta_3) + 1700.0*sin(theta_2)) + 0.39225*u_3*sin(theta_2 + theta_3)*cos(theta_1),
        u_1*(0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + 0.00025*u_2*sin(theta_1)*(1569.0*sin(theta_2 + theta_3) + 1700.0*sin(theta_2)) + 0.39225*u_3*sin(theta_2 + theta_3)*sin(theta_1),
        - 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2)) - 0.39225*u_3*cos(theta_2 + theta_3),
        u_1*(0.10915*cos(theta_1) + 0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) - 0.09465*cos(theta_2 + theta_3)*sin(theta_1)*sin(theta_4) - 0.09465*sin(theta_2 + theta_3)*cos(theta_4)*sin(theta_1) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) + 0.00005*u_2*cos(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 7845.0*sin(theta_2 + theta_3) + 8500.0*sin(theta_2)) + 0.00015*u_3*cos(theta_1)*(631.0*cos(theta_2 + theta_3 + theta_4) + 2615.0*sin(theta_2 + theta_3)) + 0.09465*u_4*cos(theta_2 + theta_3 + theta_4)*cos(theta_1),
        u_1*(0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) + 0.09465*cos(theta_2 + theta_3)*cos(theta_1)*sin(theta_4) + 0.09465*sin(theta_2 + theta_3)*cos(theta_1)*cos(theta_4) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + 0.00005*u_2*sin(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 7845.0*sin(theta_2 + theta_3) + 8500.0*sin(theta_2)) + 0.00015*u_3*sin(theta_1)*(631.0*cos(theta_2 + theta_3 + theta_4) + 2615.0*sin(theta_2 + theta_3)) + 0.09465*u_4*cos(theta_2 + theta_3 + theta_4)*sin(theta_1),
        0.09465*u_2*sin(theta_2 + theta_3 + theta_4) + 0.09465*u_3*sin(theta_2 + theta_3 + theta_4) + 0.09465*u_4*sin(theta_2 + theta_3 + theta_4) - 0.39225*u_2*cos(theta_2 + theta_3) - 0.39225*u_3*cos(theta_2 + theta_3) - 0.425*u_2*cos(theta_2),
        u_1*(0.10915*cos(theta_1) + 0.0823*cos(theta_1)*cos(theta_5) + 0.425*cos(theta_2)*sin(theta_1) - 0.39225*sin(theta_1)*sin(theta_2)*sin(theta_3) + 0.0823*cos(theta_2 + theta_3 + theta_4)*sin(theta_1)*sin(theta_5) - 0.09465*cos(theta_2 + theta_3)*sin(theta_1)*sin(theta_4) - 0.09465*sin(theta_2 + theta_3)*cos(theta_4)*sin(theta_1) + 0.39225*cos(theta_2)*cos(theta_3)*sin(theta_1)) - 1.0*u_5*(0.0823*sin(theta_1)*sin(theta_5) + 0.0823*cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*cos(theta_5)) + 0.00005*u_2*cos(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 823.0*cos(theta_2 + theta_3 + theta_4 - 1.0*theta_5) - 823.0*cos(theta_2 + theta_3 + theta_4 + theta_5) + 7845.0*sin(theta_2 + theta_3) + 8500.0*sin(theta_2)) + 0.00005*u_4*cos(theta_1)*(1646.0*sin(theta_2 + theta_3 + theta_4)*sin(theta_5) - 1893.0*sin(theta_2 + theta_3)*sin(theta_4) + 1893.0*cos(theta_2 + theta_3)*cos(theta_4)) + 0.00005*u_3*cos(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 823.0*cos(theta_2 + theta_3 + theta_4 - 1.0*theta_5) - 823.0*cos(theta_2 + theta_3 + theta_4 + theta_5) + 7845.0*sin(theta_2 + theta_3)),
        u_5*(0.0823*cos(theta_1)*sin(theta_5) - 0.0823*cos(theta_2 + theta_3 + theta_4)*cos(theta_5)*sin(theta_1)) + u_1*(0.10915*sin(theta_1) - 0.425*cos(theta_1)*cos(theta_2) + 0.0823*cos(theta_5)*sin(theta_1) + 0.39225*cos(theta_1)*sin(theta_2)*sin(theta_3) - 0.0823*cos(theta_2 + theta_3 + theta_4)*cos(theta_1)*sin(theta_5) + 0.09465*cos(theta_2 + theta_3)*cos(theta_1)*sin(theta_4) + 0.09465*sin(theta_2 + theta_3)*cos(theta_1)*cos(theta_4) - 0.39225*cos(theta_1)*cos(theta_2)*cos(theta_3)) + 0.00005*u_2*sin(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 823.0*cos(theta_2 + theta_3 + theta_4 - 1.0*theta_5) - 823.0*cos(theta_2 + theta_3 + theta_4 + theta_5) + 7845.0*sin(theta_2 + theta_3) + 8500.0*sin(theta_2)) + 0.00005*u_4*sin(theta_1)*(1646.0*sin(theta_2 + theta_3 + theta_4)*sin(theta_5) - 1893.0*sin(theta_2 + theta_3)*sin(theta_4) + 1893.0*cos(theta_2 + theta_3)*cos(theta_4)) + 0.00005*u_3*sin(theta_1)*(1893.0*cos(theta_2 + theta_3 + theta_4) + 823.0*cos(theta_2 + theta_3 + theta_4 - 1.0*theta_5) - 823.0*cos(theta_2 + theta_3 + theta_4 + theta_5) + 7845.0*sin(theta_2 + theta_3)),
        u_4*(0.09465*sin(theta_2 + theta_3 + theta_4) - 0.0823*cos(theta_2 + theta_3 + theta_4)*sin(theta_5)) - 1.0*u_3*(0.39225*cos(theta_2 + theta_3) - 0.09465*sin(theta_2 + theta_3 + theta_4) + 0.0823*cos(theta_2 + theta_3 + theta_4)*sin(theta_5)) - 1.0*u_2*(0.39225*cos(theta_2 + theta_3) + 0.425*cos(theta_2) - 0.09465*cos(theta_2 + theta_3)*sin(theta_4) - 0.09465*sin(theta_2 + theta_3)*cos(theta_4) + 0.0823*cos(theta_2 + theta_3)*cos(theta_4)*sin(theta_5) - 0.0823*sin(theta_2 + theta_3)*sin(theta_4)*sin(theta_5)) - 0.0823*u_5*sin(theta_2 + theta_3 + theta_4)*cos(theta_5);
    return mat;
}
    
// Introduce class to make safer goal change
class GoalFollower 
{ 
    // Access specifier 
    public: 

    // Data Members 
    ros::Publisher chatter_pub;
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


    double goal[6] = {0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000};
    double goal_queue[120] = {0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000, 
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000, 
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000, 
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000, 
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000, 
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000, 
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000,
                              0.0000, -1.57, 0.0000, -1.57, 0.0000, 0.0000};

    // what comand vel is?
    double comand_vel[6] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
    double joint_position[6] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
    
    double joint_speed[6] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
    double from_high[31] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10};
    double tp_vel_vrep[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int arrived = 1;
    // Member Functions() 
    void change_obstacles_msg(const std_msgs::Float64MultiArray obstacle_data) 
    { 
      for (int i=0; i<56; i++)   human_sphere[i] = obstacle_data.data[i];
    }

    void test_p_vel(const std_msgs::Float64MultiArray data) 
    { 
      for (int i=0; i<30; i++)   tp_vel_vrep[i] = data.data[i];
    }

    void change_goal_msg(const std_msgs::Float64MultiArray joint_pose_values) 
    { 
      for (int i=0; i<31; i++)from_high[i]= joint_pose_values.data[i];
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

    void SendVelocity(const std_msgs::Float64MultiArray joint_vel_values){
    	chatter_pub.publish(joint_vel_values);
	    return;
    }
    
}; 

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "joint_controller_low");

  ros::NodeHandle n;
  ROS_INFO("Node Started");

  GoalFollower my_follower;
  my_follower.chatter_pub = n.advertise<std_msgs::Float64MultiArray>("/LowController/MPC_solutions", 1);

  ros::Publisher PauseLow = n.advertise<std_msgs::Int32>("/LowController/pause", 1);
  while (PauseLow.getNumSubscribers() < 1);
  std_msgs::Int32 msg;
  msg.data = 0;
  PauseLow.publish(msg);
  
  ROS_INFO("Goal default to: %.3f, %.3f, %.3f, %.3f, %.3f, %.3f", 
	my_follower.goal[0], my_follower.goal[1], my_follower.goal[2],my_follower.goal[3], my_follower.goal[4], my_follower.goal[5]);

  ros::Subscriber joint_status = n.subscribe("/CoppeliaSim/joint_states_low", 1, &GoalFollower::change_states_msg, &my_follower);
  ros::Subscriber joint_goal = n.subscribe("/HighController/mpc_high_positions", 1, &GoalFollower::change_goal_msg, &my_follower);
  ros::Subscriber human_status = n.subscribe("/Obstacle/mpc_low_spheres", 1, &GoalFollower::change_obstacles_msg, &my_follower);
  ros::Subscriber tp_vel = n.subscribe("CoppeliaSim/testPointsVel", 1, &GoalFollower::test_p_vel, &my_follower);

  double smallest_dist;
  double local_val;
  double vrep_val;
  // cposes of 10 test points:
  double ctp[21] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  // linear vels of 10 test points:
  double ctv[21] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  // min dist has 10 values for 10 test points:
  double min_dist[7] = {10000, 10000, 10000, 10000, 10000, 10000, 10000};
  ros::Rate loop_rate(20);
  myfile.open("data_low.csv", ios::out); 
  int fileseq=0;
  string filename;
  while (ros::ok())
  {
    // if(my_follower.from_high[30]<0.01){
    //   printf("------------------Arrived---------------------\n");
    //   myMpcSolver.reinitialize();
    //   fileseq++;
    //   myfile.close();
    //   filename = "data_0911/data_"+to_string(fileseq)+".csv";
    //   myfile.open(filename, ios::out);
    //   sleep(2);
    // }

    double currentState_targetValue[71];
    double tracking_goal[60];
    // define terminal goal
    for (int i=0; i<6; i++) my_follower.goal[i] = my_follower.goal_queue[i];
    // define tracking goal
    for (int i=0; i<60; i++) tracking_goal[i] = my_follower.goal_queue[i];
    // Advance the goal
    for (int j=0; j<14; j++) {
      for (int i=0; i<6; i++) my_follower.goal_queue[j*6+i] = my_follower.goal_queue[(j+1)*6+i]; 
    }
    for (int i=0; i<6; i++) my_follower.goal_queue[14*6+i] = my_follower.goal_queue[13*6+i];

    //******************* get_min_dist **********************
    local_val = 10000;
	  smallest_dist = 10000;

    // for 8 points on UR5:
    min_dist[0] = 10000; min_dist[1] = 10000; min_dist[2] = 10000; min_dist[3] = 10000; min_dist[4] = 10000; 
    min_dist[5] = 10000; min_dist[6] = 10000; min_dist[7] = 10000; 

    double spheres_dist[7] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    Eigen::MatrixXf mat2 = get_cpose(my_follower.joint_position[0], my_follower.joint_position[1],
                                     my_follower.joint_position[2], my_follower.joint_position[3],
                                     my_follower.joint_position[4], my_follower.joint_position[5]);
   
    for (int j = 0; j < 7; j++) {
      Eigen::Vector3f w;
      w = mat2.col(j+1).transpose();
      ctp[j*3+0] = w[0];
      ctp[j*3+1] = w[1];
      ctp[j*3+2] = w[2];
      for (int k = 0; k < 14; k++) {
        Eigen::Vector3f p(my_follower.human_sphere[k*4+0], my_follower.human_sphere[k*4+1], my_follower.human_sphere[k*4+2]);
        local_val = dist_v(w, p) - my_follower.robot_spheres[j] - my_follower.human_sphere[k*4+3];
        if (local_val < min_dist[j]) {
          min_dist[j] = local_val;
          spheres_dist[j] = my_follower.robot_spheres[j] + my_follower.human_sphere[k*4+3];
        }
      }
	    if (smallest_dist > min_dist[j]) smallest_dist = min_dist[j];
	  }

    double* solutions;
    if (smallest_dist >= 0.00) {
      // Goal reference position 
      for (int i = 0; i < 6; i++)  currentState_targetValue[i] = my_follower.joint_position[i];
      for (int i = 0; i < 6; i++)  currentState_targetValue[i+6] = my_follower.goal[i];
      for (int i = 0; i < 56; i++) currentState_targetValue[i+12] = my_follower.human_sphere[i];
      for (int i = 0; i < 3; i++) currentState_targetValue[i+68] = my_follower.from_high[24+i];
      msg.data = 1;
      // PauseLow.publish(msg);
      solutions = myMpcSolver.solve_mpc(currentState_targetValue, tracking_goal);
      msg.data = 0;
      // PauseLow.publish(msg);
    } else for (int i=0; i<8; i++) solutions[i] = 0;
    
    
    //******************* get_min_velocity **********************
    double max_vell[10] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

    Eigen::MatrixXf vell_mat = get_velocity(my_follower.joint_position[0], my_follower.joint_position[1], 
                                            my_follower.joint_position[2], my_follower.joint_position[3],
                                            my_follower.joint_position[4], my_follower.joint_position[5],
                                            solutions[0], solutions[1], solutions[2],
                                            solutions[3], solutions[4], solutions[5]);
    double max_linear_vell = 0;
    double temp_linear_vell = 0;
    for (int k=0; k<7; k++) {
      ctv[k*3+0] = vell_mat.coeff(k*3+0,0);
      ctv[k*3+1] = vell_mat.coeff(k*3+1,0);
      ctv[k*3+2] = vell_mat.coeff(k*3+2,0);
      temp_linear_vell = sqrt(vell_mat.coeff(k*3 + 0,0)*vell_mat.coeff(k*3 + 0,0) + vell_mat.coeff(k*3 + 1,0)*vell_mat.coeff(k*3 + 1,0) + vell_mat.coeff(k*3 + 2,0)*vell_mat.coeff(k*3 + 2,0));
      
      max_vell[k] = temp_linear_vell;
      if (max_linear_vell < temp_linear_vell) max_linear_vell = temp_linear_vell;
    }
       //*********************** Apply control ********************************
	  double lin_vell_limit_arr[7] = {10, 10, 10, 10, 10, 10, 10};
    double lin_vell_scale = 10;
    double alpha = 0.85; //v_mpc_lim = alpha^2.*((min_dist_arr+spheres_dist).^2-spheres_dist.^2);

    double sqrt_temp_value = 0.00;
    for (int i=0; i<6; i++) {
      sqrt_temp_value = (min_dist[i]+spheres_dist[i])*(min_dist[i]+spheres_dist[i])-spheres_dist[i]*spheres_dist[i];

      if (sqrt_temp_value<0) lin_vell_limit_arr[i] = 0.00000000000000;
      else lin_vell_limit_arr[i] = alpha*sqrt(sqrt_temp_value);

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
    for (int i = 0; i < 21; i++) joint_vel_values.data.push_back(ctp[i]);
    printf("%f,%f,%f", ctp[0],ctp[1],ctp[2]);
    my_follower.SendVelocity(joint_vel_values);
    
    // save data
    if (myfile.is_open())
	  {
      // Cartesian positions of spheres on robot:
      myfile <<ctp[0]<<" "<<ctp[1]<<" "<<ctp[2]<<" "<<ctp[3]<<" "<<ctp[4]<<" "<<ctp[5]<<" "<<ctp[6]<<" "<<ctp[7]<<" ";
      myfile <<ctp[8]<<" "<<ctp[9]<<" "<<ctp[10]<<" " <<ctp[11]<< " " <<ctp[12]<<" " <<ctp[13]<<" " <<ctp[14]<<" ";
      myfile <<ctp[15]<<" "<<ctp[16]<<" "<<ctp[17]<<" "<<ctp[18]<<" " <<ctp[19]<<" "<<ctp[20]<<" ";
      // Positions of human spheres:
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
      // joint angular positions 
      myfile <<my_follower.joint_position[0]<<" "<<my_follower.joint_position[1]<<" "<<my_follower.joint_position[2]<<" ";
      myfile <<my_follower.joint_position[3]<<" "<<my_follower.joint_position[4]<<" "<<my_follower.joint_position[5]<<" ";
      // joint angular goal positions
      myfile <<my_follower.goal[0]<<" "<<my_follower.goal[1]<<" "<<my_follower.goal[2]<<" ";
      myfile <<my_follower.goal[3]<<" "<<my_follower.goal[4]<<" "<<my_follower.goal[5]<<" ";
      // joint angular speed
      myfile <<my_follower.joint_speed[0]<<" "<<my_follower.joint_speed[1]<<" "<<my_follower.joint_speed[2]<<" ";
      myfile <<my_follower.joint_speed[3]<<" "<<my_follower.joint_speed[4]<<" "<<my_follower.joint_speed[5]<<" ";
      // low level controller solutions
      myfile <<solutions[0]<<" "<<solutions[1]<<" "<<solutions[2]<<" "<<solutions[3]<<" ";
      myfile <<solutions[4]<<" "<<solutions[5]<<" "<<solutions[6]<<" "<<solutions[7]<<" "<<solutions[8]<<" ";
      // minimum distances from spheres on robot to human spheres
      myfile <<min_dist[0]<<" "<<min_dist[1]<<" "<<min_dist[2]<<" "<<min_dist[3]<<" "<<min_dist[4]<<" ";
      myfile <<min_dist[5]<<" "<<min_dist[6]<<" ";
      // smallest distance and linear vel scale values:
      myfile <<smallest_dist<<" "<<lin_vell_scale<<" ";
      // high level controller: 
      // 0-12: solutions from high level controller
      // 12-24: joint positions and goal
      // 24-27: cartesian positions of the end effector
      // 27-30: time, KKT, inv.marker
      // 30: max distance to goal position
      myfile <<my_follower.from_high[0]<<" "<<my_follower.from_high[1]<<" "<<my_follower.from_high[2]<<" ";
      myfile <<my_follower.from_high[3]<<" "<<my_follower.from_high[4]<<" "<<my_follower.from_high[5]<<" "<<my_follower.from_high[6]<<" ";
      myfile <<my_follower.from_high[7]<<" "<<my_follower.from_high[8]<<" "<<my_follower.from_high[9]<<" "<<my_follower.from_high[10]<<" ";
      myfile <<my_follower.from_high[11]<<" "<<my_follower.from_high[12]<<" "<<my_follower.from_high[13]<<" "<<my_follower.from_high[14]<<" ";
      myfile <<my_follower.from_high[15]<<" "<<my_follower.from_high[16]<<" "<<my_follower.from_high[17]<<" "<<my_follower.from_high[18]<<" ";
      myfile <<my_follower.from_high[19]<<" "<<my_follower.from_high[20]<<" "<<my_follower.from_high[21]<<" "<<my_follower.from_high[22]<<" ";
      myfile <<my_follower.from_high[23]<<" "<<my_follower.from_high[24]<<" "<<my_follower.from_high[25]<<" "<<my_follower.from_high[26]<<" ";
      myfile <<my_follower.from_high[27]<<" "<<my_follower.from_high[28]<<" "<<my_follower.from_high[29]<<" ";
      myfile <<ctv[0]<<" "<<ctv[1]<<" "<<ctv[2]<<" "<<ctv[3]<<" "<<ctv[4]<<" "<<ctv[5]<<" "<<ctv[6]<<" "<<ctv[7]<<" "<<ctv[8]<<" "<<ctv[9]<<" ";
      myfile <<ctv[10]<<" "<<ctv[11]<<" "<<ctv[12]<<" "<<ctv[13]<<" "<<ctv[14]<<" "<<ctv[15]<<" "<<ctv[16]<<" "<<ctv[17]<<" "<<ctv[18]<<" ";
      myfile <<ctv[19]<<" "<<ctv[20]<<" ";
      myfile <<my_follower.tp_vel_vrep[0]<<" "<<my_follower.tp_vel_vrep[1]<<" "<<my_follower.tp_vel_vrep[2]<<" ";
      myfile <<my_follower.tp_vel_vrep[3]<<" "<<my_follower.tp_vel_vrep[4]<<" "<<my_follower.tp_vel_vrep[5]<<" "<<my_follower.tp_vel_vrep[6]<<" ";
      myfile <<my_follower.tp_vel_vrep[7]<<" "<<my_follower.tp_vel_vrep[8]<<" "<<my_follower.tp_vel_vrep[9]<<" "<<my_follower.tp_vel_vrep[10]<<" ";
      myfile <<my_follower.tp_vel_vrep[11]<<" "<<my_follower.tp_vel_vrep[12]<<" "<<my_follower.tp_vel_vrep[13]<<" "<<my_follower.tp_vel_vrep[14]<<" ";
      myfile <<my_follower.tp_vel_vrep[15]<<" "<<my_follower.tp_vel_vrep[16]<<" "<<my_follower.tp_vel_vrep[17]<<" "<<my_follower.tp_vel_vrep[18]<<" ";
      myfile <<my_follower.tp_vel_vrep[19]<<" "<<my_follower.tp_vel_vrep[20]<<" "<<my_follower.tp_vel_vrep[21]<<" "<<my_follower.tp_vel_vrep[22]<<" ";
      myfile <<my_follower.tp_vel_vrep[23]<<" "<<my_follower.tp_vel_vrep[24]<<" "<<my_follower.tp_vel_vrep[25]<<" "<<my_follower.tp_vel_vrep[26]<<" ";
      myfile <<my_follower.tp_vel_vrep[27]<<" "<<my_follower.tp_vel_vrep[28]<<" "<<my_follower.tp_vel_vrep[29]<<" ";
      myfile <<lin_vell_limit_arr[0]<<" "<<lin_vell_limit_arr[1]<<" "<<lin_vell_limit_arr[2]<<" ";
      myfile <<lin_vell_limit_arr[3]<<" "<<lin_vell_limit_arr[4]<<" "<<lin_vell_limit_arr[5]<<" ";
      myfile <<lin_vell_limit_arr[6]<<" "<<endl;
    
    } 
    else cout << "Unable to open file";
    ros::spinOnce();
    loop_rate.sleep();
  }
  // myfile.close();
  return 0;
}


#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Float64MultiArray.h"
#include <math.h>

double previos_sphere[56]= {0.0,   0.0,   0.0,   0.0,
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

float point_array_temp[56];
float point_array[56];

float sphere_radi[14]={0.5510,0.6010,0.5010,0.5010,0.5010,0.5010,0.5010,0.5010,0.4510,0.4510,0.4810,0.4810,0.5510,0.6010};

void chatterCallback(const std_msgs::Float64MultiArray msg)
{
  for (int i = 0; i<14; i++){
    point_array_temp[i*4] = msg.data[i*3];
    point_array_temp[i*4+1] = msg.data[i*3+1];
    point_array_temp[i*4+2] = msg.data[i*3+2];
    //vrep diff:
    point_array_temp[i*4+3] = sphere_radi[i]-0.43;
  }
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "human_control");
  ros::NodeHandle nodeHandle("~");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe<std_msgs::Float64MultiArray>("/Obstacle/human_spheres", 1, chatterCallback);
  ros:: Publisher chatter_low = n.advertise<std_msgs::Float64MultiArray>("/Obstacle/mpc_low_spheres", 1);
  ros:: Publisher chatter_high = n.advertise<std_msgs::Float64MultiArray>("/Obstacle/mpc_high_spheres", 1);

  while (ros::ok())
  {
    for (int i = 0; i<14; i++) {
      point_array[i*4] = point_array_temp[i*4]+1; // x offset
      point_array[i*4+1] = point_array_temp[i*4+1]+0.5; // y offset
      point_array[i*4+2] = point_array_temp[i*4+2]-1.2; // z offset
      point_array[i*4+3] = point_array_temp[i*4+3];
    }
    // ROS_INFO("Np11 %.3f %.3f %.3f %.3f", point_array[44], point_array[45], point_array[46], point_array[47]);
    // prepare to send commands
    std_msgs::Float64MultiArray obstacle_data;
    obstacle_data.data.clear();
    // printf( "obstacle %i = %f \n", 1, point_array[0]);
    for (int i = 0; i < 56; i++){
      printf( "obstacle %i = %f \n", i, point_array[i]);
      obstacle_data.data.push_back(point_array[i]);
    } 
    chatter_low.publish(obstacle_data);
    chatter_high.publish(obstacle_data);
    ros::spinOnce();
    // loop_rate.sleep();
  }
  ros::spin();
  return 0;
}


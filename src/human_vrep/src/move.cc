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
ros::Time start;
float point_array_temp[56];
float point_array[56];
float sphere_radi[]={  0.5510,   0.6010,   0.5010,   0.5010,   0.5010,   0.5010,  0.5010,
                              0.5010,    0.4510,   0.4510,   0.4810,   0.4810,   0.5510, 0.6010 };

void chatterCallback(const std_msgs::Float64MultiArray msg)
{
  for (int i = 0; i<14; i++){
    // printf("hey");
    point_array_temp[i*4] = msg.data[i*3];
    point_array_temp[i*4+1] = msg.data[i*3+1];
    point_array_temp[i*4+2] = msg.data[i*3+2];
    point_array_temp[i*4+3] = sphere_radi[i];
    // printf( "chatter obstacle %i = %f \n", 1, point_array[0]);
  }
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "human_control");
  ros::NodeHandle nodeHandle("~");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe<std_msgs::Float64MultiArray>("/humanRealPositions", 1, chatterCallback);
  start = ros::Time::now();
  ros:: Publisher chatter_low = n.advertise<std_msgs::Float64MultiArray>("/vrep/my_ur5/mpc_low_spheres", 1);
  ros:: Publisher chatter_high = n.advertise<std_msgs::Float64MultiArray>("/vrep/my_ur5/mpc_high_spheres", 1);
  ros:: Publisher chatter_speed = n.advertise<std_msgs::Float64MultiArray>("/vrep/spheres_speed", 1);

  while (ros::ok())
  {
    for (int i = 0; i< 14; i++) {
	  point_array[i*4] = -(point_array_temp[i*4] + 1.000); // x offset
	  point_array[i*4+1] = -(point_array_temp[i*4+1] + 0.500); // y offset
	  point_array[i*4+2] = (point_array_temp[i*4+2] - 1.200); // z offset
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

    // define human_spheres velocity
    ros::Time end = ros::Time::now();
    ros::Duration etr = end-start;
    float elapsed_time = etr.toSec();
    std_msgs::Float64MultiArray speed_data;
    speed_data.data.clear();
    for (int i = 0; i < 56; i++) {
         velocity_sphere[i] = (point_array[i] - previos_sphere[i])/elapsed_time;
        //  if (isinf(velocity_sphere[i])) velocity_sphere[i] = 0.0000;
	 if (velocity_sphere[i]!=velocity_sphere[i]) velocity_sphere[i] = 0.0000;
         previos_sphere[i] = point_array[i];
         speed_data.data.push_back(velocity_sphere[i]);
    }
    chatter_speed.publish(speed_data);
    start = end;
    ros::spinOnce();
    // loop_rate.sleep();
  }
  ros::spin();
  return 0;
}


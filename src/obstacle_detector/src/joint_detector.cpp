#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/JointState.h"
#include <std_msgs/Float64MultiArray.h>

ros::Publisher chatter_pub;
ros::Publisher chatter_pub_high;

void chatterCallback(const std_msgs::Float64MultiArray msg)
{
    chatter_pub.publish(msg);
    chatter_pub_high.publish(msg);
}

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "joint_detector");
  ros::NodeHandle n;

  chatter_pub = n.advertise<std_msgs::Float64MultiArray>("/my_gen3/joint_states_low", 1);
  chatter_pub_high = n.advertise<std_msgs::Float64MultiArray>("/my_ur5/joint_states_high", 1);

  ros::Subscriber sub = n.subscribe<std_msgs::Float64MultiArray>("/jointStates", 1, chatterCallback);
  ros::spin();

  return 0;
}


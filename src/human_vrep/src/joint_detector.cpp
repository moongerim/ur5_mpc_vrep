#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/JointState.h"

ros::Publisher chatter_pub;
ros::Publisher chatter_pub_high;

void chatterCallback(const sensor_msgs::JointState msg)
{
    chatter_pub.publish(msg);
    chatter_pub_high.publish(msg);
}

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "joint_detector");
  ros::NodeHandle n;

  chatter_pub = n.advertise<sensor_msgs::JointState>("/joint_states_low", 1);
  chatter_pub_high = n.advertise<sensor_msgs::JointState>("/joint_states_high", 1);

  ros::Subscriber sub = n.subscribe<sensor_msgs::JointState>("/joint_states", 1, chatterCallback);
  ros::spin();

  return 0;
}


#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <std_srvs/Empty.h>
std_srvs::Empty emptySrv;
ros::ServiceClient pauseGazebo;
ros::ServiceClient unpauseGazebo;

/**
 * This tutorial demonstrates simple receipt of messages over the ROS system.
 */
int low_state = 0;
int high_state = 0;

void CallbackLow(const std_msgs::Int32::ConstPtr& msg)
{
  ROS_INFO("Low says: [%i]", msg->data);
  if (msg->data > 0) low_state = 1;
  if (msg->data == 0) low_state = 0;
  if (low_state == 0 and high_state == 0) { 
      ROS_INFO("Unpause");
      unpauseGazebo.call(emptySrv);
  }
  if (low_state)  { 
      ROS_INFO("Pause gazebo");
      pauseGazebo.call(emptySrv);
  }
}

void CallbackHigh(const std_msgs::Int32::ConstPtr& msg)
{
  if (msg->data > 0) low_state = 1;
  if (msg->data == 0) low_state = 0;
  if (low_state == 0 and high_state == 0) { 
      ROS_INFO("Unpause");
      unpauseGazebo.call(emptySrv);
  }
  if (high_state) { 
      ROS_INFO("Pause gazebo");
      pauseGazebo.call(emptySrv);
  }
}

int main(int argc, char **argv)
{
  /**
   * The ros::init() function needs to see argc and argv so that it can perform
   * any ROS arguments and name remapping that were provided at the command line. For programmatic
   * remappings you can use a different version of init() which takes remappings
   * directly, but for most command-line programs, passing argc and argv is the easiest
   * way to do it.  The third argument to init() is the name of the node.
   *
   * You must call one of the versions of ros::init() before using any other
   * part of the ROS system.
   */
  ros::init(argc, argv, "listener");

  /**
   * NodeHandle is the main access point to communications with the ROS system.
   * The first NodeHandle constructed will fully initialize this node, and the last
   * NodeHandle destructed will close down the node.
   */
  ros::NodeHandle n;

  pauseGazebo = n.serviceClient<std_srvs::Empty>("/gazebo/pause_physics");
  unpauseGazebo = n.serviceClient<std_srvs::Empty>("/gazebo/unpause_physics");

  /**
   * The subscribe() call is how you tell ROS that you want to receive messages
   * on a given topic.  This invokes a call to the ROS
   * master node, which keeps a registry of who is publishing and who
   * is subscribing.  Messages are passed to a callback function, here
   * called chatterCallback.  subscribe() returns a Subscriber object that you
   * must hold on to until you want to unsubscribe.  When all copies of the Subscriber
   * object go out of scope, this callback will automatically be unsubscribed from
   * this topic.
   *
   * The second parameter to the subscribe() function is the size of the message
   * queue.  If messages are arriving faster than they are being processed, this
   * is the number of messages that will be buffered up before beginning to throw
   * away the oldest ones.
   */
  ros::Subscriber sublow = n.subscribe("gazebo/pauseLow", 1000, CallbackLow);
  ros::Subscriber subhigh = n.subscribe("gazebo/pauseHigh", 1000, CallbackHigh);

  /**
   * ros::spin() will enter a loop, pumping callbacks.  With this version, all
   * callbacks will be called from within this thread (the main one).  ros::spin()
   * will exit when Ctrl-C is pressed, or the node is shutdown by the master.
   */

  /*
  pauseGazebo.call(emptySrv);
  //here 
  unpauseGazebo.call(emptySrv);
  */

  ros::spin();

  return 0;
}


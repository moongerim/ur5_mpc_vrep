#include "ros/ros.h"
#include "std_msgs/String.h"
#include "gazebo_msgs/ModelStates.h"
#include "std_msgs/Float64MultiArray.h"
#include <math.h>

ros::Publisher chatter_low;
ros::Publisher chatter_high;
ros::Publisher chatter_speed;
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


void chatterCallback(const gazebo_msgs::ModelStates msg)
{
  std::string hum1("human_1");
  std::string hum2("human_2");
  std::string hum3("human_3");
  std::string hum4("human_4");
  std::string hum5("human_5");
  std::string hum6("human_6");
  std::string hum7("human_7");
  std::string hum8("human_8");
  std::string hum9("human_9");
  std::string hum10("human_10");
  std::string hum11("human_11");
  std::string hum12("human_12");
  std::string hum13("human_13");
  std::string hum14("human_14");
  float point_array[56];

//  float sphere_radi[]={   0.1500,   0.2500,   0.1500,   0.1500,   0.1500,   0.1500,  0.1500,
//			    0.1500,  0.1000,   0.1000,   0.1300,   0.1300,   0.2000, 0.2500 };

  float sphere_radi[]={  0.5510,   0.6010,   0.5010,   0.5010,   0.5010,   0.5010,  0.5010,
                              0.5010,    0.4510,   0.4510,   0.4810,   0.4810,   0.5510, 0.6010 };

  for (int i = 0; i<msg.name.size(); i++) { 
  	//ROS_INFO("%s, x:%f, y:%f, z:%f", msg.name[i].c_str(), msg.pose[i].position.x, msg.pose[i].position.y, msg.pose[i].position.z);
	
	if (hum1.compare(msg.name[i].c_str()) == 0) {
		// human 1
		point_array[0] = msg.pose[i].position.x; point_array[1] = msg.pose[i].position.y;
		point_array[2] = msg.pose[i].position.z; point_array[3] = sphere_radi[0];
        //ROS_INFO("human 1");
	}
	else if (hum2.compare(msg.name[i].c_str()) == 0) {
		// human 2
		point_array[4] = msg.pose[i].position.x; point_array[5] = msg.pose[i].position.y;
		point_array[6] = msg.pose[i].position.z; point_array[7] = sphere_radi[1];
        //ROS_INFO("human 2");
	}
	else if (hum3.compare(msg.name[i].c_str()) == 0) {
		// human 3
		point_array[8] = msg.pose[i].position.x; point_array[9] = msg.pose[i].position.y;
		point_array[10] = msg.pose[i].position.z; point_array[11] = sphere_radi[2];
        //ROS_INFO("human 3");
	}
	else if (hum4.compare(msg.name[i].c_str()) == 0) {
		// human 4
		point_array[12] = msg.pose[i].position.x; point_array[13] = msg.pose[i].position.y;
		point_array[14] = msg.pose[i].position.z; point_array[15] = sphere_radi[3];
        //ROS_INFO("human 4");
	}
	else if (hum5.compare(msg.name[i].c_str()) == 0) {
		// human 5
		point_array[16] = msg.pose[i].position.x; point_array[17] = msg.pose[i].position.y;
		point_array[18] = msg.pose[i].position.z; point_array[19] = sphere_radi[4];
        //ROS_INFO("human 5");
	}
	else if (hum6.compare(msg.name[i].c_str()) == 0) {
		// human 6
		point_array[20] = msg.pose[i].position.x; point_array[21] = msg.pose[i].position.y;
		point_array[22] = msg.pose[i].position.z; point_array[23] = sphere_radi[5];
        //ROS_INFO("human 6");
	}
	else if (hum7.compare(msg.name[i].c_str()) == 0) {
		// human 7
		point_array[24] = msg.pose[i].position.x; point_array[25] = msg.pose[i].position.y;
		point_array[26] = msg.pose[i].position.z; point_array[27] = sphere_radi[6];
        //ROS_INFO("human 7");
	}
	else if (hum8.compare(msg.name[i].c_str()) == 0) {
		// human 8
		point_array[28] = msg.pose[i].position.x; point_array[29] = msg.pose[i].position.y;
		point_array[30] = msg.pose[i].position.z; point_array[31] = sphere_radi[7];
        //ROS_INFO("human 8");
	}
	else if (hum9.compare(msg.name[i].c_str()) == 0) {
		// human 9
		point_array[32] = msg.pose[i].position.x; point_array[33] = msg.pose[i].position.y;
		point_array[34] = msg.pose[i].position.z; point_array[35] = sphere_radi[8];
        //ROS_INFO("human 9");
	}
	else if (hum10.compare(msg.name[i].c_str()) == 0) {
		// human 10
		point_array[36] = msg.pose[i].position.x; point_array[37] = msg.pose[i].position.y;
		point_array[38] = msg.pose[i].position.z; point_array[39] = sphere_radi[9];
        //ROS_INFO("human 10");
	}
	else if (hum11.compare(msg.name[i].c_str()) == 0) {
		// human 11
		point_array[40] = msg.pose[i].position.x; point_array[41] = msg.pose[i].position.y;
		point_array[42] = msg.pose[i].position.z; point_array[43] = sphere_radi[10];
	}
	else if (hum12.compare(msg.name[i].c_str()) == 0) {
		// human 12
		point_array[44] = msg.pose[i].position.x; point_array[45] = msg.pose[i].position.y;
		point_array[46] = msg.pose[i].position.z; point_array[47] = sphere_radi[11];
        //ROS_INFO("human 12");
        // ROS_INFO("Sp11 %.3f %.3f %.3f %.3f", point_array[44], point_array[45], point_array[46], point_array[47]);
	}
	else if (hum13.compare(msg.name[i].c_str()) == 0) {
		// human 13
		point_array[48] = msg.pose[i].position.x; point_array[49] = msg.pose[i].position.y;
		point_array[50] = msg.pose[i].position.z; point_array[51] = sphere_radi[12];
        //ROS_INFO("human 13");
	}
	else if (hum14.compare(msg.name[i].c_str()) == 0) {
		// human 14
		point_array[52] = msg.pose[i].position.x; point_array[53] = msg.pose[i].position.y;
		point_array[54] = msg.pose[i].position.z; point_array[55] = sphere_radi[13];
        //ROS_INFO("human 14");
	}

  }


    for (int i = 0; i< 14; i++) {
	point_array[i*4] = -(point_array[i*4] + 1.000); // x offset
	point_array[i*4+1] = -(point_array[i*4+1] + 0.500); // y offset
	point_array[i*4+2] = (point_array[i*4+2] - 1.200); // z offset
    }
    // ROS_INFO("Np11 %.3f %.3f %.3f %.3f", point_array[44], point_array[45], point_array[46], point_array[47]);
    // prepare to send commands
    std_msgs::Float64MultiArray obstacle_data;
    obstacle_data.data.clear();
    for (int i = 0; i < 56; i++) obstacle_data.data.push_back(point_array[i]);

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
         if (isinf(velocity_sphere[i])) velocity_sphere[i] = 0.0000;
	 if (velocity_sphere[i]!=velocity_sphere[i]) velocity_sphere[i] = 0.0000;
         previos_sphere[i] = point_array[i];
         speed_data.data.push_back(velocity_sphere[i]);
    }
    chatter_speed.publish(speed_data);
    start = end;
   
}

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "obstacle_detector");
  ros::NodeHandle n;
  start = ros::Time::now();
  chatter_low = n.advertise<std_msgs::Float64MultiArray>("/vrep/my_ur5/mpc_low_spheres", 1);
  chatter_high = n.advertise<std_msgs::Float64MultiArray>("/vrep/my_ur5/mpc_high_spheres", 1);
  chatter_speed = n.advertise<std_msgs::Float64MultiArray>("/vrep/spheres_speed", 1);

  ros::Subscriber sub = n.subscribe<gazebo_msgs::ModelStates>("/gazebo/model_states", 1, chatterCallback);

  ros::spin();

  return 0;
}


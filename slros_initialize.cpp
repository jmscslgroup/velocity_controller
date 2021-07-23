#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "velocity_controller";

// For Block velocity_controller/Subscribe
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_velocity_controller_geometry_msgs_Twist> Sub_velocity_controller_10;

// For Block velocity_controller/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_velocity_controller_geometry_msgs_Twist> Sub_velocity_controller_31;

// For Block velocity_controller/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_velocity_controller_std_msgs_Float64> Sub_velocity_controller_35;

// For Block velocity_controller/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_velocity_controller_std_msgs_Float64> Pub_velocity_controller_3;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}


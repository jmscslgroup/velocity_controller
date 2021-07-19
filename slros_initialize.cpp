#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "velocity_controller";

// For Block velocity_controller/Subscribe2
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_velocity_controller_geometry_msgs_Twist> Sub_velocity_controller_51;

// For Block velocity_controller/Subscribe3
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_velocity_controller_geometry_msgs_Twist> Sub_velocity_controller_43;

// For Block velocity_controller/Subscribe4
SimulinkSubscriber<std_msgs::Float64, SL_Bus_velocity_controller_std_msgs_Float64> Sub_velocity_controller_44;

// For Block velocity_controller/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_velocity_controller_std_msgs_Float64> Pub_velocity_controller_50;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}


#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block velocity_controller/Subscribe
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_velocity_controller_geometry_msgs_Twist> Sub_velocity_controller_10;

// For Block velocity_controller/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_velocity_controller_geometry_msgs_Twist> Sub_velocity_controller_31;

// For Block velocity_controller/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_velocity_controller_std_msgs_Float64> Pub_velocity_controller_3;

void slros_node_init(int argc, char** argv);

#endif

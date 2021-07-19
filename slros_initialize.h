#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block velocity_controller/Subscribe2
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_velocity_controller_geometry_msgs_Twist> Sub_velocity_controller_51;

// For Block velocity_controller/Subscribe3
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_velocity_controller_geometry_msgs_Twist> Sub_velocity_controller_43;

// For Block velocity_controller/Subscribe4
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_velocity_controller_std_msgs_Float64> Sub_velocity_controller_44;

// For Block velocity_controller/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_velocity_controller_std_msgs_Float64> Pub_velocity_controller_50;

void slros_node_init(int argc, char** argv);

#endif

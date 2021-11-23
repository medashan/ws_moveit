

// This code goes with the interactivity tutorial

#include <ros/ros.h>
#include "interactivity/interactive_robot.h"
#include "interactivity/pose_string.h"

void help()
{
  ROS_INFO("#####################################################");
  ROS_INFO("RVIZ SETUP");
  ROS_INFO("----------");
  ROS_INFO("  Global options:");
  ROS_INFO("    FixedFrame = /panda_link0");
  ROS_INFO("  Add a RobotState display:");
  ROS_INFO("    RobotDescription = robot_description");
  ROS_INFO("    RobotStateTopic  = interactive_robot_state");
  ROS_INFO("  Add a Marker display:");
  ROS_INFO("    MarkerTopic = interactive_robot_markers");
  ROS_INFO("  Add an InteractiveMarker display:");
  ROS_INFO("    UpdateTopic = interactive_robot_imarkers/update");
  ROS_INFO("#####################################################");
}

void userCallback(InteractiveRobot& robot)
{
  ROS_INFO_STREAM("Robot position: " << PoseString(robot.robotState()->getGlobalLinkTransform("panda_link8")));
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "interactivity_node");
  ros::NodeHandle nh;

  InteractiveRobot robot;

  robot.setUserCallback(userCallback);

  help();

  ros::spin();

  ros::shutdown();
  return 0;
}

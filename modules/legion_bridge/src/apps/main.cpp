/**
 * @file    main.cpp
 * @author  dfyx-legion
 * @date    2024-01-04
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#include <iostream>
#include <signal.h>

#include "legion_bridge.h"

#if GLOG_ENABLE
#include <glog/logging.h>
#elif MDCLOG_ENABLE
#include <ara/log/logging.h>
#endif

#if ROS_ENABLE
#include <ros/ros.h>
#endif

#if ROS2_ENABLE
#include "rclcpp/rclcpp.hpp"
#endif

using namespace std;
using namespace legion::legion_bridge;

int main(int argc, char** argv) {
  std::string file_path = "./conf/legion_bridge/legion_bridge.json";
  system("mkdir -p log");
#if ROS_ENABLE
  ros::init(argc, argv, "legion_bridge");
#endif

#if ROS2_ENABLE
  rclcpp::init(argc, argv);
#endif

#if GLOG_ENABLE
  google::InitGoogleLogging(argv[0]);
#endif
  std::cout << "version: 6.1.6.0.20260408_b" << std::endl;
  LegionBridge* legion_bridge = new LegionBridge(file_path);
  legion_bridge->Init();
  legion_bridge->Join();
  return 1;
}
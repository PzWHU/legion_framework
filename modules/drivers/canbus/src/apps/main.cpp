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

#include "canbus.h"

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
using namespace legion::drivers;

int main(int argc, char** argv) {
  std::string file_path = "./conf/drivers/canbus/canbus.json";
  system("mkdir -p log");
#if ROS_ENABLE
  ros::init(argc, argv, "canbus");
#endif

#if ROS2_ENABLE
  rclcpp::init(argc, argv);
#endif

#if GLOG_ENABLE
  google::InitGoogleLogging(argv[0]);
#endif
  std::cout << "version: 6.1.5.0.20260415_b" << std::endl;
  Canbus* canbus = new Canbus(file_path);
  canbus->Init();
  canbus->Join();
  return 1;
}
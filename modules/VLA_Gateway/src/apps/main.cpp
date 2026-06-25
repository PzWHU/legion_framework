/**
 * @file    main.cpp
 * @brief   VLA_Gateway 入口
 */

#include <csignal>
#include <chrono>
#include <iostream>
#include <string>
#include <thread>

#include "apps/vla_gateway.h"
#include "rclcpp/rclcpp.hpp"

namespace {
volatile std::sig_atomic_t g_shutdown = 0;

void SignalHandler(int /*sig*/) { g_shutdown = 1; }
}  // namespace

int main(int argc, char** argv) {
  std::signal(SIGINT, SignalHandler);
  std::signal(SIGTERM, SignalHandler);

  rclcpp::init(argc, argv);

  std::string config_path = "./conf/vla_gateway.json";
  if (argc > 1) {
    config_path = argv[1];
  }

  legion::vla_gateway::VlaGateway app(config_path);
  app.Init();

  RCLCPP_INFO(rclcpp::get_logger("vla_gateway"),
              "VLA_Gateway started, config: %s", config_path.c_str());

  while (rclcpp::ok() && g_shutdown == 0) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }

  app.Join();
  rclcpp::shutdown();
  return 0;
}

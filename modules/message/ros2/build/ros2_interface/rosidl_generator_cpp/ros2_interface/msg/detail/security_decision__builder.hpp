// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/SecurityDecision.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/security_decision__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_SecurityDecision_drivingmode_report
{
public:
  explicit Init_SecurityDecision_drivingmode_report(::ros2_interface::msg::SecurityDecision & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::SecurityDecision drivingmode_report(::ros2_interface::msg::SecurityDecision::_drivingmode_report_type arg)
  {
    msg_.drivingmode_report = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::SecurityDecision msg_;
};

class Init_SecurityDecision_park_command
{
public:
  explicit Init_SecurityDecision_park_command(::ros2_interface::msg::SecurityDecision & msg)
  : msg_(msg)
  {}
  Init_SecurityDecision_drivingmode_report park_command(::ros2_interface::msg::SecurityDecision::_park_command_type arg)
  {
    msg_.park_command = std::move(arg);
    return Init_SecurityDecision_drivingmode_report(msg_);
  }

private:
  ::ros2_interface::msg::SecurityDecision msg_;
};

class Init_SecurityDecision_trajectory_limit_command
{
public:
  explicit Init_SecurityDecision_trajectory_limit_command(::ros2_interface::msg::SecurityDecision & msg)
  : msg_(msg)
  {}
  Init_SecurityDecision_park_command trajectory_limit_command(::ros2_interface::msg::SecurityDecision::_trajectory_limit_command_type arg)
  {
    msg_.trajectory_limit_command = std::move(arg);
    return Init_SecurityDecision_park_command(msg_);
  }

private:
  ::ros2_interface::msg::SecurityDecision msg_;
};

class Init_SecurityDecision_change_lane_command
{
public:
  explicit Init_SecurityDecision_change_lane_command(::ros2_interface::msg::SecurityDecision & msg)
  : msg_(msg)
  {}
  Init_SecurityDecision_trajectory_limit_command change_lane_command(::ros2_interface::msg::SecurityDecision::_change_lane_command_type arg)
  {
    msg_.change_lane_command = std::move(arg);
    return Init_SecurityDecision_trajectory_limit_command(msg_);
  }

private:
  ::ros2_interface::msg::SecurityDecision msg_;
};

class Init_SecurityDecision_brake_report
{
public:
  explicit Init_SecurityDecision_brake_report(::ros2_interface::msg::SecurityDecision & msg)
  : msg_(msg)
  {}
  Init_SecurityDecision_change_lane_command brake_report(::ros2_interface::msg::SecurityDecision::_brake_report_type arg)
  {
    msg_.brake_report = std::move(arg);
    return Init_SecurityDecision_change_lane_command(msg_);
  }

private:
  ::ros2_interface::msg::SecurityDecision msg_;
};

class Init_SecurityDecision_warning_command
{
public:
  explicit Init_SecurityDecision_warning_command(::ros2_interface::msg::SecurityDecision & msg)
  : msg_(msg)
  {}
  Init_SecurityDecision_brake_report warning_command(::ros2_interface::msg::SecurityDecision::_warning_command_type arg)
  {
    msg_.warning_command = std::move(arg);
    return Init_SecurityDecision_brake_report(msg_);
  }

private:
  ::ros2_interface::msg::SecurityDecision msg_;
};

class Init_SecurityDecision_header
{
public:
  Init_SecurityDecision_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecurityDecision_warning_command header(::ros2_interface::msg::SecurityDecision::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SecurityDecision_warning_command(msg_);
  }

private:
  ::ros2_interface::msg::SecurityDecision msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::SecurityDecision>()
{
  return ros2_interface::msg::builder::Init_SecurityDecision_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__SECURITY_DECISION__BUILDER_HPP_

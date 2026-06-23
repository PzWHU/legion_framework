// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TrajectoryLimitCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/trajectory_limit_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TrajectoryLimitCommand_kappa_limit
{
public:
  explicit Init_TrajectoryLimitCommand_kappa_limit(::ros2_interface::msg::TrajectoryLimitCommand & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TrajectoryLimitCommand kappa_limit(::ros2_interface::msg::TrajectoryLimitCommand::_kappa_limit_type arg)
  {
    msg_.kappa_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryLimitCommand msg_;
};

class Init_TrajectoryLimitCommand_kappa_limit_enable
{
public:
  explicit Init_TrajectoryLimitCommand_kappa_limit_enable(::ros2_interface::msg::TrajectoryLimitCommand & msg)
  : msg_(msg)
  {}
  Init_TrajectoryLimitCommand_kappa_limit kappa_limit_enable(::ros2_interface::msg::TrajectoryLimitCommand::_kappa_limit_enable_type arg)
  {
    msg_.kappa_limit_enable = std::move(arg);
    return Init_TrajectoryLimitCommand_kappa_limit(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryLimitCommand msg_;
};

class Init_TrajectoryLimitCommand_speed_limit
{
public:
  explicit Init_TrajectoryLimitCommand_speed_limit(::ros2_interface::msg::TrajectoryLimitCommand & msg)
  : msg_(msg)
  {}
  Init_TrajectoryLimitCommand_kappa_limit_enable speed_limit(::ros2_interface::msg::TrajectoryLimitCommand::_speed_limit_type arg)
  {
    msg_.speed_limit = std::move(arg);
    return Init_TrajectoryLimitCommand_kappa_limit_enable(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryLimitCommand msg_;
};

class Init_TrajectoryLimitCommand_speed_limit_enable
{
public:
  Init_TrajectoryLimitCommand_speed_limit_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryLimitCommand_speed_limit speed_limit_enable(::ros2_interface::msg::TrajectoryLimitCommand::_speed_limit_enable_type arg)
  {
    msg_.speed_limit_enable = std::move(arg);
    return Init_TrajectoryLimitCommand_speed_limit(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryLimitCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TrajectoryLimitCommand>()
{
  return ros2_interface::msg::builder::Init_TrajectoryLimitCommand_speed_limit_enable();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_LIMIT_COMMAND__BUILDER_HPP_

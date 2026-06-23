// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Command_target_switch
{
public:
  explicit Init_Command_target_switch(::ros2_interface::msg::Command & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Command target_switch(::ros2_interface::msg::Command::_target_switch_type arg)
  {
    msg_.target_switch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Command msg_;
};

class Init_Command_target_id
{
public:
  explicit Init_Command_target_id(::ros2_interface::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_target_switch target_id(::ros2_interface::msg::Command::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_Command_target_switch(msg_);
  }

private:
  ::ros2_interface::msg::Command msg_;
};

class Init_Command_target_module
{
public:
  Init_Command_target_module()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_target_id target_module(::ros2_interface::msg::Command::_target_module_type arg)
  {
    msg_.target_module = std::move(arg);
    return Init_Command_target_id(msg_);
  }

private:
  ::ros2_interface::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Command>()
{
  return ros2_interface::msg::builder::Init_Command_target_module();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMMAND__BUILDER_HPP_

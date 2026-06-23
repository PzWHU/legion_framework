// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/CommCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMM_COMMAND__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__COMM_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/comm_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_CommCommand_commands
{
public:
  explicit Init_CommCommand_commands(::ros2_interface::msg::CommCommand & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::CommCommand commands(::ros2_interface::msg::CommCommand::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::CommCommand msg_;
};

class Init_CommCommand_self_id
{
public:
  explicit Init_CommCommand_self_id(::ros2_interface::msg::CommCommand & msg)
  : msg_(msg)
  {}
  Init_CommCommand_commands self_id(::ros2_interface::msg::CommCommand::_self_id_type arg)
  {
    msg_.self_id = std::move(arg);
    return Init_CommCommand_commands(msg_);
  }

private:
  ::ros2_interface::msg::CommCommand msg_;
};

class Init_CommCommand_name
{
public:
  explicit Init_CommCommand_name(::ros2_interface::msg::CommCommand & msg)
  : msg_(msg)
  {}
  Init_CommCommand_self_id name(::ros2_interface::msg::CommCommand::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CommCommand_self_id(msg_);
  }

private:
  ::ros2_interface::msg::CommCommand msg_;
};

class Init_CommCommand_header
{
public:
  Init_CommCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommCommand_name header(::ros2_interface::msg::CommCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CommCommand_name(msg_);
  }

private:
  ::ros2_interface::msg::CommCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::CommCommand>()
{
  return ros2_interface::msg::builder::Init_CommCommand_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMM_COMMAND__BUILDER_HPP_

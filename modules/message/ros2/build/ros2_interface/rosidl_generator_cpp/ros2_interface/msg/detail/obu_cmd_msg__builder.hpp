// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ObuCmdMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBU_CMD_MSG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBU_CMD_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/obu_cmd_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ObuCmdMsg_obu_cmd_list
{
public:
  explicit Init_ObuCmdMsg_obu_cmd_list(::ros2_interface::msg::ObuCmdMsg & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ObuCmdMsg obu_cmd_list(::ros2_interface::msg::ObuCmdMsg::_obu_cmd_list_type arg)
  {
    msg_.obu_cmd_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ObuCmdMsg msg_;
};

class Init_ObuCmdMsg_name
{
public:
  explicit Init_ObuCmdMsg_name(::ros2_interface::msg::ObuCmdMsg & msg)
  : msg_(msg)
  {}
  Init_ObuCmdMsg_obu_cmd_list name(::ros2_interface::msg::ObuCmdMsg::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ObuCmdMsg_obu_cmd_list(msg_);
  }

private:
  ::ros2_interface::msg::ObuCmdMsg msg_;
};

class Init_ObuCmdMsg_id
{
public:
  explicit Init_ObuCmdMsg_id(::ros2_interface::msg::ObuCmdMsg & msg)
  : msg_(msg)
  {}
  Init_ObuCmdMsg_name id(::ros2_interface::msg::ObuCmdMsg::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ObuCmdMsg_name(msg_);
  }

private:
  ::ros2_interface::msg::ObuCmdMsg msg_;
};

class Init_ObuCmdMsg_header
{
public:
  Init_ObuCmdMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObuCmdMsg_id header(::ros2_interface::msg::ObuCmdMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObuCmdMsg_id(msg_);
  }

private:
  ::ros2_interface::msg::ObuCmdMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ObuCmdMsg>()
{
  return ros2_interface::msg::builder::Init_ObuCmdMsg_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBU_CMD_MSG__BUILDER_HPP_

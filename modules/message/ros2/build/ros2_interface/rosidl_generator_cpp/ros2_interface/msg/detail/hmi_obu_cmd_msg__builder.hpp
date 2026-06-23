// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/HMIObuCmdMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_OBU_CMD_MSG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_OBU_CMD_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/hmi_obu_cmd_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_HMIObuCmdMsg_obu_cmd_list
{
public:
  explicit Init_HMIObuCmdMsg_obu_cmd_list(::ros2_interface::msg::HMIObuCmdMsg & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::HMIObuCmdMsg obu_cmd_list(::ros2_interface::msg::HMIObuCmdMsg::_obu_cmd_list_type arg)
  {
    msg_.obu_cmd_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::HMIObuCmdMsg msg_;
};

class Init_HMIObuCmdMsg_name
{
public:
  explicit Init_HMIObuCmdMsg_name(::ros2_interface::msg::HMIObuCmdMsg & msg)
  : msg_(msg)
  {}
  Init_HMIObuCmdMsg_obu_cmd_list name(::ros2_interface::msg::HMIObuCmdMsg::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_HMIObuCmdMsg_obu_cmd_list(msg_);
  }

private:
  ::ros2_interface::msg::HMIObuCmdMsg msg_;
};

class Init_HMIObuCmdMsg_id
{
public:
  explicit Init_HMIObuCmdMsg_id(::ros2_interface::msg::HMIObuCmdMsg & msg)
  : msg_(msg)
  {}
  Init_HMIObuCmdMsg_name id(::ros2_interface::msg::HMIObuCmdMsg::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_HMIObuCmdMsg_name(msg_);
  }

private:
  ::ros2_interface::msg::HMIObuCmdMsg msg_;
};

class Init_HMIObuCmdMsg_header
{
public:
  Init_HMIObuCmdMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HMIObuCmdMsg_id header(::ros2_interface::msg::HMIObuCmdMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HMIObuCmdMsg_id(msg_);
  }

private:
  ::ros2_interface::msg::HMIObuCmdMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::HMIObuCmdMsg>()
{
  return ros2_interface::msg::builder::Init_HMIObuCmdMsg_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_OBU_CMD_MSG__BUILDER_HPP_

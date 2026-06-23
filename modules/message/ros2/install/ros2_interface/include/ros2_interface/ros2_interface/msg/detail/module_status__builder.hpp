// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ModuleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__MODULE_STATUS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__MODULE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/module_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ModuleStatus_messages
{
public:
  explicit Init_ModuleStatus_messages(::ros2_interface::msg::ModuleStatus & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ModuleStatus messages(::ros2_interface::msg::ModuleStatus::_messages_type arg)
  {
    msg_.messages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ModuleStatus msg_;
};

class Init_ModuleStatus_status
{
public:
  explicit Init_ModuleStatus_status(::ros2_interface::msg::ModuleStatus & msg)
  : msg_(msg)
  {}
  Init_ModuleStatus_messages status(::ros2_interface::msg::ModuleStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ModuleStatus_messages(msg_);
  }

private:
  ::ros2_interface::msg::ModuleStatus msg_;
};

class Init_ModuleStatus_self_id
{
public:
  explicit Init_ModuleStatus_self_id(::ros2_interface::msg::ModuleStatus & msg)
  : msg_(msg)
  {}
  Init_ModuleStatus_status self_id(::ros2_interface::msg::ModuleStatus::_self_id_type arg)
  {
    msg_.self_id = std::move(arg);
    return Init_ModuleStatus_status(msg_);
  }

private:
  ::ros2_interface::msg::ModuleStatus msg_;
};

class Init_ModuleStatus_name
{
public:
  explicit Init_ModuleStatus_name(::ros2_interface::msg::ModuleStatus & msg)
  : msg_(msg)
  {}
  Init_ModuleStatus_self_id name(::ros2_interface::msg::ModuleStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ModuleStatus_self_id(msg_);
  }

private:
  ::ros2_interface::msg::ModuleStatus msg_;
};

class Init_ModuleStatus_header
{
public:
  Init_ModuleStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModuleStatus_name header(::ros2_interface::msg::ModuleStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ModuleStatus_name(msg_);
  }

private:
  ::ros2_interface::msg::ModuleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ModuleStatus>()
{
  return ros2_interface::msg::builder::Init_ModuleStatus_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__MODULE_STATUS__BUILDER_HPP_

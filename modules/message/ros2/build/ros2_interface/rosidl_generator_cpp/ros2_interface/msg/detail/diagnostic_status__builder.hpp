// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_STATUS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/diagnostic_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_DiagnosticStatus_values
{
public:
  explicit Init_DiagnosticStatus_values(::ros2_interface::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::DiagnosticStatus values(::ros2_interface::msg::DiagnosticStatus::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_hardware_id
{
public:
  explicit Init_DiagnosticStatus_hardware_id(::ros2_interface::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_values hardware_id(::ros2_interface::msg::DiagnosticStatus::_hardware_id_type arg)
  {
    msg_.hardware_id = std::move(arg);
    return Init_DiagnosticStatus_values(msg_);
  }

private:
  ::ros2_interface::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_message
{
public:
  explicit Init_DiagnosticStatus_message(::ros2_interface::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_hardware_id message(::ros2_interface::msg::DiagnosticStatus::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_DiagnosticStatus_hardware_id(msg_);
  }

private:
  ::ros2_interface::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_name
{
public:
  explicit Init_DiagnosticStatus_name(::ros2_interface::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_message name(::ros2_interface::msg::DiagnosticStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DiagnosticStatus_message(msg_);
  }

private:
  ::ros2_interface::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_level
{
public:
  explicit Init_DiagnosticStatus_level(::ros2_interface::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_name level(::ros2_interface::msg::DiagnosticStatus::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_DiagnosticStatus_name(msg_);
  }

private:
  ::ros2_interface::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_id
{
public:
  explicit Init_DiagnosticStatus_id(::ros2_interface::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_level id(::ros2_interface::msg::DiagnosticStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DiagnosticStatus_level(msg_);
  }

private:
  ::ros2_interface::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_header
{
public:
  Init_DiagnosticStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticStatus_id header(::ros2_interface::msg::DiagnosticStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticStatus_id(msg_);
  }

private:
  ::ros2_interface::msg::DiagnosticStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::DiagnosticStatus>()
{
  return ros2_interface::msg::builder::Init_DiagnosticStatus_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_STATUS__BUILDER_HPP_

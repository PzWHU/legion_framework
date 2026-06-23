// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/HMIDiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_STATUS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/hmi_diagnostic_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_HMIDiagnosticStatus_hardware_id
{
public:
  explicit Init_HMIDiagnosticStatus_hardware_id(::ros2_interface::msg::HMIDiagnosticStatus & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::HMIDiagnosticStatus hardware_id(::ros2_interface::msg::HMIDiagnosticStatus::_hardware_id_type arg)
  {
    msg_.hardware_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::HMIDiagnosticStatus msg_;
};

class Init_HMIDiagnosticStatus_message
{
public:
  explicit Init_HMIDiagnosticStatus_message(::ros2_interface::msg::HMIDiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_HMIDiagnosticStatus_hardware_id message(::ros2_interface::msg::HMIDiagnosticStatus::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_HMIDiagnosticStatus_hardware_id(msg_);
  }

private:
  ::ros2_interface::msg::HMIDiagnosticStatus msg_;
};

class Init_HMIDiagnosticStatus_name
{
public:
  explicit Init_HMIDiagnosticStatus_name(::ros2_interface::msg::HMIDiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_HMIDiagnosticStatus_message name(::ros2_interface::msg::HMIDiagnosticStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_HMIDiagnosticStatus_message(msg_);
  }

private:
  ::ros2_interface::msg::HMIDiagnosticStatus msg_;
};

class Init_HMIDiagnosticStatus_level
{
public:
  explicit Init_HMIDiagnosticStatus_level(::ros2_interface::msg::HMIDiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_HMIDiagnosticStatus_name level(::ros2_interface::msg::HMIDiagnosticStatus::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_HMIDiagnosticStatus_name(msg_);
  }

private:
  ::ros2_interface::msg::HMIDiagnosticStatus msg_;
};

class Init_HMIDiagnosticStatus_id
{
public:
  Init_HMIDiagnosticStatus_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HMIDiagnosticStatus_level id(::ros2_interface::msg::HMIDiagnosticStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_HMIDiagnosticStatus_level(msg_);
  }

private:
  ::ros2_interface::msg::HMIDiagnosticStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::HMIDiagnosticStatus>()
{
  return ros2_interface::msg::builder::Init_HMIDiagnosticStatus_id();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_STATUS__BUILDER_HPP_

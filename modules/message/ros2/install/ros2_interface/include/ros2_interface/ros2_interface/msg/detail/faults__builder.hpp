// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Faults.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__FAULTS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__FAULTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/faults__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Faults_faults
{
public:
  explicit Init_Faults_faults(::ros2_interface::msg::Faults & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Faults faults(::ros2_interface::msg::Faults::_faults_type arg)
  {
    msg_.faults = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Faults msg_;
};

class Init_Faults_version
{
public:
  explicit Init_Faults_version(::ros2_interface::msg::Faults & msg)
  : msg_(msg)
  {}
  Init_Faults_faults version(::ros2_interface::msg::Faults::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_Faults_faults(msg_);
  }

private:
  ::ros2_interface::msg::Faults msg_;
};

class Init_Faults_id
{
public:
  explicit Init_Faults_id(::ros2_interface::msg::Faults & msg)
  : msg_(msg)
  {}
  Init_Faults_version id(::ros2_interface::msg::Faults::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Faults_version(msg_);
  }

private:
  ::ros2_interface::msg::Faults msg_;
};

class Init_Faults_header
{
public:
  Init_Faults_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Faults_id header(::ros2_interface::msg::Faults::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Faults_id(msg_);
  }

private:
  ::ros2_interface::msg::Faults msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Faults>()
{
  return ros2_interface::msg::builder::Init_Faults_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__FAULTS__BUILDER_HPP_

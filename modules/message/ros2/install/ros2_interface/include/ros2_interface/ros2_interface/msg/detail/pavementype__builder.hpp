// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Pavementype.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PAVEMENTYPE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PAVEMENTYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/pavementype__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Pavementype_confidence
{
public:
  explicit Init_Pavementype_confidence(::ros2_interface::msg::Pavementype & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Pavementype confidence(::ros2_interface::msg::Pavementype::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Pavementype msg_;
};

class Init_Pavementype_type
{
public:
  explicit Init_Pavementype_type(::ros2_interface::msg::Pavementype & msg)
  : msg_(msg)
  {}
  Init_Pavementype_confidence type(::ros2_interface::msg::Pavementype::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Pavementype_confidence(msg_);
  }

private:
  ::ros2_interface::msg::Pavementype msg_;
};

class Init_Pavementype_header
{
public:
  Init_Pavementype_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pavementype_type header(::ros2_interface::msg::Pavementype::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Pavementype_type(msg_);
  }

private:
  ::ros2_interface::msg::Pavementype msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Pavementype>()
{
  return ros2_interface::msg::builder::Init_Pavementype_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PAVEMENTYPE__BUILDER_HPP_

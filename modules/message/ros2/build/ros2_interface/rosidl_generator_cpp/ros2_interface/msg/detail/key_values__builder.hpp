// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/KeyValues.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__KEY_VALUES__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__KEY_VALUES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/key_values__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_KeyValues_value
{
public:
  explicit Init_KeyValues_value(::ros2_interface::msg::KeyValues & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::KeyValues value(::ros2_interface::msg::KeyValues::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::KeyValues msg_;
};

class Init_KeyValues_key
{
public:
  Init_KeyValues_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyValues_value key(::ros2_interface::msg::KeyValues::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyValues_value(msg_);
  }

private:
  ::ros2_interface::msg::KeyValues msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::KeyValues>()
{
  return ros2_interface::msg::builder::Init_KeyValues_key();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__KEY_VALUES__BUILDER_HPP_

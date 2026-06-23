// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TIME__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Time_nsec
{
public:
  explicit Init_Time_nsec(::ros2_interface::msg::Time & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Time nsec(::ros2_interface::msg::Time::_nsec_type arg)
  {
    msg_.nsec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Time msg_;
};

class Init_Time_sec
{
public:
  Init_Time_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_nsec sec(::ros2_interface::msg::Time::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_Time_nsec(msg_);
  }

private:
  ::ros2_interface::msg::Time msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Time>()
{
  return ros2_interface::msg::builder::Init_Time_sec();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TIME__BUILDER_HPP_

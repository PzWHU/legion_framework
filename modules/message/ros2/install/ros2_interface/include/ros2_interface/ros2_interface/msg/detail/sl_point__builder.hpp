// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/SLPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SL_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__SL_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/sl_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_SLPoint_l
{
public:
  explicit Init_SLPoint_l(::ros2_interface::msg::SLPoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::SLPoint l(::ros2_interface::msg::SLPoint::_l_type arg)
  {
    msg_.l = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::SLPoint msg_;
};

class Init_SLPoint_s
{
public:
  Init_SLPoint_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SLPoint_l s(::ros2_interface::msg::SLPoint::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_SLPoint_l(msg_);
  }

private:
  ::ros2_interface::msg::SLPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::SLPoint>()
{
  return ros2_interface::msg::builder::Init_SLPoint_s();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__SL_POINT__BUILDER_HPP_

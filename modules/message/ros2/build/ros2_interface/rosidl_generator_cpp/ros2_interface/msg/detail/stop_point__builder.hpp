// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/StopPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__STOP_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__STOP_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/stop_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_StopPoint_stop_distance
{
public:
  explicit Init_StopPoint_stop_distance(::ros2_interface::msg::StopPoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::StopPoint stop_distance(::ros2_interface::msg::StopPoint::_stop_distance_type arg)
  {
    msg_.stop_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::StopPoint msg_;
};

class Init_StopPoint_type
{
public:
  explicit Init_StopPoint_type(::ros2_interface::msg::StopPoint & msg)
  : msg_(msg)
  {}
  Init_StopPoint_stop_distance type(::ros2_interface::msg::StopPoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_StopPoint_stop_distance(msg_);
  }

private:
  ::ros2_interface::msg::StopPoint msg_;
};

class Init_StopPoint_theta
{
public:
  explicit Init_StopPoint_theta(::ros2_interface::msg::StopPoint & msg)
  : msg_(msg)
  {}
  Init_StopPoint_type theta(::ros2_interface::msg::StopPoint::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_StopPoint_type(msg_);
  }

private:
  ::ros2_interface::msg::StopPoint msg_;
};

class Init_StopPoint_point
{
public:
  Init_StopPoint_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopPoint_theta point(::ros2_interface::msg::StopPoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_StopPoint_theta(msg_);
  }

private:
  ::ros2_interface::msg::StopPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::StopPoint>()
{
  return ros2_interface::msg::builder::Init_StopPoint_point();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__STOP_POINT__BUILDER_HPP_

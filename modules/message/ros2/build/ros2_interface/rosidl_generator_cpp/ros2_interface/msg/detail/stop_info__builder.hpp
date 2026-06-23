// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/StopInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__STOP_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__STOP_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/stop_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_StopInfo_stop_points
{
public:
  explicit Init_StopInfo_stop_points(::ros2_interface::msg::StopInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::StopInfo stop_points(::ros2_interface::msg::StopInfo::_stop_points_type arg)
  {
    msg_.stop_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::StopInfo msg_;
};

class Init_StopInfo_header
{
public:
  Init_StopInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopInfo_stop_points header(::ros2_interface::msg::StopInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StopInfo_stop_points(msg_);
  }

private:
  ::ros2_interface::msg::StopInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::StopInfo>()
{
  return ros2_interface::msg::builder::Init_StopInfo_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__STOP_INFO__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/LimitSpeedInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/limit_speed_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_LimitSpeedInfo_limit_distance
{
public:
  explicit Init_LimitSpeedInfo_limit_distance(::ros2_interface::msg::LimitSpeedInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::LimitSpeedInfo limit_distance(::ros2_interface::msg::LimitSpeedInfo::_limit_distance_type arg)
  {
    msg_.limit_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::LimitSpeedInfo msg_;
};

class Init_LimitSpeedInfo_limit_speed
{
public:
  explicit Init_LimitSpeedInfo_limit_speed(::ros2_interface::msg::LimitSpeedInfo & msg)
  : msg_(msg)
  {}
  Init_LimitSpeedInfo_limit_distance limit_speed(::ros2_interface::msg::LimitSpeedInfo::_limit_speed_type arg)
  {
    msg_.limit_speed = std::move(arg);
    return Init_LimitSpeedInfo_limit_distance(msg_);
  }

private:
  ::ros2_interface::msg::LimitSpeedInfo msg_;
};

class Init_LimitSpeedInfo_limitspeed_valid_flag
{
public:
  Init_LimitSpeedInfo_limitspeed_valid_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimitSpeedInfo_limit_speed limitspeed_valid_flag(::ros2_interface::msg::LimitSpeedInfo::_limitspeed_valid_flag_type arg)
  {
    msg_.limitspeed_valid_flag = std::move(arg);
    return Init_LimitSpeedInfo_limit_speed(msg_);
  }

private:
  ::ros2_interface::msg::LimitSpeedInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::LimitSpeedInfo>()
{
  return ros2_interface::msg::builder::Init_LimitSpeedInfo_limitspeed_valid_flag();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__BUILDER_HPP_

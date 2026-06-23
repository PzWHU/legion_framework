// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/JunctionInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/junction_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_JunctionInfo_stop_line
{
public:
  explicit Init_JunctionInfo_stop_line(::ros2_interface::msg::JunctionInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::JunctionInfo stop_line(::ros2_interface::msg::JunctionInfo::_stop_line_type arg)
  {
    msg_.stop_line = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::JunctionInfo msg_;
};

class Init_JunctionInfo_distance_to_junction
{
public:
  explicit Init_JunctionInfo_distance_to_junction(::ros2_interface::msg::JunctionInfo & msg)
  : msg_(msg)
  {}
  Init_JunctionInfo_stop_line distance_to_junction(::ros2_interface::msg::JunctionInfo::_distance_to_junction_type arg)
  {
    msg_.distance_to_junction = std::move(arg);
    return Init_JunctionInfo_stop_line(msg_);
  }

private:
  ::ros2_interface::msg::JunctionInfo msg_;
};

class Init_JunctionInfo_direction
{
public:
  explicit Init_JunctionInfo_direction(::ros2_interface::msg::JunctionInfo & msg)
  : msg_(msg)
  {}
  Init_JunctionInfo_distance_to_junction direction(::ros2_interface::msg::JunctionInfo::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_JunctionInfo_distance_to_junction(msg_);
  }

private:
  ::ros2_interface::msg::JunctionInfo msg_;
};

class Init_JunctionInfo_direction_flag
{
public:
  explicit Init_JunctionInfo_direction_flag(::ros2_interface::msg::JunctionInfo & msg)
  : msg_(msg)
  {}
  Init_JunctionInfo_direction direction_flag(::ros2_interface::msg::JunctionInfo::_direction_flag_type arg)
  {
    msg_.direction_flag = std::move(arg);
    return Init_JunctionInfo_direction(msg_);
  }

private:
  ::ros2_interface::msg::JunctionInfo msg_;
};

class Init_JunctionInfo_distance_to_stop
{
public:
  explicit Init_JunctionInfo_distance_to_stop(::ros2_interface::msg::JunctionInfo & msg)
  : msg_(msg)
  {}
  Init_JunctionInfo_direction_flag distance_to_stop(::ros2_interface::msg::JunctionInfo::_distance_to_stop_type arg)
  {
    msg_.distance_to_stop = std::move(arg);
    return Init_JunctionInfo_direction_flag(msg_);
  }

private:
  ::ros2_interface::msg::JunctionInfo msg_;
};

class Init_JunctionInfo_light_remain_time
{
public:
  explicit Init_JunctionInfo_light_remain_time(::ros2_interface::msg::JunctionInfo & msg)
  : msg_(msg)
  {}
  Init_JunctionInfo_distance_to_stop light_remain_time(::ros2_interface::msg::JunctionInfo::_light_remain_time_type arg)
  {
    msg_.light_remain_time = std::move(arg);
    return Init_JunctionInfo_distance_to_stop(msg_);
  }

private:
  ::ros2_interface::msg::JunctionInfo msg_;
};

class Init_JunctionInfo_light_color
{
public:
  explicit Init_JunctionInfo_light_color(::ros2_interface::msg::JunctionInfo & msg)
  : msg_(msg)
  {}
  Init_JunctionInfo_light_remain_time light_color(::ros2_interface::msg::JunctionInfo::_light_color_type arg)
  {
    msg_.light_color = std::move(arg);
    return Init_JunctionInfo_light_remain_time(msg_);
  }

private:
  ::ros2_interface::msg::JunctionInfo msg_;
};

class Init_JunctionInfo_light_flag
{
public:
  explicit Init_JunctionInfo_light_flag(::ros2_interface::msg::JunctionInfo & msg)
  : msg_(msg)
  {}
  Init_JunctionInfo_light_color light_flag(::ros2_interface::msg::JunctionInfo::_light_flag_type arg)
  {
    msg_.light_flag = std::move(arg);
    return Init_JunctionInfo_light_color(msg_);
  }

private:
  ::ros2_interface::msg::JunctionInfo msg_;
};

class Init_JunctionInfo_id
{
public:
  Init_JunctionInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JunctionInfo_light_flag id(::ros2_interface::msg::JunctionInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_JunctionInfo_light_flag(msg_);
  }

private:
  ::ros2_interface::msg::JunctionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::JunctionInfo>()
{
  return ros2_interface::msg::builder::Init_JunctionInfo_id();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__BUILDER_HPP_

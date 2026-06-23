// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/UssObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/uss_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_UssObstacle_my
{
public:
  explicit Init_UssObstacle_my(::ros2_interface::msg::UssObstacle & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::UssObstacle my(::ros2_interface::msg::UssObstacle::_my_type arg)
  {
    msg_.my = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::UssObstacle msg_;
};

class Init_UssObstacle_mx
{
public:
  explicit Init_UssObstacle_mx(::ros2_interface::msg::UssObstacle & msg)
  : msg_(msg)
  {}
  Init_UssObstacle_my mx(::ros2_interface::msg::UssObstacle::_mx_type arg)
  {
    msg_.mx = std::move(arg);
    return Init_UssObstacle_my(msg_);
  }

private:
  ::ros2_interface::msg::UssObstacle msg_;
};

class Init_UssObstacle_uss_obstacle_region
{
public:
  explicit Init_UssObstacle_uss_obstacle_region(::ros2_interface::msg::UssObstacle & msg)
  : msg_(msg)
  {}
  Init_UssObstacle_mx uss_obstacle_region(::ros2_interface::msg::UssObstacle::_uss_obstacle_region_type arg)
  {
    msg_.uss_obstacle_region = std::move(arg);
    return Init_UssObstacle_mx(msg_);
  }

private:
  ::ros2_interface::msg::UssObstacle msg_;
};

class Init_UssObstacle_header
{
public:
  Init_UssObstacle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UssObstacle_uss_obstacle_region header(::ros2_interface::msg::UssObstacle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UssObstacle_uss_obstacle_region(msg_);
  }

private:
  ::ros2_interface::msg::UssObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::UssObstacle>()
{
  return ros2_interface::msg::builder::Init_UssObstacle_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_OBSTACLE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/PointLLH.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT_LLH__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POINT_LLH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/point_llh__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_PointLLH_height
{
public:
  explicit Init_PointLLH_height(::ros2_interface::msg::PointLLH & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::PointLLH height(::ros2_interface::msg::PointLLH::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::PointLLH msg_;
};

class Init_PointLLH_lat
{
public:
  explicit Init_PointLLH_lat(::ros2_interface::msg::PointLLH & msg)
  : msg_(msg)
  {}
  Init_PointLLH_height lat(::ros2_interface::msg::PointLLH::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_PointLLH_height(msg_);
  }

private:
  ::ros2_interface::msg::PointLLH msg_;
};

class Init_PointLLH_lon
{
public:
  Init_PointLLH_lon()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointLLH_lat lon(::ros2_interface::msg::PointLLH::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_PointLLH_lat(msg_);
  }

private:
  ::ros2_interface::msg::PointLLH msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::PointLLH>()
{
  return ros2_interface::msg::builder::Init_PointLLH_lon();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT_LLH__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Polygon.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POLYGON__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POLYGON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/polygon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Polygon_points
{
public:
  Init_Polygon_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_interface::msg::Polygon points(::ros2_interface::msg::Polygon::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Polygon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Polygon>()
{
  return ros2_interface::msg::builder::Init_Polygon_points();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__POLYGON__BUILDER_HPP_

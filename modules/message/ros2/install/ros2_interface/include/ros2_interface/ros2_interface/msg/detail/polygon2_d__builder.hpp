// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Polygon2D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POLYGON2_D__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__POLYGON2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/polygon2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Polygon2D_points
{
public:
  explicit Init_Polygon2D_points(::ros2_interface::msg::Polygon2D & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Polygon2D points(::ros2_interface::msg::Polygon2D::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Polygon2D msg_;
};

class Init_Polygon2D_coordinate_system
{
public:
  Init_Polygon2D_coordinate_system()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Polygon2D_points coordinate_system(::ros2_interface::msg::Polygon2D::_coordinate_system_type arg)
  {
    msg_.coordinate_system = std::move(arg);
    return Init_Polygon2D_points(msg_);
  }

private:
  ::ros2_interface::msg::Polygon2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Polygon2D>()
{
  return ros2_interface::msg::builder::Init_Polygon2D_coordinate_system();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__POLYGON2_D__BUILDER_HPP_

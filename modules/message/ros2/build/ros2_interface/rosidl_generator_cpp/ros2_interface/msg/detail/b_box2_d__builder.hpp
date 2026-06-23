// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/BBox2D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__B_BOX2_D__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__B_BOX2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/b_box2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_BBox2D_ymax
{
public:
  explicit Init_BBox2D_ymax(::ros2_interface::msg::BBox2D & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::BBox2D ymax(::ros2_interface::msg::BBox2D::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::BBox2D msg_;
};

class Init_BBox2D_xmax
{
public:
  explicit Init_BBox2D_xmax(::ros2_interface::msg::BBox2D & msg)
  : msg_(msg)
  {}
  Init_BBox2D_ymax xmax(::ros2_interface::msg::BBox2D::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_BBox2D_ymax(msg_);
  }

private:
  ::ros2_interface::msg::BBox2D msg_;
};

class Init_BBox2D_ymin
{
public:
  explicit Init_BBox2D_ymin(::ros2_interface::msg::BBox2D & msg)
  : msg_(msg)
  {}
  Init_BBox2D_xmax ymin(::ros2_interface::msg::BBox2D::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_BBox2D_xmax(msg_);
  }

private:
  ::ros2_interface::msg::BBox2D msg_;
};

class Init_BBox2D_xmin
{
public:
  Init_BBox2D_xmin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BBox2D_ymin xmin(::ros2_interface::msg::BBox2D::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_BBox2D_ymin(msg_);
  }

private:
  ::ros2_interface::msg::BBox2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::BBox2D>()
{
  return ros2_interface::msg::builder::Init_BBox2D_xmin();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__B_BOX2_D__BUILDER_HPP_

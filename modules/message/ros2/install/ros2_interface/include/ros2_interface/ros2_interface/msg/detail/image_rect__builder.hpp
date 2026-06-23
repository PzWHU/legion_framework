// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ImageRect.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__IMAGE_RECT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__IMAGE_RECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/image_rect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ImageRect_height
{
public:
  explicit Init_ImageRect_height(::ros2_interface::msg::ImageRect & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ImageRect height(::ros2_interface::msg::ImageRect::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ImageRect msg_;
};

class Init_ImageRect_width
{
public:
  explicit Init_ImageRect_width(::ros2_interface::msg::ImageRect & msg)
  : msg_(msg)
  {}
  Init_ImageRect_height width(::ros2_interface::msg::ImageRect::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ImageRect_height(msg_);
  }

private:
  ::ros2_interface::msg::ImageRect msg_;
};

class Init_ImageRect_y
{
public:
  explicit Init_ImageRect_y(::ros2_interface::msg::ImageRect & msg)
  : msg_(msg)
  {}
  Init_ImageRect_width y(::ros2_interface::msg::ImageRect::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ImageRect_width(msg_);
  }

private:
  ::ros2_interface::msg::ImageRect msg_;
};

class Init_ImageRect_x
{
public:
  Init_ImageRect_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageRect_y x(::ros2_interface::msg::ImageRect::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ImageRect_y(msg_);
  }

private:
  ::ros2_interface::msg::ImageRect msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ImageRect>()
{
  return ros2_interface::msg::builder::Init_ImageRect_x();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__IMAGE_RECT__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ImageKeyPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__IMAGE_KEY_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__IMAGE_KEY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/image_key_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ImageKeyPoint_confidence
{
public:
  explicit Init_ImageKeyPoint_confidence(::ros2_interface::msg::ImageKeyPoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ImageKeyPoint confidence(::ros2_interface::msg::ImageKeyPoint::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ImageKeyPoint msg_;
};

class Init_ImageKeyPoint_y
{
public:
  explicit Init_ImageKeyPoint_y(::ros2_interface::msg::ImageKeyPoint & msg)
  : msg_(msg)
  {}
  Init_ImageKeyPoint_confidence y(::ros2_interface::msg::ImageKeyPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ImageKeyPoint_confidence(msg_);
  }

private:
  ::ros2_interface::msg::ImageKeyPoint msg_;
};

class Init_ImageKeyPoint_x
{
public:
  Init_ImageKeyPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageKeyPoint_y x(::ros2_interface::msg::ImageKeyPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ImageKeyPoint_y(msg_);
  }

private:
  ::ros2_interface::msg::ImageKeyPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ImageKeyPoint>()
{
  return ros2_interface::msg::builder::Init_ImageKeyPoint_x();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__IMAGE_KEY_POINT__BUILDER_HPP_

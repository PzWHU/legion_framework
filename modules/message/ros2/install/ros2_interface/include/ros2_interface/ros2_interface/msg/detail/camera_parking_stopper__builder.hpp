// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/CameraParkingStopper.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_STOPPER__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_STOPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/camera_parking_stopper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_CameraParkingStopper_bbox2d
{
public:
  explicit Init_CameraParkingStopper_bbox2d(::ros2_interface::msg::CameraParkingStopper & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::CameraParkingStopper bbox2d(::ros2_interface::msg::CameraParkingStopper::_bbox2d_type arg)
  {
    msg_.bbox2d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingStopper msg_;
};

class Init_CameraParkingStopper_header
{
public:
  Init_CameraParkingStopper_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraParkingStopper_bbox2d header(::ros2_interface::msg::CameraParkingStopper::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraParkingStopper_bbox2d(msg_);
  }

private:
  ::ros2_interface::msg::CameraParkingStopper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::CameraParkingStopper>()
{
  return ros2_interface::msg::builder::Init_CameraParkingStopper_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_STOPPER__BUILDER_HPP_

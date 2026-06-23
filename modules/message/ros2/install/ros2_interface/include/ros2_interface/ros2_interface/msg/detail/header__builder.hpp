// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HEADER__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_Header_frame_id
{
public:
  explicit Init_Header_frame_id(::ros2_interface::msg::Header & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::Header frame_id(::ros2_interface::msg::Header::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::Header msg_;
};

class Init_Header_stamp
{
public:
  explicit Init_Header_stamp(::ros2_interface::msg::Header & msg)
  : msg_(msg)
  {}
  Init_Header_frame_id stamp(::ros2_interface::msg::Header::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Header_frame_id(msg_);
  }

private:
  ::ros2_interface::msg::Header msg_;
};

class Init_Header_seq
{
public:
  Init_Header_seq()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Header_stamp seq(::ros2_interface::msg::Header::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_Header_stamp(msg_);
  }

private:
  ::ros2_interface::msg::Header msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::Header>()
{
  return ros2_interface::msg::builder::Init_Header_seq();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HEADER__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__KEY_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__KEY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/key_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_KeyPoint_name
{
public:
  explicit Init_KeyPoint_name(::ros2_interface::msg::KeyPoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::KeyPoint name(::ros2_interface::msg::KeyPoint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::KeyPoint msg_;
};

class Init_KeyPoint_heading
{
public:
  explicit Init_KeyPoint_heading(::ros2_interface::msg::KeyPoint & msg)
  : msg_(msg)
  {}
  Init_KeyPoint_name heading(::ros2_interface::msg::KeyPoint::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_KeyPoint_name(msg_);
  }

private:
  ::ros2_interface::msg::KeyPoint msg_;
};

class Init_KeyPoint_ele
{
public:
  explicit Init_KeyPoint_ele(::ros2_interface::msg::KeyPoint & msg)
  : msg_(msg)
  {}
  Init_KeyPoint_heading ele(::ros2_interface::msg::KeyPoint::_ele_type arg)
  {
    msg_.ele = std::move(arg);
    return Init_KeyPoint_heading(msg_);
  }

private:
  ::ros2_interface::msg::KeyPoint msg_;
};

class Init_KeyPoint_longitude
{
public:
  explicit Init_KeyPoint_longitude(::ros2_interface::msg::KeyPoint & msg)
  : msg_(msg)
  {}
  Init_KeyPoint_ele longitude(::ros2_interface::msg::KeyPoint::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_KeyPoint_ele(msg_);
  }

private:
  ::ros2_interface::msg::KeyPoint msg_;
};

class Init_KeyPoint_latitude
{
public:
  explicit Init_KeyPoint_latitude(::ros2_interface::msg::KeyPoint & msg)
  : msg_(msg)
  {}
  Init_KeyPoint_longitude latitude(::ros2_interface::msg::KeyPoint::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_KeyPoint_longitude(msg_);
  }

private:
  ::ros2_interface::msg::KeyPoint msg_;
};

class Init_KeyPoint_id
{
public:
  Init_KeyPoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPoint_latitude id(::ros2_interface::msg::KeyPoint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_KeyPoint_latitude(msg_);
  }

private:
  ::ros2_interface::msg::KeyPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::KeyPoint>()
{
  return ros2_interface::msg::builder::Init_KeyPoint_id();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__KEY_POINT__BUILDER_HPP_

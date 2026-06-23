// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/FreeSpace.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__FREE_SPACE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__FREE_SPACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/free_space__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_FreeSpace_is_valid
{
public:
  explicit Init_FreeSpace_is_valid(::ros2_interface::msg::FreeSpace & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::FreeSpace is_valid(::ros2_interface::msg::FreeSpace::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::FreeSpace msg_;
};

class Init_FreeSpace_error_code
{
public:
  explicit Init_FreeSpace_error_code(::ros2_interface::msg::FreeSpace & msg)
  : msg_(msg)
  {}
  Init_FreeSpace_is_valid error_code(::ros2_interface::msg::FreeSpace::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_FreeSpace_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::FreeSpace msg_;
};

class Init_FreeSpace_freespace_region
{
public:
  explicit Init_FreeSpace_freespace_region(::ros2_interface::msg::FreeSpace & msg)
  : msg_(msg)
  {}
  Init_FreeSpace_error_code freespace_region(::ros2_interface::msg::FreeSpace::_freespace_region_type arg)
  {
    msg_.freespace_region = std::move(arg);
    return Init_FreeSpace_error_code(msg_);
  }

private:
  ::ros2_interface::msg::FreeSpace msg_;
};

class Init_FreeSpace_sensor_id
{
public:
  explicit Init_FreeSpace_sensor_id(::ros2_interface::msg::FreeSpace & msg)
  : msg_(msg)
  {}
  Init_FreeSpace_freespace_region sensor_id(::ros2_interface::msg::FreeSpace::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_FreeSpace_freespace_region(msg_);
  }

private:
  ::ros2_interface::msg::FreeSpace msg_;
};

class Init_FreeSpace_header
{
public:
  Init_FreeSpace_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FreeSpace_sensor_id header(::ros2_interface::msg::FreeSpace::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FreeSpace_sensor_id(msg_);
  }

private:
  ::ros2_interface::msg::FreeSpace msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::FreeSpace>()
{
  return ros2_interface::msg::builder::Init_FreeSpace_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__FREE_SPACE__BUILDER_HPP_

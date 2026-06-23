// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/LaneletInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANELET_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANELET_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/lanelet_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_LaneletInfo_length
{
public:
  explicit Init_LaneletInfo_length(::ros2_interface::msg::LaneletInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::LaneletInfo length(::ros2_interface::msg::LaneletInfo::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::LaneletInfo msg_;
};

class Init_LaneletInfo_lanelet_id
{
public:
  Init_LaneletInfo_lanelet_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneletInfo_length lanelet_id(::ros2_interface::msg::LaneletInfo::_lanelet_id_type arg)
  {
    msg_.lanelet_id = std::move(arg);
    return Init_LaneletInfo_length(msg_);
  }

private:
  ::ros2_interface::msg::LaneletInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::LaneletInfo>()
{
  return ros2_interface::msg::builder::Init_LaneletInfo_lanelet_id();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANELET_INFO__BUILDER_HPP_

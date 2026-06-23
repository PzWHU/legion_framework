// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/CurvatureInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CURVATURE_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CURVATURE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/curvature_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_CurvatureInfo_value
{
public:
  explicit Init_CurvatureInfo_value(::ros2_interface::msg::CurvatureInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::CurvatureInfo value(::ros2_interface::msg::CurvatureInfo::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::CurvatureInfo msg_;
};

class Init_CurvatureInfo_offset
{
public:
  Init_CurvatureInfo_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurvatureInfo_value offset(::ros2_interface::msg::CurvatureInfo::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_CurvatureInfo_value(msg_);
  }

private:
  ::ros2_interface::msg::CurvatureInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::CurvatureInfo>()
{
  return ros2_interface::msg::builder::Init_CurvatureInfo_offset();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__CURVATURE_INFO__BUILDER_HPP_

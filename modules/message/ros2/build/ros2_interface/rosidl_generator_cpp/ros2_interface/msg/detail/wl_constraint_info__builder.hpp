// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/WLConstraintInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/wl_constraint_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_WLConstraintInfo_abs_point2
{
public:
  explicit Init_WLConstraintInfo_abs_point2(::ros2_interface::msg::WLConstraintInfo & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::WLConstraintInfo abs_point2(::ros2_interface::msg::WLConstraintInfo::_abs_point2_type arg)
  {
    msg_.abs_point2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::WLConstraintInfo msg_;
};

class Init_WLConstraintInfo_abs_point1
{
public:
  explicit Init_WLConstraintInfo_abs_point1(::ros2_interface::msg::WLConstraintInfo & msg)
  : msg_(msg)
  {}
  Init_WLConstraintInfo_abs_point2 abs_point1(::ros2_interface::msg::WLConstraintInfo::_abs_point1_type arg)
  {
    msg_.abs_point1 = std::move(arg);
    return Init_WLConstraintInfo_abs_point2(msg_);
  }

private:
  ::ros2_interface::msg::WLConstraintInfo msg_;
};

class Init_WLConstraintInfo_vehicle_point2
{
public:
  explicit Init_WLConstraintInfo_vehicle_point2(::ros2_interface::msg::WLConstraintInfo & msg)
  : msg_(msg)
  {}
  Init_WLConstraintInfo_abs_point1 vehicle_point2(::ros2_interface::msg::WLConstraintInfo::_vehicle_point2_type arg)
  {
    msg_.vehicle_point2 = std::move(arg);
    return Init_WLConstraintInfo_abs_point1(msg_);
  }

private:
  ::ros2_interface::msg::WLConstraintInfo msg_;
};

class Init_WLConstraintInfo_vehicle_point1
{
public:
  explicit Init_WLConstraintInfo_vehicle_point1(::ros2_interface::msg::WLConstraintInfo & msg)
  : msg_(msg)
  {}
  Init_WLConstraintInfo_vehicle_point2 vehicle_point1(::ros2_interface::msg::WLConstraintInfo::_vehicle_point1_type arg)
  {
    msg_.vehicle_point1 = std::move(arg);
    return Init_WLConstraintInfo_vehicle_point2(msg_);
  }

private:
  ::ros2_interface::msg::WLConstraintInfo msg_;
};

class Init_WLConstraintInfo_id
{
public:
  explicit Init_WLConstraintInfo_id(::ros2_interface::msg::WLConstraintInfo & msg)
  : msg_(msg)
  {}
  Init_WLConstraintInfo_vehicle_point1 id(::ros2_interface::msg::WLConstraintInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_WLConstraintInfo_vehicle_point1(msg_);
  }

private:
  ::ros2_interface::msg::WLConstraintInfo msg_;
};

class Init_WLConstraintInfo_header
{
public:
  Init_WLConstraintInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WLConstraintInfo_id header(::ros2_interface::msg::WLConstraintInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WLConstraintInfo_id(msg_);
  }

private:
  ::ros2_interface::msg::WLConstraintInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::WLConstraintInfo>()
{
  return ros2_interface::msg::builder::Init_WLConstraintInfo_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO__BUILDER_HPP_

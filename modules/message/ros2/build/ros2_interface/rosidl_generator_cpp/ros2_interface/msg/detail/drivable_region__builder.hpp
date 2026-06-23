// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/DrivableRegion.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__DRIVABLE_REGION__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__DRIVABLE_REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/drivable_region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_DrivableRegion_drivable_region
{
public:
  explicit Init_DrivableRegion_drivable_region(::ros2_interface::msg::DrivableRegion & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::DrivableRegion drivable_region(::ros2_interface::msg::DrivableRegion::_drivable_region_type arg)
  {
    msg_.drivable_region = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::DrivableRegion msg_;
};

class Init_DrivableRegion_header
{
public:
  Init_DrivableRegion_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrivableRegion_drivable_region header(::ros2_interface::msg::DrivableRegion::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DrivableRegion_drivable_region(msg_);
  }

private:
  ::ros2_interface::msg::DrivableRegion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::DrivableRegion>()
{
  return ros2_interface::msg::builder::Init_DrivableRegion_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__DRIVABLE_REGION__BUILDER_HPP_

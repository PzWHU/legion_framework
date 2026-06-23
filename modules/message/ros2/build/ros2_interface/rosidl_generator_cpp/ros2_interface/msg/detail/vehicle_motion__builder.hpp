// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/VehicleMotion.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/vehicle_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_VehicleMotion_vehicle_motion_point
{
public:
  explicit Init_VehicleMotion_vehicle_motion_point(::ros2_interface::msg::VehicleMotion & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::VehicleMotion vehicle_motion_point(::ros2_interface::msg::VehicleMotion::_vehicle_motion_point_type arg)
  {
    msg_.vehicle_motion_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::VehicleMotion msg_;
};

class Init_VehicleMotion_name
{
public:
  Init_VehicleMotion_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleMotion_vehicle_motion_point name(::ros2_interface::msg::VehicleMotion::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_VehicleMotion_vehicle_motion_point(msg_);
  }

private:
  ::ros2_interface::msg::VehicleMotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::VehicleMotion>()
{
  return ros2_interface::msg::builder::Init_VehicleMotion_name();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION__BUILDER_HPP_

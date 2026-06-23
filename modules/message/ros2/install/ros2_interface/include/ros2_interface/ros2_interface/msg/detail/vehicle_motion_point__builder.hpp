// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/VehicleMotionPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/vehicle_motion_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_VehicleMotionPoint_steer
{
public:
  explicit Init_VehicleMotionPoint_steer(::ros2_interface::msg::VehicleMotionPoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::VehicleMotionPoint steer(::ros2_interface::msg::VehicleMotionPoint::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::VehicleMotionPoint msg_;
};

class Init_VehicleMotionPoint_trajectory_point
{
public:
  Init_VehicleMotionPoint_trajectory_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleMotionPoint_steer trajectory_point(::ros2_interface::msg::VehicleMotionPoint::_trajectory_point_type arg)
  {
    msg_.trajectory_point = std::move(arg);
    return Init_VehicleMotionPoint_steer(msg_);
  }

private:
  ::ros2_interface::msg::VehicleMotionPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::VehicleMotionPoint>()
{
  return ros2_interface::msg::builder::Init_VehicleMotionPoint_trajectory_point();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION_POINT__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ParkingStopper.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_STOPPER__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_STOPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/parking_stopper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ParkingStopper_stopper_points_abs
{
public:
  explicit Init_ParkingStopper_stopper_points_abs(::ros2_interface::msg::ParkingStopper & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ParkingStopper stopper_points_abs(::ros2_interface::msg::ParkingStopper::_stopper_points_abs_type arg)
  {
    msg_.stopper_points_abs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStopper msg_;
};

class Init_ParkingStopper_stopper_points_vehicle
{
public:
  explicit Init_ParkingStopper_stopper_points_vehicle(::ros2_interface::msg::ParkingStopper & msg)
  : msg_(msg)
  {}
  Init_ParkingStopper_stopper_points_abs stopper_points_vehicle(::ros2_interface::msg::ParkingStopper::_stopper_points_vehicle_type arg)
  {
    msg_.stopper_points_vehicle = std::move(arg);
    return Init_ParkingStopper_stopper_points_abs(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStopper msg_;
};

class Init_ParkingStopper_center_point_abs
{
public:
  explicit Init_ParkingStopper_center_point_abs(::ros2_interface::msg::ParkingStopper & msg)
  : msg_(msg)
  {}
  Init_ParkingStopper_stopper_points_vehicle center_point_abs(::ros2_interface::msg::ParkingStopper::_center_point_abs_type arg)
  {
    msg_.center_point_abs = std::move(arg);
    return Init_ParkingStopper_stopper_points_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStopper msg_;
};

class Init_ParkingStopper_center_point_vehicle
{
public:
  explicit Init_ParkingStopper_center_point_vehicle(::ros2_interface::msg::ParkingStopper & msg)
  : msg_(msg)
  {}
  Init_ParkingStopper_center_point_abs center_point_vehicle(::ros2_interface::msg::ParkingStopper::_center_point_vehicle_type arg)
  {
    msg_.center_point_vehicle = std::move(arg);
    return Init_ParkingStopper_center_point_abs(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStopper msg_;
};

class Init_ParkingStopper_header
{
public:
  Init_ParkingStopper_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParkingStopper_center_point_vehicle header(::ros2_interface::msg::ParkingStopper::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ParkingStopper_center_point_vehicle(msg_);
  }

private:
  ::ros2_interface::msg::ParkingStopper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ParkingStopper>()
{
  return ros2_interface::msg::builder::Init_ParkingStopper_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_STOPPER__BUILDER_HPP_

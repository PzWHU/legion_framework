// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/ParkingRoi.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/parking_roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_ParkingRoi_obstacles_vec
{
public:
  explicit Init_ParkingRoi_obstacles_vec(::ros2_interface::msg::ParkingRoi & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::ParkingRoi obstacles_vec(::ros2_interface::msg::ParkingRoi::_obstacles_vec_type arg)
  {
    msg_.obstacles_vec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::ParkingRoi msg_;
};

class Init_ParkingRoi_header
{
public:
  Init_ParkingRoi_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParkingRoi_obstacles_vec header(::ros2_interface::msg::ParkingRoi::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ParkingRoi_obstacles_vec(msg_);
  }

private:
  ::ros2_interface::msg::ParkingRoi msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::ParkingRoi>()
{
  return ros2_interface::msg::builder::Init_ParkingRoi_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__BUILDER_HPP_

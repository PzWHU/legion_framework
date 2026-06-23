// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/HMITrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_TRAJECTORY_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/hmi_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_HMITrajectoryPoint_v
{
public:
  explicit Init_HMITrajectoryPoint_v(::ros2_interface::msg::HMITrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::HMITrajectoryPoint v(::ros2_interface::msg::HMITrajectoryPoint::_v_type arg)
  {
    msg_.v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::HMITrajectoryPoint msg_;
};

class Init_HMITrajectoryPoint_point
{
public:
  Init_HMITrajectoryPoint_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HMITrajectoryPoint_v point(::ros2_interface::msg::HMITrajectoryPoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_HMITrajectoryPoint_v(msg_);
  }

private:
  ::ros2_interface::msg::HMITrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::HMITrajectoryPoint>()
{
  return ros2_interface::msg::builder::Init_HMITrajectoryPoint_point();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_TRAJECTORY_POINT__BUILDER_HPP_

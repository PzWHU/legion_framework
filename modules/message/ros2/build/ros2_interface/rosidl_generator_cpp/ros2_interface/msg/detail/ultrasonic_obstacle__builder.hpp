// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/UltrasonicObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC_OBSTACLE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/ultrasonic_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_UltrasonicObstacle_range
{
public:
  explicit Init_UltrasonicObstacle_range(::ros2_interface::msg::UltrasonicObstacle & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::UltrasonicObstacle range(::ros2_interface::msg::UltrasonicObstacle::_range_type arg)
  {
    msg_.range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::UltrasonicObstacle msg_;
};

class Init_UltrasonicObstacle_id
{
public:
  Init_UltrasonicObstacle_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UltrasonicObstacle_range id(::ros2_interface::msg::UltrasonicObstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_UltrasonicObstacle_range(msg_);
  }

private:
  ::ros2_interface::msg::UltrasonicObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::UltrasonicObstacle>()
{
  return ros2_interface::msg::builder::Init_UltrasonicObstacle_id();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC_OBSTACLE__BUILDER_HPP_

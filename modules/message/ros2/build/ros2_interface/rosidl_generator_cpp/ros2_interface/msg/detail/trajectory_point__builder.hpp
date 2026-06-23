// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPoint_gear
{
public:
  explicit Init_TrajectoryPoint_gear(::ros2_interface::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TrajectoryPoint gear(::ros2_interface::msg::TrajectoryPoint::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_rear_steer
{
public:
  explicit Init_TrajectoryPoint_rear_steer(::ros2_interface::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_gear rear_steer(::ros2_interface::msg::TrajectoryPoint::_rear_steer_type arg)
  {
    msg_.rear_steer = std::move(arg);
    return Init_TrajectoryPoint_gear(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_front_steer
{
public:
  explicit Init_TrajectoryPoint_front_steer(::ros2_interface::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_rear_steer front_steer(::ros2_interface::msg::TrajectoryPoint::_front_steer_type arg)
  {
    msg_.front_steer = std::move(arg);
    return Init_TrajectoryPoint_rear_steer(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_is_steer_valid
{
public:
  explicit Init_TrajectoryPoint_is_steer_valid(::ros2_interface::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_front_steer is_steer_valid(::ros2_interface::msg::TrajectoryPoint::_is_steer_valid_type arg)
  {
    msg_.is_steer_valid = std::move(arg);
    return Init_TrajectoryPoint_front_steer(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_da
{
public:
  explicit Init_TrajectoryPoint_da(::ros2_interface::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_is_steer_valid da(::ros2_interface::msg::TrajectoryPoint::_da_type arg)
  {
    msg_.da = std::move(arg);
    return Init_TrajectoryPoint_is_steer_valid(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_relative_time
{
public:
  explicit Init_TrajectoryPoint_relative_time(::ros2_interface::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_da relative_time(::ros2_interface::msg::TrajectoryPoint::_relative_time_type arg)
  {
    msg_.relative_time = std::move(arg);
    return Init_TrajectoryPoint_da(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_a
{
public:
  explicit Init_TrajectoryPoint_a(::ros2_interface::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_relative_time a(::ros2_interface::msg::TrajectoryPoint::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_TrajectoryPoint_relative_time(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_v
{
public:
  explicit Init_TrajectoryPoint_v(::ros2_interface::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_a v(::ros2_interface::msg::TrajectoryPoint::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_TrajectoryPoint_a(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_path_point
{
public:
  Init_TrajectoryPoint_path_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPoint_v path_point(::ros2_interface::msg::TrajectoryPoint::_path_point_type arg)
  {
    msg_.path_point = std::move(arg);
    return Init_TrajectoryPoint_v(msg_);
  }

private:
  ::ros2_interface::msg::TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TrajectoryPoint>()
{
  return ros2_interface::msg::builder::Init_TrajectoryPoint_path_point();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

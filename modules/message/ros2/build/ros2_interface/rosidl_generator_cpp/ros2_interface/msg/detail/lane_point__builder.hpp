// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/LanePoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/lane_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_LanePoint_right_line_type
{
public:
  explicit Init_LanePoint_right_line_type(::ros2_interface::msg::LanePoint & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::LanePoint right_line_type(::ros2_interface::msg::LanePoint::_right_line_type_type arg)
  {
    msg_.right_line_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::LanePoint msg_;
};

class Init_LanePoint_left_line_type
{
public:
  explicit Init_LanePoint_left_line_type(::ros2_interface::msg::LanePoint & msg)
  : msg_(msg)
  {}
  Init_LanePoint_right_line_type left_line_type(::ros2_interface::msg::LanePoint::_left_line_type_type arg)
  {
    msg_.left_line_type = std::move(arg);
    return Init_LanePoint_right_line_type(msg_);
  }

private:
  ::ros2_interface::msg::LanePoint msg_;
};

class Init_LanePoint_right_road_width
{
public:
  explicit Init_LanePoint_right_road_width(::ros2_interface::msg::LanePoint & msg)
  : msg_(msg)
  {}
  Init_LanePoint_left_line_type right_road_width(::ros2_interface::msg::LanePoint::_right_road_width_type arg)
  {
    msg_.right_road_width = std::move(arg);
    return Init_LanePoint_left_line_type(msg_);
  }

private:
  ::ros2_interface::msg::LanePoint msg_;
};

class Init_LanePoint_left_road_width
{
public:
  explicit Init_LanePoint_left_road_width(::ros2_interface::msg::LanePoint & msg)
  : msg_(msg)
  {}
  Init_LanePoint_right_road_width left_road_width(::ros2_interface::msg::LanePoint::_left_road_width_type arg)
  {
    msg_.left_road_width = std::move(arg);
    return Init_LanePoint_right_road_width(msg_);
  }

private:
  ::ros2_interface::msg::LanePoint msg_;
};

class Init_LanePoint_limit_speed
{
public:
  explicit Init_LanePoint_limit_speed(::ros2_interface::msg::LanePoint & msg)
  : msg_(msg)
  {}
  Init_LanePoint_left_road_width limit_speed(::ros2_interface::msg::LanePoint::_limit_speed_type arg)
  {
    msg_.limit_speed = std::move(arg);
    return Init_LanePoint_left_road_width(msg_);
  }

private:
  ::ros2_interface::msg::LanePoint msg_;
};

class Init_LanePoint_mileage
{
public:
  explicit Init_LanePoint_mileage(::ros2_interface::msg::LanePoint & msg)
  : msg_(msg)
  {}
  Init_LanePoint_limit_speed mileage(::ros2_interface::msg::LanePoint::_mileage_type arg)
  {
    msg_.mileage = std::move(arg);
    return Init_LanePoint_limit_speed(msg_);
  }

private:
  ::ros2_interface::msg::LanePoint msg_;
};

class Init_LanePoint_theta
{
public:
  explicit Init_LanePoint_theta(::ros2_interface::msg::LanePoint & msg)
  : msg_(msg)
  {}
  Init_LanePoint_mileage theta(::ros2_interface::msg::LanePoint::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_LanePoint_mileage(msg_);
  }

private:
  ::ros2_interface::msg::LanePoint msg_;
};

class Init_LanePoint_point
{
public:
  Init_LanePoint_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LanePoint_theta point(::ros2_interface::msg::LanePoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_LanePoint_theta(msg_);
  }

private:
  ::ros2_interface::msg::LanePoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::LanePoint>()
{
  return ros2_interface::msg::builder::Init_LanePoint_point();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__BUILDER_HPP_

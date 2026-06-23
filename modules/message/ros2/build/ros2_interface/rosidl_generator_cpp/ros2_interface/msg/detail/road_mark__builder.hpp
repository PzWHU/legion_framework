// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RoadMark.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/road_mark__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RoadMark_type
{
public:
  explicit Init_RoadMark_type(::ros2_interface::msg::RoadMark & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RoadMark type(::ros2_interface::msg::RoadMark::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RoadMark msg_;
};

class Init_RoadMark_confidence
{
public:
  explicit Init_RoadMark_confidence(::ros2_interface::msg::RoadMark & msg)
  : msg_(msg)
  {}
  Init_RoadMark_type confidence(::ros2_interface::msg::RoadMark::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_RoadMark_type(msg_);
  }

private:
  ::ros2_interface::msg::RoadMark msg_;
};

class Init_RoadMark_z
{
public:
  explicit Init_RoadMark_z(::ros2_interface::msg::RoadMark & msg)
  : msg_(msg)
  {}
  Init_RoadMark_confidence z(::ros2_interface::msg::RoadMark::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_RoadMark_confidence(msg_);
  }

private:
  ::ros2_interface::msg::RoadMark msg_;
};

class Init_RoadMark_y
{
public:
  explicit Init_RoadMark_y(::ros2_interface::msg::RoadMark & msg)
  : msg_(msg)
  {}
  Init_RoadMark_z y(::ros2_interface::msg::RoadMark::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RoadMark_z(msg_);
  }

private:
  ::ros2_interface::msg::RoadMark msg_;
};

class Init_RoadMark_x
{
public:
  explicit Init_RoadMark_x(::ros2_interface::msg::RoadMark & msg)
  : msg_(msg)
  {}
  Init_RoadMark_y x(::ros2_interface::msg::RoadMark::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RoadMark_y(msg_);
  }

private:
  ::ros2_interface::msg::RoadMark msg_;
};

class Init_RoadMark_lateral_dist
{
public:
  explicit Init_RoadMark_lateral_dist(::ros2_interface::msg::RoadMark & msg)
  : msg_(msg)
  {}
  Init_RoadMark_x lateral_dist(::ros2_interface::msg::RoadMark::_lateral_dist_type arg)
  {
    msg_.lateral_dist = std::move(arg);
    return Init_RoadMark_x(msg_);
  }

private:
  ::ros2_interface::msg::RoadMark msg_;
};

class Init_RoadMark_longitude_dist
{
public:
  Init_RoadMark_longitude_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadMark_lateral_dist longitude_dist(::ros2_interface::msg::RoadMark::_longitude_dist_type arg)
  {
    msg_.longitude_dist = std::move(arg);
    return Init_RoadMark_lateral_dist(msg_);
  }

private:
  ::ros2_interface::msg::RoadMark msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RoadMark>()
{
  return ros2_interface::msg::builder::Init_RoadMark_longitude_dist();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROAD_MARK__BUILDER_HPP_

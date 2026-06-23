// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/GuideRoad.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/guide_road__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_GuideRoad_curvature
{
public:
  explicit Init_GuideRoad_curvature(::ros2_interface::msg::GuideRoad & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::GuideRoad curvature(::ros2_interface::msg::GuideRoad::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::GuideRoad msg_;
};

class Init_GuideRoad_curvature_size
{
public:
  explicit Init_GuideRoad_curvature_size(::ros2_interface::msg::GuideRoad & msg)
  : msg_(msg)
  {}
  Init_GuideRoad_curvature curvature_size(::ros2_interface::msg::GuideRoad::_curvature_size_type arg)
  {
    msg_.curvature_size = std::move(arg);
    return Init_GuideRoad_curvature(msg_);
  }

private:
  ::ros2_interface::msg::GuideRoad msg_;
};

class Init_GuideRoad_avg_curvature
{
public:
  explicit Init_GuideRoad_avg_curvature(::ros2_interface::msg::GuideRoad & msg)
  : msg_(msg)
  {}
  Init_GuideRoad_curvature_size avg_curvature(::ros2_interface::msg::GuideRoad::_avg_curvature_type arg)
  {
    msg_.avg_curvature = std::move(arg);
    return Init_GuideRoad_curvature_size(msg_);
  }

private:
  ::ros2_interface::msg::GuideRoad msg_;
};

class Init_GuideRoad_turn_type
{
public:
  explicit Init_GuideRoad_turn_type(::ros2_interface::msg::GuideRoad & msg)
  : msg_(msg)
  {}
  Init_GuideRoad_avg_curvature turn_type(::ros2_interface::msg::GuideRoad::_turn_type_type arg)
  {
    msg_.turn_type = std::move(arg);
    return Init_GuideRoad_avg_curvature(msg_);
  }

private:
  ::ros2_interface::msg::GuideRoad msg_;
};

class Init_GuideRoad_road_type
{
public:
  explicit Init_GuideRoad_road_type(::ros2_interface::msg::GuideRoad & msg)
  : msg_(msg)
  {}
  Init_GuideRoad_turn_type road_type(::ros2_interface::msg::GuideRoad::_road_type_type arg)
  {
    msg_.road_type = std::move(arg);
    return Init_GuideRoad_turn_type(msg_);
  }

private:
  ::ros2_interface::msg::GuideRoad msg_;
};

class Init_GuideRoad_road_id
{
public:
  Init_GuideRoad_road_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GuideRoad_road_type road_id(::ros2_interface::msg::GuideRoad::_road_id_type arg)
  {
    msg_.road_id = std::move(arg);
    return Init_GuideRoad_road_type(msg_);
  }

private:
  ::ros2_interface::msg::GuideRoad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::GuideRoad>()
{
  return ros2_interface::msg::builder::Init_GuideRoad_road_id();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__BUILDER_HPP_

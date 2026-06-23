// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TrafficEvents.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/traffic_events__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TrafficEvents_limit_speed_info
{
public:
  explicit Init_TrafficEvents_limit_speed_info(::ros2_interface::msg::TrafficEvents & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TrafficEvents limit_speed_info(::ros2_interface::msg::TrafficEvents::_limit_speed_info_type arg)
  {
    msg_.limit_speed_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TrafficEvents msg_;
};

class Init_TrafficEvents_junction_info
{
public:
  explicit Init_TrafficEvents_junction_info(::ros2_interface::msg::TrafficEvents & msg)
  : msg_(msg)
  {}
  Init_TrafficEvents_limit_speed_info junction_info(::ros2_interface::msg::TrafficEvents::_junction_info_type arg)
  {
    msg_.junction_info = std::move(arg);
    return Init_TrafficEvents_limit_speed_info(msg_);
  }

private:
  ::ros2_interface::msg::TrafficEvents msg_;
};

class Init_TrafficEvents_route_fusion_info
{
public:
  explicit Init_TrafficEvents_route_fusion_info(::ros2_interface::msg::TrafficEvents & msg)
  : msg_(msg)
  {}
  Init_TrafficEvents_junction_info route_fusion_info(::ros2_interface::msg::TrafficEvents::_route_fusion_info_type arg)
  {
    msg_.route_fusion_info = std::move(arg);
    return Init_TrafficEvents_junction_info(msg_);
  }

private:
  ::ros2_interface::msg::TrafficEvents msg_;
};

class Init_TrafficEvents_header
{
public:
  Init_TrafficEvents_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficEvents_route_fusion_info header(::ros2_interface::msg::TrafficEvents::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficEvents_route_fusion_info(msg_);
  }

private:
  ::ros2_interface::msg::TrafficEvents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TrafficEvents>()
{
  return ros2_interface::msg::builder::Init_TrafficEvents_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_EVENTS__BUILDER_HPP_

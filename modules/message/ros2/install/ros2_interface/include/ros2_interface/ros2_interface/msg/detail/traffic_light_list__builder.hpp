// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TrafficLightList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_LIST__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/traffic_light_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TrafficLightList_is_valid
{
public:
  explicit Init_TrafficLightList_is_valid(::ros2_interface::msg::TrafficLightList & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TrafficLightList is_valid(::ros2_interface::msg::TrafficLightList::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightList msg_;
};

class Init_TrafficLightList_camera_status
{
public:
  explicit Init_TrafficLightList_camera_status(::ros2_interface::msg::TrafficLightList & msg)
  : msg_(msg)
  {}
  Init_TrafficLightList_is_valid camera_status(::ros2_interface::msg::TrafficLightList::_camera_status_type arg)
  {
    msg_.camera_status = std::move(arg);
    return Init_TrafficLightList_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightList msg_;
};

class Init_TrafficLightList_source
{
public:
  explicit Init_TrafficLightList_source(::ros2_interface::msg::TrafficLightList & msg)
  : msg_(msg)
  {}
  Init_TrafficLightList_camera_status source(::ros2_interface::msg::TrafficLightList::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_TrafficLightList_camera_status(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightList msg_;
};

class Init_TrafficLightList_traffic_light
{
public:
  explicit Init_TrafficLightList_traffic_light(::ros2_interface::msg::TrafficLightList & msg)
  : msg_(msg)
  {}
  Init_TrafficLightList_source traffic_light(::ros2_interface::msg::TrafficLightList::_traffic_light_type arg)
  {
    msg_.traffic_light = std::move(arg);
    return Init_TrafficLightList_source(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightList msg_;
};

class Init_TrafficLightList_header
{
public:
  Init_TrafficLightList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightList_traffic_light header(::ros2_interface::msg::TrafficLightList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficLightList_traffic_light(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TrafficLightList>()
{
  return ros2_interface::msg::builder::Init_TrafficLightList_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_LIST__BUILDER_HPP_

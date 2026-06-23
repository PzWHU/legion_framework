// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TrafficLightMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_MSG__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/traffic_light_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TrafficLightMsg_is_valid
{
public:
  explicit Init_TrafficLightMsg_is_valid(::ros2_interface::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TrafficLightMsg is_valid(::ros2_interface::msg::TrafficLightMsg::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_camera_id
{
public:
  explicit Init_TrafficLightMsg_camera_id(::ros2_interface::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  Init_TrafficLightMsg_is_valid camera_id(::ros2_interface::msg::TrafficLightMsg::_camera_id_type arg)
  {
    msg_.camera_id = std::move(arg);
    return Init_TrafficLightMsg_is_valid(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_contain_lights
{
public:
  explicit Init_TrafficLightMsg_contain_lights(::ros2_interface::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  Init_TrafficLightMsg_camera_id contain_lights(::ros2_interface::msg::TrafficLightMsg::_contain_lights_type arg)
  {
    msg_.contain_lights = std::move(arg);
    return Init_TrafficLightMsg_camera_id(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_traffic_light_debug
{
public:
  explicit Init_TrafficLightMsg_traffic_light_debug(::ros2_interface::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  Init_TrafficLightMsg_contain_lights traffic_light_debug(::ros2_interface::msg::TrafficLightMsg::_traffic_light_debug_type arg)
  {
    msg_.traffic_light_debug = std::move(arg);
    return Init_TrafficLightMsg_contain_lights(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_traffic_light
{
public:
  explicit Init_TrafficLightMsg_traffic_light(::ros2_interface::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  Init_TrafficLightMsg_traffic_light_debug traffic_light(::ros2_interface::msg::TrafficLightMsg::_traffic_light_type arg)
  {
    msg_.traffic_light = std::move(arg);
    return Init_TrafficLightMsg_traffic_light_debug(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_header
{
public:
  Init_TrafficLightMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightMsg_traffic_light header(::ros2_interface::msg::TrafficLightMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficLightMsg_traffic_light(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLightMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TrafficLightMsg>()
{
  return ros2_interface::msg::builder::Init_TrafficLightMsg_header();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_MSG__BUILDER_HPP_

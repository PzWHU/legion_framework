// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_TrafficLight_create_time
{
public:
  explicit Init_TrafficLight_create_time(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::TrafficLight create_time(::ros2_interface::msg::TrafficLight::_create_time_type arg)
  {
    msg_.create_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_remaining_time
{
public:
  explicit Init_TrafficLight_remaining_time(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_create_time remaining_time(::ros2_interface::msg::TrafficLight::_remaining_time_type arg)
  {
    msg_.remaining_time = std::move(arg);
    return Init_TrafficLight_create_time(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_blinking_time
{
public:
  explicit Init_TrafficLight_blinking_time(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_remaining_time blinking_time(::ros2_interface::msg::TrafficLight::_blinking_time_type arg)
  {
    msg_.blinking_time = std::move(arg);
    return Init_TrafficLight_remaining_time(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_blink
{
public:
  explicit Init_TrafficLight_blink(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_blinking_time blink(::ros2_interface::msg::TrafficLight::_blink_type arg)
  {
    msg_.blink = std::move(arg);
    return Init_TrafficLight_blinking_time(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_tracking_time
{
public:
  explicit Init_TrafficLight_tracking_time(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_blink tracking_time(::ros2_interface::msg::TrafficLight::_tracking_time_type arg)
  {
    msg_.tracking_time = std::move(arg);
    return Init_TrafficLight_blink(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_light_lanes
{
public:
  explicit Init_TrafficLight_light_lanes(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_tracking_time light_lanes(::ros2_interface::msg::TrafficLight::_light_lanes_type arg)
  {
    msg_.light_lanes = std::move(arg);
    return Init_TrafficLight_tracking_time(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_distance
{
public:
  explicit Init_TrafficLight_distance(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_light_lanes distance(::ros2_interface::msg::TrafficLight::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_TrafficLight_light_lanes(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_position
{
public:
  explicit Init_TrafficLight_position(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_distance position(::ros2_interface::msg::TrafficLight::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TrafficLight_distance(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_light_rect
{
public:
  explicit Init_TrafficLight_light_rect(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_position light_rect(::ros2_interface::msg::TrafficLight::_light_rect_type arg)
  {
    msg_.light_rect = std::move(arg);
    return Init_TrafficLight_position(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_confidence
{
public:
  explicit Init_TrafficLight_confidence(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_light_rect confidence(::ros2_interface::msg::TrafficLight::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_TrafficLight_light_rect(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_type
{
public:
  explicit Init_TrafficLight_type(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_confidence type(::ros2_interface::msg::TrafficLight::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_TrafficLight_confidence(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_id
{
public:
  explicit Init_TrafficLight_id(::ros2_interface::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_type id(::ros2_interface::msg::TrafficLight::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrafficLight_type(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

class Init_TrafficLight_color
{
public:
  Init_TrafficLight_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLight_id color(::ros2_interface::msg::TrafficLight::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TrafficLight_id(msg_);
  }

private:
  ::ros2_interface::msg::TrafficLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::TrafficLight>()
{
  return ros2_interface::msg::builder::Init_TrafficLight_color();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_

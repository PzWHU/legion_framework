// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/VehicleSignal.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/vehicle_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_VehicleSignal_emergency_light
{
public:
  explicit Init_VehicleSignal_emergency_light(::ros2_interface::msg::VehicleSignal & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::VehicleSignal emergency_light(::ros2_interface::msg::VehicleSignal::_emergency_light_type arg)
  {
    msg_.emergency_light = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::VehicleSignal msg_;
};

class Init_VehicleSignal_horn
{
public:
  explicit Init_VehicleSignal_horn(::ros2_interface::msg::VehicleSignal & msg)
  : msg_(msg)
  {}
  Init_VehicleSignal_emergency_light horn(::ros2_interface::msg::VehicleSignal::_horn_type arg)
  {
    msg_.horn = std::move(arg);
    return Init_VehicleSignal_emergency_light(msg_);
  }

private:
  ::ros2_interface::msg::VehicleSignal msg_;
};

class Init_VehicleSignal_low_beam
{
public:
  explicit Init_VehicleSignal_low_beam(::ros2_interface::msg::VehicleSignal & msg)
  : msg_(msg)
  {}
  Init_VehicleSignal_horn low_beam(::ros2_interface::msg::VehicleSignal::_low_beam_type arg)
  {
    msg_.low_beam = std::move(arg);
    return Init_VehicleSignal_horn(msg_);
  }

private:
  ::ros2_interface::msg::VehicleSignal msg_;
};

class Init_VehicleSignal_high_beam
{
public:
  explicit Init_VehicleSignal_high_beam(::ros2_interface::msg::VehicleSignal & msg)
  : msg_(msg)
  {}
  Init_VehicleSignal_low_beam high_beam(::ros2_interface::msg::VehicleSignal::_high_beam_type arg)
  {
    msg_.high_beam = std::move(arg);
    return Init_VehicleSignal_low_beam(msg_);
  }

private:
  ::ros2_interface::msg::VehicleSignal msg_;
};

class Init_VehicleSignal_turn_signal
{
public:
  Init_VehicleSignal_turn_signal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleSignal_high_beam turn_signal(::ros2_interface::msg::VehicleSignal::_turn_signal_type arg)
  {
    msg_.turn_signal = std::move(arg);
    return Init_VehicleSignal_high_beam(msg_);
  }

private:
  ::ros2_interface::msg::VehicleSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::VehicleSignal>()
{
  return ros2_interface::msg::builder::Init_VehicleSignal_turn_signal();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__BUILDER_HPP_

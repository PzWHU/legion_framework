// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RadarStateMode.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_MODE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/radar_state_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RadarStateMode_performance_mode
{
public:
  explicit Init_RadarStateMode_performance_mode(::ros2_interface::msg::RadarStateMode & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RadarStateMode performance_mode(::ros2_interface::msg::RadarStateMode::_performance_mode_type arg)
  {
    msg_.performance_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateMode msg_;
};

class Init_RadarStateMode_power_mode
{
public:
  explicit Init_RadarStateMode_power_mode(::ros2_interface::msg::RadarStateMode & msg)
  : msg_(msg)
  {}
  Init_RadarStateMode_performance_mode power_mode(::ros2_interface::msg::RadarStateMode::_power_mode_type arg)
  {
    msg_.power_mode = std::move(arg);
    return Init_RadarStateMode_performance_mode(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateMode msg_;
};

class Init_RadarStateMode_timming_mode
{
public:
  explicit Init_RadarStateMode_timming_mode(::ros2_interface::msg::RadarStateMode & msg)
  : msg_(msg)
  {}
  Init_RadarStateMode_power_mode timming_mode(::ros2_interface::msg::RadarStateMode::_timming_mode_type arg)
  {
    msg_.timming_mode = std::move(arg);
    return Init_RadarStateMode_power_mode(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateMode msg_;
};

class Init_RadarStateMode_dual_can_mode
{
public:
  explicit Init_RadarStateMode_dual_can_mode(::ros2_interface::msg::RadarStateMode & msg)
  : msg_(msg)
  {}
  Init_RadarStateMode_timming_mode dual_can_mode(::ros2_interface::msg::RadarStateMode::_dual_can_mode_type arg)
  {
    msg_.dual_can_mode = std::move(arg);
    return Init_RadarStateMode_timming_mode(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateMode msg_;
};

class Init_RadarStateMode_can1_work_mode
{
public:
  explicit Init_RadarStateMode_can1_work_mode(::ros2_interface::msg::RadarStateMode & msg)
  : msg_(msg)
  {}
  Init_RadarStateMode_dual_can_mode can1_work_mode(::ros2_interface::msg::RadarStateMode::_can1_work_mode_type arg)
  {
    msg_.can1_work_mode = std::move(arg);
    return Init_RadarStateMode_dual_can_mode(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateMode msg_;
};

class Init_RadarStateMode_can0_work_mode
{
public:
  Init_RadarStateMode_can0_work_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarStateMode_can1_work_mode can0_work_mode(::ros2_interface::msg::RadarStateMode::_can0_work_mode_type arg)
  {
    msg_.can0_work_mode = std::move(arg);
    return Init_RadarStateMode_can1_work_mode(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RadarStateMode>()
{
  return ros2_interface::msg::builder::Init_RadarStateMode_can0_work_mode();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_MODE__BUILDER_HPP_

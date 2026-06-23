// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RadarState.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/radar_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RadarState_hw_error
{
public:
  explicit Init_RadarState_hw_error(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RadarState hw_error(::ros2_interface::msg::RadarState::_hw_error_type arg)
  {
    msg_.hw_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_radar_position
{
public:
  explicit Init_RadarState_radar_position(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_hw_error radar_position(::ros2_interface::msg::RadarState::_radar_position_type arg)
  {
    msg_.radar_position = std::move(arg);
    return Init_RadarState_hw_error(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_connector_direction
{
public:
  explicit Init_RadarState_connector_direction(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radar_position connector_direction(::ros2_interface::msg::RadarState::_connector_direction_type arg)
  {
    msg_.connector_direction = std::move(arg);
    return Init_RadarState_radar_position(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_rcs_threshold
{
public:
  explicit Init_RadarState_rcs_threshold(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_connector_direction rcs_threshold(::ros2_interface::msg::RadarState::_rcs_threshold_type arg)
  {
    msg_.rcs_threshold = std::move(arg);
    return Init_RadarState_connector_direction(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_motion_rx_state
{
public:
  explicit Init_RadarState_motion_rx_state(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_rcs_threshold motion_rx_state(::ros2_interface::msg::RadarState::_motion_rx_state_type arg)
  {
    msg_.motion_rx_state = std::move(arg);
    return Init_RadarState_rcs_threshold(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_send_extinfo
{
public:
  explicit Init_RadarState_send_extinfo(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_motion_rx_state send_extinfo(::ros2_interface::msg::RadarState::_send_extinfo_type arg)
  {
    msg_.send_extinfo = std::move(arg);
    return Init_RadarState_motion_rx_state(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_send_quality
{
public:
  explicit Init_RadarState_send_quality(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_send_extinfo send_quality(::ros2_interface::msg::RadarState::_send_quality_type arg)
  {
    msg_.send_quality = std::move(arg);
    return Init_RadarState_send_extinfo(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_output_type
{
public:
  explicit Init_RadarState_output_type(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_send_quality output_type(::ros2_interface::msg::RadarState::_output_type_type arg)
  {
    msg_.output_type = std::move(arg);
    return Init_RadarState_send_quality(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_ctl_relay
{
public:
  explicit Init_RadarState_ctl_relay(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_output_type ctl_relay(::ros2_interface::msg::RadarState::_ctl_relay_type arg)
  {
    msg_.ctl_relay = std::move(arg);
    return Init_RadarState_output_type(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_radar_power
{
public:
  explicit Init_RadarState_radar_power(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_ctl_relay radar_power(::ros2_interface::msg::RadarState::_radar_power_type arg)
  {
    msg_.radar_power = std::move(arg);
    return Init_RadarState_ctl_relay(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_sort_index
{
public:
  explicit Init_RadarState_sort_index(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radar_power sort_index(::ros2_interface::msg::RadarState::_sort_index_type arg)
  {
    msg_.sort_index = std::move(arg);
    return Init_RadarState_radar_power(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_max_distance
{
public:
  explicit Init_RadarState_max_distance(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_sort_index max_distance(::ros2_interface::msg::RadarState::_max_distance_type arg)
  {
    msg_.max_distance = std::move(arg);
    return Init_RadarState_sort_index(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_radar_state_mode
{
public:
  explicit Init_RadarState_radar_state_mode(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_max_distance radar_state_mode(::ros2_interface::msg::RadarState::_radar_state_mode_type arg)
  {
    msg_.radar_state_mode = std::move(arg);
    return Init_RadarState_max_distance(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_radar_state_error
{
public:
  explicit Init_RadarState_radar_state_error(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radar_state_mode radar_state_error(::ros2_interface::msg::RadarState::_radar_state_error_type arg)
  {
    msg_.radar_state_error = std::move(arg);
    return Init_RadarState_radar_state_mode(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_nvm_write_status
{
public:
  explicit Init_RadarState_nvm_write_status(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radar_state_error nvm_write_status(::ros2_interface::msg::RadarState::_nvm_write_status_type arg)
  {
    msg_.nvm_write_status = std::move(arg);
    return Init_RadarState_radar_state_error(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_nvm_read_status
{
public:
  explicit Init_RadarState_nvm_read_status(::ros2_interface::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_nvm_write_status nvm_read_status(::ros2_interface::msg::RadarState::_nvm_read_status_type arg)
  {
    msg_.nvm_read_status = std::move(arg);
    return Init_RadarState_nvm_write_status(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

class Init_RadarState_sensor_id
{
public:
  Init_RadarState_sensor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarState_nvm_read_status sensor_id(::ros2_interface::msg::RadarState::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_RadarState_nvm_read_status(msg_);
  }

private:
  ::ros2_interface::msg::RadarState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RadarState>()
{
  return ros2_interface::msg::builder::Init_RadarState_sensor_id();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__BUILDER_HPP_

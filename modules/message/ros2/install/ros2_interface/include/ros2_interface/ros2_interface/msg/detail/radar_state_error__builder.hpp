// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_interface:msg/RadarStateError.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__BUILDER_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_interface/msg/detail/radar_state_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_interface
{

namespace msg
{

namespace builder
{

class Init_RadarStateError_calibration_error
{
public:
  explicit Init_RadarStateError_calibration_error(::ros2_interface::msg::RadarStateError & msg)
  : msg_(msg)
  {}
  ::ros2_interface::msg::RadarStateError calibration_error(::ros2_interface::msg::RadarStateError::_calibration_error_type arg)
  {
    msg_.calibration_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateError msg_;
};

class Init_RadarStateError_config_error
{
public:
  explicit Init_RadarStateError_config_error(::ros2_interface::msg::RadarStateError & msg)
  : msg_(msg)
  {}
  Init_RadarStateError_calibration_error config_error(::ros2_interface::msg::RadarStateError::_config_error_type arg)
  {
    msg_.config_error = std::move(arg);
    return Init_RadarStateError_calibration_error(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateError msg_;
};

class Init_RadarStateError_electric_axis_error
{
public:
  explicit Init_RadarStateError_electric_axis_error(::ros2_interface::msg::RadarStateError & msg)
  : msg_(msg)
  {}
  Init_RadarStateError_config_error electric_axis_error(::ros2_interface::msg::RadarStateError::_electric_axis_error_type arg)
  {
    msg_.electric_axis_error = std::move(arg);
    return Init_RadarStateError_config_error(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateError msg_;
};

class Init_RadarStateError_broadcast_error
{
public:
  explicit Init_RadarStateError_broadcast_error(::ros2_interface::msg::RadarStateError & msg)
  : msg_(msg)
  {}
  Init_RadarStateError_electric_axis_error broadcast_error(::ros2_interface::msg::RadarStateError::_broadcast_error_type arg)
  {
    msg_.broadcast_error = std::move(arg);
    return Init_RadarStateError_electric_axis_error(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateError msg_;
};

class Init_RadarStateError_block_error
{
public:
  explicit Init_RadarStateError_block_error(::ros2_interface::msg::RadarStateError & msg)
  : msg_(msg)
  {}
  Init_RadarStateError_broadcast_error block_error(::ros2_interface::msg::RadarStateError::_block_error_type arg)
  {
    msg_.block_error = std::move(arg);
    return Init_RadarStateError_broadcast_error(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateError msg_;
};

class Init_RadarStateError_voltage_error
{
public:
  explicit Init_RadarStateError_voltage_error(::ros2_interface::msg::RadarStateError & msg)
  : msg_(msg)
  {}
  Init_RadarStateError_block_error voltage_error(::ros2_interface::msg::RadarStateError::_voltage_error_type arg)
  {
    msg_.voltage_error = std::move(arg);
    return Init_RadarStateError_block_error(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateError msg_;
};

class Init_RadarStateError_temperature_error
{
public:
  explicit Init_RadarStateError_temperature_error(::ros2_interface::msg::RadarStateError & msg)
  : msg_(msg)
  {}
  Init_RadarStateError_voltage_error temperature_error(::ros2_interface::msg::RadarStateError::_temperature_error_type arg)
  {
    msg_.temperature_error = std::move(arg);
    return Init_RadarStateError_voltage_error(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateError msg_;
};

class Init_RadarStateError_interference_error
{
public:
  explicit Init_RadarStateError_interference_error(::ros2_interface::msg::RadarStateError & msg)
  : msg_(msg)
  {}
  Init_RadarStateError_temperature_error interference_error(::ros2_interface::msg::RadarStateError::_interference_error_type arg)
  {
    msg_.interference_error = std::move(arg);
    return Init_RadarStateError_temperature_error(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateError msg_;
};

class Init_RadarStateError_temporary_error
{
public:
  explicit Init_RadarStateError_temporary_error(::ros2_interface::msg::RadarStateError & msg)
  : msg_(msg)
  {}
  Init_RadarStateError_interference_error temporary_error(::ros2_interface::msg::RadarStateError::_temporary_error_type arg)
  {
    msg_.temporary_error = std::move(arg);
    return Init_RadarStateError_interference_error(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateError msg_;
};

class Init_RadarStateError_persistent_error
{
public:
  Init_RadarStateError_persistent_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarStateError_temporary_error persistent_error(::ros2_interface::msg::RadarStateError::_persistent_error_type arg)
  {
    msg_.persistent_error = std::move(arg);
    return Init_RadarStateError_temporary_error(msg_);
  }

private:
  ::ros2_interface::msg::RadarStateError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_interface::msg::RadarStateError>()
{
  return ros2_interface::msg::builder::Init_RadarStateError_persistent_error();
}

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__BUILDER_HPP_

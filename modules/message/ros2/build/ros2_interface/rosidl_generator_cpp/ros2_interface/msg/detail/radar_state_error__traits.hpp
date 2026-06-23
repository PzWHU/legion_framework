// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/RadarStateError.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/radar_state_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarStateError & msg,
  std::ostream & out)
{
  out << "{";
  // member: persistent_error
  {
    out << "persistent_error: ";
    rosidl_generator_traits::value_to_yaml(msg.persistent_error, out);
    out << ", ";
  }

  // member: temporary_error
  {
    out << "temporary_error: ";
    rosidl_generator_traits::value_to_yaml(msg.temporary_error, out);
    out << ", ";
  }

  // member: interference_error
  {
    out << "interference_error: ";
    rosidl_generator_traits::value_to_yaml(msg.interference_error, out);
    out << ", ";
  }

  // member: temperature_error
  {
    out << "temperature_error: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_error, out);
    out << ", ";
  }

  // member: voltage_error
  {
    out << "voltage_error: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_error, out);
    out << ", ";
  }

  // member: block_error
  {
    out << "block_error: ";
    rosidl_generator_traits::value_to_yaml(msg.block_error, out);
    out << ", ";
  }

  // member: broadcast_error
  {
    out << "broadcast_error: ";
    rosidl_generator_traits::value_to_yaml(msg.broadcast_error, out);
    out << ", ";
  }

  // member: electric_axis_error
  {
    out << "electric_axis_error: ";
    rosidl_generator_traits::value_to_yaml(msg.electric_axis_error, out);
    out << ", ";
  }

  // member: config_error
  {
    out << "config_error: ";
    rosidl_generator_traits::value_to_yaml(msg.config_error, out);
    out << ", ";
  }

  // member: calibration_error
  {
    out << "calibration_error: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarStateError & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: persistent_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "persistent_error: ";
    rosidl_generator_traits::value_to_yaml(msg.persistent_error, out);
    out << "\n";
  }

  // member: temporary_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temporary_error: ";
    rosidl_generator_traits::value_to_yaml(msg.temporary_error, out);
    out << "\n";
  }

  // member: interference_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interference_error: ";
    rosidl_generator_traits::value_to_yaml(msg.interference_error, out);
    out << "\n";
  }

  // member: temperature_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_error: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_error, out);
    out << "\n";
  }

  // member: voltage_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_error: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_error, out);
    out << "\n";
  }

  // member: block_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block_error: ";
    rosidl_generator_traits::value_to_yaml(msg.block_error, out);
    out << "\n";
  }

  // member: broadcast_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "broadcast_error: ";
    rosidl_generator_traits::value_to_yaml(msg.broadcast_error, out);
    out << "\n";
  }

  // member: electric_axis_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "electric_axis_error: ";
    rosidl_generator_traits::value_to_yaml(msg.electric_axis_error, out);
    out << "\n";
  }

  // member: config_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config_error: ";
    rosidl_generator_traits::value_to_yaml(msg.config_error, out);
    out << "\n";
  }

  // member: calibration_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_error: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarStateError & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_interface

namespace rosidl_generator_traits
{

[[deprecated("use ros2_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_interface::msg::RadarStateError & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::RadarStateError & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::RadarStateError>()
{
  return "ros2_interface::msg::RadarStateError";
}

template<>
inline const char * name<ros2_interface::msg::RadarStateError>()
{
  return "ros2_interface/msg/RadarStateError";
}

template<>
struct has_fixed_size<ros2_interface::msg::RadarStateError>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::RadarStateError>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::RadarStateError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE_ERROR__TRAITS_HPP_

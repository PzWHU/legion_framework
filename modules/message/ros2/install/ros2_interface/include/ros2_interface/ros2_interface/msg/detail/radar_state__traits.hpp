// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/RadarState.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/radar_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'radar_state_error'
#include "ros2_interface/msg/detail/radar_state_error__traits.hpp"
// Member 'radar_state_mode'
#include "ros2_interface/msg/detail/radar_state_mode__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarState & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << ", ";
  }

  // member: nvm_read_status
  {
    out << "nvm_read_status: ";
    rosidl_generator_traits::value_to_yaml(msg.nvm_read_status, out);
    out << ", ";
  }

  // member: nvm_write_status
  {
    out << "nvm_write_status: ";
    rosidl_generator_traits::value_to_yaml(msg.nvm_write_status, out);
    out << ", ";
  }

  // member: radar_state_error
  {
    out << "radar_state_error: ";
    to_flow_style_yaml(msg.radar_state_error, out);
    out << ", ";
  }

  // member: radar_state_mode
  {
    out << "radar_state_mode: ";
    to_flow_style_yaml(msg.radar_state_mode, out);
    out << ", ";
  }

  // member: max_distance
  {
    out << "max_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_distance, out);
    out << ", ";
  }

  // member: sort_index
  {
    out << "sort_index: ";
    rosidl_generator_traits::value_to_yaml(msg.sort_index, out);
    out << ", ";
  }

  // member: radar_power
  {
    out << "radar_power: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_power, out);
    out << ", ";
  }

  // member: ctl_relay
  {
    out << "ctl_relay: ";
    rosidl_generator_traits::value_to_yaml(msg.ctl_relay, out);
    out << ", ";
  }

  // member: output_type
  {
    out << "output_type: ";
    rosidl_generator_traits::value_to_yaml(msg.output_type, out);
    out << ", ";
  }

  // member: send_quality
  {
    out << "send_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.send_quality, out);
    out << ", ";
  }

  // member: send_extinfo
  {
    out << "send_extinfo: ";
    rosidl_generator_traits::value_to_yaml(msg.send_extinfo, out);
    out << ", ";
  }

  // member: motion_rx_state
  {
    out << "motion_rx_state: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_rx_state, out);
    out << ", ";
  }

  // member: rcs_threshold
  {
    out << "rcs_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs_threshold, out);
    out << ", ";
  }

  // member: connector_direction
  {
    out << "connector_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.connector_direction, out);
    out << ", ";
  }

  // member: radar_position
  {
    out << "radar_position: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_position, out);
    out << ", ";
  }

  // member: hw_error
  {
    out << "hw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: nvm_read_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nvm_read_status: ";
    rosidl_generator_traits::value_to_yaml(msg.nvm_read_status, out);
    out << "\n";
  }

  // member: nvm_write_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nvm_write_status: ";
    rosidl_generator_traits::value_to_yaml(msg.nvm_write_status, out);
    out << "\n";
  }

  // member: radar_state_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_state_error:\n";
    to_block_style_yaml(msg.radar_state_error, out, indentation + 2);
  }

  // member: radar_state_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_state_mode:\n";
    to_block_style_yaml(msg.radar_state_mode, out, indentation + 2);
  }

  // member: max_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_distance, out);
    out << "\n";
  }

  // member: sort_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sort_index: ";
    rosidl_generator_traits::value_to_yaml(msg.sort_index, out);
    out << "\n";
  }

  // member: radar_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_power: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_power, out);
    out << "\n";
  }

  // member: ctl_relay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctl_relay: ";
    rosidl_generator_traits::value_to_yaml(msg.ctl_relay, out);
    out << "\n";
  }

  // member: output_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_type: ";
    rosidl_generator_traits::value_to_yaml(msg.output_type, out);
    out << "\n";
  }

  // member: send_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "send_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.send_quality, out);
    out << "\n";
  }

  // member: send_extinfo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "send_extinfo: ";
    rosidl_generator_traits::value_to_yaml(msg.send_extinfo, out);
    out << "\n";
  }

  // member: motion_rx_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_rx_state: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_rx_state, out);
    out << "\n";
  }

  // member: rcs_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcs_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs_threshold, out);
    out << "\n";
  }

  // member: connector_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connector_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.connector_direction, out);
    out << "\n";
  }

  // member: radar_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_position: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_position, out);
    out << "\n";
  }

  // member: hw_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarState & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::RadarState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::RadarState & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::RadarState>()
{
  return "ros2_interface::msg::RadarState";
}

template<>
inline const char * name<ros2_interface::msg::RadarState>()
{
  return "ros2_interface/msg/RadarState";
}

template<>
struct has_fixed_size<ros2_interface::msg::RadarState>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::RadarStateError>::value && has_fixed_size<ros2_interface::msg::RadarStateMode>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::RadarState>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::RadarStateError>::value && has_bounded_size<ros2_interface::msg::RadarStateMode>::value> {};

template<>
struct is_message<ros2_interface::msg::RadarState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/VehicleSignal.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/vehicle_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: turn_signal
  {
    out << "turn_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_signal, out);
    out << ", ";
  }

  // member: high_beam
  {
    out << "high_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam, out);
    out << ", ";
  }

  // member: low_beam
  {
    out << "low_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beam, out);
    out << ", ";
  }

  // member: horn
  {
    out << "horn: ";
    rosidl_generator_traits::value_to_yaml(msg.horn, out);
    out << ", ";
  }

  // member: emergency_light
  {
    out << "emergency_light: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_light, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turn_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_signal, out);
    out << "\n";
  }

  // member: high_beam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam, out);
    out << "\n";
  }

  // member: low_beam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beam, out);
    out << "\n";
  }

  // member: horn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn: ";
    rosidl_generator_traits::value_to_yaml(msg.horn, out);
    out << "\n";
  }

  // member: emergency_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_light: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_light, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleSignal & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::VehicleSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::VehicleSignal & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::VehicleSignal>()
{
  return "ros2_interface::msg::VehicleSignal";
}

template<>
inline const char * name<ros2_interface::msg::VehicleSignal>()
{
  return "ros2_interface/msg/VehicleSignal";
}

template<>
struct has_fixed_size<ros2_interface::msg::VehicleSignal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::VehicleSignal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::VehicleSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_SIGNAL__TRAITS_HPP_

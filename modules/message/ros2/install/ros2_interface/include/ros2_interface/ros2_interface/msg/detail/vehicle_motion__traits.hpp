// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/VehicleMotion.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/vehicle_motion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vehicle_motion_point'
#include "ros2_interface/msg/detail/vehicle_motion_point__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleMotion & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: vehicle_motion_point
  {
    if (msg.vehicle_motion_point.size() == 0) {
      out << "vehicle_motion_point: []";
    } else {
      out << "vehicle_motion_point: [";
      size_t pending_items = msg.vehicle_motion_point.size();
      for (auto item : msg.vehicle_motion_point) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleMotion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: vehicle_motion_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicle_motion_point.size() == 0) {
      out << "vehicle_motion_point: []\n";
    } else {
      out << "vehicle_motion_point:\n";
      for (auto item : msg.vehicle_motion_point) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleMotion & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::VehicleMotion & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::VehicleMotion & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::VehicleMotion>()
{
  return "ros2_interface::msg::VehicleMotion";
}

template<>
inline const char * name<ros2_interface::msg::VehicleMotion>()
{
  return "ros2_interface/msg/VehicleMotion";
}

template<>
struct has_fixed_size<ros2_interface::msg::VehicleMotion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::VehicleMotion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::VehicleMotion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE_MOTION__TRAITS_HPP_

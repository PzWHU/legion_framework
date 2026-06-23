// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/ParkingStopper.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_STOPPER__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_STOPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/parking_stopper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'center_point_vehicle'
// Member 'center_point_abs'
// Member 'stopper_points_vehicle'
// Member 'stopper_points_abs'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParkingStopper & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: center_point_vehicle
  {
    out << "center_point_vehicle: ";
    to_flow_style_yaml(msg.center_point_vehicle, out);
    out << ", ";
  }

  // member: center_point_abs
  {
    out << "center_point_abs: ";
    to_flow_style_yaml(msg.center_point_abs, out);
    out << ", ";
  }

  // member: stopper_points_vehicle
  {
    if (msg.stopper_points_vehicle.size() == 0) {
      out << "stopper_points_vehicle: []";
    } else {
      out << "stopper_points_vehicle: [";
      size_t pending_items = msg.stopper_points_vehicle.size();
      for (auto item : msg.stopper_points_vehicle) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stopper_points_abs
  {
    if (msg.stopper_points_abs.size() == 0) {
      out << "stopper_points_abs: []";
    } else {
      out << "stopper_points_abs: [";
      size_t pending_items = msg.stopper_points_abs.size();
      for (auto item : msg.stopper_points_abs) {
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
  const ParkingStopper & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: center_point_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_point_vehicle:\n";
    to_block_style_yaml(msg.center_point_vehicle, out, indentation + 2);
  }

  // member: center_point_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_point_abs:\n";
    to_block_style_yaml(msg.center_point_abs, out, indentation + 2);
  }

  // member: stopper_points_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stopper_points_vehicle.size() == 0) {
      out << "stopper_points_vehicle: []\n";
    } else {
      out << "stopper_points_vehicle:\n";
      for (auto item : msg.stopper_points_vehicle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: stopper_points_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stopper_points_abs.size() == 0) {
      out << "stopper_points_abs: []\n";
    } else {
      out << "stopper_points_abs:\n";
      for (auto item : msg.stopper_points_abs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParkingStopper & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::ParkingStopper & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::ParkingStopper & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::ParkingStopper>()
{
  return "ros2_interface::msg::ParkingStopper";
}

template<>
inline const char * name<ros2_interface::msg::ParkingStopper>()
{
  return "ros2_interface/msg/ParkingStopper";
}

template<>
struct has_fixed_size<ros2_interface::msg::ParkingStopper>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::ParkingStopper>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::ParkingStopper>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_STOPPER__TRAITS_HPP_

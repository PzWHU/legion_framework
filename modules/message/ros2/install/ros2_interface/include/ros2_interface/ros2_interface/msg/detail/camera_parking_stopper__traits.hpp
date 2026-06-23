// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/CameraParkingStopper.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_STOPPER__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_STOPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/camera_parking_stopper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'bbox2d'
#include "ros2_interface/msg/detail/b_box2_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraParkingStopper & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bbox2d
  {
    out << "bbox2d: ";
    to_flow_style_yaml(msg.bbox2d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraParkingStopper & msg,
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

  // member: bbox2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox2d:\n";
    to_block_style_yaml(msg.bbox2d, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraParkingStopper & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::CameraParkingStopper & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::CameraParkingStopper & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::CameraParkingStopper>()
{
  return "ros2_interface::msg::CameraParkingStopper";
}

template<>
inline const char * name<ros2_interface::msg::CameraParkingStopper>()
{
  return "ros2_interface/msg/CameraParkingStopper";
}

template<>
struct has_fixed_size<ros2_interface::msg::CameraParkingStopper>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::BBox2D>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::CameraParkingStopper>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::BBox2D>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::CameraParkingStopper>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_STOPPER__TRAITS_HPP_

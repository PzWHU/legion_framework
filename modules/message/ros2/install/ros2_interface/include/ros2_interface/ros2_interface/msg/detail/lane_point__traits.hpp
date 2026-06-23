// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/LanePoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/lane_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'point'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const LanePoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: mileage
  {
    out << "mileage: ";
    rosidl_generator_traits::value_to_yaml(msg.mileage, out);
    out << ", ";
  }

  // member: limit_speed
  {
    out << "limit_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_speed, out);
    out << ", ";
  }

  // member: left_road_width
  {
    out << "left_road_width: ";
    rosidl_generator_traits::value_to_yaml(msg.left_road_width, out);
    out << ", ";
  }

  // member: right_road_width
  {
    out << "right_road_width: ";
    rosidl_generator_traits::value_to_yaml(msg.right_road_width, out);
    out << ", ";
  }

  // member: left_line_type
  {
    out << "left_line_type: ";
    rosidl_generator_traits::value_to_yaml(msg.left_line_type, out);
    out << ", ";
  }

  // member: right_line_type
  {
    out << "right_line_type: ";
    rosidl_generator_traits::value_to_yaml(msg.right_line_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LanePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: mileage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mileage: ";
    rosidl_generator_traits::value_to_yaml(msg.mileage, out);
    out << "\n";
  }

  // member: limit_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_speed, out);
    out << "\n";
  }

  // member: left_road_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_road_width: ";
    rosidl_generator_traits::value_to_yaml(msg.left_road_width, out);
    out << "\n";
  }

  // member: right_road_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_road_width: ";
    rosidl_generator_traits::value_to_yaml(msg.right_road_width, out);
    out << "\n";
  }

  // member: left_line_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_line_type: ";
    rosidl_generator_traits::value_to_yaml(msg.left_line_type, out);
    out << "\n";
  }

  // member: right_line_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_line_type: ";
    rosidl_generator_traits::value_to_yaml(msg.right_line_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LanePoint & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::LanePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::LanePoint & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::LanePoint>()
{
  return "ros2_interface::msg::LanePoint";
}

template<>
inline const char * name<ros2_interface::msg::LanePoint>()
{
  return "ros2_interface/msg/LanePoint";
}

template<>
struct has_fixed_size<ros2_interface::msg::LanePoint>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::Point3D>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::LanePoint>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::Point3D>::value> {};

template<>
struct is_message<ros2_interface::msg::LanePoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_POINT__TRAITS_HPP_

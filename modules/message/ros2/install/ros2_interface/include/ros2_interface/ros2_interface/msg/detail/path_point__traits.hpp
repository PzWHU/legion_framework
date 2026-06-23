// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/path_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: kappa
  {
    out << "kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa, out);
    out << ", ";
  }

  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << ", ";
  }

  // member: dkappa
  {
    out << "dkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.dkappa, out);
    out << ", ";
  }

  // member: ddkappa
  {
    out << "ddkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.ddkappa, out);
    out << ", ";
  }

  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: x_derivative
  {
    out << "x_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.x_derivative, out);
    out << ", ";
  }

  // member: y_derivative
  {
    out << "y_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.y_derivative, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
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

  // member: kappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa, out);
    out << "\n";
  }

  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << "\n";
  }

  // member: dkappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.dkappa, out);
    out << "\n";
  }

  // member: ddkappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.ddkappa, out);
    out << "\n";
  }

  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

  // member: x_derivative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.x_derivative, out);
    out << "\n";
  }

  // member: y_derivative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.y_derivative, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathPoint & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::PathPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::PathPoint & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::PathPoint>()
{
  return "ros2_interface::msg::PathPoint";
}

template<>
inline const char * name<ros2_interface::msg::PathPoint>()
{
  return "ros2_interface/msg/PathPoint";
}

template<>
struct has_fixed_size<ros2_interface::msg::PathPoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::PathPoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::PathPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PATH_POINT__TRAITS_HPP_

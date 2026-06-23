// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Grid.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GRID__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GRID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/grid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sl_point'
#include "ros2_interface/msg/detail/sl_point__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Grid & msg,
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

  // member: sl_point
  {
    out << "sl_point: ";
    to_flow_style_yaml(msg.sl_point, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: potential
  {
    out << "potential: ";
    rosidl_generator_traits::value_to_yaml(msg.potential, out);
    out << ", ";
  }

  // member: region_id
  {
    out << "region_id: ";
    rosidl_generator_traits::value_to_yaml(msg.region_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grid & msg,
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

  // member: sl_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sl_point:\n";
    to_block_style_yaml(msg.sl_point, out, indentation + 2);
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: potential
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "potential: ";
    rosidl_generator_traits::value_to_yaml(msg.potential, out);
    out << "\n";
  }

  // member: region_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "region_id: ";
    rosidl_generator_traits::value_to_yaml(msg.region_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grid & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::Grid & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Grid & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Grid>()
{
  return "ros2_interface::msg::Grid";
}

template<>
inline const char * name<ros2_interface::msg::Grid>()
{
  return "ros2_interface/msg/Grid";
}

template<>
struct has_fixed_size<ros2_interface::msg::Grid>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::SLPoint>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::Grid>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::SLPoint>::value> {};

template<>
struct is_message<ros2_interface::msg::Grid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__GRID__TRAITS_HPP_

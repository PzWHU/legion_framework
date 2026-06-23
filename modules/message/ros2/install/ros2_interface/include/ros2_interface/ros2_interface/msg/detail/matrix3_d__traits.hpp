// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Matrix3D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/matrix3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Matrix3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: a00
  {
    out << "a00: ";
    rosidl_generator_traits::value_to_yaml(msg.a00, out);
    out << ", ";
  }

  // member: a01
  {
    out << "a01: ";
    rosidl_generator_traits::value_to_yaml(msg.a01, out);
    out << ", ";
  }

  // member: a02
  {
    out << "a02: ";
    rosidl_generator_traits::value_to_yaml(msg.a02, out);
    out << ", ";
  }

  // member: a10
  {
    out << "a10: ";
    rosidl_generator_traits::value_to_yaml(msg.a10, out);
    out << ", ";
  }

  // member: a11
  {
    out << "a11: ";
    rosidl_generator_traits::value_to_yaml(msg.a11, out);
    out << ", ";
  }

  // member: a12
  {
    out << "a12: ";
    rosidl_generator_traits::value_to_yaml(msg.a12, out);
    out << ", ";
  }

  // member: a20
  {
    out << "a20: ";
    rosidl_generator_traits::value_to_yaml(msg.a20, out);
    out << ", ";
  }

  // member: a21
  {
    out << "a21: ";
    rosidl_generator_traits::value_to_yaml(msg.a21, out);
    out << ", ";
  }

  // member: a22
  {
    out << "a22: ";
    rosidl_generator_traits::value_to_yaml(msg.a22, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Matrix3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a00
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a00: ";
    rosidl_generator_traits::value_to_yaml(msg.a00, out);
    out << "\n";
  }

  // member: a01
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a01: ";
    rosidl_generator_traits::value_to_yaml(msg.a01, out);
    out << "\n";
  }

  // member: a02
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a02: ";
    rosidl_generator_traits::value_to_yaml(msg.a02, out);
    out << "\n";
  }

  // member: a10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a10: ";
    rosidl_generator_traits::value_to_yaml(msg.a10, out);
    out << "\n";
  }

  // member: a11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a11: ";
    rosidl_generator_traits::value_to_yaml(msg.a11, out);
    out << "\n";
  }

  // member: a12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a12: ";
    rosidl_generator_traits::value_to_yaml(msg.a12, out);
    out << "\n";
  }

  // member: a20
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a20: ";
    rosidl_generator_traits::value_to_yaml(msg.a20, out);
    out << "\n";
  }

  // member: a21
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a21: ";
    rosidl_generator_traits::value_to_yaml(msg.a21, out);
    out << "\n";
  }

  // member: a22
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a22: ";
    rosidl_generator_traits::value_to_yaml(msg.a22, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Matrix3D & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::Matrix3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Matrix3D & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Matrix3D>()
{
  return "ros2_interface::msg::Matrix3D";
}

template<>
inline const char * name<ros2_interface::msg::Matrix3D>()
{
  return "ros2_interface/msg/Matrix3D";
}

template<>
struct has_fixed_size<ros2_interface::msg::Matrix3D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::Matrix3D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::Matrix3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__MATRIX3_D__TRAITS_HPP_

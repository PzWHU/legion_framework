// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/UssParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/uss_parking_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'parking_point0'
// Member 'parking_point1'
// Member 'parking_point2'
// Member 'parking_point3'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const UssParkingInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: uss_parking_type
  {
    out << "uss_parking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.uss_parking_type, out);
    out << ", ";
  }

  // member: parking_point0
  {
    out << "parking_point0: ";
    to_flow_style_yaml(msg.parking_point0, out);
    out << ", ";
  }

  // member: parking_point1
  {
    out << "parking_point1: ";
    to_flow_style_yaml(msg.parking_point1, out);
    out << ", ";
  }

  // member: parking_point2
  {
    out << "parking_point2: ";
    to_flow_style_yaml(msg.parking_point2, out);
    out << ", ";
  }

  // member: parking_point3
  {
    out << "parking_point3: ";
    to_flow_style_yaml(msg.parking_point3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UssParkingInfo & msg,
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

  // member: uss_parking_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uss_parking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.uss_parking_type, out);
    out << "\n";
  }

  // member: parking_point0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_point0:\n";
    to_block_style_yaml(msg.parking_point0, out, indentation + 2);
  }

  // member: parking_point1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_point1:\n";
    to_block_style_yaml(msg.parking_point1, out, indentation + 2);
  }

  // member: parking_point2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_point2:\n";
    to_block_style_yaml(msg.parking_point2, out, indentation + 2);
  }

  // member: parking_point3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_point3:\n";
    to_block_style_yaml(msg.parking_point3, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UssParkingInfo & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::UssParkingInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::UssParkingInfo & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::UssParkingInfo>()
{
  return "ros2_interface::msg::UssParkingInfo";
}

template<>
inline const char * name<ros2_interface::msg::UssParkingInfo>()
{
  return "ros2_interface/msg/UssParkingInfo";
}

template<>
struct has_fixed_size<ros2_interface::msg::UssParkingInfo>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::Point3D>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::UssParkingInfo>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::Point3D>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::UssParkingInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO__TRAITS_HPP_

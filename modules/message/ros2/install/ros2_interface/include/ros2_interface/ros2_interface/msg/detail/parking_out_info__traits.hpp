// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/ParkingOutInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/parking_out_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'parking_out_point'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParkingOutInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: parking_out_id
  {
    out << "parking_out_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_out_id, out);
    out << ", ";
  }

  // member: parking_direction_type
  {
    out << "parking_direction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_direction_type, out);
    out << ", ";
  }

  // member: is_parking_out_enable
  {
    out << "is_parking_out_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.is_parking_out_enable, out);
    out << ", ";
  }

  // member: parking_out_point
  {
    out << "parking_out_point: ";
    to_flow_style_yaml(msg.parking_out_point, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParkingOutInfo & msg,
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

  // member: parking_out_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_out_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_out_id, out);
    out << "\n";
  }

  // member: parking_direction_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_direction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_direction_type, out);
    out << "\n";
  }

  // member: is_parking_out_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_parking_out_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.is_parking_out_enable, out);
    out << "\n";
  }

  // member: parking_out_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_out_point:\n";
    to_block_style_yaml(msg.parking_out_point, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParkingOutInfo & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::ParkingOutInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::ParkingOutInfo & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::ParkingOutInfo>()
{
  return "ros2_interface::msg::ParkingOutInfo";
}

template<>
inline const char * name<ros2_interface::msg::ParkingOutInfo>()
{
  return "ros2_interface/msg/ParkingOutInfo";
}

template<>
struct has_fixed_size<ros2_interface::msg::ParkingOutInfo>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::Point3D>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::ParkingOutInfo>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::Point3D>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::ParkingOutInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__TRAITS_HPP_

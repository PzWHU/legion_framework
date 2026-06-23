// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/UssParkingInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO_LIST__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/uss_parking_info_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'uss_parking_info'
#include "ros2_interface/msg/detail/uss_parking_info__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const UssParkingInfoList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: uss_parking_info
  {
    if (msg.uss_parking_info.size() == 0) {
      out << "uss_parking_info: []";
    } else {
      out << "uss_parking_info: [";
      size_t pending_items = msg.uss_parking_info.size();
      for (auto item : msg.uss_parking_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UssParkingInfoList & msg,
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

  // member: uss_parking_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uss_parking_info.size() == 0) {
      out << "uss_parking_info: []\n";
    } else {
      out << "uss_parking_info:\n";
      for (auto item : msg.uss_parking_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UssParkingInfoList & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::UssParkingInfoList & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::UssParkingInfoList & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::UssParkingInfoList>()
{
  return "ros2_interface::msg::UssParkingInfoList";
}

template<>
inline const char * name<ros2_interface::msg::UssParkingInfoList>()
{
  return "ros2_interface/msg/UssParkingInfoList";
}

template<>
struct has_fixed_size<ros2_interface::msg::UssParkingInfoList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::UssParkingInfoList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::UssParkingInfoList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO_LIST__TRAITS_HPP_

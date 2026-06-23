// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/ParkingRoi.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/parking_roi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'obstacles_vec'
#include "ros2_interface/msg/detail/point2d_list__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParkingRoi & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: obstacles_vec
  {
    if (msg.obstacles_vec.size() == 0) {
      out << "obstacles_vec: []";
    } else {
      out << "obstacles_vec: [";
      size_t pending_items = msg.obstacles_vec.size();
      for (auto item : msg.obstacles_vec) {
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
  const ParkingRoi & msg,
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

  // member: obstacles_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacles_vec.size() == 0) {
      out << "obstacles_vec: []\n";
    } else {
      out << "obstacles_vec:\n";
      for (auto item : msg.obstacles_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParkingRoi & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::ParkingRoi & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::ParkingRoi & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::ParkingRoi>()
{
  return "ros2_interface::msg::ParkingRoi";
}

template<>
inline const char * name<ros2_interface::msg::ParkingRoi>()
{
  return "ros2_interface/msg/ParkingRoi";
}

template<>
struct has_fixed_size<ros2_interface::msg::ParkingRoi>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::ParkingRoi>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::ParkingRoi>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__TRAITS_HPP_

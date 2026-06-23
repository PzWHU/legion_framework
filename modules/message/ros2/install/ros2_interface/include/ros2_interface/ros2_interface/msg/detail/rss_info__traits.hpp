// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/RSSInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/rss_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const RSSInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_rss_safe
  {
    out << "is_rss_safe: ";
    rosidl_generator_traits::value_to_yaml(msg.is_rss_safe, out);
    out << ", ";
  }

  // member: cur_dist_lon
  {
    out << "cur_dist_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_dist_lon, out);
    out << ", ";
  }

  // member: rss_safe_dist_lon
  {
    out << "rss_safe_dist_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.rss_safe_dist_lon, out);
    out << ", ";
  }

  // member: acc_lon_range_minimum
  {
    out << "acc_lon_range_minimum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lon_range_minimum, out);
    out << ", ";
  }

  // member: acc_lon_range_maximum
  {
    out << "acc_lon_range_maximum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lon_range_maximum, out);
    out << ", ";
  }

  // member: acc_lat_left_range_minimum
  {
    out << "acc_lat_left_range_minimum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lat_left_range_minimum, out);
    out << ", ";
  }

  // member: acc_lat_left_range_maximum
  {
    out << "acc_lat_left_range_maximum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lat_left_range_maximum, out);
    out << ", ";
  }

  // member: acc_lat_right_range_minimum
  {
    out << "acc_lat_right_range_minimum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lat_right_range_minimum, out);
    out << ", ";
  }

  // member: acc_lat_right_range_maximum
  {
    out << "acc_lat_right_range_maximum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lat_right_range_maximum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RSSInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_rss_safe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_rss_safe: ";
    rosidl_generator_traits::value_to_yaml(msg.is_rss_safe, out);
    out << "\n";
  }

  // member: cur_dist_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_dist_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_dist_lon, out);
    out << "\n";
  }

  // member: rss_safe_dist_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rss_safe_dist_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.rss_safe_dist_lon, out);
    out << "\n";
  }

  // member: acc_lon_range_minimum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_lon_range_minimum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lon_range_minimum, out);
    out << "\n";
  }

  // member: acc_lon_range_maximum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_lon_range_maximum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lon_range_maximum, out);
    out << "\n";
  }

  // member: acc_lat_left_range_minimum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_lat_left_range_minimum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lat_left_range_minimum, out);
    out << "\n";
  }

  // member: acc_lat_left_range_maximum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_lat_left_range_maximum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lat_left_range_maximum, out);
    out << "\n";
  }

  // member: acc_lat_right_range_minimum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_lat_right_range_minimum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lat_right_range_minimum, out);
    out << "\n";
  }

  // member: acc_lat_right_range_maximum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_lat_right_range_maximum: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_lat_right_range_maximum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RSSInfo & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::RSSInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::RSSInfo & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::RSSInfo>()
{
  return "ros2_interface::msg::RSSInfo";
}

template<>
inline const char * name<ros2_interface::msg::RSSInfo>()
{
  return "ros2_interface/msg/RSSInfo";
}

template<>
struct has_fixed_size<ros2_interface::msg::RSSInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_interface::msg::RSSInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_interface::msg::RSSInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__RSS_INFO__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Region.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__REGION__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__REGION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/region__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'region_polygon'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Region & msg,
  std::ostream & out)
{
  out << "{";
  // member: name_region
  {
    out << "name_region: ";
    rosidl_generator_traits::value_to_yaml(msg.name_region, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: rank_risk
  {
    out << "rank_risk: ";
    rosidl_generator_traits::value_to_yaml(msg.rank_risk, out);
    out << ", ";
  }

  // member: region_polygon
  {
    if (msg.region_polygon.size() == 0) {
      out << "region_polygon: []";
    } else {
      out << "region_polygon: [";
      size_t pending_items = msg.region_polygon.size();
      for (auto item : msg.region_polygon) {
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
  const Region & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name_region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name_region: ";
    rosidl_generator_traits::value_to_yaml(msg.name_region, out);
    out << "\n";
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }

  // member: rank_risk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rank_risk: ";
    rosidl_generator_traits::value_to_yaml(msg.rank_risk, out);
    out << "\n";
  }

  // member: region_polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.region_polygon.size() == 0) {
      out << "region_polygon: []\n";
    } else {
      out << "region_polygon:\n";
      for (auto item : msg.region_polygon) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Region & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::Region & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Region & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Region>()
{
  return "ros2_interface::msg::Region";
}

template<>
inline const char * name<ros2_interface::msg::Region>()
{
  return "ros2_interface/msg/Region";
}

template<>
struct has_fixed_size<ros2_interface::msg::Region>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::Region>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::Region>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__REGION__TRAITS_HPP_

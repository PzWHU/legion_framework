// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/JunctionInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/junction_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stop_line'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const JunctionInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: light_flag
  {
    out << "light_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.light_flag, out);
    out << ", ";
  }

  // member: light_color
  {
    out << "light_color: ";
    rosidl_generator_traits::value_to_yaml(msg.light_color, out);
    out << ", ";
  }

  // member: light_remain_time
  {
    out << "light_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.light_remain_time, out);
    out << ", ";
  }

  // member: distance_to_stop
  {
    out << "distance_to_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_stop, out);
    out << ", ";
  }

  // member: direction_flag
  {
    out << "direction_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_flag, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: distance_to_junction
  {
    out << "distance_to_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_junction, out);
    out << ", ";
  }

  // member: stop_line
  {
    if (msg.stop_line.size() == 0) {
      out << "stop_line: []";
    } else {
      out << "stop_line: [";
      size_t pending_items = msg.stop_line.size();
      for (auto item : msg.stop_line) {
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
  const JunctionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: light_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.light_flag, out);
    out << "\n";
  }

  // member: light_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_color: ";
    rosidl_generator_traits::value_to_yaml(msg.light_color, out);
    out << "\n";
  }

  // member: light_remain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.light_remain_time, out);
    out << "\n";
  }

  // member: distance_to_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_stop, out);
    out << "\n";
  }

  // member: direction_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_flag, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: distance_to_junction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_junction, out);
    out << "\n";
  }

  // member: stop_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop_line.size() == 0) {
      out << "stop_line: []\n";
    } else {
      out << "stop_line:\n";
      for (auto item : msg.stop_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JunctionInfo & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::JunctionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::JunctionInfo & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::JunctionInfo>()
{
  return "ros2_interface::msg::JunctionInfo";
}

template<>
inline const char * name<ros2_interface::msg::JunctionInfo>()
{
  return "ros2_interface/msg/JunctionInfo";
}

template<>
struct has_fixed_size<ros2_interface::msg::JunctionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::JunctionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::JunctionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__JUNCTION_INFO__TRAITS_HPP_

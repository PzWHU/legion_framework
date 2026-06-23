// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/GuideRoad.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/guide_road__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'curvature'
#include "ros2_interface/msg/detail/curvature_info__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const GuideRoad & msg,
  std::ostream & out)
{
  out << "{";
  // member: road_id
  {
    out << "road_id: ";
    rosidl_generator_traits::value_to_yaml(msg.road_id, out);
    out << ", ";
  }

  // member: road_type
  {
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
    out << ", ";
  }

  // member: turn_type
  {
    out << "turn_type: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_type, out);
    out << ", ";
  }

  // member: avg_curvature
  {
    out << "avg_curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_curvature, out);
    out << ", ";
  }

  // member: curvature_size
  {
    out << "curvature_size: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_size, out);
    out << ", ";
  }

  // member: curvature
  {
    if (msg.curvature.size() == 0) {
      out << "curvature: []";
    } else {
      out << "curvature: [";
      size_t pending_items = msg.curvature.size();
      for (auto item : msg.curvature) {
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
  const GuideRoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: road_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_id: ";
    rosidl_generator_traits::value_to_yaml(msg.road_id, out);
    out << "\n";
  }

  // member: road_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
    out << "\n";
  }

  // member: turn_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_type: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_type, out);
    out << "\n";
  }

  // member: avg_curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avg_curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_curvature, out);
    out << "\n";
  }

  // member: curvature_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_size: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_size, out);
    out << "\n";
  }

  // member: curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.curvature.size() == 0) {
      out << "curvature: []\n";
    } else {
      out << "curvature:\n";
      for (auto item : msg.curvature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GuideRoad & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::GuideRoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::GuideRoad & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::GuideRoad>()
{
  return "ros2_interface::msg::GuideRoad";
}

template<>
inline const char * name<ros2_interface::msg::GuideRoad>()
{
  return "ros2_interface/msg/GuideRoad";
}

template<>
struct has_fixed_size<ros2_interface::msg::GuideRoad>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::GuideRoad>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::GuideRoad>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__GUIDE_ROAD__TRAITS_HPP_

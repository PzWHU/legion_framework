// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/HolisticPathPrediction.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/holistic_path_prediction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'hpp'
#include "ros2_interface/msg/detail/lane_line_cubic_curve__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const HolisticPathPrediction & msg,
  std::ostream & out)
{
  out << "{";
  // member: hpp
  {
    out << "hpp: ";
    to_flow_style_yaml(msg.hpp, out);
    out << ", ";
  }

  // member: planning_source
  {
    out << "planning_source: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_source, out);
    out << ", ";
  }

  // member: ego_lane_width
  {
    out << "ego_lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_lane_width, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HolisticPathPrediction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hpp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hpp:\n";
    to_block_style_yaml(msg.hpp, out, indentation + 2);
  }

  // member: planning_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_source: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_source, out);
    out << "\n";
  }

  // member: ego_lane_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_lane_width, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HolisticPathPrediction & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::HolisticPathPrediction & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::HolisticPathPrediction & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::HolisticPathPrediction>()
{
  return "ros2_interface::msg::HolisticPathPrediction";
}

template<>
inline const char * name<ros2_interface::msg::HolisticPathPrediction>()
{
  return "ros2_interface/msg/HolisticPathPrediction";
}

template<>
struct has_fixed_size<ros2_interface::msg::HolisticPathPrediction>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::LaneLineCubicCurve>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::HolisticPathPrediction>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::LaneLineCubicCurve>::value> {};

template<>
struct is_message<ros2_interface::msg::HolisticPathPrediction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__TRAITS_HPP_

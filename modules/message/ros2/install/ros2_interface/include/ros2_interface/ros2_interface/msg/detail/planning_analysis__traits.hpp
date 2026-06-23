// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/PlanningAnalysis.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/planning_analysis__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'evaluator_time'
#include "ros2_interface/msg/detail/time_consume__traits.hpp"
// Member 'planning_parking_debug'
#include "ros2_interface/msg/detail/planning_parking_debug__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningAnalysis & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: frame_update_time
  {
    out << "frame_update_time: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_update_time, out);
    out << ", ";
  }

  // member: generator_time
  {
    out << "generator_time: ";
    rosidl_generator_traits::value_to_yaml(msg.generator_time, out);
    out << ", ";
  }

  // member: evaluator_time
  {
    if (msg.evaluator_time.size() == 0) {
      out << "evaluator_time: []";
    } else {
      out << "evaluator_time: [";
      size_t pending_items = msg.evaluator_time.size();
      for (auto item : msg.evaluator_time) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: selector_time
  {
    out << "selector_time: ";
    rosidl_generator_traits::value_to_yaml(msg.selector_time, out);
    out << ", ";
  }

  // member: planning_parking_debug
  {
    out << "planning_parking_debug: ";
    to_flow_style_yaml(msg.planning_parking_debug, out);
    out << ", ";
  }

  // member: dis_to_center_line
  {
    out << "dis_to_center_line: ";
    rosidl_generator_traits::value_to_yaml(msg.dis_to_center_line, out);
    out << ", ";
  }

  // member: diff_to_velocity
  {
    out << "diff_to_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_to_velocity, out);
    out << ", ";
  }

  // member: referencline_kappa
  {
    out << "referencline_kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.referencline_kappa, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningAnalysis & msg,
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

  // member: frame_update_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_update_time: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_update_time, out);
    out << "\n";
  }

  // member: generator_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generator_time: ";
    rosidl_generator_traits::value_to_yaml(msg.generator_time, out);
    out << "\n";
  }

  // member: evaluator_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.evaluator_time.size() == 0) {
      out << "evaluator_time: []\n";
    } else {
      out << "evaluator_time:\n";
      for (auto item : msg.evaluator_time) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: selector_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selector_time: ";
    rosidl_generator_traits::value_to_yaml(msg.selector_time, out);
    out << "\n";
  }

  // member: planning_parking_debug
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_parking_debug:\n";
    to_block_style_yaml(msg.planning_parking_debug, out, indentation + 2);
  }

  // member: dis_to_center_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dis_to_center_line: ";
    rosidl_generator_traits::value_to_yaml(msg.dis_to_center_line, out);
    out << "\n";
  }

  // member: diff_to_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_to_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_to_velocity, out);
    out << "\n";
  }

  // member: referencline_kappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "referencline_kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.referencline_kappa, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningAnalysis & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::PlanningAnalysis & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::PlanningAnalysis & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::PlanningAnalysis>()
{
  return "ros2_interface::msg::PlanningAnalysis";
}

template<>
inline const char * name<ros2_interface::msg::PlanningAnalysis>()
{
  return "ros2_interface/msg/PlanningAnalysis";
}

template<>
struct has_fixed_size<ros2_interface::msg::PlanningAnalysis>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::PlanningAnalysis>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::PlanningAnalysis>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PLANNING_ANALYSIS__TRAITS_HPP_

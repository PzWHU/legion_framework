// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/PredictionObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/prediction_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'perception_obstacle'
#include "ros2_interface/msg/detail/perception_obstacle__traits.hpp"
// Member 'trajectory'
#include "ros2_interface/msg/detail/trajectory_in_prediction__traits.hpp"
// Member 'intent'
#include "ros2_interface/msg/detail/obstacle_intent__traits.hpp"
// Member 'priority'
#include "ros2_interface/msg/detail/obstacle_priority__traits.hpp"
// Member 'interactive_tag'
#include "ros2_interface/msg/detail/obstacle_interactive_tag__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PredictionObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: perception_obstacle
  {
    out << "perception_obstacle: ";
    to_flow_style_yaml(msg.perception_obstacle, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: predicted_period
  {
    out << "predicted_period: ";
    rosidl_generator_traits::value_to_yaml(msg.predicted_period, out);
    out << ", ";
  }

  // member: trajectory
  {
    if (msg.trajectory.size() == 0) {
      out << "trajectory: []";
    } else {
      out << "trajectory: [";
      size_t pending_items = msg.trajectory.size();
      for (auto item : msg.trajectory) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intent
  {
    out << "intent: ";
    to_flow_style_yaml(msg.intent, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    to_flow_style_yaml(msg.priority, out);
    out << ", ";
  }

  // member: interactive_tag
  {
    out << "interactive_tag: ";
    to_flow_style_yaml(msg.interactive_tag, out);
    out << ", ";
  }

  // member: is_static
  {
    out << "is_static: ";
    rosidl_generator_traits::value_to_yaml(msg.is_static, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PredictionObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: perception_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "perception_obstacle:\n";
    to_block_style_yaml(msg.perception_obstacle, out, indentation + 2);
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: predicted_period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "predicted_period: ";
    rosidl_generator_traits::value_to_yaml(msg.predicted_period, out);
    out << "\n";
  }

  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory.size() == 0) {
      out << "trajectory: []\n";
    } else {
      out << "trajectory:\n";
      for (auto item : msg.trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: intent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intent:\n";
    to_block_style_yaml(msg.intent, out, indentation + 2);
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority:\n";
    to_block_style_yaml(msg.priority, out, indentation + 2);
  }

  // member: interactive_tag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interactive_tag:\n";
    to_block_style_yaml(msg.interactive_tag, out, indentation + 2);
  }

  // member: is_static
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_static: ";
    rosidl_generator_traits::value_to_yaml(msg.is_static, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PredictionObstacle & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::PredictionObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::PredictionObstacle & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::PredictionObstacle>()
{
  return "ros2_interface::msg::PredictionObstacle";
}

template<>
inline const char * name<ros2_interface::msg::PredictionObstacle>()
{
  return "ros2_interface/msg/PredictionObstacle";
}

template<>
struct has_fixed_size<ros2_interface::msg::PredictionObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::PredictionObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::PredictionObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLE__TRAITS_HPP_

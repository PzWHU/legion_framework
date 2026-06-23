// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/PredictionObstacles.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/prediction_obstacles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'prediction_obstacles'
#include "ros2_interface/msg/detail/prediction_obstacle__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PredictionObstacles & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: prediction_obstacles
  {
    if (msg.prediction_obstacles.size() == 0) {
      out << "prediction_obstacles: []";
    } else {
      out << "prediction_obstacles: [";
      size_t pending_items = msg.prediction_obstacles.size();
      for (auto item : msg.prediction_obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: change_origin_flag
  {
    out << "change_origin_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.change_origin_flag, out);
    out << ", ";
  }

  // member: start_timestamp
  {
    out << "start_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.start_timestamp, out);
    out << ", ";
  }

  // member: end_timestamp
  {
    out << "end_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.end_timestamp, out);
    out << ", ";
  }

  // member: self_intent
  {
    out << "self_intent: ";
    rosidl_generator_traits::value_to_yaml(msg.self_intent, out);
    out << ", ";
  }

  // member: scenario
  {
    out << "scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PredictionObstacles & msg,
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

  // member: prediction_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prediction_obstacles.size() == 0) {
      out << "prediction_obstacles: []\n";
    } else {
      out << "prediction_obstacles:\n";
      for (auto item : msg.prediction_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: change_origin_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_origin_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.change_origin_flag, out);
    out << "\n";
  }

  // member: start_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.start_timestamp, out);
    out << "\n";
  }

  // member: end_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.end_timestamp, out);
    out << "\n";
  }

  // member: self_intent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_intent: ";
    rosidl_generator_traits::value_to_yaml(msg.self_intent, out);
    out << "\n";
  }

  // member: scenario
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PredictionObstacles & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::PredictionObstacles & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::PredictionObstacles & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::PredictionObstacles>()
{
  return "ros2_interface::msg::PredictionObstacles";
}

template<>
inline const char * name<ros2_interface::msg::PredictionObstacles>()
{
  return "ros2_interface/msg/PredictionObstacles";
}

template<>
struct has_fixed_size<ros2_interface::msg::PredictionObstacles>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::PredictionObstacles>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::PredictionObstacles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PREDICTION_OBSTACLES__TRAITS_HPP_

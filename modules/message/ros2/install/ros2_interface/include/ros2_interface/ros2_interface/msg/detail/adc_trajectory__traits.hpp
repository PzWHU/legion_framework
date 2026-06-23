// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/ADCTrajectory.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/adc_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'trajectory_points'
#include "ros2_interface/msg/detail/trajectory_point__traits.hpp"
// Member 'estop'
#include "ros2_interface/msg/detail/e_stop__traits.hpp"
// Member 'rss_info'
#include "ros2_interface/msg/detail/rss_info__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ADCTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: total_path_length
  {
    out << "total_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.total_path_length, out);
    out << ", ";
  }

  // member: total_path_time
  {
    out << "total_path_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_path_time, out);
    out << ", ";
  }

  // member: trajectory_points
  {
    if (msg.trajectory_points.size() == 0) {
      out << "trajectory_points: []";
    } else {
      out << "trajectory_points: [";
      size_t pending_items = msg.trajectory_points.size();
      for (auto item : msg.trajectory_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: car_action
  {
    out << "car_action: ";
    rosidl_generator_traits::value_to_yaml(msg.car_action, out);
    out << ", ";
  }

  // member: behaviour_lat_state
  {
    out << "behaviour_lat_state: ";
    rosidl_generator_traits::value_to_yaml(msg.behaviour_lat_state, out);
    out << ", ";
  }

  // member: behaviour_lon_state
  {
    out << "behaviour_lon_state: ";
    rosidl_generator_traits::value_to_yaml(msg.behaviour_lon_state, out);
    out << ", ";
  }

  // member: scenario
  {
    out << "scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario, out);
    out << ", ";
  }

  // member: driving_mode
  {
    out << "driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode, out);
    out << ", ";
  }

  // member: adc_trajectory_type
  {
    out << "adc_trajectory_type: ";
    rosidl_generator_traits::value_to_yaml(msg.adc_trajectory_type, out);
    out << ", ";
  }

  // member: estop
  {
    out << "estop: ";
    to_flow_style_yaml(msg.estop, out);
    out << ", ";
  }

  // member: is_replan
  {
    out << "is_replan: ";
    rosidl_generator_traits::value_to_yaml(msg.is_replan, out);
    out << ", ";
  }

  // member: replan_reason
  {
    out << "replan_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_reason, out);
    out << ", ";
  }

  // member: right_of_way_status
  {
    out << "right_of_way_status: ";
    rosidl_generator_traits::value_to_yaml(msg.right_of_way_status, out);
    out << ", ";
  }

  // member: rss_info
  {
    out << "rss_info: ";
    to_flow_style_yaml(msg.rss_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ADCTrajectory & msg,
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

  // member: total_path_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.total_path_length, out);
    out << "\n";
  }

  // member: total_path_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_path_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_path_time, out);
    out << "\n";
  }

  // member: trajectory_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_points.size() == 0) {
      out << "trajectory_points: []\n";
    } else {
      out << "trajectory_points:\n";
      for (auto item : msg.trajectory_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: car_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_action: ";
    rosidl_generator_traits::value_to_yaml(msg.car_action, out);
    out << "\n";
  }

  // member: behaviour_lat_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behaviour_lat_state: ";
    rosidl_generator_traits::value_to_yaml(msg.behaviour_lat_state, out);
    out << "\n";
  }

  // member: behaviour_lon_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behaviour_lon_state: ";
    rosidl_generator_traits::value_to_yaml(msg.behaviour_lon_state, out);
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

  // member: driving_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode, out);
    out << "\n";
  }

  // member: adc_trajectory_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adc_trajectory_type: ";
    rosidl_generator_traits::value_to_yaml(msg.adc_trajectory_type, out);
    out << "\n";
  }

  // member: estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop:\n";
    to_block_style_yaml(msg.estop, out, indentation + 2);
  }

  // member: is_replan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_replan: ";
    rosidl_generator_traits::value_to_yaml(msg.is_replan, out);
    out << "\n";
  }

  // member: replan_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replan_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_reason, out);
    out << "\n";
  }

  // member: right_of_way_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_of_way_status: ";
    rosidl_generator_traits::value_to_yaml(msg.right_of_way_status, out);
    out << "\n";
  }

  // member: rss_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rss_info:\n";
    to_block_style_yaml(msg.rss_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ADCTrajectory & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::ADCTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::ADCTrajectory & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::ADCTrajectory>()
{
  return "ros2_interface::msg::ADCTrajectory";
}

template<>
inline const char * name<ros2_interface::msg::ADCTrajectory>()
{
  return "ros2_interface/msg/ADCTrajectory";
}

template<>
struct has_fixed_size<ros2_interface::msg::ADCTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::ADCTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::ADCTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__ADC_TRAJECTORY__TRAITS_HPP_

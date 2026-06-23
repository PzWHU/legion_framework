// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/ObstacleFeature.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/obstacle_feature__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'polygon_point'
// Member 'position'
// Member 'front_position'
// Member 'velocity'
// Member 'raw_velocity'
// Member 'acceleration'
// Member 't_position'
// Member 't_velocity'
// Member 't_acceleration'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"
// Member 'priority'
#include "ros2_interface/msg/detail/obstacle_priority__traits.hpp"
// Member 'future_trajectory_points'
#include "ros2_interface/msg/detail/prediction_trajectory_point__traits.hpp"
// Member 'short_term_predicted_trajectory_points'
// Member 'adc_trajectory_point'
#include "ros2_interface/msg/detail/trajectory_point_in_prediction__traits.hpp"
// Member 'predicted_trajectory'
#include "ros2_interface/msg/detail/trajectory_in_prediction__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleFeature & msg,
  std::ostream & out)
{
  out << "{";
  // member: obstacle_id
  {
    out << "obstacle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_id, out);
    out << ", ";
  }

  // member: polygon_point
  {
    out << "polygon_point: ";
    to_flow_style_yaml(msg.polygon_point, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: front_position
  {
    out << "front_position: ";
    to_flow_style_yaml(msg.front_position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: raw_velocity
  {
    out << "raw_velocity: ";
    to_flow_style_yaml(msg.raw_velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: velocity_heading
  {
    out << "velocity_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_heading, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: acc
  {
    out << "acc: ";
    rosidl_generator_traits::value_to_yaml(msg.acc, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: tracking_time
  {
    out << "tracking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_time, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: t_position
  {
    out << "t_position: ";
    to_flow_style_yaml(msg.t_position, out);
    out << ", ";
  }

  // member: t_velocity
  {
    out << "t_velocity: ";
    to_flow_style_yaml(msg.t_velocity, out);
    out << ", ";
  }

  // member: t_velocity_heading
  {
    out << "t_velocity_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.t_velocity_heading, out);
    out << ", ";
  }

  // member: t_speed
  {
    out << "t_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.t_speed, out);
    out << ", ";
  }

  // member: t_acceleration
  {
    out << "t_acceleration: ";
    to_flow_style_yaml(msg.t_acceleration, out);
    out << ", ";
  }

  // member: t_acc
  {
    out << "t_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.t_acc, out);
    out << ", ";
  }

  // member: is_still
  {
    out << "is_still: ";
    rosidl_generator_traits::value_to_yaml(msg.is_still, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: label_update_time_delta
  {
    out << "label_update_time_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.label_update_time_delta, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    to_flow_style_yaml(msg.priority, out);
    out << ", ";
  }

  // member: is_near_junction
  {
    out << "is_near_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.is_near_junction, out);
    out << ", ";
  }

  // member: future_trajectory_points
  {
    if (msg.future_trajectory_points.size() == 0) {
      out << "future_trajectory_points: []";
    } else {
      out << "future_trajectory_points: [";
      size_t pending_items = msg.future_trajectory_points.size();
      for (auto item : msg.future_trajectory_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: short_term_predicted_trajectory_points
  {
    if (msg.short_term_predicted_trajectory_points.size() == 0) {
      out << "short_term_predicted_trajectory_points: []";
    } else {
      out << "short_term_predicted_trajectory_points: [";
      size_t pending_items = msg.short_term_predicted_trajectory_points.size();
      for (auto item : msg.short_term_predicted_trajectory_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: predicted_trajectory
  {
    if (msg.predicted_trajectory.size() == 0) {
      out << "predicted_trajectory: []";
    } else {
      out << "predicted_trajectory: [";
      size_t pending_items = msg.predicted_trajectory.size();
      for (auto item : msg.predicted_trajectory) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: adc_trajectory_point
  {
    if (msg.adc_trajectory_point.size() == 0) {
      out << "adc_trajectory_point: []";
    } else {
      out << "adc_trajectory_point: [";
      size_t pending_items = msg.adc_trajectory_point.size();
      for (auto item : msg.adc_trajectory_point) {
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
  const ObstacleFeature & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obstacle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_id, out);
    out << "\n";
  }

  // member: polygon_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "polygon_point:\n";
    to_block_style_yaml(msg.polygon_point, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: front_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_position:\n";
    to_block_style_yaml(msg.front_position, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: raw_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_velocity:\n";
    to_block_style_yaml(msg.raw_velocity, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: velocity_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_heading, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc: ";
    rosidl_generator_traits::value_to_yaml(msg.acc, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: tracking_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_time, out);
    out << "\n";
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

  // member: t_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_position:\n";
    to_block_style_yaml(msg.t_position, out, indentation + 2);
  }

  // member: t_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_velocity:\n";
    to_block_style_yaml(msg.t_velocity, out, indentation + 2);
  }

  // member: t_velocity_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_velocity_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.t_velocity_heading, out);
    out << "\n";
  }

  // member: t_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.t_speed, out);
    out << "\n";
  }

  // member: t_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_acceleration:\n";
    to_block_style_yaml(msg.t_acceleration, out, indentation + 2);
  }

  // member: t_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.t_acc, out);
    out << "\n";
  }

  // member: is_still
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_still: ";
    rosidl_generator_traits::value_to_yaml(msg.is_still, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: label_update_time_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label_update_time_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.label_update_time_delta, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority:\n";
    to_block_style_yaml(msg.priority, out, indentation + 2);
  }

  // member: is_near_junction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_near_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.is_near_junction, out);
    out << "\n";
  }

  // member: future_trajectory_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.future_trajectory_points.size() == 0) {
      out << "future_trajectory_points: []\n";
    } else {
      out << "future_trajectory_points:\n";
      for (auto item : msg.future_trajectory_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: short_term_predicted_trajectory_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.short_term_predicted_trajectory_points.size() == 0) {
      out << "short_term_predicted_trajectory_points: []\n";
    } else {
      out << "short_term_predicted_trajectory_points:\n";
      for (auto item : msg.short_term_predicted_trajectory_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: predicted_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predicted_trajectory.size() == 0) {
      out << "predicted_trajectory: []\n";
    } else {
      out << "predicted_trajectory:\n";
      for (auto item : msg.predicted_trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: adc_trajectory_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.adc_trajectory_point.size() == 0) {
      out << "adc_trajectory_point: []\n";
    } else {
      out << "adc_trajectory_point:\n";
      for (auto item : msg.adc_trajectory_point) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleFeature & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::ObstacleFeature & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::ObstacleFeature & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::ObstacleFeature>()
{
  return "ros2_interface::msg::ObstacleFeature";
}

template<>
inline const char * name<ros2_interface::msg::ObstacleFeature>()
{
  return "ros2_interface/msg/ObstacleFeature";
}

template<>
struct has_fixed_size<ros2_interface::msg::ObstacleFeature>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::ObstacleFeature>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::ObstacleFeature>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_FEATURE__TRAITS_HPP_

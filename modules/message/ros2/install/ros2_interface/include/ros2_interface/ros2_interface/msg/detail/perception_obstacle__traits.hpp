// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/PerceptionObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/perception_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
// Member 'velocity'
// Member 'polygon_point'
// Member 'drops'
// Member 'acceleration'
// Member 'anchor_point'
// Member 'bounding_box'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceptionObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
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

  // member: polygon_point
  {
    if (msg.polygon_point.size() == 0) {
      out << "polygon_point: []";
    } else {
      out << "polygon_point: [";
      size_t pending_items = msg.polygon_point.size();
      for (auto item : msg.polygon_point) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tracking_time
  {
    out << "tracking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_time, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: lane_position
  {
    out << "lane_position: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_position, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: confidence_type
  {
    out << "confidence_type: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_type, out);
    out << ", ";
  }

  // member: drops
  {
    out << "drops: ";
    to_flow_style_yaml(msg.drops, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: anchor_point
  {
    out << "anchor_point: ";
    to_flow_style_yaml(msg.anchor_point, out);
    out << ", ";
  }

  // member: bounding_box
  {
    if (msg.bounding_box.size() == 0) {
      out << "bounding_box: []";
    } else {
      out << "bounding_box: [";
      size_t pending_items = msg.bounding_box.size();
      for (auto item : msg.bounding_box) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sub_type
  {
    out << "sub_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_type, out);
    out << ", ";
  }

  // member: height_above_ground
  {
    out << "height_above_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.height_above_ground, out);
    out << ", ";
  }

  // member: position_covariance
  {
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []";
    } else {
      out << "position_covariance: [";
      size_t pending_items = msg.position_covariance.size();
      for (auto item : msg.position_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity_covariance
  {
    if (msg.velocity_covariance.size() == 0) {
      out << "velocity_covariance: []";
    } else {
      out << "velocity_covariance: [";
      size_t pending_items = msg.velocity_covariance.size();
      for (auto item : msg.velocity_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration_covariance
  {
    if (msg.acceleration_covariance.size() == 0) {
      out << "acceleration_covariance: []";
    } else {
      out << "acceleration_covariance: [";
      size_t pending_items = msg.acceleration_covariance.size();
      for (auto item : msg.acceleration_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: light_status
  {
    out << "light_status: ";
    rosidl_generator_traits::value_to_yaml(msg.light_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerceptionObstacle & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
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

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
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

  // member: polygon_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygon_point.size() == 0) {
      out << "polygon_point: []\n";
    } else {
      out << "polygon_point:\n";
      for (auto item : msg.polygon_point) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: lane_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_position: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_position, out);
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

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: confidence_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence_type: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_type, out);
    out << "\n";
  }

  // member: drops
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drops:\n";
    to_block_style_yaml(msg.drops, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: anchor_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchor_point:\n";
    to_block_style_yaml(msg.anchor_point, out, indentation + 2);
  }

  // member: bounding_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounding_box.size() == 0) {
      out << "bounding_box: []\n";
    } else {
      out << "bounding_box:\n";
      for (auto item : msg.bounding_box) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: sub_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_type, out);
    out << "\n";
  }

  // member: height_above_ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_above_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.height_above_ground, out);
    out << "\n";
  }

  // member: position_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []\n";
    } else {
      out << "position_covariance:\n";
      for (auto item : msg.position_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity_covariance.size() == 0) {
      out << "velocity_covariance: []\n";
    } else {
      out << "velocity_covariance:\n";
      for (auto item : msg.velocity_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration_covariance.size() == 0) {
      out << "acceleration_covariance: []\n";
    } else {
      out << "acceleration_covariance:\n";
      for (auto item : msg.acceleration_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: light_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_status: ";
    rosidl_generator_traits::value_to_yaml(msg.light_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceptionObstacle & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::PerceptionObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::PerceptionObstacle & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::PerceptionObstacle>()
{
  return "ros2_interface::msg::PerceptionObstacle";
}

template<>
inline const char * name<ros2_interface::msg::PerceptionObstacle>()
{
  return "ros2_interface/msg/PerceptionObstacle";
}

template<>
struct has_fixed_size<ros2_interface::msg::PerceptionObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::PerceptionObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::PerceptionObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PERCEPTION_OBSTACLE__TRAITS_HPP_

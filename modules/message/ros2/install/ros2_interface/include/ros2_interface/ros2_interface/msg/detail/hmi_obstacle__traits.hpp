// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/HMIObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/hmi_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center_pos_vehicle'
// Member 'center_pos_abs'
// Member 'points'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const HMIObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: center_pos_vehicle
  {
    out << "center_pos_vehicle: ";
    to_flow_style_yaml(msg.center_pos_vehicle, out);
    out << ", ";
  }

  // member: center_pos_abs
  {
    out << "center_pos_abs: ";
    to_flow_style_yaml(msg.center_pos_abs, out);
    out << ", ";
  }

  // member: theta_vehicle
  {
    out << "theta_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_vehicle, out);
    out << ", ";
  }

  // member: theta_abs
  {
    out << "theta_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_abs, out);
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

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: confidence_type
  {
    out << "confidence_type: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_type, out);
    out << ", ";
  }

  // member: sub_type
  {
    out << "sub_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_type, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cipv_flag
  {
    out << "cipv_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.cipv_flag, out);
    out << ", ";
  }

  // member: fusion_type
  {
    out << "fusion_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fusion_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HMIObstacle & msg,
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

  // member: center_pos_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_pos_vehicle:\n";
    to_block_style_yaml(msg.center_pos_vehicle, out, indentation + 2);
  }

  // member: center_pos_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_pos_abs:\n";
    to_block_style_yaml(msg.center_pos_abs, out, indentation + 2);
  }

  // member: theta_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_vehicle, out);
    out << "\n";
  }

  // member: theta_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_abs, out);
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
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

  // member: confidence_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence_type: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_type, out);
    out << "\n";
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

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cipv_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cipv_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.cipv_flag, out);
    out << "\n";
  }

  // member: fusion_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusion_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fusion_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HMIObstacle & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::HMIObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::HMIObstacle & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::HMIObstacle>()
{
  return "ros2_interface::msg::HMIObstacle";
}

template<>
inline const char * name<ros2_interface::msg::HMIObstacle>()
{
  return "ros2_interface/msg/HMIObstacle";
}

template<>
struct has_fixed_size<ros2_interface::msg::HMIObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::HMIObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::HMIObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_OBSTACLE__TRAITS_HPP_

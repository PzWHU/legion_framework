// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/ParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/parking_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'center_point_of_parking'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"
// Member 'polygon'
#include "ros2_interface/msg/detail/polygon3_d__traits.hpp"
// Member 'parking_stoppers'
#include "ros2_interface/msg/detail/parking_stopper__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParkingInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: parking_space_id
  {
    out << "parking_space_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_space_id, out);
    out << ", ";
  }

  // member: parking_type
  {
    out << "parking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_type, out);
    out << ", ";
  }

  // member: parking_status
  {
    out << "parking_status: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_status, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: center_point_of_parking
  {
    out << "center_point_of_parking: ";
    to_flow_style_yaml(msg.center_point_of_parking, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: yaw_offset
  {
    out << "yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_offset, out);
    out << ", ";
  }

  // member: polygon
  {
    out << "polygon: ";
    to_flow_style_yaml(msg.polygon, out);
    out << ", ";
  }

  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << ", ";
  }

  // member: is_lane_width_valid
  {
    out << "is_lane_width_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_lane_width_valid, out);
    out << ", ";
  }

  // member: lane_width
  {
    out << "lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width, out);
    out << ", ";
  }

  // member: parking_stoppers
  {
    if (msg.parking_stoppers.size() == 0) {
      out << "parking_stoppers: []";
    } else {
      out << "parking_stoppers: [";
      size_t pending_items = msg.parking_stoppers.size();
      for (auto item : msg.parking_stoppers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: parking_direction_type
  {
    out << "parking_direction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_direction_type, out);
    out << ", ";
  }

  // member: left_occupied_status
  {
    out << "left_occupied_status: ";
    rosidl_generator_traits::value_to_yaml(msg.left_occupied_status, out);
    out << ", ";
  }

  // member: right_occupied_status
  {
    out << "right_occupied_status: ";
    rosidl_generator_traits::value_to_yaml(msg.right_occupied_status, out);
    out << ", ";
  }

  // member: parking_source_type
  {
    out << "parking_source_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_source_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParkingInfo & msg,
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

  // member: parking_space_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_space_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_space_id, out);
    out << "\n";
  }

  // member: parking_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_type, out);
    out << "\n";
  }

  // member: parking_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_status: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_status, out);
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

  // member: center_point_of_parking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_point_of_parking:\n";
    to_block_style_yaml(msg.center_point_of_parking, out, indentation + 2);
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

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
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

  // member: yaw_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_offset, out);
    out << "\n";
  }

  // member: polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "polygon:\n";
    to_block_style_yaml(msg.polygon, out, indentation + 2);
  }

  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: is_lane_width_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_lane_width_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_lane_width_valid, out);
    out << "\n";
  }

  // member: lane_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width, out);
    out << "\n";
  }

  // member: parking_stoppers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parking_stoppers.size() == 0) {
      out << "parking_stoppers: []\n";
    } else {
      out << "parking_stoppers:\n";
      for (auto item : msg.parking_stoppers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: parking_direction_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_direction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_direction_type, out);
    out << "\n";
  }

  // member: left_occupied_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_occupied_status: ";
    rosidl_generator_traits::value_to_yaml(msg.left_occupied_status, out);
    out << "\n";
  }

  // member: right_occupied_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_occupied_status: ";
    rosidl_generator_traits::value_to_yaml(msg.right_occupied_status, out);
    out << "\n";
  }

  // member: parking_source_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_source_type: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_source_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParkingInfo & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::ParkingInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::ParkingInfo & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::ParkingInfo>()
{
  return "ros2_interface::msg::ParkingInfo";
}

template<>
inline const char * name<ros2_interface::msg::ParkingInfo>()
{
  return "ros2_interface/msg/ParkingInfo";
}

template<>
struct has_fixed_size<ros2_interface::msg::ParkingInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::ParkingInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::ParkingInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_INFO__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/HMIParkingInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/hmi_parking_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'center_point_of_parking'
#include "ros2_interface/msg/detail/point3_d__traits.hpp"
// Member 'polygon'
#include "ros2_interface/msg/detail/polygon3_d__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const HMIParkingInfo & msg,
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

  // member: is_custom_parking
  {
    out << "is_custom_parking: ";
    rosidl_generator_traits::value_to_yaml(msg.is_custom_parking, out);
    out << ", ";
  }

  // member: polygon
  {
    out << "polygon: ";
    to_flow_style_yaml(msg.polygon, out);
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
  const HMIParkingInfo & msg,
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

  // member: is_custom_parking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_custom_parking: ";
    rosidl_generator_traits::value_to_yaml(msg.is_custom_parking, out);
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

inline std::string to_yaml(const HMIParkingInfo & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::HMIParkingInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::HMIParkingInfo & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::HMIParkingInfo>()
{
  return "ros2_interface::msg::HMIParkingInfo";
}

template<>
inline const char * name<ros2_interface::msg::HMIParkingInfo>()
{
  return "ros2_interface/msg/HMIParkingInfo";
}

template<>
struct has_fixed_size<ros2_interface::msg::HMIParkingInfo>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::Point3D>::value && has_fixed_size<ros2_interface::msg::Polygon3D>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::HMIParkingInfo>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::Point3D>::value && has_bounded_size<ros2_interface::msg::Polygon3D>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros2_interface::msg::HMIParkingInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO__TRAITS_HPP_

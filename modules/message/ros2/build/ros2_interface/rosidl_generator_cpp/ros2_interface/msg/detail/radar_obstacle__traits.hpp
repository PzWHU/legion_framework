// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/RadarObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/radar_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'relative_position'
// Member 'relative_position_rms'
// Member 'relative_velocity'
// Member 'relative_velocity_rms'
// Member 'relative_acceleration'
// Member 'relative_acceleration_rms'
// Member 'absolute_position'
// Member 'absolute_position_rms'
// Member 'absolute_velocity'
// Member 'absolute_velocity_rms'
// Member 'absolute_acceleration'
// Member 'absolute_acceleration_rms'
#include "ros2_interface/msg/detail/point2_d__traits.hpp"
// Member 'status'
#include "ros2_interface/msg/detail/status__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: life_time
  {
    out << "life_time: ";
    rosidl_generator_traits::value_to_yaml(msg.life_time, out);
    out << ", ";
  }

  // member: relative_position
  {
    out << "relative_position: ";
    to_flow_style_yaml(msg.relative_position, out);
    out << ", ";
  }

  // member: relative_position_rms
  {
    out << "relative_position_rms: ";
    to_flow_style_yaml(msg.relative_position_rms, out);
    out << ", ";
  }

  // member: relative_velocity
  {
    out << "relative_velocity: ";
    to_flow_style_yaml(msg.relative_velocity, out);
    out << ", ";
  }

  // member: relative_velocity_rms
  {
    out << "relative_velocity_rms: ";
    to_flow_style_yaml(msg.relative_velocity_rms, out);
    out << ", ";
  }

  // member: relative_acceleration
  {
    out << "relative_acceleration: ";
    to_flow_style_yaml(msg.relative_acceleration, out);
    out << ", ";
  }

  // member: relative_acceleration_rms
  {
    out << "relative_acceleration_rms: ";
    to_flow_style_yaml(msg.relative_acceleration_rms, out);
    out << ", ";
  }

  // member: rcs
  {
    out << "rcs: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs, out);
    out << ", ";
  }

  // member: snr
  {
    out << "snr: ";
    rosidl_generator_traits::value_to_yaml(msg.snr, out);
    out << ", ";
  }

  // member: moving_status
  {
    out << "moving_status: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_status, out);
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

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: absolute_position
  {
    out << "absolute_position: ";
    to_flow_style_yaml(msg.absolute_position, out);
    out << ", ";
  }

  // member: absolute_position_rms
  {
    out << "absolute_position_rms: ";
    to_flow_style_yaml(msg.absolute_position_rms, out);
    out << ", ";
  }

  // member: absolute_velocity
  {
    out << "absolute_velocity: ";
    to_flow_style_yaml(msg.absolute_velocity, out);
    out << ", ";
  }

  // member: absolute_velocity_rms
  {
    out << "absolute_velocity_rms: ";
    to_flow_style_yaml(msg.absolute_velocity_rms, out);
    out << ", ";
  }

  // member: absolute_acceleration
  {
    out << "absolute_acceleration: ";
    to_flow_style_yaml(msg.absolute_acceleration, out);
    out << ", ";
  }

  // member: absolute_acceleration_rms
  {
    out << "absolute_acceleration_rms: ";
    to_flow_style_yaml(msg.absolute_acceleration_rms, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: orient_rms
  {
    out << "orient_rms: ";
    rosidl_generator_traits::value_to_yaml(msg.orient_rms, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: yaw_rms
  {
    out << "yaw_rms: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rms, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: moving_frames_count
  {
    out << "moving_frames_count: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_frames_count, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: underpass_probability
  {
    out << "underpass_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.underpass_probability, out);
    out << ", ";
  }

  // member: overpass_probability
  {
    out << "overpass_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.overpass_probability, out);
    out << ", ";
  }

  // member: exist_probability
  {
    out << "exist_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.exist_probability, out);
    out << ", ";
  }

  // member: mov_property
  {
    out << "mov_property: ";
    rosidl_generator_traits::value_to_yaml(msg.mov_property, out);
    out << ", ";
  }

  // member: track_state
  {
    out << "track_state: ";
    rosidl_generator_traits::value_to_yaml(msg.track_state, out);
    out << ", ";
  }

  // member: track_type
  {
    out << "track_type: ";
    rosidl_generator_traits::value_to_yaml(msg.track_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarObstacle & msg,
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

  // member: life_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "life_time: ";
    rosidl_generator_traits::value_to_yaml(msg.life_time, out);
    out << "\n";
  }

  // member: relative_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_position:\n";
    to_block_style_yaml(msg.relative_position, out, indentation + 2);
  }

  // member: relative_position_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_position_rms:\n";
    to_block_style_yaml(msg.relative_position_rms, out, indentation + 2);
  }

  // member: relative_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity:\n";
    to_block_style_yaml(msg.relative_velocity, out, indentation + 2);
  }

  // member: relative_velocity_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity_rms:\n";
    to_block_style_yaml(msg.relative_velocity_rms, out, indentation + 2);
  }

  // member: relative_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_acceleration:\n";
    to_block_style_yaml(msg.relative_acceleration, out, indentation + 2);
  }

  // member: relative_acceleration_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_acceleration_rms:\n";
    to_block_style_yaml(msg.relative_acceleration_rms, out, indentation + 2);
  }

  // member: rcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcs: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs, out);
    out << "\n";
  }

  // member: snr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snr: ";
    rosidl_generator_traits::value_to_yaml(msg.snr, out);
    out << "\n";
  }

  // member: moving_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_status: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_status, out);
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
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

  // member: absolute_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_position:\n";
    to_block_style_yaml(msg.absolute_position, out, indentation + 2);
  }

  // member: absolute_position_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_position_rms:\n";
    to_block_style_yaml(msg.absolute_position_rms, out, indentation + 2);
  }

  // member: absolute_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_velocity:\n";
    to_block_style_yaml(msg.absolute_velocity, out, indentation + 2);
  }

  // member: absolute_velocity_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_velocity_rms:\n";
    to_block_style_yaml(msg.absolute_velocity_rms, out, indentation + 2);
  }

  // member: absolute_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_acceleration:\n";
    to_block_style_yaml(msg.absolute_acceleration, out, indentation + 2);
  }

  // member: absolute_acceleration_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_acceleration_rms:\n";
    to_block_style_yaml(msg.absolute_acceleration_rms, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << "\n";
  }

  // member: orient_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orient_rms: ";
    rosidl_generator_traits::value_to_yaml(msg.orient_rms, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: yaw_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rms: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rms, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: moving_frames_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_frames_count: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_frames_count, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: underpass_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "underpass_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.underpass_probability, out);
    out << "\n";
  }

  // member: overpass_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overpass_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.overpass_probability, out);
    out << "\n";
  }

  // member: exist_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exist_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.exist_probability, out);
    out << "\n";
  }

  // member: mov_property
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mov_property: ";
    rosidl_generator_traits::value_to_yaml(msg.mov_property, out);
    out << "\n";
  }

  // member: track_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_state: ";
    rosidl_generator_traits::value_to_yaml(msg.track_state, out);
    out << "\n";
  }

  // member: track_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_type: ";
    rosidl_generator_traits::value_to_yaml(msg.track_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarObstacle & msg, bool use_flow_style = false)
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
  const ros2_interface::msg::RadarObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::RadarObstacle & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::RadarObstacle>()
{
  return "ros2_interface::msg::RadarObstacle";
}

template<>
inline const char * name<ros2_interface::msg::RadarObstacle>()
{
  return "ros2_interface/msg/RadarObstacle";
}

template<>
struct has_fixed_size<ros2_interface::msg::RadarObstacle>
  : std::integral_constant<bool, has_fixed_size<ros2_interface::msg::Point2D>::value && has_fixed_size<ros2_interface::msg::Status>::value> {};

template<>
struct has_bounded_size<ros2_interface::msg::RadarObstacle>
  : std::integral_constant<bool, has_bounded_size<ros2_interface::msg::Point2D>::value && has_bounded_size<ros2_interface::msg::Status>::value> {};

template<>
struct is_message<ros2_interface::msg::RadarObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_OBSTACLE__TRAITS_HPP_

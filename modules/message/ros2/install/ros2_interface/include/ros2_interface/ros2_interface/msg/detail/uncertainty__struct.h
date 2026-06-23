// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Uncertainty.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position_std_dev'
// Member 'orientation_std_dev'
// Member 'linear_velocity_std_dev'
// Member 'linear_acceleration_std_dev'
// Member 'angular_velocity_std_dev'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/Uncertainty in the package ros2_interface.
typedef struct ros2_interface__msg__Uncertainty
{
  /// Standard deviation of position, east/north/up in meters.
  ros2_interface__msg__Point3D position_std_dev;
  /// Standard deviation of quaternion qx/qy/qz, unitless.
  ros2_interface__msg__Point3D orientation_std_dev;
  /// Standard deviation of linear velocity, east/north/up in meters per second.
  ros2_interface__msg__Point3D linear_velocity_std_dev;
  /// Standard deviation of linear acceleration, right/forward/up in meters per square second.
  ros2_interface__msg__Point3D linear_acceleration_std_dev;
  /// Standard deviation of angular velocity, right/forward/up in radians per second.
  ros2_interface__msg__Point3D angular_velocity_std_dev;
} ros2_interface__msg__Uncertainty;

// Struct for a sequence of ros2_interface__msg__Uncertainty.
typedef struct ros2_interface__msg__Uncertainty__Sequence
{
  ros2_interface__msg__Uncertainty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Uncertainty__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__UNCERTAINTY__STRUCT_H_

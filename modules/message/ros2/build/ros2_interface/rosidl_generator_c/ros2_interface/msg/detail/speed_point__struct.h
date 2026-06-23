// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/SpeedPoint.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SPEED_POINT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__SPEED_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SpeedPoint in the package ros2_interface.
typedef struct ros2_interface__msg__SpeedPoint
{
  /// 里程
  double s;
  /// 时间
  double t;
  /// speed (m/s)
  double v;
  /// acceleration (m/s^2)
  double a;
  /// jerk (m/s^3)
  double da;
} ros2_interface__msg__SpeedPoint;

// Struct for a sequence of ros2_interface__msg__SpeedPoint.
typedef struct ros2_interface__msg__SpeedPoint__Sequence
{
  ros2_interface__msg__SpeedPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__SpeedPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__SPEED_POINT__STRUCT_H_

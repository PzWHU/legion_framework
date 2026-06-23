// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/UltrasonicObstacle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC_OBSTACLE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UltrasonicObstacle in the package ros2_interface.
typedef struct ros2_interface__msg__UltrasonicObstacle
{
  /// 障碍物id
  int32_t id;
  /// 障碍物距离
  double range;
} ros2_interface__msg__UltrasonicObstacle;

// Struct for a sequence of ros2_interface__msg__UltrasonicObstacle.
typedef struct ros2_interface__msg__UltrasonicObstacle__Sequence
{
  ros2_interface__msg__UltrasonicObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__UltrasonicObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__ULTRASONIC_OBSTACLE__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ObstaclePriority.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_PRIORITY__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_PRIORITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ObstaclePriority in the package ros2_interface.
typedef struct ros2_interface__msg__ObstaclePriority
{
  /// CAUTION = 1; NORMAL = 2; IGNORE = 3;
  int32_t priority;
} ros2_interface__msg__ObstaclePriority;

// Struct for a sequence of ros2_interface__msg__ObstaclePriority.
typedef struct ros2_interface__msg__ObstaclePriority__Sequence
{
  ros2_interface__msg__ObstaclePriority * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ObstaclePriority__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBSTACLE_PRIORITY__STRUCT_H_

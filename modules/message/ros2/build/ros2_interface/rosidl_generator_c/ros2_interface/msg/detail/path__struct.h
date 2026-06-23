// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PATH__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'path_points'
#include "ros2_interface/msg/detail/path_point__struct.h"

/// Struct defined in msg/Path in the package ros2_interface.
typedef struct ros2_interface__msg__Path
{
  /// 名称
  rosidl_runtime_c__String name;
  /// 路径点集
  ros2_interface__msg__PathPoint__Sequence path_points;
} ros2_interface__msg__Path;

// Struct for a sequence of ros2_interface__msg__Path.
typedef struct ros2_interface__msg__Path__Sequence
{
  ros2_interface__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PATH__STRUCT_H_

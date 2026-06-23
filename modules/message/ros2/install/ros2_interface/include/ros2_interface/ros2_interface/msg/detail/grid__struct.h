// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Grid.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__GRID__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__GRID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sl_point'
#include "ros2_interface/msg/detail/sl_point__struct.h"

/// Struct defined in msg/Grid in the package ros2_interface.
typedef struct ros2_interface__msg__Grid
{
  /// 世界坐标系下的x
  double x;
  /// 世界坐标系下的y
  double y;
  /// Frenet坐标系下的x
  ros2_interface__msg__SLPoint sl_point;
  double yaw;
  /// 势场值
  double potential;
  /// 区域编号
  int32_t region_id;
} ros2_interface__msg__Grid;

// Struct for a sequence of ros2_interface__msg__Grid.
typedef struct ros2_interface__msg__Grid__Sequence
{
  ros2_interface__msg__Grid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Grid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__GRID__STRUCT_H_

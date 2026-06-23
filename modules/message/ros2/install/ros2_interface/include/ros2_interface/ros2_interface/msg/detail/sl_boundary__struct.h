// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SL_BOUNDARY__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__SL_BOUNDARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'boundary_point'
#include "ros2_interface/msg/detail/sl_point__struct.h"

/// Struct defined in msg/SLBoundary in the package ros2_interface.
typedef struct ros2_interface__msg__SLBoundary
{
  /// 起始点纵向位移
  double start_s;
  /// 终止点纵向位移
  double end_s;
  /// 起始点横向位移
  double start_l;
  /// 终止点横向位移
  double end_l;
  /// sl点集
  ros2_interface__msg__SLPoint__Sequence boundary_point;
} ros2_interface__msg__SLBoundary;

// Struct for a sequence of ros2_interface__msg__SLBoundary.
typedef struct ros2_interface__msg__SLBoundary__Sequence
{
  ros2_interface__msg__SLBoundary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__SLBoundary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__SL_BOUNDARY__STRUCT_H_

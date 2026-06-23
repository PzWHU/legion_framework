// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Point2D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT2_D__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__POINT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point2D in the package ros2_interface.
typedef struct ros2_interface__msg__Point2D
{
  /// 位置坐标x
  double x;
  /// 位置坐标y
  double y;
} ros2_interface__msg__Point2D;

// Struct for a sequence of ros2_interface__msg__Point2D.
typedef struct ros2_interface__msg__Point2D__Sequence
{
  ros2_interface__msg__Point2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Point2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT2_D__STRUCT_H_

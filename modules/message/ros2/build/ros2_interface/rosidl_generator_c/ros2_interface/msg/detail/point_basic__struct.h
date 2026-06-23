// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PointBasic.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT_BASIC__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__POINT_BASIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PointBasic in the package ros2_interface.
typedef struct ros2_interface__msg__PointBasic
{
  /// 位置坐标x
  double x;
  /// 位置坐标y
  double y;
  /// 位置坐标z
  double z;
  /// heading(rad)
  double theta;
} ros2_interface__msg__PointBasic;

// Struct for a sequence of ros2_interface__msg__PointBasic.
typedef struct ros2_interface__msg__PointBasic__Sequence
{
  ros2_interface__msg__PointBasic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PointBasic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT_BASIC__STRUCT_H_

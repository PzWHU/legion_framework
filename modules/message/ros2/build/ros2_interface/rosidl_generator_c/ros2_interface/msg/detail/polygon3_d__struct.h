// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Polygon3D.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POLYGON3_D__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__POLYGON3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/Polygon3D in the package ros2_interface.
typedef struct ros2_interface__msg__Polygon3D
{
  /// 坐标系
  int32_t coordinate_system;
  /// 三维点集
  ros2_interface__msg__Point3D__Sequence points;
} ros2_interface__msg__Polygon3D;

// Struct for a sequence of ros2_interface__msg__Polygon3D.
typedef struct ros2_interface__msg__Polygon3D__Sequence
{
  ros2_interface__msg__Polygon3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Polygon3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__POLYGON3_D__STRUCT_H_

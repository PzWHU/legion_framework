// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Polygon.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POLYGON__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__POLYGON__STRUCT_H_

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

/// Struct defined in msg/Polygon in the package ros2_interface.
typedef struct ros2_interface__msg__Polygon
{
  ros2_interface__msg__Point3D__Sequence points;
} ros2_interface__msg__Polygon;

// Struct for a sequence of ros2_interface__msg__Polygon.
typedef struct ros2_interface__msg__Polygon__Sequence
{
  ros2_interface__msg__Polygon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Polygon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__POLYGON__STRUCT_H_

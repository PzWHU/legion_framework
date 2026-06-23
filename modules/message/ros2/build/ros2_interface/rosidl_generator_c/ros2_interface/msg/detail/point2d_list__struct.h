// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Point2dList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT2D_LIST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__POINT2D_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point2d_list'
#include "ros2_interface/msg/detail/point2_d__struct.h"

/// Struct defined in msg/Point2dList in the package ros2_interface.
typedef struct ros2_interface__msg__Point2dList
{
  ros2_interface__msg__Point2D__Sequence point2d_list;
} ros2_interface__msg__Point2dList;

// Struct for a sequence of ros2_interface__msg__Point2dList.
typedef struct ros2_interface__msg__Point2dList__Sequence
{
  ros2_interface__msg__Point2dList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Point2dList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT2D_LIST__STRUCT_H_

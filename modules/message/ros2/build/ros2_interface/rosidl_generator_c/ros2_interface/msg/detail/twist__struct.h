// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TWIST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TWIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'linear'
// Member 'angular'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/Twist in the package ros2_interface.
typedef struct ros2_interface__msg__Twist
{
  std_msgs__msg__Header header;
  /// 线速度 m/s
  ros2_interface__msg__Point3D linear;
  /// 角速度 deg/s
  ros2_interface__msg__Point3D angular;
} ros2_interface__msg__Twist;

// Struct for a sequence of ros2_interface__msg__Twist.
typedef struct ros2_interface__msg__Twist__Sequence
{
  ros2_interface__msg__Twist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Twist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TWIST__STRUCT_H_

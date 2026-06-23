// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/CameraParkingStopper.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_STOPPER__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_STOPPER__STRUCT_H_

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
// Member 'bbox2d'
#include "ros2_interface/msg/detail/b_box2_d__struct.h"

/// Struct defined in msg/CameraParkingStopper in the package ros2_interface.
typedef struct ros2_interface__msg__CameraParkingStopper
{
  /// timestamp is  included in header
  std_msgs__msg__Header header;
  /// 限位器图像框
  ros2_interface__msg__BBox2D bbox2d;
} ros2_interface__msg__CameraParkingStopper;

// Struct for a sequence of ros2_interface__msg__CameraParkingStopper.
typedef struct ros2_interface__msg__CameraParkingStopper__Sequence
{
  ros2_interface__msg__CameraParkingStopper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__CameraParkingStopper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_STOPPER__STRUCT_H_

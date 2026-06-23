// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/EStop.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__E_STOP__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__E_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EStop in the package ros2_interface.
typedef struct ros2_interface__msg__EStop
{
  /// is_estop == true when emergency stop is required
  bool is_estop;
  /// 原因
  rosidl_runtime_c__String reason;
} ros2_interface__msg__EStop;

// Struct for a sequence of ros2_interface__msg__EStop.
typedef struct ros2_interface__msg__EStop__Sequence
{
  ros2_interface__msg__EStop * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__EStop__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__E_STOP__STRUCT_H_

// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PadMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PAD_MESSAGE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PAD_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PadMessage in the package ros2_interface.
typedef struct ros2_interface__msg__PadMessage
{
  /// 命令
  rosidl_runtime_c__String cmd;
} ros2_interface__msg__PadMessage;

// Struct for a sequence of ros2_interface__msg__PadMessage.
typedef struct ros2_interface__msg__PadMessage__Sequence
{
  ros2_interface__msg__PadMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PadMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PAD_MESSAGE__STRUCT_H_

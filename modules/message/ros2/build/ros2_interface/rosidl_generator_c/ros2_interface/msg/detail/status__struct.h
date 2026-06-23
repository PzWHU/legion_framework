// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__STATUS__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Status in the package ros2_interface.
typedef struct ros2_interface__msg__Status
{
  /// 错误码
  int32_t error_code;
  /// 错误码描述
  rosidl_runtime_c__String msg;
} ros2_interface__msg__Status;

// Struct for a sequence of ros2_interface__msg__Status.
typedef struct ros2_interface__msg__Status__Sequence
{
  ros2_interface__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__STATUS__STRUCT_H_

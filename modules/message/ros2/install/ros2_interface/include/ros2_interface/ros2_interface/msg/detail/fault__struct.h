// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Fault.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__FAULT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__FAULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "ros2_interface/msg/detail/time__struct.h"
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Fault in the package ros2_interface.
typedef struct ros2_interface__msg__Fault
{
  /// 时间戳
  ros2_interface__msg__Time timestamp;
  /// 故障码
  uint64_t code;
  /// 原因
  rosidl_runtime_c__String reason;
} ros2_interface__msg__Fault;

// Struct for a sequence of ros2_interface__msg__Fault.
typedef struct ros2_interface__msg__Fault__Sequence
{
  ros2_interface__msg__Fault * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Fault__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__FAULT__STRUCT_H_

// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMMAND__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_module'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Command in the package ros2_interface.
typedef struct ros2_interface__msg__Command
{
  /// 目标节点名称
  rosidl_runtime_c__String target_module;
  /// 目标节点ID
  int8_t target_id;
  /// 0:保持target_module的状态  1:打开target_module 2:关闭target_module
  int32_t target_switch;
} ros2_interface__msg__Command;

// Struct for a sequence of ros2_interface__msg__Command.
typedef struct ros2_interface__msg__Command__Sequence
{
  ros2_interface__msg__Command * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Command__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMMAND__STRUCT_H_

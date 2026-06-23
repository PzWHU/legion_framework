// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ObuCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__OBU_CMD__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__OBU_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ObuCmd in the package ros2_interface.
typedef struct ros2_interface__msg__ObuCmd
{
  /// 指令编码：10001、自动驾驶使能开关；
  int32_t code;
  /// 编码值：0、不响应；1、自定义状态；2、自定义状态...（更多参考：“ObuCmdMsg.md”）
  int32_t val;
} ros2_interface__msg__ObuCmd;

// Struct for a sequence of ros2_interface__msg__ObuCmd.
typedef struct ros2_interface__msg__ObuCmd__Sequence
{
  ros2_interface__msg__ObuCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ObuCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__OBU_CMD__STRUCT_H_

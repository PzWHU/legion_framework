// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/CommandRespond.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__STRUCT_H_

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
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CommandRespond in the package ros2_interface.
typedef struct ros2_interface__msg__CommandRespond
{
  std_msgs__msg__Header header;
  /// 发送指令的节点名称
  rosidl_runtime_c__String name;
  /// 发送节点的ID号，参考apps描述
  int8_t self_id;
  int8_t respond_id;
  /// 0 无响应 1 响应失败 2 响应成功
  int8_t status;
  /// 失败原因
  int32_t fail_code;
} ros2_interface__msg__CommandRespond;

// Struct for a sequence of ros2_interface__msg__CommandRespond.
typedef struct ros2_interface__msg__CommandRespond__Sequence
{
  ros2_interface__msg__CommandRespond * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__CommandRespond__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__COMMAND_RESPOND__STRUCT_H_

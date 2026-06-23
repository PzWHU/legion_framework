// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LOG__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "ros2_interface/msg/detail/time__struct.h"
// Member 'name'
// Member 'msg'
// Member 'file'
// Member 'function'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Log in the package ros2_interface.
typedef struct ros2_interface__msg__Log
{
  /// 时间戳
  ros2_interface__msg__Time stamp;
  /// log等级 DEBUG   : 10  INFO       : 20   WARN     : 30   ERROR   : 40  FATAL     : 50
  uint8_t level;
  /// 节点名
  rosidl_runtime_c__String name;
  /// log消息
  rosidl_runtime_c__String msg;
  /// 发送log文件路径
  rosidl_runtime_c__String file;
  /// 模块名
  rosidl_runtime_c__String function;
  /// 消息行
  uint32_t line;
} ros2_interface__msg__Log;

// Struct for a sequence of ros2_interface__msg__Log.
typedef struct ros2_interface__msg__Log__Sequence
{
  ros2_interface__msg__Log * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Log__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LOG__STRUCT_H_

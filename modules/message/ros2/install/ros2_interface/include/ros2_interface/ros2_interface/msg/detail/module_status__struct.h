// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ModuleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__MODULE_STATUS__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__MODULE_STATUS__STRUCT_H_

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
// Member 'messages'
#include "ros2_interface/msg/detail/message__struct.h"

/// Struct defined in msg/ModuleStatus in the package ros2_interface.
typedef struct ros2_interface__msg__ModuleStatus
{
  std_msgs__msg__Header header;
  /// 发送指令的节点名称
  rosidl_runtime_c__String name;
  /// 发送节点的ID号，参考apps描述
  int8_t self_id;
  /// 枚举方式 sef_id+status,比如设置1为开，2为关，当前sef_id是21，则在关闭状态下反馈值是 212
  int32_t status;
  /// 需要输出的消息列表：eg:要求显示剩余里程数为100米，self_id 为21，里程数id为08，code值为2108，value值为10000，精度为cm
  ros2_interface__msg__Message__Sequence messages;
} ros2_interface__msg__ModuleStatus;

// Struct for a sequence of ros2_interface__msg__ModuleStatus.
typedef struct ros2_interface__msg__ModuleStatus__Sequence
{
  ros2_interface__msg__ModuleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ModuleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__MODULE_STATUS__STRUCT_H_

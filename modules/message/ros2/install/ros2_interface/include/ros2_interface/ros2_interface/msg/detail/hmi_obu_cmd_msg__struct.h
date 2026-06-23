// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/HMIObuCmdMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_OBU_CMD_MSG__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_OBU_CMD_MSG__STRUCT_H_

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
// Member 'obu_cmd_list'
#include "ros2_interface/msg/detail/hmi_obu_cmd__struct.h"

/// Struct defined in msg/HMIObuCmdMsg in the package ros2_interface.
typedef struct ros2_interface__msg__HMIObuCmdMsg
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// obu的id身份
  int32_t id;
  /// obu的名称
  rosidl_runtime_c__String name;
  /// 命令列表
  ros2_interface__msg__HMIObuCmd__Sequence obu_cmd_list;
} ros2_interface__msg__HMIObuCmdMsg;

// Struct for a sequence of ros2_interface__msg__HMIObuCmdMsg.
typedef struct ros2_interface__msg__HMIObuCmdMsg__Sequence
{
  ros2_interface__msg__HMIObuCmdMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__HMIObuCmdMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_OBU_CMD_MSG__STRUCT_H_

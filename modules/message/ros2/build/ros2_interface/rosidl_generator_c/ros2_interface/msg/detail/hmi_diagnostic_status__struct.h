// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/HMIDiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_STATUS__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'message'
// Member 'hardware_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HMIDiagnosticStatus in the package ros2_interface.
typedef struct ros2_interface__msg__HMIDiagnosticStatus
{
  int32_t id;
  /// // 诊断状态
  int32_t level;
  /// //测试/组件报告的描述
  rosidl_runtime_c__String name;
  /// // 状态描述
  rosidl_runtime_c__String message;
  /// // 硬件的唯一描述
  rosidl_runtime_c__String hardware_id;
} ros2_interface__msg__HMIDiagnosticStatus;

// Struct for a sequence of ros2_interface__msg__HMIDiagnosticStatus.
typedef struct ros2_interface__msg__HMIDiagnosticStatus__Sequence
{
  ros2_interface__msg__HMIDiagnosticStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__HMIDiagnosticStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_DIAGNOSTIC_STATUS__STRUCT_H_

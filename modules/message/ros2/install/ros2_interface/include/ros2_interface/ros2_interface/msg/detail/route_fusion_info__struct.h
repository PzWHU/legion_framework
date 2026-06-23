// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RouteFusionInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ROUTE_FUSION_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__ROUTE_FUSION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fusion_reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RouteFusionInfo in the package ros2_interface.
typedef struct ros2_interface__msg__RouteFusionInfo
{
  /// 是否有效标志位
  int32_t fusion_flag;
  /// 融合原因
  rosidl_runtime_c__String fusion_reason;
} ros2_interface__msg__RouteFusionInfo;

// Struct for a sequence of ros2_interface__msg__RouteFusionInfo.
typedef struct ros2_interface__msg__RouteFusionInfo__Sequence
{
  ros2_interface__msg__RouteFusionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RouteFusionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__ROUTE_FUSION_INFO__STRUCT_H_

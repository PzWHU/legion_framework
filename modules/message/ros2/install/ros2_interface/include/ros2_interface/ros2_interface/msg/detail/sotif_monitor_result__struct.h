// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/SotifMonitorResult.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__STRUCT_H_

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
// Member 'region_value'
#include "ros2_interface/msg/detail/region__struct.h"
// Member 'grid_map'
#include "ros2_interface/msg/detail/grid__struct.h"

/// Struct defined in msg/SotifMonitorResult in the package ros2_interface.
typedef struct ros2_interface__msg__SotifMonitorResult
{
  std_msgs__msg__Header header;
  /// 区域态势
  ros2_interface__msg__Region__Sequence region_value;
  /// 栅格地图
  ros2_interface__msg__Grid__Sequence grid_map;
} ros2_interface__msg__SotifMonitorResult;

// Struct for a sequence of ros2_interface__msg__SotifMonitorResult.
typedef struct ros2_interface__msg__SotifMonitorResult__Sequence
{
  ros2_interface__msg__SotifMonitorResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__SotifMonitorResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__SOTIF_MONITOR_RESULT__STRUCT_H_

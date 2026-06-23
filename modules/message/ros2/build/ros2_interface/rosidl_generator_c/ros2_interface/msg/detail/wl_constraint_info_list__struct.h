// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/WLConstraintInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO_LIST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO_LIST__STRUCT_H_

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
// Member 'wl_constraint_info'
#include "ros2_interface/msg/detail/wl_constraint_info__struct.h"

/// Struct defined in msg/WLConstraintInfoList in the package ros2_interface.
typedef struct ros2_interface__msg__WLConstraintInfoList
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 检测出的wheel_location所需约束信息队列
  ros2_interface__msg__WLConstraintInfo__Sequence wl_constraint_info;
  /// 错误码（default = OK）
  int32_t error_code;
  /// 障碍物数据是否合法
  bool is_valid;
} ros2_interface__msg__WLConstraintInfoList;

// Struct for a sequence of ros2_interface__msg__WLConstraintInfoList.
typedef struct ros2_interface__msg__WLConstraintInfoList__Sequence
{
  ros2_interface__msg__WLConstraintInfoList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__WLConstraintInfoList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO_LIST__STRUCT_H_

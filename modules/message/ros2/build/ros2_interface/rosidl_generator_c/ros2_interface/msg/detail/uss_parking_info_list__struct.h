// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/UssParkingInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO_LIST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO_LIST__STRUCT_H_

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
// Member 'uss_parking_info'
#include "ros2_interface/msg/detail/uss_parking_info__struct.h"

/// Struct defined in msg/UssParkingInfoList in the package ros2_interface.
typedef struct ros2_interface__msg__UssParkingInfoList
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 超声波检测出的停车位数组
  ros2_interface__msg__UssParkingInfo__Sequence uss_parking_info;
  /// 错误码（default = OK）
  int32_t error_code;
  /// 超声波车位数据是否合法
  bool is_valid;
} ros2_interface__msg__UssParkingInfoList;

// Struct for a sequence of ros2_interface__msg__UssParkingInfoList.
typedef struct ros2_interface__msg__UssParkingInfoList__Sequence
{
  ros2_interface__msg__UssParkingInfoList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__UssParkingInfoList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__USS_PARKING_INFO_LIST__STRUCT_H_

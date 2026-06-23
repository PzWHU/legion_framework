// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/HMIParkingStateDisplay.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_STATE_DISPLAY__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_STATE_DISPLAY__STRUCT_H_

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

/// Struct defined in msg/HMIParkingStateDisplay in the package ros2_interface.
typedef struct ros2_interface__msg__HMIParkingStateDisplay
{
  std_msgs__msg__Header header;
  /// 0：无效 1：垂直泊车 2：水平泊车 3：斜方泊车
  int32_t parking_type;
  /// 揉库次数
  int32_t moves_counter;
  /// 剩余距离
  double remian_distance;
  /// 详细信息
  int32_t display_info;
  /// 距离最近障碍物距离
  double distance_to_leader_obj;
  int32_t state;
} ros2_interface__msg__HMIParkingStateDisplay;

// Struct for a sequence of ros2_interface__msg__HMIParkingStateDisplay.
typedef struct ros2_interface__msg__HMIParkingStateDisplay__Sequence
{
  ros2_interface__msg__HMIParkingStateDisplay * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__HMIParkingStateDisplay__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_STATE_DISPLAY__STRUCT_H_

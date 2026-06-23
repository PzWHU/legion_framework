// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ParkingOutInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__STRUCT_H_

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
// Member 'parking_out_point'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/ParkingOutInfo in the package ros2_interface.
typedef struct ros2_interface__msg__ParkingOutInfo
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// 若车位有id，同停车位id
  int32_t parking_out_id;
  int32_t parking_direction_type;
  /// true可泊出，false不可泊出
  bool is_parking_out_enable;
  /// 世界坐标系下提车点位置
  ros2_interface__msg__Point3D parking_out_point;
  /// 世界坐标系下的夹角（单位rad），提车点与正东方向夹角
  double theta;
} ros2_interface__msg__ParkingOutInfo;

// Struct for a sequence of ros2_interface__msg__ParkingOutInfo.
typedef struct ros2_interface__msg__ParkingOutInfo__Sequence
{
  ros2_interface__msg__ParkingOutInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ParkingOutInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_OUT_INFO__STRUCT_H_

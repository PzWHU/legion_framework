// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ParkingRoi.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__STRUCT_H_

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
// Member 'obstacles_vec'
#include "ros2_interface/msg/detail/point2d_list__struct.h"

/// Struct defined in msg/ParkingRoi in the package ros2_interface.
typedef struct ros2_interface__msg__ParkingRoi
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 泊车可行驶区域可视化
  ros2_interface__msg__Point2dList__Sequence obstacles_vec;
} ros2_interface__msg__ParkingRoi;

// Struct for a sequence of ros2_interface__msg__ParkingRoi.
typedef struct ros2_interface__msg__ParkingRoi__Sequence
{
  ros2_interface__msg__ParkingRoi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ParkingRoi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_ROI__STRUCT_H_

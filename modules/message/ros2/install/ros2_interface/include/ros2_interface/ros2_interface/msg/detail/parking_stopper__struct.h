// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/ParkingStopper.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__PARKING_STOPPER__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__PARKING_STOPPER__STRUCT_H_

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
// Member 'center_point_vehicle'
// Member 'center_point_abs'
// Member 'stopper_points_vehicle'
// Member 'stopper_points_abs'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/ParkingStopper in the package ros2_interface.
typedef struct ros2_interface__msg__ParkingStopper
{
  /// timestamp is  included in header
  std_msgs__msg__Header header;
  /// 车辆坐标系下限位器中心点坐标
  ros2_interface__msg__Point3D center_point_vehicle;
  /// 绝对坐标系下限位器中心点坐标
  ros2_interface__msg__Point3D center_point_abs;
  /// 车辆坐标系下限位器关键点
  ros2_interface__msg__Point3D__Sequence stopper_points_vehicle;
  /// 绝对坐标系下限位器关键点
  ros2_interface__msg__Point3D__Sequence stopper_points_abs;
} ros2_interface__msg__ParkingStopper;

// Struct for a sequence of ros2_interface__msg__ParkingStopper.
typedef struct ros2_interface__msg__ParkingStopper__Sequence
{
  ros2_interface__msg__ParkingStopper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__ParkingStopper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__PARKING_STOPPER__STRUCT_H_

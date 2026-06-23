// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/WLConstraintInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO__STRUCT_H_

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
// Member 'vehicle_point1'
// Member 'vehicle_point2'
// Member 'abs_point1'
// Member 'abs_point2'
#include "ros2_interface/msg/detail/point3_d__struct.h"

/// Struct defined in msg/WLConstraintInfo in the package ros2_interface.
typedef struct ros2_interface__msg__WLConstraintInfo
{
  /// timestamp is included in header
  std_msgs__msg__Header header;
  /// id
  int32_t id;
  /// 车辆坐标系下约束点1
  ros2_interface__msg__Point3D vehicle_point1;
  /// 车辆坐标系下约束点2
  ros2_interface__msg__Point3D vehicle_point2;
  /// 绝对坐标系下约束点1
  ros2_interface__msg__Point3D abs_point1;
  /// 绝对坐标系下约束点2
  ros2_interface__msg__Point3D abs_point2;
} ros2_interface__msg__WLConstraintInfo;

// Struct for a sequence of ros2_interface__msg__WLConstraintInfo.
typedef struct ros2_interface__msg__WLConstraintInfo__Sequence
{
  ros2_interface__msg__WLConstraintInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__WLConstraintInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__WL_CONSTRAINT_INFO__STRUCT_H_

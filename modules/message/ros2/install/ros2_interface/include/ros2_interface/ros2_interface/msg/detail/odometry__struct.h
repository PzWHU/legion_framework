// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Odometry.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__ODOMETRY__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__ODOMETRY__STRUCT_H_

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
// Member 'position'
#include "ros2_interface/msg/detail/point_enu__struct.h"
// Member 'orientation'
#include "ros2_interface/msg/detail/quaternion__struct.h"
// Member 'covariance'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Odometry in the package ros2_interface.
typedef struct ros2_interface__msg__Odometry
{
  /// 含有时间戳信息的结构体
  std_msgs__msg__Header header;
  /// 位置
  ros2_interface__msg__PointENU position;
  /// 角度
  ros2_interface__msg__Quaternion orientation;
  /// 方差
  rosidl_runtime_c__double__Sequence covariance;
} ros2_interface__msg__Odometry;

// Struct for a sequence of ros2_interface__msg__Odometry.
typedef struct ros2_interface__msg__Odometry__Sequence
{
  ros2_interface__msg__Odometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Odometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__ODOMETRY__STRUCT_H_

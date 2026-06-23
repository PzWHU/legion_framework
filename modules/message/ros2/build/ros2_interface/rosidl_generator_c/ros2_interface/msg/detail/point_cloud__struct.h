// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__POINT_CLOUD__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__POINT_CLOUD__STRUCT_H_

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
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'point'
#include "ros2_interface/msg/detail/point_xyzirt__struct.h"

/// Struct defined in msg/PointCloud in the package ros2_interface.
typedef struct ros2_interface__msg__PointCloud
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 帧id
  rosidl_runtime_c__String frame_id;
  /// True if there are no invalid points
  bool is_dense;
  /// 激光点结构体
  ros2_interface__msg__PointXYZIRT__Sequence point;
  /// 测量时间
  double measurement_time;
  /// 激光点宽度
  uint32_t width;
  /// 激光点高度
  uint32_t height;
} ros2_interface__msg__PointCloud;

// Struct for a sequence of ros2_interface__msg__PointCloud.
typedef struct ros2_interface__msg__PointCloud__Sequence
{
  ros2_interface__msg__PointCloud * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__PointCloud__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__POINT_CLOUD__STRUCT_H_

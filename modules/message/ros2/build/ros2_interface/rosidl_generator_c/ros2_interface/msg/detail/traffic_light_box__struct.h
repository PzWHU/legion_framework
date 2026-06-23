// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/TrafficLightBox.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_BOX__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'camera_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TrafficLightBox in the package ros2_interface.
typedef struct ros2_interface__msg__TrafficLightBox
{
  /// 交通灯目标在图像上中心点横向方向像素位置
  int32_t x;
  /// 交通灯目标在图像上中心点纵向方向像素位置
  int32_t y;
  /// 交通灯目标在图像上宽度
  int32_t width;
  /// 交通灯目标在图像上高度
  int32_t height;
  /// UNKNOWN = 0; RED = 1; YELLOW = 2; GREEN = 3; BLACK = 4;
  int32_t color;
  /// 是否选择
  bool selected;
  /// 相机名称
  rosidl_runtime_c__String camera_name;
} ros2_interface__msg__TrafficLightBox;

// Struct for a sequence of ros2_interface__msg__TrafficLightBox.
typedef struct ros2_interface__msg__TrafficLightBox__Sequence
{
  ros2_interface__msg__TrafficLightBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__TrafficLightBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_BOX__STRUCT_H_

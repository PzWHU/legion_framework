// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/TrafficLightList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_LIST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_LIST__STRUCT_H_

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
// Member 'traffic_light'
#include "ros2_interface/msg/detail/traffic_light__struct.h"

/// Struct defined in msg/TrafficLightList in the package ros2_interface.
typedef struct ros2_interface__msg__TrafficLightList
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 检出的交通灯数组
  ros2_interface__msg__TrafficLight__Sequence traffic_light;
  /// 数据来源：摄像头=0；V2X=1
  uint8_t source;
  /// 传感器状态：NORMAL=0；ABNORMAL=1；
  uint8_t camera_status;
  /// 数据是否合法
  bool is_valid;
} ros2_interface__msg__TrafficLightList;

// Struct for a sequence of ros2_interface__msg__TrafficLightList.
typedef struct ros2_interface__msg__TrafficLightList__Sequence
{
  ros2_interface__msg__TrafficLightList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__TrafficLightList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_LIST__STRUCT_H_

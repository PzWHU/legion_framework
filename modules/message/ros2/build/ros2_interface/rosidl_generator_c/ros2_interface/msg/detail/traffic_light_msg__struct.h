// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/TrafficLightMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_H_

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
// Member 'traffic_light_debug'
#include "ros2_interface/msg/detail/traffic_light_debug__struct.h"

/// Struct defined in msg/TrafficLightMsg in the package ros2_interface.
typedef struct ros2_interface__msg__TrafficLightMsg
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 检出的交通灯数组
  ros2_interface__msg__TrafficLight__Sequence traffic_light;
  /// 交通灯数组调试
  ros2_interface__msg__TrafficLightDebug traffic_light_debug;
  /// 是否包含交通灯
  bool contain_lights;
  /// CAMERA_FRONT_LONG = 0; CAMERA_FRONT_NARROW = 1; CAMERA_FRONT_SHORT = 2; CAMERA_FRONT_WIDE = 3;
  int32_t camera_id;
  /// true: valid  false: invalid
  bool is_valid;
} ros2_interface__msg__TrafficLightMsg;

// Struct for a sequence of ros2_interface__msg__TrafficLightMsg.
typedef struct ros2_interface__msg__TrafficLightMsg__Sequence
{
  ros2_interface__msg__TrafficLightMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__TrafficLightMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_H_

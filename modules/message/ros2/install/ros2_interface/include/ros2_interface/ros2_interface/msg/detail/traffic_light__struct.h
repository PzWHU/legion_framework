// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'light_rect'
#include "ros2_interface/msg/detail/image_rect__struct.h"
// Member 'position'
#include "ros2_interface/msg/detail/point3_d__struct.h"
// Member 'light_lanes'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'create_time'
#include "ros2_interface/msg/detail/time__struct.h"

/// Struct defined in msg/TrafficLight in the package ros2_interface.
typedef struct ros2_interface__msg__TrafficLight
{
  /// UNKNOWN = 0; RED = 1; YELLOW = 2; GREEN = 3; BLACK = 4;
  int32_t color;
  /// light id
  uint32_t id;
  /// STRAIGHT = 0; TURN_LEFT = 1; TURN_RIGHT = 2; STRAIGHT_TURN_LEFT = 3; STRAIGHT_TURN_RIGHT =4; CIRCULAR = 5; PEDESTRIAN = 6; CYCLIST = 7; UNKNOWN = 8;
  int32_t type;
  /// 置信度confdence:
  double confidence;
  /// 交通灯矩形框light rect
  ros2_interface__msg__ImageRect light_rect;
  /// 交通灯位置position of light
  ros2_interface__msg__Point3D position;
  /// 距离distance between light and stop line
  double distance;
  /// corresponding lanes of light
  rosidl_runtime_c__int32__Sequence light_lanes;
  /// duration of a light since track
  double tracking_time;
  /// true:
  bool blink;
  /// duration of a light blinking
  double blinking_time;
  /// V2X time of light
  double remaining_time;
  /// time of light detected
  ros2_interface__msg__Time create_time;
} ros2_interface__msg__TrafficLight;

// Struct for a sequence of ros2_interface__msg__TrafficLight.
typedef struct ros2_interface__msg__TrafficLight__Sequence
{
  ros2_interface__msg__TrafficLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__TrafficLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_

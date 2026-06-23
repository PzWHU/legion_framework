// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/TrafficLightDebug.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cropbox'
// Member 'box'
// Member 'crop_roi'
// Member 'projected_roi'
// Member 'rectified_roi'
// Member 'debug_roi'
#include "ros2_interface/msg/detail/traffic_light_box__struct.h"

/// Struct defined in msg/TrafficLightDebug in the package ros2_interface.
typedef struct ros2_interface__msg__TrafficLightDebug
{
  ros2_interface__msg__TrafficLightBox cropbox;
  ros2_interface__msg__TrafficLightBox__Sequence box;
  int32_t signal_num;
  int32_t valid_pos;
  double ts_diff_pos;
  double ts_diff_sys;
  int32_t project_error;
  double distance_to_stop_line;
  int32_t camera_id;
  ros2_interface__msg__TrafficLightBox__Sequence crop_roi;
  ros2_interface__msg__TrafficLightBox__Sequence projected_roi;
  ros2_interface__msg__TrafficLightBox__Sequence rectified_roi;
  ros2_interface__msg__TrafficLightBox__Sequence debug_roi;
} ros2_interface__msg__TrafficLightDebug;

// Struct for a sequence of ros2_interface__msg__TrafficLightDebug.
typedef struct ros2_interface__msg__TrafficLightDebug__Sequence
{
  ros2_interface__msg__TrafficLightDebug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__TrafficLightDebug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAFFIC_LIGHT_DEBUG__STRUCT_H_

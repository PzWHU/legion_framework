// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/RadarState.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'radar_state_error'
#include "ros2_interface/msg/detail/radar_state_error__struct.h"
// Member 'radar_state_mode'
#include "ros2_interface/msg/detail/radar_state_mode__struct.h"

/// Struct defined in msg/RadarState in the package ros2_interface.
typedef struct ros2_interface__msg__RadarState
{
  uint8_t sensor_id;
  uint8_t nvm_read_status;
  uint8_t nvm_write_status;
  ros2_interface__msg__RadarStateError radar_state_error;
  ros2_interface__msg__RadarStateMode radar_state_mode;
  uint16_t max_distance;
  uint8_t sort_index;
  uint8_t radar_power;
  uint8_t ctl_relay;
  uint8_t output_type;
  uint8_t send_quality;
  uint8_t send_extinfo;
  uint8_t motion_rx_state;
  uint8_t rcs_threshold;
  uint8_t connector_direction;
  uint8_t radar_position;
  uint8_t hw_error;
} ros2_interface__msg__RadarState;

// Struct for a sequence of ros2_interface__msg__RadarState.
typedef struct ros2_interface__msg__RadarState__Sequence
{
  ros2_interface__msg__RadarState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__RadarState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__RADAR_STATE__STRUCT_H_

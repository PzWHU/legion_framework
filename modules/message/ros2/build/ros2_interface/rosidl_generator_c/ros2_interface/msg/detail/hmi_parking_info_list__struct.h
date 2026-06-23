// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/HMIParkingInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO_LIST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO_LIST__STRUCT_H_

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
// Member 'parking_info'
#include "ros2_interface/msg/detail/hmi_parking_info__struct.h"

/// Struct defined in msg/HMIParkingInfoList in the package ros2_interface.
typedef struct ros2_interface__msg__HMIParkingInfoList
{
  /// timestamp is  included in header
  std_msgs__msg__Header header;
  ros2_interface__msg__HMIParkingInfo__Sequence parking_info;
  bool parking_out_enable;
  int32_t parking_out_direction;
  int32_t parking_out_id;
} ros2_interface__msg__HMIParkingInfoList;

// Struct for a sequence of ros2_interface__msg__HMIParkingInfoList.
typedef struct ros2_interface__msg__HMIParkingInfoList__Sequence
{
  ros2_interface__msg__HMIParkingInfoList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__HMIParkingInfoList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__HMI_PARKING_INFO_LIST__STRUCT_H_

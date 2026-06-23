// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__MESSAGE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Message in the package ros2_interface.
typedef struct ros2_interface__msg__Message
{
  /// 指定需要显示的值的code定义，需要与self_id绑定 作为前缀
  int32_t code;
  /// 对应显示的值或表达的状态
  int32_t value;
} ros2_interface__msg__Message;

// Struct for a sequence of ros2_interface__msg__Message.
typedef struct ros2_interface__msg__Message__Sequence
{
  ros2_interface__msg__Message * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__Message__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__MESSAGE__STRUCT_H_

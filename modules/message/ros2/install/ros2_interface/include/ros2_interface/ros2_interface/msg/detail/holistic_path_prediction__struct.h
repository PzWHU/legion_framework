// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/HolisticPathPrediction.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'hpp'
#include "ros2_interface/msg/detail/lane_line_cubic_curve__struct.h"

/// Struct defined in msg/HolisticPathPrediction in the package ros2_interface.
typedef struct ros2_interface__msg__HolisticPathPrediction
{
  /// 行驶路径预测： 1、针对没有车道线等特殊路段如：收费站附近、进出匝道附近、 维修区域附近，可以虚拟出可行驶路径预测； 2、针对车辆遮挡的区域，可以虚拟出可行驶路径预测；
  ros2_interface__msg__LaneLineCubicCurve hpp;
  /// 规划路径来源:  0 - invalid,  1 - 双侧车道线,  2 - 左侧车道线,  3 - 右侧车道线, 4 - 左侧路沿，  5 - 右侧路沿， 6 - 前车轨迹，  7 - freespace, 8 - 本车轨迹预测
  int32_t planning_source;
  /// 自车道宽度
  double ego_lane_width;
  /// 置信度
  double confidence;
} ros2_interface__msg__HolisticPathPrediction;

// Struct for a sequence of ros2_interface__msg__HolisticPathPrediction.
typedef struct ros2_interface__msg__HolisticPathPrediction__Sequence
{
  ros2_interface__msg__HolisticPathPrediction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__HolisticPathPrediction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__HOLISTIC_PATH_PREDICTION__STRUCT_H_

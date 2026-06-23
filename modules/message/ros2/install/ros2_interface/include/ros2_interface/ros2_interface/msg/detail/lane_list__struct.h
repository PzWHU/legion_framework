// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/LaneList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_LIST__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_LIST__STRUCT_H_

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
// Member 'sensor_calibrator'
#include "ros2_interface/msg/detail/sensor_calibrator__struct.h"
// Member 'camera_laneline'
#include "ros2_interface/msg/detail/lane_line__struct.h"
// Member 'hpp'
#include "ros2_interface/msg/detail/holistic_path_prediction__struct.h"
// Member 'road_marks'
#include "ros2_interface/msg/detail/road_mark__struct.h"

/// Struct defined in msg/LaneList in the package ros2_interface.
typedef struct ros2_interface__msg__LaneList
{
  /// 消息头
  std_msgs__msg__Header header;
  /// 安装的传感器id(camera,lidar,radar) ' 相机id: 0-front_center相机 1-front_left相机 2-front_right相机 3-left_front相机 4-left_back右后相机 5-right_front相机 6-right_back相机 7-back相机'  8-相机融合
  int32_t sensor_id;
  /// 错误码： ERROR_NONE = 0; ERROR_UNKNOWN = 1;
  int8_t error_code;
  /// 传感器状态： NORMAL=0； ABNORMAL=1；
  uint8_t sensor_status;
  /// 坐标切换状态（0-坐标系切换成功 1-坐标系切换中 2-坐标系切换故障）
  int32_t change_origin_flag;
  /// 车道线数据是否合法
  bool is_valid;
  /// 传感器标定参数
  ros2_interface__msg__SensorCalibrator sensor_calibrator;
  /// 车道线检测结果数组
  ros2_interface__msg__LaneLine__Sequence camera_laneline;
  /// 行驶预测线
  ros2_interface__msg__HolisticPathPrediction hpp;
  /// 路面标识
  ros2_interface__msg__RoadMark__Sequence road_marks;
} ros2_interface__msg__LaneList;

// Struct for a sequence of ros2_interface__msg__LaneList.
typedef struct ros2_interface__msg__LaneList__Sequence
{
  ros2_interface__msg__LaneList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__LaneList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_LIST__STRUCT_H_

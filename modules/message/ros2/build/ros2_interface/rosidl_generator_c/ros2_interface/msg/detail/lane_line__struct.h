// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/LaneLine.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'curve_vehicle'
// Member 'curve_image'
// Member 'curve_abs'
#include "ros2_interface/msg/detail/lane_line_cubic_curve__struct.h"
// Member 'pts_vehicle'
// Member 'pts_abs'
#include "ros2_interface/msg/detail/point3_d__struct.h"
// Member 'pts_image'
// Member 'pts_key'
#include "ros2_interface/msg/detail/point2_d__struct.h"
// Member 'image_end_point'
#include "ros2_interface/msg/detail/end_points__struct.h"
// Member 'homography_mat'
// Member 'homography_mat_inv'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'create_time'
#include "ros2_interface/msg/detail/time__struct.h"

/// Struct defined in msg/LaneLine in the package ros2_interface.
typedef struct ros2_interface__msg__LaneLine
{
  /// 车道线类型：   SOLID = 0;   DASHED = 1;   ROAD_DELIMITER = 2;   NONE = 3;   UNKNOWN = 4;
  int32_t lane_type;
  /// 车道线颜色：   WHITE = 0;   YELLOW = 1;   OTHERS = 2;   UNKNOWN = 3;
  int32_t lane_color;
  /// 车道线位置类别：    BOLLARD_LEFT = -5;   FOURTH_LEFT = -4;   THIRD_LEFT = -3;   ADJACENT_LEFT = -2;  //!< lane marking on the left side next to ego lane   EGO_LEFT = -1;       //!< left lane marking of the ego lane   EGO_RIGHT = 1;       //!< right lane marking of the ego lane   ADJACENT_RIGHT = 2;  //!< lane marking on the right side next to ego lane   THIRD_RIGHT = 3;   FOURTH_RIGHT = 4;   BOLLARD_RIGHT = 5;   OTHER = 6;    //!< other types of lane   UNKNOWN = 7;  //!< background
  int32_t pos_type;
  /// 车辆坐标系车道线三次曲线系数
  ros2_interface__msg__LaneLineCubicCurve curve_vehicle;
  /// 图像坐标系车道线三次曲线系数
  ros2_interface__msg__LaneLineCubicCurve curve_image;
  /// 世界坐标系车道线三次曲线系数
  ros2_interface__msg__LaneLineCubicCurve curve_abs;
  /// 车辆坐标系车道线点集
  ros2_interface__msg__Point3D__Sequence pts_vehicle;
  /// 图像坐标系车道线点集
  ros2_interface__msg__Point2D__Sequence pts_image;
  /// 世界坐标系车道线点集
  ros2_interface__msg__Point3D__Sequence pts_abs;
  /// 车道线上顶点与下顶点
  ros2_interface__msg__EndPoints image_end_point;
  /// 车道线关键点数组
  ros2_interface__msg__Point2D__Sequence pts_key;
  /// 高精车道线id
  uint8_t hd_lane_id;
  /// 车道线置信度
  double confidence;
  /// 车道线质量：   VERY_LOW = 0;   LOW = 1;   HIGH = 2;   VERY_HIGH = 3;
  int32_t lane_quality;
  /// 融合车道线类别：   CAMERA = 0;   HD = 1;   FUSED = 2;   UNKNOWN = 3;   if value is 1, lane_quality = 3
  int32_t fused_lane_type;
  /// 透视变换矩阵
  rosidl_runtime_c__double__Sequence homography_mat;
  /// 透视变换逆矩阵
  rosidl_runtime_c__double__Sequence homography_mat_inv;
  /// 坐标系类别：   FRAME = 0;   IMAGE = 1;   CAMERA = 2;   VEHICLE = 3;   ABSOLUTE = 4;
  int32_t lane_coordinate_type;
  /// 使用类别：   REAL = 0;   VIRTUAL = 1;
  int32_t use_type;
  /// 车道线被识别的时间戳
  ros2_interface__msg__Time create_time;
} ros2_interface__msg__LaneLine;

// Struct for a sequence of ros2_interface__msg__LaneLine.
typedef struct ros2_interface__msg__LaneLine__Sequence
{
  ros2_interface__msg__LaneLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__LaneLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LANE_LINE__STRUCT_H_

// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_interface:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_H_
#define ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_H_

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
// Member 'name'
// Member 'message'
// Member 'hardware_id'
#include "rosidl_runtime_c/string.h"
// Member 'values'
#include "ros2_interface/msg/detail/key_values__struct.h"

/// Struct defined in msg/DiagnosticStatus in the package ros2_interface.
typedef struct ros2_interface__msg__DiagnosticStatus
{
  /// timestamp is  included in header
  std_msgs__msg__Header header;
  /// level*100000 + 序号（RECOVER 400000） WARN 车运动状态（静止）100001 左前门状态（关闭）100002 右前门状态（关闭）100003 左后门状态（关闭）100004 右后门状态（关闭）100005 安全带状态（关闭）100006 后视镜状态（打开）100007 充电枪状态 100008 油门状态 （正常）100009 智驾系统（正常）100010 动力系统（正常）100011 左前轮胎压（正常）100012 右前轮胎压（正常）100013 左后轮胎压（正常）100014 右后轮胎压（正常）100015 转向系统（正常）100016 制动系统（正常）100017 档位系统（正常）100018 EPB系统（正常）100019 气囊状态（正常）100020 油箱盖状态（正常）100021 后备箱状态（正常）100022 底盘信息（正常）100023 定位信息（正常）100024 方向盘人工接管 100025 电量表（正常）100026 暂停超时 100027 暂停次数过多 100028 泊车超时 100029 人为刹车 100030 人为挂P挡 100031 障碍物碰撞 100032 EPB状态(释放) 100033 ERROR 规划失败 200000
  int32_t id;
  /// 诊断状态
  int32_t level;
  /// 测试/组件报告的描述
  rosidl_runtime_c__String name;
  /// 状态描述
  rosidl_runtime_c__String message;
  /// 硬件的唯一描述
  rosidl_runtime_c__String hardware_id;
  /// 与状态关联的key-value组
  ros2_interface__msg__KeyValues__Sequence values;
} ros2_interface__msg__DiagnosticStatus;

// Struct for a sequence of ros2_interface__msg__DiagnosticStatus.
typedef struct ros2_interface__msg__DiagnosticStatus__Sequence
{
  ros2_interface__msg__DiagnosticStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_interface__msg__DiagnosticStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_H_

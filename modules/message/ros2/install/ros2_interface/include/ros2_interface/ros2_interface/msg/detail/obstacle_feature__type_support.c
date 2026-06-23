// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/ObstacleFeature.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/obstacle_feature__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/obstacle_feature__functions.h"
#include "ros2_interface/msg/detail/obstacle_feature__struct.h"


// Include directives for member types
// Member `polygon_point`
// Member `position`
// Member `front_position`
// Member `velocity`
// Member `raw_velocity`
// Member `acceleration`
// Member `t_position`
// Member `t_velocity`
// Member `t_acceleration`
#include "ros2_interface/msg/point3_d.h"
// Member `polygon_point`
// Member `position`
// Member `front_position`
// Member `velocity`
// Member `raw_velocity`
// Member `acceleration`
// Member `t_position`
// Member `t_velocity`
// Member `t_acceleration`
#include "ros2_interface/msg/detail/point3_d__rosidl_typesupport_introspection_c.h"
// Member `priority`
#include "ros2_interface/msg/obstacle_priority.h"
// Member `priority`
#include "ros2_interface/msg/detail/obstacle_priority__rosidl_typesupport_introspection_c.h"
// Member `future_trajectory_points`
#include "ros2_interface/msg/prediction_trajectory_point.h"
// Member `future_trajectory_points`
#include "ros2_interface/msg/detail/prediction_trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `short_term_predicted_trajectory_points`
// Member `adc_trajectory_point`
#include "ros2_interface/msg/trajectory_point_in_prediction.h"
// Member `short_term_predicted_trajectory_points`
// Member `adc_trajectory_point`
#include "ros2_interface/msg/detail/trajectory_point_in_prediction__rosidl_typesupport_introspection_c.h"
// Member `predicted_trajectory`
#include "ros2_interface/msg/trajectory_in_prediction.h"
// Member `predicted_trajectory`
#include "ros2_interface/msg/detail/trajectory_in_prediction__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__ObstacleFeature__init(message_memory);
}

void ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_fini_function(void * message_memory)
{
  ros2_interface__msg__ObstacleFeature__fini(message_memory);
}

size_t ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__size_function__ObstacleFeature__future_trajectory_points(
  const void * untyped_member)
{
  const ros2_interface__msg__PredictionTrajectoryPoint__Sequence * member =
    (const ros2_interface__msg__PredictionTrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__future_trajectory_points(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__PredictionTrajectoryPoint__Sequence * member =
    (const ros2_interface__msg__PredictionTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__future_trajectory_points(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__PredictionTrajectoryPoint__Sequence * member =
    (ros2_interface__msg__PredictionTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__fetch_function__ObstacleFeature__future_trajectory_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__PredictionTrajectoryPoint * item =
    ((const ros2_interface__msg__PredictionTrajectoryPoint *)
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__future_trajectory_points(untyped_member, index));
  ros2_interface__msg__PredictionTrajectoryPoint * value =
    (ros2_interface__msg__PredictionTrajectoryPoint *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__assign_function__ObstacleFeature__future_trajectory_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__PredictionTrajectoryPoint * item =
    ((ros2_interface__msg__PredictionTrajectoryPoint *)
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__future_trajectory_points(untyped_member, index));
  const ros2_interface__msg__PredictionTrajectoryPoint * value =
    (const ros2_interface__msg__PredictionTrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__resize_function__ObstacleFeature__future_trajectory_points(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__PredictionTrajectoryPoint__Sequence * member =
    (ros2_interface__msg__PredictionTrajectoryPoint__Sequence *)(untyped_member);
  ros2_interface__msg__PredictionTrajectoryPoint__Sequence__fini(member);
  return ros2_interface__msg__PredictionTrajectoryPoint__Sequence__init(member, size);
}

size_t ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__size_function__ObstacleFeature__short_term_predicted_trajectory_points(
  const void * untyped_member)
{
  const ros2_interface__msg__TrajectoryPointInPrediction__Sequence * member =
    (const ros2_interface__msg__TrajectoryPointInPrediction__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__short_term_predicted_trajectory_points(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrajectoryPointInPrediction__Sequence * member =
    (const ros2_interface__msg__TrajectoryPointInPrediction__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__short_term_predicted_trajectory_points(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence * member =
    (ros2_interface__msg__TrajectoryPointInPrediction__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__fetch_function__ObstacleFeature__short_term_predicted_trajectory_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrajectoryPointInPrediction * item =
    ((const ros2_interface__msg__TrajectoryPointInPrediction *)
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__short_term_predicted_trajectory_points(untyped_member, index));
  ros2_interface__msg__TrajectoryPointInPrediction * value =
    (ros2_interface__msg__TrajectoryPointInPrediction *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__assign_function__ObstacleFeature__short_term_predicted_trajectory_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrajectoryPointInPrediction * item =
    ((ros2_interface__msg__TrajectoryPointInPrediction *)
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__short_term_predicted_trajectory_points(untyped_member, index));
  const ros2_interface__msg__TrajectoryPointInPrediction * value =
    (const ros2_interface__msg__TrajectoryPointInPrediction *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__resize_function__ObstacleFeature__short_term_predicted_trajectory_points(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence * member =
    (ros2_interface__msg__TrajectoryPointInPrediction__Sequence *)(untyped_member);
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence__fini(member);
  return ros2_interface__msg__TrajectoryPointInPrediction__Sequence__init(member, size);
}

size_t ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__size_function__ObstacleFeature__predicted_trajectory(
  const void * untyped_member)
{
  const ros2_interface__msg__TrajectoryInPrediction__Sequence * member =
    (const ros2_interface__msg__TrajectoryInPrediction__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__predicted_trajectory(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrajectoryInPrediction__Sequence * member =
    (const ros2_interface__msg__TrajectoryInPrediction__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__predicted_trajectory(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrajectoryInPrediction__Sequence * member =
    (ros2_interface__msg__TrajectoryInPrediction__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__fetch_function__ObstacleFeature__predicted_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrajectoryInPrediction * item =
    ((const ros2_interface__msg__TrajectoryInPrediction *)
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__predicted_trajectory(untyped_member, index));
  ros2_interface__msg__TrajectoryInPrediction * value =
    (ros2_interface__msg__TrajectoryInPrediction *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__assign_function__ObstacleFeature__predicted_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrajectoryInPrediction * item =
    ((ros2_interface__msg__TrajectoryInPrediction *)
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__predicted_trajectory(untyped_member, index));
  const ros2_interface__msg__TrajectoryInPrediction * value =
    (const ros2_interface__msg__TrajectoryInPrediction *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__resize_function__ObstacleFeature__predicted_trajectory(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrajectoryInPrediction__Sequence * member =
    (ros2_interface__msg__TrajectoryInPrediction__Sequence *)(untyped_member);
  ros2_interface__msg__TrajectoryInPrediction__Sequence__fini(member);
  return ros2_interface__msg__TrajectoryInPrediction__Sequence__init(member, size);
}

size_t ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__size_function__ObstacleFeature__adc_trajectory_point(
  const void * untyped_member)
{
  const ros2_interface__msg__TrajectoryPointInPrediction__Sequence * member =
    (const ros2_interface__msg__TrajectoryPointInPrediction__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__adc_trajectory_point(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrajectoryPointInPrediction__Sequence * member =
    (const ros2_interface__msg__TrajectoryPointInPrediction__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__adc_trajectory_point(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence * member =
    (ros2_interface__msg__TrajectoryPointInPrediction__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__fetch_function__ObstacleFeature__adc_trajectory_point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrajectoryPointInPrediction * item =
    ((const ros2_interface__msg__TrajectoryPointInPrediction *)
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__adc_trajectory_point(untyped_member, index));
  ros2_interface__msg__TrajectoryPointInPrediction * value =
    (ros2_interface__msg__TrajectoryPointInPrediction *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__assign_function__ObstacleFeature__adc_trajectory_point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrajectoryPointInPrediction * item =
    ((ros2_interface__msg__TrajectoryPointInPrediction *)
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__adc_trajectory_point(untyped_member, index));
  const ros2_interface__msg__TrajectoryPointInPrediction * value =
    (const ros2_interface__msg__TrajectoryPointInPrediction *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__resize_function__ObstacleFeature__adc_trajectory_point(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence * member =
    (ros2_interface__msg__TrajectoryPointInPrediction__Sequence *)(untyped_member);
  ros2_interface__msg__TrajectoryPointInPrediction__Sequence__fini(member);
  return ros2_interface__msg__TrajectoryPointInPrediction__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[31] = {
  {
    "obstacle_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, obstacle_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "polygon_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, polygon_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, front_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, raw_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, velocity_heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracking_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, tracking_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, t_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, t_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_velocity_heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, t_velocity_heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, t_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, t_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, t_acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_still",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, is_still),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label_update_time_delta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, label_update_time_delta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_near_junction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, is_near_junction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "future_trajectory_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, future_trajectory_points),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__size_function__ObstacleFeature__future_trajectory_points,  // size() function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__future_trajectory_points,  // get_const(index) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__future_trajectory_points,  // get(index) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__fetch_function__ObstacleFeature__future_trajectory_points,  // fetch(index, &value) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__assign_function__ObstacleFeature__future_trajectory_points,  // assign(index, value) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__resize_function__ObstacleFeature__future_trajectory_points  // resize(index) function pointer
  },
  {
    "short_term_predicted_trajectory_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, short_term_predicted_trajectory_points),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__size_function__ObstacleFeature__short_term_predicted_trajectory_points,  // size() function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__short_term_predicted_trajectory_points,  // get_const(index) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__short_term_predicted_trajectory_points,  // get(index) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__fetch_function__ObstacleFeature__short_term_predicted_trajectory_points,  // fetch(index, &value) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__assign_function__ObstacleFeature__short_term_predicted_trajectory_points,  // assign(index, value) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__resize_function__ObstacleFeature__short_term_predicted_trajectory_points  // resize(index) function pointer
  },
  {
    "predicted_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, predicted_trajectory),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__size_function__ObstacleFeature__predicted_trajectory,  // size() function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__predicted_trajectory,  // get_const(index) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__predicted_trajectory,  // get(index) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__fetch_function__ObstacleFeature__predicted_trajectory,  // fetch(index, &value) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__assign_function__ObstacleFeature__predicted_trajectory,  // assign(index, value) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__resize_function__ObstacleFeature__predicted_trajectory  // resize(index) function pointer
  },
  {
    "adc_trajectory_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ObstacleFeature, adc_trajectory_point),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__size_function__ObstacleFeature__adc_trajectory_point,  // size() function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_const_function__ObstacleFeature__adc_trajectory_point,  // get_const(index) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__get_function__ObstacleFeature__adc_trajectory_point,  // get(index) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__fetch_function__ObstacleFeature__adc_trajectory_point,  // fetch(index, &value) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__assign_function__ObstacleFeature__adc_trajectory_point,  // assign(index, value) function pointer
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__resize_function__ObstacleFeature__adc_trajectory_point  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_members = {
  "ros2_interface__msg",  // message namespace
  "ObstacleFeature",  // message name
  31,  // number of fields
  sizeof(ros2_interface__msg__ObstacleFeature),
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array,  // message members
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_type_support_handle = {
  0,
  &ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, ObstacleFeature)() {
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[25].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, ObstaclePriority)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[27].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, PredictionTrajectoryPoint)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[28].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrajectoryPointInPrediction)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[29].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrajectoryInPrediction)();
  ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_member_array[30].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrajectoryPointInPrediction)();
  if (!ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__ObstacleFeature__rosidl_typesupport_introspection_c__ObstacleFeature_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

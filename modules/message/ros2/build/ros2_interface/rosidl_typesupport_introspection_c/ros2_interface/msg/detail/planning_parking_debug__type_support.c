// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/PlanningParkingDebug.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/planning_parking_debug__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/planning_parking_debug__functions.h"
#include "ros2_interface/msg/detail/planning_parking_debug__struct.h"


// Include directives for member types
// Member `vehicle_preiew_polygon`
// Member `obstacles_polygon`
#include "ros2_interface/msg/polygon2_d.h"
// Member `vehicle_preiew_polygon`
// Member `obstacles_polygon`
#include "ros2_interface/msg/detail/polygon2_d__rosidl_typesupport_introspection_c.h"
// Member `path_points`
#include "ros2_interface/msg/path_point.h"
// Member `path_points`
#include "ros2_interface/msg/detail/path_point__rosidl_typesupport_introspection_c.h"
// Member `obstacles_vec`
#include "ros2_interface/msg/point2d_list.h"
// Member `obstacles_vec`
#include "ros2_interface/msg/detail/point2d_list__rosidl_typesupport_introspection_c.h"
// Member `warm_start_traj`
// Member `smoothed_traj_stage1`
// Member `smoothed_traj_stage2`
#include "ros2_interface/msg/trajectory_point.h"
// Member `warm_start_traj`
// Member `smoothed_traj_stage1`
// Member `smoothed_traj_stage2`
#include "ros2_interface/msg/detail/trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `reference_line`
// Member `trajectory_array`
// Member `optimal_coarse_trajectory`
// Member `optimal_smooth_trajectory`
#include "ros2_interface/msg/trajectory.h"
// Member `reference_line`
// Member `trajectory_array`
// Member `optimal_coarse_trajectory`
// Member `optimal_smooth_trajectory`
#include "ros2_interface/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"
// Member `replan_reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__PlanningParkingDebug__init(message_memory);
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_fini_function(void * message_memory)
{
  ros2_interface__msg__PlanningParkingDebug__fini(message_memory);
}

size_t ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__vehicle_preiew_polygon(
  const void * untyped_member)
{
  const ros2_interface__msg__Polygon2D__Sequence * member =
    (const ros2_interface__msg__Polygon2D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__vehicle_preiew_polygon(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Polygon2D__Sequence * member =
    (const ros2_interface__msg__Polygon2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__vehicle_preiew_polygon(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Polygon2D__Sequence * member =
    (ros2_interface__msg__Polygon2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__vehicle_preiew_polygon(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Polygon2D * item =
    ((const ros2_interface__msg__Polygon2D *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__vehicle_preiew_polygon(untyped_member, index));
  ros2_interface__msg__Polygon2D * value =
    (ros2_interface__msg__Polygon2D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__vehicle_preiew_polygon(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Polygon2D * item =
    ((ros2_interface__msg__Polygon2D *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__vehicle_preiew_polygon(untyped_member, index));
  const ros2_interface__msg__Polygon2D * value =
    (const ros2_interface__msg__Polygon2D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__vehicle_preiew_polygon(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Polygon2D__Sequence * member =
    (ros2_interface__msg__Polygon2D__Sequence *)(untyped_member);
  ros2_interface__msg__Polygon2D__Sequence__fini(member);
  return ros2_interface__msg__Polygon2D__Sequence__init(member, size);
}

size_t ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__obstacles_polygon(
  const void * untyped_member)
{
  const ros2_interface__msg__Polygon2D__Sequence * member =
    (const ros2_interface__msg__Polygon2D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__obstacles_polygon(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Polygon2D__Sequence * member =
    (const ros2_interface__msg__Polygon2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__obstacles_polygon(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Polygon2D__Sequence * member =
    (ros2_interface__msg__Polygon2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__obstacles_polygon(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Polygon2D * item =
    ((const ros2_interface__msg__Polygon2D *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__obstacles_polygon(untyped_member, index));
  ros2_interface__msg__Polygon2D * value =
    (ros2_interface__msg__Polygon2D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__obstacles_polygon(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Polygon2D * item =
    ((ros2_interface__msg__Polygon2D *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__obstacles_polygon(untyped_member, index));
  const ros2_interface__msg__Polygon2D * value =
    (const ros2_interface__msg__Polygon2D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__obstacles_polygon(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Polygon2D__Sequence * member =
    (ros2_interface__msg__Polygon2D__Sequence *)(untyped_member);
  ros2_interface__msg__Polygon2D__Sequence__fini(member);
  return ros2_interface__msg__Polygon2D__Sequence__init(member, size);
}

size_t ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__path_points(
  const void * untyped_member)
{
  const ros2_interface__msg__PathPoint__Sequence * member =
    (const ros2_interface__msg__PathPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__path_points(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__PathPoint__Sequence * member =
    (const ros2_interface__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__path_points(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__PathPoint__Sequence * member =
    (ros2_interface__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__path_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__PathPoint * item =
    ((const ros2_interface__msg__PathPoint *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__path_points(untyped_member, index));
  ros2_interface__msg__PathPoint * value =
    (ros2_interface__msg__PathPoint *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__path_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__PathPoint * item =
    ((ros2_interface__msg__PathPoint *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__path_points(untyped_member, index));
  const ros2_interface__msg__PathPoint * value =
    (const ros2_interface__msg__PathPoint *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__path_points(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__PathPoint__Sequence * member =
    (ros2_interface__msg__PathPoint__Sequence *)(untyped_member);
  ros2_interface__msg__PathPoint__Sequence__fini(member);
  return ros2_interface__msg__PathPoint__Sequence__init(member, size);
}

size_t ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__obstacles_vec(
  const void * untyped_member)
{
  const ros2_interface__msg__Point2dList__Sequence * member =
    (const ros2_interface__msg__Point2dList__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__obstacles_vec(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point2dList__Sequence * member =
    (const ros2_interface__msg__Point2dList__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__obstacles_vec(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point2dList__Sequence * member =
    (ros2_interface__msg__Point2dList__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__obstacles_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point2dList * item =
    ((const ros2_interface__msg__Point2dList *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__obstacles_vec(untyped_member, index));
  ros2_interface__msg__Point2dList * value =
    (ros2_interface__msg__Point2dList *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__obstacles_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point2dList * item =
    ((ros2_interface__msg__Point2dList *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__obstacles_vec(untyped_member, index));
  const ros2_interface__msg__Point2dList * value =
    (const ros2_interface__msg__Point2dList *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__obstacles_vec(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point2dList__Sequence * member =
    (ros2_interface__msg__Point2dList__Sequence *)(untyped_member);
  ros2_interface__msg__Point2dList__Sequence__fini(member);
  return ros2_interface__msg__Point2dList__Sequence__init(member, size);
}

size_t ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__warm_start_traj(
  const void * untyped_member)
{
  const ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (const ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__warm_start_traj(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (const ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__warm_start_traj(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__warm_start_traj(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrajectoryPoint * item =
    ((const ros2_interface__msg__TrajectoryPoint *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__warm_start_traj(untyped_member, index));
  ros2_interface__msg__TrajectoryPoint * value =
    (ros2_interface__msg__TrajectoryPoint *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__warm_start_traj(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrajectoryPoint * item =
    ((ros2_interface__msg__TrajectoryPoint *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__warm_start_traj(untyped_member, index));
  const ros2_interface__msg__TrajectoryPoint * value =
    (const ros2_interface__msg__TrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__warm_start_traj(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  ros2_interface__msg__TrajectoryPoint__Sequence__fini(member);
  return ros2_interface__msg__TrajectoryPoint__Sequence__init(member, size);
}

size_t ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__smoothed_traj_stage1(
  const void * untyped_member)
{
  const ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (const ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__smoothed_traj_stage1(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (const ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__smoothed_traj_stage1(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__smoothed_traj_stage1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrajectoryPoint * item =
    ((const ros2_interface__msg__TrajectoryPoint *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__smoothed_traj_stage1(untyped_member, index));
  ros2_interface__msg__TrajectoryPoint * value =
    (ros2_interface__msg__TrajectoryPoint *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__smoothed_traj_stage1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrajectoryPoint * item =
    ((ros2_interface__msg__TrajectoryPoint *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__smoothed_traj_stage1(untyped_member, index));
  const ros2_interface__msg__TrajectoryPoint * value =
    (const ros2_interface__msg__TrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__smoothed_traj_stage1(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  ros2_interface__msg__TrajectoryPoint__Sequence__fini(member);
  return ros2_interface__msg__TrajectoryPoint__Sequence__init(member, size);
}

size_t ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__smoothed_traj_stage2(
  const void * untyped_member)
{
  const ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (const ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__smoothed_traj_stage2(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (const ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__smoothed_traj_stage2(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__smoothed_traj_stage2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrajectoryPoint * item =
    ((const ros2_interface__msg__TrajectoryPoint *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__smoothed_traj_stage2(untyped_member, index));
  ros2_interface__msg__TrajectoryPoint * value =
    (ros2_interface__msg__TrajectoryPoint *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__smoothed_traj_stage2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrajectoryPoint * item =
    ((ros2_interface__msg__TrajectoryPoint *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__smoothed_traj_stage2(untyped_member, index));
  const ros2_interface__msg__TrajectoryPoint * value =
    (const ros2_interface__msg__TrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__smoothed_traj_stage2(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrajectoryPoint__Sequence * member =
    (ros2_interface__msg__TrajectoryPoint__Sequence *)(untyped_member);
  ros2_interface__msg__TrajectoryPoint__Sequence__fini(member);
  return ros2_interface__msg__TrajectoryPoint__Sequence__init(member, size);
}

size_t ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__trajectory_array(
  const void * untyped_member)
{
  const ros2_interface__msg__Trajectory__Sequence * member =
    (const ros2_interface__msg__Trajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__trajectory_array(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Trajectory__Sequence * member =
    (const ros2_interface__msg__Trajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__trajectory_array(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Trajectory__Sequence * member =
    (ros2_interface__msg__Trajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__trajectory_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Trajectory * item =
    ((const ros2_interface__msg__Trajectory *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__trajectory_array(untyped_member, index));
  ros2_interface__msg__Trajectory * value =
    (ros2_interface__msg__Trajectory *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__trajectory_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Trajectory * item =
    ((ros2_interface__msg__Trajectory *)
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__trajectory_array(untyped_member, index));
  const ros2_interface__msg__Trajectory * value =
    (const ros2_interface__msg__Trajectory *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__trajectory_array(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Trajectory__Sequence * member =
    (ros2_interface__msg__Trajectory__Sequence *)(untyped_member);
  ros2_interface__msg__Trajectory__Sequence__fini(member);
  return ros2_interface__msg__Trajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[35] = {
  {
    "vehicle_preiew_polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, vehicle_preiew_polygon),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__vehicle_preiew_polygon,  // size() function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__vehicle_preiew_polygon,  // get_const(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__vehicle_preiew_polygon,  // get(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__vehicle_preiew_polygon,  // fetch(index, &value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__vehicle_preiew_polygon,  // assign(index, value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__vehicle_preiew_polygon  // resize(index) function pointer
  },
  {
    "obstacles_polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, obstacles_polygon),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__obstacles_polygon,  // size() function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__obstacles_polygon,  // get_const(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__obstacles_polygon,  // get(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__obstacles_polygon,  // fetch(index, &value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__obstacles_polygon,  // assign(index, value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__obstacles_polygon  // resize(index) function pointer
  },
  {
    "path_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, path_points),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__path_points,  // size() function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__path_points,  // get_const(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__path_points,  // get(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__path_points,  // fetch(index, &value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__path_points,  // assign(index, value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__path_points  // resize(index) function pointer
  },
  {
    "lat_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, lat_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, lon_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, yaw_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstacles_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, obstacles_vec),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__obstacles_vec,  // size() function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__obstacles_vec,  // get_const(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__obstacles_vec,  // get(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__obstacles_vec,  // fetch(index, &value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__obstacles_vec,  // assign(index, value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__obstacles_vec  // resize(index) function pointer
  },
  {
    "warm_start_traj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, warm_start_traj),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__warm_start_traj,  // size() function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__warm_start_traj,  // get_const(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__warm_start_traj,  // get(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__warm_start_traj,  // fetch(index, &value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__warm_start_traj,  // assign(index, value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__warm_start_traj  // resize(index) function pointer
  },
  {
    "smoothed_traj_stage1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, smoothed_traj_stage1),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__smoothed_traj_stage1,  // size() function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__smoothed_traj_stage1,  // get_const(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__smoothed_traj_stage1,  // get(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__smoothed_traj_stage1,  // fetch(index, &value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__smoothed_traj_stage1,  // assign(index, value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__smoothed_traj_stage1  // resize(index) function pointer
  },
  {
    "smoothed_traj_stage2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, smoothed_traj_stage2),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__smoothed_traj_stage2,  // size() function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__smoothed_traj_stage2,  // get_const(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__smoothed_traj_stage2,  // get(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__smoothed_traj_stage2,  // fetch(index, &value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__smoothed_traj_stage2,  // assign(index, value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__smoothed_traj_stage2  // resize(index) function pointer
  },
  {
    "reference_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, reference_line),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, trajectory_array),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__size_function__PlanningParkingDebug__trajectory_array,  // size() function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_const_function__PlanningParkingDebug__trajectory_array,  // get_const(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__get_function__PlanningParkingDebug__trajectory_array,  // get(index) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__fetch_function__PlanningParkingDebug__trajectory_array,  // fetch(index, &value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__assign_function__PlanningParkingDebug__trajectory_array,  // assign(index, value) function pointer
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__resize_function__PlanningParkingDebug__trajectory_array  // resize(index) function pointer
  },
  {
    "optimal_coarse_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, optimal_coarse_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "optimal_smooth_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, optimal_smooth_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hybrid_a_star_map_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, hybrid_a_star_map_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hybrid_a_star_heuristic_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, hybrid_a_star_heuristic_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hybrid_a_star_rs_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, hybrid_a_star_rs_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hybrid_a_star_total_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, hybrid_a_star_total_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ias_collision_avoidance_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, ias_collision_avoidance_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ias_path_smooth_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, ias_path_smooth_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ias_speed_smooth_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, ias_speed_smooth_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ias_total_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, ias_total_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "samping_trajectory_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, samping_trajectory_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_replan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, is_replan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replan_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, replan_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replan_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, replan_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replan_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, replan_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "optimizer_thread_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, optimizer_thread_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replan_by_context_update_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, replan_by_context_update_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replan_by_large_error_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, replan_by_large_error_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parking_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, parking_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moves_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, moves_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remain_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, remain_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_to_leader_obj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, distance_to_leader_obj),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PlanningParkingDebug, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_members = {
  "ros2_interface__msg",  // message namespace
  "PlanningParkingDebug",  // message name
  35,  // number of fields
  sizeof(ros2_interface__msg__PlanningParkingDebug),
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array,  // message members
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_type_support_handle = {
  0,
  &ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, PlanningParkingDebug)() {
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Polygon2D)();
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Polygon2D)();
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, PathPoint)();
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point2dList)();
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrajectoryPoint)();
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrajectoryPoint)();
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrajectoryPoint)();
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Trajectory)();
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Trajectory)();
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Trajectory)();
  ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Trajectory)();
  if (!ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__PlanningParkingDebug__rosidl_typesupport_introspection_c__PlanningParkingDebug_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

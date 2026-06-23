// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/Obstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/obstacle__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/obstacle__functions.h"
#include "ros2_interface/msg/detail/obstacle__struct.h"


// Include directives for member types
// Member `timestamp`
// Member `create_time`
// Member `last_updated_time`
#include "ros2_interface/msg/time.h"
// Member `timestamp`
// Member `create_time`
// Member `last_updated_time`
#include "ros2_interface/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `center_pos_vehicle`
// Member `center_pos_abs`
// Member `velocity_vehicle`
// Member `velocity_abs`
// Member `polygon_point_abs`
// Member `polygon_point_vehicle`
// Member `drops`
// Member `acceleration_vehicle`
// Member `acceleration_abs`
// Member `anchor_point_vehicle`
// Member `anchor_point_abs`
#include "ros2_interface/msg/point3_d.h"
// Member `center_pos_vehicle`
// Member `center_pos_abs`
// Member `velocity_vehicle`
// Member `velocity_abs`
// Member `polygon_point_abs`
// Member `polygon_point_vehicle`
// Member `drops`
// Member `acceleration_vehicle`
// Member `acceleration_abs`
// Member `anchor_point_vehicle`
// Member `anchor_point_abs`
#include "ros2_interface/msg/detail/point3_d__rosidl_typesupport_introspection_c.h"
// Member `image_key_points`
#include "ros2_interface/msg/image_key_point.h"
// Member `image_key_points`
#include "ros2_interface/msg/detail/image_key_point__rosidl_typesupport_introspection_c.h"
// Member `anchor_point_image`
#include "ros2_interface/msg/point2_d.h"
// Member `anchor_point_image`
#include "ros2_interface/msg/detail/point2_d__rosidl_typesupport_introspection_c.h"
// Member `bbox2d`
// Member `bbox2d_rear`
#include "ros2_interface/msg/b_box2_d.h"
// Member `bbox2d`
// Member `bbox2d_rear`
#include "ros2_interface/msg/detail/b_box2_d__rosidl_typesupport_introspection_c.h"
// Member `position_abs_covariance`
// Member `velocity_abs_covariance`
// Member `acceleration_abs_covariance`
// Member `position_vehicle_covariance`
// Member `velocity_vehicle_covariance`
// Member `acceleration_vehicle_covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `sensor_calibrator`
#include "ros2_interface/msg/sensor_calibrator.h"
// Member `sensor_calibrator`
#include "ros2_interface/msg/detail/sensor_calibrator__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__Obstacle__init(message_memory);
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_fini_function(void * message_memory)
{
  ros2_interface__msg__Obstacle__fini(message_memory);
}

size_t ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__image_key_points(
  const void * untyped_member)
{
  const ros2_interface__msg__ImageKeyPoint__Sequence * member =
    (const ros2_interface__msg__ImageKeyPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__image_key_points(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__ImageKeyPoint__Sequence * member =
    (const ros2_interface__msg__ImageKeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__image_key_points(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__ImageKeyPoint__Sequence * member =
    (ros2_interface__msg__ImageKeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__image_key_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__ImageKeyPoint * item =
    ((const ros2_interface__msg__ImageKeyPoint *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__image_key_points(untyped_member, index));
  ros2_interface__msg__ImageKeyPoint * value =
    (ros2_interface__msg__ImageKeyPoint *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__image_key_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__ImageKeyPoint * item =
    ((ros2_interface__msg__ImageKeyPoint *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__image_key_points(untyped_member, index));
  const ros2_interface__msg__ImageKeyPoint * value =
    (const ros2_interface__msg__ImageKeyPoint *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__image_key_points(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__ImageKeyPoint__Sequence * member =
    (ros2_interface__msg__ImageKeyPoint__Sequence *)(untyped_member);
  ros2_interface__msg__ImageKeyPoint__Sequence__fini(member);
  return ros2_interface__msg__ImageKeyPoint__Sequence__init(member, size);
}

size_t ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__polygon_point_abs(
  const void * untyped_member)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__polygon_point_abs(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__polygon_point_abs(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__polygon_point_abs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point3D * item =
    ((const ros2_interface__msg__Point3D *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__polygon_point_abs(untyped_member, index));
  ros2_interface__msg__Point3D * value =
    (ros2_interface__msg__Point3D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__polygon_point_abs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point3D * item =
    ((ros2_interface__msg__Point3D *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__polygon_point_abs(untyped_member, index));
  const ros2_interface__msg__Point3D * value =
    (const ros2_interface__msg__Point3D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__polygon_point_abs(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  ros2_interface__msg__Point3D__Sequence__fini(member);
  return ros2_interface__msg__Point3D__Sequence__init(member, size);
}

size_t ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__polygon_point_vehicle(
  const void * untyped_member)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__polygon_point_vehicle(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__polygon_point_vehicle(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__polygon_point_vehicle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point3D * item =
    ((const ros2_interface__msg__Point3D *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__polygon_point_vehicle(untyped_member, index));
  ros2_interface__msg__Point3D * value =
    (ros2_interface__msg__Point3D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__polygon_point_vehicle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point3D * item =
    ((ros2_interface__msg__Point3D *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__polygon_point_vehicle(untyped_member, index));
  const ros2_interface__msg__Point3D * value =
    (const ros2_interface__msg__Point3D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__polygon_point_vehicle(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  ros2_interface__msg__Point3D__Sequence__fini(member);
  return ros2_interface__msg__Point3D__Sequence__init(member, size);
}

size_t ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__drops(
  const void * untyped_member)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__drops(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__drops(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__drops(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point3D * item =
    ((const ros2_interface__msg__Point3D *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__drops(untyped_member, index));
  ros2_interface__msg__Point3D * value =
    (ros2_interface__msg__Point3D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__drops(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point3D * item =
    ((ros2_interface__msg__Point3D *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__drops(untyped_member, index));
  const ros2_interface__msg__Point3D * value =
    (const ros2_interface__msg__Point3D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__drops(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  ros2_interface__msg__Point3D__Sequence__fini(member);
  return ros2_interface__msg__Point3D__Sequence__init(member, size);
}

size_t ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__position_abs_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__position_abs_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__position_abs_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__position_abs_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__position_abs_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__position_abs_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__position_abs_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__position_abs_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__velocity_abs_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__velocity_abs_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__velocity_abs_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__velocity_abs_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__velocity_abs_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__velocity_abs_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__velocity_abs_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__velocity_abs_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__acceleration_abs_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__acceleration_abs_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__acceleration_abs_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__acceleration_abs_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__acceleration_abs_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__acceleration_abs_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__acceleration_abs_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__acceleration_abs_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__position_vehicle_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__position_vehicle_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__position_vehicle_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__position_vehicle_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__position_vehicle_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__position_vehicle_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__position_vehicle_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__position_vehicle_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__velocity_vehicle_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__velocity_vehicle_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__velocity_vehicle_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__velocity_vehicle_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__velocity_vehicle_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__velocity_vehicle_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__velocity_vehicle_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__velocity_vehicle_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__acceleration_vehicle_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__acceleration_vehicle_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__acceleration_vehicle_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__acceleration_vehicle_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__acceleration_vehicle_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__acceleration_vehicle_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__acceleration_vehicle_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__acceleration_vehicle_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[45] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "existence_prob",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, existence_prob),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "create_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, create_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_updated_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, last_updated_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_pos_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, center_pos_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_pos_abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, center_pos_abs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, theta_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, theta_abs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, velocity_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, velocity_abs),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__Obstacle, length),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__Obstacle, width),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__Obstacle, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_key_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, image_key_points),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__image_key_points,  // size() function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__image_key_points,  // get_const(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__image_key_points,  // get(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__image_key_points,  // fetch(index, &value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__image_key_points,  // assign(index, value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__image_key_points  // resize(index) function pointer
  },
  {
    "polygon_point_abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, polygon_point_abs),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__polygon_point_abs,  // size() function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__polygon_point_abs,  // get_const(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__polygon_point_abs,  // get(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__polygon_point_abs,  // fetch(index, &value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__polygon_point_abs,  // assign(index, value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__polygon_point_abs  // resize(index) function pointer
  },
  {
    "polygon_point_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, polygon_point_vehicle),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__polygon_point_vehicle,  // size() function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__polygon_point_vehicle,  // get_const(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__polygon_point_vehicle,  // get(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__polygon_point_vehicle,  // fetch(index, &value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__polygon_point_vehicle,  // assign(index, value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__polygon_point_vehicle  // resize(index) function pointer
  },
  {
    "tracking_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, tracking_time),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__Obstacle, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, confidence_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drops",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, drops),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__drops,  // size() function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__drops,  // get_const(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__drops,  // get(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__drops,  // fetch(index, &value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__drops,  // assign(index, value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__drops  // resize(index) function pointer
  },
  {
    "acceleration_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, acceleration_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, acceleration_abs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchor_point_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, anchor_point_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchor_point_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, anchor_point_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchor_point_abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, anchor_point_abs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox2d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, bbox2d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox2d_rear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, bbox2d_rear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sub_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, sub_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height_above_ground",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, height_above_ground),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_abs_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, position_abs_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__position_abs_covariance,  // size() function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__position_abs_covariance,  // get_const(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__position_abs_covariance,  // get(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__position_abs_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__position_abs_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__position_abs_covariance  // resize(index) function pointer
  },
  {
    "velocity_abs_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, velocity_abs_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__velocity_abs_covariance,  // size() function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__velocity_abs_covariance,  // get_const(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__velocity_abs_covariance,  // get(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__velocity_abs_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__velocity_abs_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__velocity_abs_covariance  // resize(index) function pointer
  },
  {
    "acceleration_abs_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, acceleration_abs_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__acceleration_abs_covariance,  // size() function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__acceleration_abs_covariance,  // get_const(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__acceleration_abs_covariance,  // get(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__acceleration_abs_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__acceleration_abs_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__acceleration_abs_covariance  // resize(index) function pointer
  },
  {
    "theta_abs_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, theta_abs_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_vehicle_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, position_vehicle_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__position_vehicle_covariance,  // size() function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__position_vehicle_covariance,  // get_const(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__position_vehicle_covariance,  // get(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__position_vehicle_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__position_vehicle_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__position_vehicle_covariance  // resize(index) function pointer
  },
  {
    "velocity_vehicle_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, velocity_vehicle_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__velocity_vehicle_covariance,  // size() function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__velocity_vehicle_covariance,  // get_const(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__velocity_vehicle_covariance,  // get(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__velocity_vehicle_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__velocity_vehicle_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__velocity_vehicle_covariance  // resize(index) function pointer
  },
  {
    "acceleration_vehicle_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, acceleration_vehicle_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__acceleration_vehicle_covariance,  // size() function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__acceleration_vehicle_covariance,  // get_const(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__acceleration_vehicle_covariance,  // get(index) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__acceleration_vehicle_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__acceleration_vehicle_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__acceleration_vehicle_covariance  // resize(index) function pointer
  },
  {
    "theta_vehicle_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, theta_vehicle_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_calibrator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, sensor_calibrator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cipv_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, cipv_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, lane_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pihp_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, pihp_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blinker_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, blinker_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fusion_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Obstacle, fusion_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_members = {
  "ros2_interface__msg",  // message namespace
  "Obstacle",  // message name
  45,  // number of fields
  sizeof(ros2_interface__msg__Obstacle),
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array,  // message members
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle = {
  0,
  &ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Obstacle)() {
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Time)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Time)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Time)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, ImageKeyPoint)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[23].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[24].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point2D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[25].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[26].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[27].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, BBox2D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[28].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, BBox2D)();
  ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[39].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, SensorCalibrator)();
  if (!ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

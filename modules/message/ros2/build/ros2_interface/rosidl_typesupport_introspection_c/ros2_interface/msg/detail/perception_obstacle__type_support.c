// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/PerceptionObstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/perception_obstacle__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/perception_obstacle__functions.h"
#include "ros2_interface/msg/detail/perception_obstacle__struct.h"


// Include directives for member types
// Member `position`
// Member `velocity`
// Member `polygon_point`
// Member `drops`
// Member `acceleration`
// Member `anchor_point`
// Member `bounding_box`
#include "ros2_interface/msg/point3_d.h"
// Member `position`
// Member `velocity`
// Member `polygon_point`
// Member `drops`
// Member `acceleration`
// Member `anchor_point`
// Member `bounding_box`
#include "ros2_interface/msg/detail/point3_d__rosidl_typesupport_introspection_c.h"
// Member `position_covariance`
// Member `velocity_covariance`
// Member `acceleration_covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__PerceptionObstacle__init(message_memory);
}

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_fini_function(void * message_memory)
{
  ros2_interface__msg__PerceptionObstacle__fini(message_memory);
}

size_t ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__size_function__PerceptionObstacle__polygon_point(
  const void * untyped_member)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__polygon_point(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__polygon_point(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__fetch_function__PerceptionObstacle__polygon_point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point3D * item =
    ((const ros2_interface__msg__Point3D *)
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__polygon_point(untyped_member, index));
  ros2_interface__msg__Point3D * value =
    (ros2_interface__msg__Point3D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__assign_function__PerceptionObstacle__polygon_point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point3D * item =
    ((ros2_interface__msg__Point3D *)
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__polygon_point(untyped_member, index));
  const ros2_interface__msg__Point3D * value =
    (const ros2_interface__msg__Point3D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__resize_function__PerceptionObstacle__polygon_point(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  ros2_interface__msg__Point3D__Sequence__fini(member);
  return ros2_interface__msg__Point3D__Sequence__init(member, size);
}

size_t ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__size_function__PerceptionObstacle__bounding_box(
  const void * untyped_member)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__bounding_box(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__bounding_box(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__fetch_function__PerceptionObstacle__bounding_box(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point3D * item =
    ((const ros2_interface__msg__Point3D *)
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__bounding_box(untyped_member, index));
  ros2_interface__msg__Point3D * value =
    (ros2_interface__msg__Point3D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__assign_function__PerceptionObstacle__bounding_box(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point3D * item =
    ((ros2_interface__msg__Point3D *)
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__bounding_box(untyped_member, index));
  const ros2_interface__msg__Point3D * value =
    (const ros2_interface__msg__Point3D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__resize_function__PerceptionObstacle__bounding_box(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  ros2_interface__msg__Point3D__Sequence__fini(member);
  return ros2_interface__msg__Point3D__Sequence__init(member, size);
}

size_t ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__size_function__PerceptionObstacle__position_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__position_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__position_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__fetch_function__PerceptionObstacle__position_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__position_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__assign_function__PerceptionObstacle__position_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__position_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__resize_function__PerceptionObstacle__position_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__size_function__PerceptionObstacle__velocity_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__velocity_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__velocity_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__fetch_function__PerceptionObstacle__velocity_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__velocity_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__assign_function__PerceptionObstacle__velocity_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__velocity_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__resize_function__PerceptionObstacle__velocity_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__size_function__PerceptionObstacle__acceleration_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__acceleration_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__acceleration_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__fetch_function__PerceptionObstacle__acceleration_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__acceleration_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__assign_function__PerceptionObstacle__acceleration_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__acceleration_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__resize_function__PerceptionObstacle__acceleration_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_member_array[24] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, id),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, position),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, theta),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, velocity),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, length),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, width),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, height),  // bytes offset in struct
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
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, polygon_point),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__size_function__PerceptionObstacle__polygon_point,  // size() function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__polygon_point,  // get_const(index) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__polygon_point,  // get(index) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__fetch_function__PerceptionObstacle__polygon_point,  // fetch(index, &value) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__assign_function__PerceptionObstacle__polygon_point,  // assign(index, value) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__resize_function__PerceptionObstacle__polygon_point  // resize(index) function pointer
  },
  {
    "tracking_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, tracking_time),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, type),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, lane_position),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, confidence),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, timestamp),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, confidence_type),  // bytes offset in struct
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
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, drops),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchor_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, anchor_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, bounding_box),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__size_function__PerceptionObstacle__bounding_box,  // size() function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__bounding_box,  // get_const(index) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__bounding_box,  // get(index) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__fetch_function__PerceptionObstacle__bounding_box,  // fetch(index, &value) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__assign_function__PerceptionObstacle__bounding_box,  // assign(index, value) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__resize_function__PerceptionObstacle__bounding_box  // resize(index) function pointer
  },
  {
    "sub_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, sub_type),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__PerceptionObstacle, height_above_ground),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, position_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__size_function__PerceptionObstacle__position_covariance,  // size() function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__position_covariance,  // get_const(index) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__position_covariance,  // get(index) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__fetch_function__PerceptionObstacle__position_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__assign_function__PerceptionObstacle__position_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__resize_function__PerceptionObstacle__position_covariance  // resize(index) function pointer
  },
  {
    "velocity_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, velocity_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__size_function__PerceptionObstacle__velocity_covariance,  // size() function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__velocity_covariance,  // get_const(index) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__velocity_covariance,  // get(index) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__fetch_function__PerceptionObstacle__velocity_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__assign_function__PerceptionObstacle__velocity_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__resize_function__PerceptionObstacle__velocity_covariance  // resize(index) function pointer
  },
  {
    "acceleration_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, acceleration_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__size_function__PerceptionObstacle__acceleration_covariance,  // size() function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_const_function__PerceptionObstacle__acceleration_covariance,  // get_const(index) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__get_function__PerceptionObstacle__acceleration_covariance,  // get(index) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__fetch_function__PerceptionObstacle__acceleration_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__assign_function__PerceptionObstacle__acceleration_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__resize_function__PerceptionObstacle__acceleration_covariance  // resize(index) function pointer
  },
  {
    "light_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PerceptionObstacle, light_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_members = {
  "ros2_interface__msg",  // message namespace
  "PerceptionObstacle",  // message name
  24,  // number of fields
  sizeof(ros2_interface__msg__PerceptionObstacle),
  ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_member_array,  // message members
  ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_type_support_handle = {
  0,
  &ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, PerceptionObstacle)() {
  ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  if (!ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__PerceptionObstacle__rosidl_typesupport_introspection_c__PerceptionObstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

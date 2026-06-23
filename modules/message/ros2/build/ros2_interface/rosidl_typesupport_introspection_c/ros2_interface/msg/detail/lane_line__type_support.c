// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/LaneLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/lane_line__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/lane_line__functions.h"
#include "ros2_interface/msg/detail/lane_line__struct.h"


// Include directives for member types
// Member `curve_vehicle`
// Member `curve_image`
// Member `curve_abs`
#include "ros2_interface/msg/lane_line_cubic_curve.h"
// Member `curve_vehicle`
// Member `curve_image`
// Member `curve_abs`
#include "ros2_interface/msg/detail/lane_line_cubic_curve__rosidl_typesupport_introspection_c.h"
// Member `pts_vehicle`
// Member `pts_abs`
#include "ros2_interface/msg/point3_d.h"
// Member `pts_vehicle`
// Member `pts_abs`
#include "ros2_interface/msg/detail/point3_d__rosidl_typesupport_introspection_c.h"
// Member `pts_image`
// Member `pts_key`
#include "ros2_interface/msg/point2_d.h"
// Member `pts_image`
// Member `pts_key`
#include "ros2_interface/msg/detail/point2_d__rosidl_typesupport_introspection_c.h"
// Member `image_end_point`
#include "ros2_interface/msg/end_points.h"
// Member `image_end_point`
#include "ros2_interface/msg/detail/end_points__rosidl_typesupport_introspection_c.h"
// Member `homography_mat`
// Member `homography_mat_inv`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `create_time`
#include "ros2_interface/msg/time.h"
// Member `create_time`
#include "ros2_interface/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__LaneLine__init(message_memory);
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_fini_function(void * message_memory)
{
  ros2_interface__msg__LaneLine__fini(message_memory);
}

size_t ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__pts_vehicle(
  const void * untyped_member)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_vehicle(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_vehicle(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__pts_vehicle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point3D * item =
    ((const ros2_interface__msg__Point3D *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_vehicle(untyped_member, index));
  ros2_interface__msg__Point3D * value =
    (ros2_interface__msg__Point3D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__pts_vehicle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point3D * item =
    ((ros2_interface__msg__Point3D *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_vehicle(untyped_member, index));
  const ros2_interface__msg__Point3D * value =
    (const ros2_interface__msg__Point3D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__pts_vehicle(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  ros2_interface__msg__Point3D__Sequence__fini(member);
  return ros2_interface__msg__Point3D__Sequence__init(member, size);
}

size_t ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__pts_image(
  const void * untyped_member)
{
  const ros2_interface__msg__Point2D__Sequence * member =
    (const ros2_interface__msg__Point2D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_image(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point2D__Sequence * member =
    (const ros2_interface__msg__Point2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_image(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point2D__Sequence * member =
    (ros2_interface__msg__Point2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__pts_image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point2D * item =
    ((const ros2_interface__msg__Point2D *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_image(untyped_member, index));
  ros2_interface__msg__Point2D * value =
    (ros2_interface__msg__Point2D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__pts_image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point2D * item =
    ((ros2_interface__msg__Point2D *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_image(untyped_member, index));
  const ros2_interface__msg__Point2D * value =
    (const ros2_interface__msg__Point2D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__pts_image(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point2D__Sequence * member =
    (ros2_interface__msg__Point2D__Sequence *)(untyped_member);
  ros2_interface__msg__Point2D__Sequence__fini(member);
  return ros2_interface__msg__Point2D__Sequence__init(member, size);
}

size_t ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__pts_abs(
  const void * untyped_member)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_abs(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_abs(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__pts_abs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point3D * item =
    ((const ros2_interface__msg__Point3D *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_abs(untyped_member, index));
  ros2_interface__msg__Point3D * value =
    (ros2_interface__msg__Point3D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__pts_abs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point3D * item =
    ((ros2_interface__msg__Point3D *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_abs(untyped_member, index));
  const ros2_interface__msg__Point3D * value =
    (const ros2_interface__msg__Point3D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__pts_abs(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  ros2_interface__msg__Point3D__Sequence__fini(member);
  return ros2_interface__msg__Point3D__Sequence__init(member, size);
}

size_t ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__pts_key(
  const void * untyped_member)
{
  const ros2_interface__msg__Point2D__Sequence * member =
    (const ros2_interface__msg__Point2D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_key(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point2D__Sequence * member =
    (const ros2_interface__msg__Point2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_key(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point2D__Sequence * member =
    (ros2_interface__msg__Point2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__pts_key(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point2D * item =
    ((const ros2_interface__msg__Point2D *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_key(untyped_member, index));
  ros2_interface__msg__Point2D * value =
    (ros2_interface__msg__Point2D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__pts_key(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point2D * item =
    ((ros2_interface__msg__Point2D *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_key(untyped_member, index));
  const ros2_interface__msg__Point2D * value =
    (const ros2_interface__msg__Point2D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__pts_key(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point2D__Sequence * member =
    (ros2_interface__msg__Point2D__Sequence *)(untyped_member);
  ros2_interface__msg__Point2D__Sequence__fini(member);
  return ros2_interface__msg__Point2D__Sequence__init(member, size);
}

size_t ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__homography_mat(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__homography_mat(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__homography_mat(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__homography_mat(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__homography_mat(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__homography_mat(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__homography_mat(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__homography_mat(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__homography_mat_inv(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__homography_mat_inv(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__homography_mat_inv(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__homography_mat_inv(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__homography_mat_inv(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__homography_mat_inv(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__homography_mat_inv(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__homography_mat_inv(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_member_array[20] = {
  {
    "lane_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, lane_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, lane_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, pos_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curve_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, curve_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curve_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, curve_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curve_abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, curve_abs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pts_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, pts_vehicle),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__pts_vehicle,  // size() function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_vehicle,  // get_const(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_vehicle,  // get(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__pts_vehicle,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__pts_vehicle,  // assign(index, value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__pts_vehicle  // resize(index) function pointer
  },
  {
    "pts_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, pts_image),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__pts_image,  // size() function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_image,  // get_const(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_image,  // get(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__pts_image,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__pts_image,  // assign(index, value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__pts_image  // resize(index) function pointer
  },
  {
    "pts_abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, pts_abs),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__pts_abs,  // size() function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_abs,  // get_const(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_abs,  // get(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__pts_abs,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__pts_abs,  // assign(index, value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__pts_abs  // resize(index) function pointer
  },
  {
    "image_end_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, image_end_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pts_key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, pts_key),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__pts_key,  // size() function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__pts_key,  // get_const(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__pts_key,  // get(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__pts_key,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__pts_key,  // assign(index, value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__pts_key  // resize(index) function pointer
  },
  {
    "hd_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, hd_lane_id),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__LaneLine, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, lane_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fused_lane_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, fused_lane_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "homography_mat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, homography_mat),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__homography_mat,  // size() function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__homography_mat,  // get_const(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__homography_mat,  // get(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__homography_mat,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__homography_mat,  // assign(index, value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__homography_mat  // resize(index) function pointer
  },
  {
    "homography_mat_inv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, homography_mat_inv),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__size_function__LaneLine__homography_mat_inv,  // size() function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_const_function__LaneLine__homography_mat_inv,  // get_const(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__get_function__LaneLine__homography_mat_inv,  // get(index) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__fetch_function__LaneLine__homography_mat_inv,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__assign_function__LaneLine__homography_mat_inv,  // assign(index, value) function pointer
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__resize_function__LaneLine__homography_mat_inv  // resize(index) function pointer
  },
  {
    "lane_coordinate_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, lane_coordinate_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneLine, use_type),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__LaneLine, create_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_members = {
  "ros2_interface__msg",  // message namespace
  "LaneLine",  // message name
  20,  // number of fields
  sizeof(ros2_interface__msg__LaneLine),
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_member_array,  // message members
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_type_support_handle = {
  0,
  &ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, LaneLine)() {
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, LaneLineCubicCurve)();
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, LaneLineCubicCurve)();
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, LaneLineCubicCurve)();
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point2D)();
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, EndPoints)();
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point2D)();
  ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Time)();
  if (!ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__LaneLine__rosidl_typesupport_introspection_c__LaneLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

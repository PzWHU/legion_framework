// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/TrafficLightDebug.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/traffic_light_debug__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/traffic_light_debug__functions.h"
#include "ros2_interface/msg/detail/traffic_light_debug__struct.h"


// Include directives for member types
// Member `cropbox`
// Member `box`
// Member `crop_roi`
// Member `projected_roi`
// Member `rectified_roi`
// Member `debug_roi`
#include "ros2_interface/msg/traffic_light_box.h"
// Member `cropbox`
// Member `box`
// Member `crop_roi`
// Member `projected_roi`
// Member `rectified_roi`
// Member `debug_roi`
#include "ros2_interface/msg/detail/traffic_light_box__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__TrafficLightDebug__init(message_memory);
}

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_fini_function(void * message_memory)
{
  ros2_interface__msg__TrafficLightDebug__fini(message_memory);
}

size_t ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__size_function__TrafficLightDebug__box(
  const void * untyped_member)
{
  const ros2_interface__msg__TrafficLightBox__Sequence * member =
    (const ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__box(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrafficLightBox__Sequence * member =
    (const ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__box(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrafficLightBox__Sequence * member =
    (ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__fetch_function__TrafficLightDebug__box(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrafficLightBox * item =
    ((const ros2_interface__msg__TrafficLightBox *)
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__box(untyped_member, index));
  ros2_interface__msg__TrafficLightBox * value =
    (ros2_interface__msg__TrafficLightBox *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__assign_function__TrafficLightDebug__box(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrafficLightBox * item =
    ((ros2_interface__msg__TrafficLightBox *)
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__box(untyped_member, index));
  const ros2_interface__msg__TrafficLightBox * value =
    (const ros2_interface__msg__TrafficLightBox *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__resize_function__TrafficLightDebug__box(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrafficLightBox__Sequence * member =
    (ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  ros2_interface__msg__TrafficLightBox__Sequence__fini(member);
  return ros2_interface__msg__TrafficLightBox__Sequence__init(member, size);
}

size_t ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__size_function__TrafficLightDebug__crop_roi(
  const void * untyped_member)
{
  const ros2_interface__msg__TrafficLightBox__Sequence * member =
    (const ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__crop_roi(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrafficLightBox__Sequence * member =
    (const ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__crop_roi(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrafficLightBox__Sequence * member =
    (ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__fetch_function__TrafficLightDebug__crop_roi(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrafficLightBox * item =
    ((const ros2_interface__msg__TrafficLightBox *)
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__crop_roi(untyped_member, index));
  ros2_interface__msg__TrafficLightBox * value =
    (ros2_interface__msg__TrafficLightBox *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__assign_function__TrafficLightDebug__crop_roi(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrafficLightBox * item =
    ((ros2_interface__msg__TrafficLightBox *)
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__crop_roi(untyped_member, index));
  const ros2_interface__msg__TrafficLightBox * value =
    (const ros2_interface__msg__TrafficLightBox *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__resize_function__TrafficLightDebug__crop_roi(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrafficLightBox__Sequence * member =
    (ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  ros2_interface__msg__TrafficLightBox__Sequence__fini(member);
  return ros2_interface__msg__TrafficLightBox__Sequence__init(member, size);
}

size_t ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__size_function__TrafficLightDebug__projected_roi(
  const void * untyped_member)
{
  const ros2_interface__msg__TrafficLightBox__Sequence * member =
    (const ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__projected_roi(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrafficLightBox__Sequence * member =
    (const ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__projected_roi(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrafficLightBox__Sequence * member =
    (ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__fetch_function__TrafficLightDebug__projected_roi(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrafficLightBox * item =
    ((const ros2_interface__msg__TrafficLightBox *)
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__projected_roi(untyped_member, index));
  ros2_interface__msg__TrafficLightBox * value =
    (ros2_interface__msg__TrafficLightBox *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__assign_function__TrafficLightDebug__projected_roi(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrafficLightBox * item =
    ((ros2_interface__msg__TrafficLightBox *)
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__projected_roi(untyped_member, index));
  const ros2_interface__msg__TrafficLightBox * value =
    (const ros2_interface__msg__TrafficLightBox *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__resize_function__TrafficLightDebug__projected_roi(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrafficLightBox__Sequence * member =
    (ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  ros2_interface__msg__TrafficLightBox__Sequence__fini(member);
  return ros2_interface__msg__TrafficLightBox__Sequence__init(member, size);
}

size_t ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__size_function__TrafficLightDebug__rectified_roi(
  const void * untyped_member)
{
  const ros2_interface__msg__TrafficLightBox__Sequence * member =
    (const ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__rectified_roi(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrafficLightBox__Sequence * member =
    (const ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__rectified_roi(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrafficLightBox__Sequence * member =
    (ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__fetch_function__TrafficLightDebug__rectified_roi(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrafficLightBox * item =
    ((const ros2_interface__msg__TrafficLightBox *)
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__rectified_roi(untyped_member, index));
  ros2_interface__msg__TrafficLightBox * value =
    (ros2_interface__msg__TrafficLightBox *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__assign_function__TrafficLightDebug__rectified_roi(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrafficLightBox * item =
    ((ros2_interface__msg__TrafficLightBox *)
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__rectified_roi(untyped_member, index));
  const ros2_interface__msg__TrafficLightBox * value =
    (const ros2_interface__msg__TrafficLightBox *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__resize_function__TrafficLightDebug__rectified_roi(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrafficLightBox__Sequence * member =
    (ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  ros2_interface__msg__TrafficLightBox__Sequence__fini(member);
  return ros2_interface__msg__TrafficLightBox__Sequence__init(member, size);
}

size_t ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__size_function__TrafficLightDebug__debug_roi(
  const void * untyped_member)
{
  const ros2_interface__msg__TrafficLightBox__Sequence * member =
    (const ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__debug_roi(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrafficLightBox__Sequence * member =
    (const ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__debug_roi(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrafficLightBox__Sequence * member =
    (ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__fetch_function__TrafficLightDebug__debug_roi(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrafficLightBox * item =
    ((const ros2_interface__msg__TrafficLightBox *)
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__debug_roi(untyped_member, index));
  ros2_interface__msg__TrafficLightBox * value =
    (ros2_interface__msg__TrafficLightBox *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__assign_function__TrafficLightDebug__debug_roi(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrafficLightBox * item =
    ((ros2_interface__msg__TrafficLightBox *)
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__debug_roi(untyped_member, index));
  const ros2_interface__msg__TrafficLightBox * value =
    (const ros2_interface__msg__TrafficLightBox *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__resize_function__TrafficLightDebug__debug_roi(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrafficLightBox__Sequence * member =
    (ros2_interface__msg__TrafficLightBox__Sequence *)(untyped_member);
  ros2_interface__msg__TrafficLightBox__Sequence__fini(member);
  return ros2_interface__msg__TrafficLightBox__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_member_array[13] = {
  {
    "cropbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, cropbox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, box),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__size_function__TrafficLightDebug__box,  // size() function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__box,  // get_const(index) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__box,  // get(index) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__fetch_function__TrafficLightDebug__box,  // fetch(index, &value) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__assign_function__TrafficLightDebug__box,  // assign(index, value) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__resize_function__TrafficLightDebug__box  // resize(index) function pointer
  },
  {
    "signal_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, signal_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, valid_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ts_diff_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, ts_diff_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ts_diff_sys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, ts_diff_sys),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "project_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, project_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_to_stop_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, distance_to_stop_line),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, camera_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crop_roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, crop_roi),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__size_function__TrafficLightDebug__crop_roi,  // size() function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__crop_roi,  // get_const(index) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__crop_roi,  // get(index) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__fetch_function__TrafficLightDebug__crop_roi,  // fetch(index, &value) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__assign_function__TrafficLightDebug__crop_roi,  // assign(index, value) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__resize_function__TrafficLightDebug__crop_roi  // resize(index) function pointer
  },
  {
    "projected_roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, projected_roi),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__size_function__TrafficLightDebug__projected_roi,  // size() function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__projected_roi,  // get_const(index) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__projected_roi,  // get(index) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__fetch_function__TrafficLightDebug__projected_roi,  // fetch(index, &value) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__assign_function__TrafficLightDebug__projected_roi,  // assign(index, value) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__resize_function__TrafficLightDebug__projected_roi  // resize(index) function pointer
  },
  {
    "rectified_roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, rectified_roi),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__size_function__TrafficLightDebug__rectified_roi,  // size() function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__rectified_roi,  // get_const(index) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__rectified_roi,  // get(index) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__fetch_function__TrafficLightDebug__rectified_roi,  // fetch(index, &value) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__assign_function__TrafficLightDebug__rectified_roi,  // assign(index, value) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__resize_function__TrafficLightDebug__rectified_roi  // resize(index) function pointer
  },
  {
    "debug_roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLightDebug, debug_roi),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__size_function__TrafficLightDebug__debug_roi,  // size() function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_const_function__TrafficLightDebug__debug_roi,  // get_const(index) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__get_function__TrafficLightDebug__debug_roi,  // get(index) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__fetch_function__TrafficLightDebug__debug_roi,  // fetch(index, &value) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__assign_function__TrafficLightDebug__debug_roi,  // assign(index, value) function pointer
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__resize_function__TrafficLightDebug__debug_roi  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_members = {
  "ros2_interface__msg",  // message namespace
  "TrafficLightDebug",  // message name
  13,  // number of fields
  sizeof(ros2_interface__msg__TrafficLightDebug),
  ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_member_array,  // message members
  ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_type_support_handle = {
  0,
  &ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrafficLightDebug)() {
  ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrafficLightBox)();
  ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrafficLightBox)();
  ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrafficLightBox)();
  ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrafficLightBox)();
  ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrafficLightBox)();
  ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrafficLightBox)();
  if (!ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__TrafficLightDebug__rosidl_typesupport_introspection_c__TrafficLightDebug_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

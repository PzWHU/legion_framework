// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/LaneInfoExtend.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/lane_info_extend__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/lane_info_extend__functions.h"
#include "ros2_interface/msg/detail/lane_info_extend__struct.h"


// Include directives for member types
// Member `predecessor_ids`
// Member `successor_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `lane_points`
#include "ros2_interface/msg/lane_point.h"
// Member `lane_points`
#include "ros2_interface/msg/detail/lane_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__LaneInfoExtend__init(message_memory);
}

void ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_fini_function(void * message_memory)
{
  ros2_interface__msg__LaneInfoExtend__fini(message_memory);
}

size_t ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__size_function__LaneInfoExtend__predecessor_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_const_function__LaneInfoExtend__predecessor_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_function__LaneInfoExtend__predecessor_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__fetch_function__LaneInfoExtend__predecessor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_const_function__LaneInfoExtend__predecessor_ids(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__assign_function__LaneInfoExtend__predecessor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_function__LaneInfoExtend__predecessor_ids(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__resize_function__LaneInfoExtend__predecessor_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__size_function__LaneInfoExtend__successor_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_const_function__LaneInfoExtend__successor_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_function__LaneInfoExtend__successor_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__fetch_function__LaneInfoExtend__successor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_const_function__LaneInfoExtend__successor_ids(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__assign_function__LaneInfoExtend__successor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_function__LaneInfoExtend__successor_ids(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__resize_function__LaneInfoExtend__successor_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__size_function__LaneInfoExtend__lane_points(
  const void * untyped_member)
{
  const ros2_interface__msg__LanePoint__Sequence * member =
    (const ros2_interface__msg__LanePoint__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_const_function__LaneInfoExtend__lane_points(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__LanePoint__Sequence * member =
    (const ros2_interface__msg__LanePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_function__LaneInfoExtend__lane_points(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__LanePoint__Sequence * member =
    (ros2_interface__msg__LanePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__fetch_function__LaneInfoExtend__lane_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__LanePoint * item =
    ((const ros2_interface__msg__LanePoint *)
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_const_function__LaneInfoExtend__lane_points(untyped_member, index));
  ros2_interface__msg__LanePoint * value =
    (ros2_interface__msg__LanePoint *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__assign_function__LaneInfoExtend__lane_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__LanePoint * item =
    ((ros2_interface__msg__LanePoint *)
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_function__LaneInfoExtend__lane_points(untyped_member, index));
  const ros2_interface__msg__LanePoint * value =
    (const ros2_interface__msg__LanePoint *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__resize_function__LaneInfoExtend__lane_points(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__LanePoint__Sequence * member =
    (ros2_interface__msg__LanePoint__Sequence *)(untyped_member);
  ros2_interface__msg__LanePoint__Sequence__fini(member);
  return ros2_interface__msg__LanePoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_message_member_array[8] = {
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfoExtend, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfoExtend, global_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predecessor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfoExtend, predecessor_ids),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__size_function__LaneInfoExtend__predecessor_ids,  // size() function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_const_function__LaneInfoExtend__predecessor_ids,  // get_const(index) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_function__LaneInfoExtend__predecessor_ids,  // get(index) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__fetch_function__LaneInfoExtend__predecessor_ids,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__assign_function__LaneInfoExtend__predecessor_ids,  // assign(index, value) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__resize_function__LaneInfoExtend__predecessor_ids  // resize(index) function pointer
  },
  {
    "successor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfoExtend, successor_ids),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__size_function__LaneInfoExtend__successor_ids,  // size() function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_const_function__LaneInfoExtend__successor_ids,  // get_const(index) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_function__LaneInfoExtend__successor_ids,  // get(index) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__fetch_function__LaneInfoExtend__successor_ids,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__assign_function__LaneInfoExtend__successor_ids,  // assign(index, value) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__resize_function__LaneInfoExtend__successor_ids  // resize(index) function pointer
  },
  {
    "left_neighbor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfoExtend, left_neighbor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_neighbor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfoExtend, right_neighbor_id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfoExtend, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfoExtend, lane_points),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__size_function__LaneInfoExtend__lane_points,  // size() function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_const_function__LaneInfoExtend__lane_points,  // get_const(index) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__get_function__LaneInfoExtend__lane_points,  // get(index) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__fetch_function__LaneInfoExtend__lane_points,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__assign_function__LaneInfoExtend__lane_points,  // assign(index, value) function pointer
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__resize_function__LaneInfoExtend__lane_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_message_members = {
  "ros2_interface__msg",  // message namespace
  "LaneInfoExtend",  // message name
  8,  // number of fields
  sizeof(ros2_interface__msg__LaneInfoExtend),
  ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_message_member_array,  // message members
  ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_message_type_support_handle = {
  0,
  &ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, LaneInfoExtend)() {
  ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, LanePoint)();
  if (!ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__LaneInfoExtend__rosidl_typesupport_introspection_c__LaneInfoExtend_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

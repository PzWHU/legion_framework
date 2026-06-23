// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/SotifMonitorResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/sotif_monitor_result__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/sotif_monitor_result__functions.h"
#include "ros2_interface/msg/detail/sotif_monitor_result__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `region_value`
#include "ros2_interface/msg/region.h"
// Member `region_value`
#include "ros2_interface/msg/detail/region__rosidl_typesupport_introspection_c.h"
// Member `grid_map`
#include "ros2_interface/msg/grid.h"
// Member `grid_map`
#include "ros2_interface/msg/detail/grid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__SotifMonitorResult__init(message_memory);
}

void ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_fini_function(void * message_memory)
{
  ros2_interface__msg__SotifMonitorResult__fini(message_memory);
}

size_t ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__size_function__SotifMonitorResult__region_value(
  const void * untyped_member)
{
  const ros2_interface__msg__Region__Sequence * member =
    (const ros2_interface__msg__Region__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_const_function__SotifMonitorResult__region_value(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Region__Sequence * member =
    (const ros2_interface__msg__Region__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_function__SotifMonitorResult__region_value(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Region__Sequence * member =
    (ros2_interface__msg__Region__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__fetch_function__SotifMonitorResult__region_value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Region * item =
    ((const ros2_interface__msg__Region *)
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_const_function__SotifMonitorResult__region_value(untyped_member, index));
  ros2_interface__msg__Region * value =
    (ros2_interface__msg__Region *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__assign_function__SotifMonitorResult__region_value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Region * item =
    ((ros2_interface__msg__Region *)
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_function__SotifMonitorResult__region_value(untyped_member, index));
  const ros2_interface__msg__Region * value =
    (const ros2_interface__msg__Region *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__resize_function__SotifMonitorResult__region_value(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Region__Sequence * member =
    (ros2_interface__msg__Region__Sequence *)(untyped_member);
  ros2_interface__msg__Region__Sequence__fini(member);
  return ros2_interface__msg__Region__Sequence__init(member, size);
}

size_t ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__size_function__SotifMonitorResult__grid_map(
  const void * untyped_member)
{
  const ros2_interface__msg__Grid__Sequence * member =
    (const ros2_interface__msg__Grid__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_const_function__SotifMonitorResult__grid_map(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Grid__Sequence * member =
    (const ros2_interface__msg__Grid__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_function__SotifMonitorResult__grid_map(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Grid__Sequence * member =
    (ros2_interface__msg__Grid__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__fetch_function__SotifMonitorResult__grid_map(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Grid * item =
    ((const ros2_interface__msg__Grid *)
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_const_function__SotifMonitorResult__grid_map(untyped_member, index));
  ros2_interface__msg__Grid * value =
    (ros2_interface__msg__Grid *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__assign_function__SotifMonitorResult__grid_map(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Grid * item =
    ((ros2_interface__msg__Grid *)
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_function__SotifMonitorResult__grid_map(untyped_member, index));
  const ros2_interface__msg__Grid * value =
    (const ros2_interface__msg__Grid *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__resize_function__SotifMonitorResult__grid_map(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Grid__Sequence * member =
    (ros2_interface__msg__Grid__Sequence *)(untyped_member);
  ros2_interface__msg__Grid__Sequence__fini(member);
  return ros2_interface__msg__Grid__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__SotifMonitorResult, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "region_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__SotifMonitorResult, region_value),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__size_function__SotifMonitorResult__region_value,  // size() function pointer
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_const_function__SotifMonitorResult__region_value,  // get_const(index) function pointer
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_function__SotifMonitorResult__region_value,  // get(index) function pointer
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__fetch_function__SotifMonitorResult__region_value,  // fetch(index, &value) function pointer
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__assign_function__SotifMonitorResult__region_value,  // assign(index, value) function pointer
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__resize_function__SotifMonitorResult__region_value  // resize(index) function pointer
  },
  {
    "grid_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__SotifMonitorResult, grid_map),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__size_function__SotifMonitorResult__grid_map,  // size() function pointer
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_const_function__SotifMonitorResult__grid_map,  // get_const(index) function pointer
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__get_function__SotifMonitorResult__grid_map,  // get(index) function pointer
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__fetch_function__SotifMonitorResult__grid_map,  // fetch(index, &value) function pointer
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__assign_function__SotifMonitorResult__grid_map,  // assign(index, value) function pointer
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__resize_function__SotifMonitorResult__grid_map  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_message_members = {
  "ros2_interface__msg",  // message namespace
  "SotifMonitorResult",  // message name
  3,  // number of fields
  sizeof(ros2_interface__msg__SotifMonitorResult),
  ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_message_member_array,  // message members
  ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_message_type_support_handle = {
  0,
  &ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, SotifMonitorResult)() {
  ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Region)();
  ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Grid)();
  if (!ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__SotifMonitorResult__rosidl_typesupport_introspection_c__SotifMonitorResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

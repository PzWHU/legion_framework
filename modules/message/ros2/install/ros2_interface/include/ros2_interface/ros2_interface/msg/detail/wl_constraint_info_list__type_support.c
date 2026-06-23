// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/WLConstraintInfoList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/wl_constraint_info_list__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/wl_constraint_info_list__functions.h"
#include "ros2_interface/msg/detail/wl_constraint_info_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `wl_constraint_info`
#include "ros2_interface/msg/wl_constraint_info.h"
// Member `wl_constraint_info`
#include "ros2_interface/msg/detail/wl_constraint_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__WLConstraintInfoList__init(message_memory);
}

void ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_fini_function(void * message_memory)
{
  ros2_interface__msg__WLConstraintInfoList__fini(message_memory);
}

size_t ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__size_function__WLConstraintInfoList__wl_constraint_info(
  const void * untyped_member)
{
  const ros2_interface__msg__WLConstraintInfo__Sequence * member =
    (const ros2_interface__msg__WLConstraintInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__get_const_function__WLConstraintInfoList__wl_constraint_info(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__WLConstraintInfo__Sequence * member =
    (const ros2_interface__msg__WLConstraintInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__get_function__WLConstraintInfoList__wl_constraint_info(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__WLConstraintInfo__Sequence * member =
    (ros2_interface__msg__WLConstraintInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__fetch_function__WLConstraintInfoList__wl_constraint_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__WLConstraintInfo * item =
    ((const ros2_interface__msg__WLConstraintInfo *)
    ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__get_const_function__WLConstraintInfoList__wl_constraint_info(untyped_member, index));
  ros2_interface__msg__WLConstraintInfo * value =
    (ros2_interface__msg__WLConstraintInfo *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__assign_function__WLConstraintInfoList__wl_constraint_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__WLConstraintInfo * item =
    ((ros2_interface__msg__WLConstraintInfo *)
    ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__get_function__WLConstraintInfoList__wl_constraint_info(untyped_member, index));
  const ros2_interface__msg__WLConstraintInfo * value =
    (const ros2_interface__msg__WLConstraintInfo *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__resize_function__WLConstraintInfoList__wl_constraint_info(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__WLConstraintInfo__Sequence * member =
    (ros2_interface__msg__WLConstraintInfo__Sequence *)(untyped_member);
  ros2_interface__msg__WLConstraintInfo__Sequence__fini(member);
  return ros2_interface__msg__WLConstraintInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__WLConstraintInfoList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wl_constraint_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__WLConstraintInfoList, wl_constraint_info),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__size_function__WLConstraintInfoList__wl_constraint_info,  // size() function pointer
    ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__get_const_function__WLConstraintInfoList__wl_constraint_info,  // get_const(index) function pointer
    ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__get_function__WLConstraintInfoList__wl_constraint_info,  // get(index) function pointer
    ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__fetch_function__WLConstraintInfoList__wl_constraint_info,  // fetch(index, &value) function pointer
    ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__assign_function__WLConstraintInfoList__wl_constraint_info,  // assign(index, value) function pointer
    ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__resize_function__WLConstraintInfoList__wl_constraint_info  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__WLConstraintInfoList, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__WLConstraintInfoList, is_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_message_members = {
  "ros2_interface__msg",  // message namespace
  "WLConstraintInfoList",  // message name
  4,  // number of fields
  sizeof(ros2_interface__msg__WLConstraintInfoList),
  ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_message_member_array,  // message members
  ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_message_type_support_handle = {
  0,
  &ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, WLConstraintInfoList)() {
  ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, WLConstraintInfo)();
  if (!ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__WLConstraintInfoList__rosidl_typesupport_introspection_c__WLConstraintInfoList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

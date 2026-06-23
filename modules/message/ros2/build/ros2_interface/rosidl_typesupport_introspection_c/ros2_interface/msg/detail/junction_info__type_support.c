// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/JunctionInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/junction_info__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/junction_info__functions.h"
#include "ros2_interface/msg/detail/junction_info__struct.h"


// Include directives for member types
// Member `stop_line`
#include "ros2_interface/msg/point3_d.h"
// Member `stop_line`
#include "ros2_interface/msg/detail/point3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__JunctionInfo__init(message_memory);
}

void ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_fini_function(void * message_memory)
{
  ros2_interface__msg__JunctionInfo__fini(message_memory);
}

size_t ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__size_function__JunctionInfo__stop_line(
  const void * untyped_member)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__get_const_function__JunctionInfo__stop_line(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__get_function__JunctionInfo__stop_line(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__fetch_function__JunctionInfo__stop_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point3D * item =
    ((const ros2_interface__msg__Point3D *)
    ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__get_const_function__JunctionInfo__stop_line(untyped_member, index));
  ros2_interface__msg__Point3D * value =
    (ros2_interface__msg__Point3D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__assign_function__JunctionInfo__stop_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point3D * item =
    ((ros2_interface__msg__Point3D *)
    ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__get_function__JunctionInfo__stop_line(untyped_member, index));
  const ros2_interface__msg__Point3D * value =
    (const ros2_interface__msg__Point3D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__resize_function__JunctionInfo__stop_line(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  ros2_interface__msg__Point3D__Sequence__fini(member);
  return ros2_interface__msg__Point3D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_message_member_array[9] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__JunctionInfo, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "light_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__JunctionInfo, light_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "light_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__JunctionInfo, light_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "light_remain_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__JunctionInfo, light_remain_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_to_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__JunctionInfo, distance_to_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__JunctionInfo, direction_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__JunctionInfo, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_to_junction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__JunctionInfo, distance_to_junction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__JunctionInfo, stop_line),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__size_function__JunctionInfo__stop_line,  // size() function pointer
    ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__get_const_function__JunctionInfo__stop_line,  // get_const(index) function pointer
    ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__get_function__JunctionInfo__stop_line,  // get(index) function pointer
    ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__fetch_function__JunctionInfo__stop_line,  // fetch(index, &value) function pointer
    ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__assign_function__JunctionInfo__stop_line,  // assign(index, value) function pointer
    ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__resize_function__JunctionInfo__stop_line  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_message_members = {
  "ros2_interface__msg",  // message namespace
  "JunctionInfo",  // message name
  9,  // number of fields
  sizeof(ros2_interface__msg__JunctionInfo),
  ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_message_member_array,  // message members
  ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_message_type_support_handle = {
  0,
  &ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, JunctionInfo)() {
  ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  if (!ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__JunctionInfo__rosidl_typesupport_introspection_c__JunctionInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

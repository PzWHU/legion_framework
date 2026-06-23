// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/Path.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/path__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/path__functions.h"
#include "ros2_interface/msg/detail/path__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `path_points`
#include "ros2_interface/msg/path_point.h"
// Member `path_points`
#include "ros2_interface/msg/detail/path_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__Path__init(message_memory);
}

void ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_fini_function(void * message_memory)
{
  ros2_interface__msg__Path__fini(message_memory);
}

size_t ros2_interface__msg__Path__rosidl_typesupport_introspection_c__size_function__Path__path_points(
  const void * untyped_member)
{
  const ros2_interface__msg__PathPoint__Sequence * member =
    (const ros2_interface__msg__PathPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__path_points(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__PathPoint__Sequence * member =
    (const ros2_interface__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__path_points(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__PathPoint__Sequence * member =
    (ros2_interface__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Path__rosidl_typesupport_introspection_c__fetch_function__Path__path_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__PathPoint * item =
    ((const ros2_interface__msg__PathPoint *)
    ros2_interface__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__path_points(untyped_member, index));
  ros2_interface__msg__PathPoint * value =
    (ros2_interface__msg__PathPoint *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Path__rosidl_typesupport_introspection_c__assign_function__Path__path_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__PathPoint * item =
    ((ros2_interface__msg__PathPoint *)
    ros2_interface__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__path_points(untyped_member, index));
  const ros2_interface__msg__PathPoint * value =
    (const ros2_interface__msg__PathPoint *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Path__rosidl_typesupport_introspection_c__resize_function__Path__path_points(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__PathPoint__Sequence * member =
    (ros2_interface__msg__PathPoint__Sequence *)(untyped_member);
  ros2_interface__msg__PathPoint__Sequence__fini(member);
  return ros2_interface__msg__PathPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Path, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Path, path_points),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Path__rosidl_typesupport_introspection_c__size_function__Path__path_points,  // size() function pointer
    ros2_interface__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__path_points,  // get_const(index) function pointer
    ros2_interface__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__path_points,  // get(index) function pointer
    ros2_interface__msg__Path__rosidl_typesupport_introspection_c__fetch_function__Path__path_points,  // fetch(index, &value) function pointer
    ros2_interface__msg__Path__rosidl_typesupport_introspection_c__assign_function__Path__path_points,  // assign(index, value) function pointer
    ros2_interface__msg__Path__rosidl_typesupport_introspection_c__resize_function__Path__path_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_message_members = {
  "ros2_interface__msg",  // message namespace
  "Path",  // message name
  2,  // number of fields
  sizeof(ros2_interface__msg__Path),
  ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array,  // message members
  ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle = {
  0,
  &ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Path)() {
  ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, PathPoint)();
  if (!ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

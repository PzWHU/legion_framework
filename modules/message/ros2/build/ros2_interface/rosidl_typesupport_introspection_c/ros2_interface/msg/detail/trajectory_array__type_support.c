// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/trajectory_array__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/trajectory_array__functions.h"
#include "ros2_interface/msg/detail/trajectory_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `spline_s`
// Member `qp_smooth`
#include "ros2_interface/msg/path.h"
// Member `spline_s`
// Member `qp_smooth`
#include "ros2_interface/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `trajectory_list`
#include "ros2_interface/msg/trajectory.h"
// Member `trajectory_list`
#include "ros2_interface/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__TrajectoryArray__init(message_memory);
}

void ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_fini_function(void * message_memory)
{
  ros2_interface__msg__TrajectoryArray__fini(message_memory);
}

size_t ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__size_function__TrajectoryArray__spline_s(
  const void * untyped_member)
{
  const ros2_interface__msg__Path__Sequence * member =
    (const ros2_interface__msg__Path__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_const_function__TrajectoryArray__spline_s(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Path__Sequence * member =
    (const ros2_interface__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_function__TrajectoryArray__spline_s(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Path__Sequence * member =
    (ros2_interface__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__fetch_function__TrajectoryArray__spline_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Path * item =
    ((const ros2_interface__msg__Path *)
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_const_function__TrajectoryArray__spline_s(untyped_member, index));
  ros2_interface__msg__Path * value =
    (ros2_interface__msg__Path *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__assign_function__TrajectoryArray__spline_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Path * item =
    ((ros2_interface__msg__Path *)
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_function__TrajectoryArray__spline_s(untyped_member, index));
  const ros2_interface__msg__Path * value =
    (const ros2_interface__msg__Path *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__resize_function__TrajectoryArray__spline_s(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Path__Sequence * member =
    (ros2_interface__msg__Path__Sequence *)(untyped_member);
  ros2_interface__msg__Path__Sequence__fini(member);
  return ros2_interface__msg__Path__Sequence__init(member, size);
}

size_t ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__size_function__TrajectoryArray__qp_smooth(
  const void * untyped_member)
{
  const ros2_interface__msg__Path__Sequence * member =
    (const ros2_interface__msg__Path__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_const_function__TrajectoryArray__qp_smooth(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Path__Sequence * member =
    (const ros2_interface__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_function__TrajectoryArray__qp_smooth(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Path__Sequence * member =
    (ros2_interface__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__fetch_function__TrajectoryArray__qp_smooth(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Path * item =
    ((const ros2_interface__msg__Path *)
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_const_function__TrajectoryArray__qp_smooth(untyped_member, index));
  ros2_interface__msg__Path * value =
    (ros2_interface__msg__Path *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__assign_function__TrajectoryArray__qp_smooth(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Path * item =
    ((ros2_interface__msg__Path *)
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_function__TrajectoryArray__qp_smooth(untyped_member, index));
  const ros2_interface__msg__Path * value =
    (const ros2_interface__msg__Path *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__resize_function__TrajectoryArray__qp_smooth(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Path__Sequence * member =
    (ros2_interface__msg__Path__Sequence *)(untyped_member);
  ros2_interface__msg__Path__Sequence__fini(member);
  return ros2_interface__msg__Path__Sequence__init(member, size);
}

size_t ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__size_function__TrajectoryArray__trajectory_list(
  const void * untyped_member)
{
  const ros2_interface__msg__Trajectory__Sequence * member =
    (const ros2_interface__msg__Trajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_const_function__TrajectoryArray__trajectory_list(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Trajectory__Sequence * member =
    (const ros2_interface__msg__Trajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_function__TrajectoryArray__trajectory_list(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Trajectory__Sequence * member =
    (ros2_interface__msg__Trajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__fetch_function__TrajectoryArray__trajectory_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Trajectory * item =
    ((const ros2_interface__msg__Trajectory *)
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_const_function__TrajectoryArray__trajectory_list(untyped_member, index));
  ros2_interface__msg__Trajectory * value =
    (ros2_interface__msg__Trajectory *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__assign_function__TrajectoryArray__trajectory_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Trajectory * item =
    ((ros2_interface__msg__Trajectory *)
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_function__TrajectoryArray__trajectory_list(untyped_member, index));
  const ros2_interface__msg__Trajectory * value =
    (const ros2_interface__msg__Trajectory *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__resize_function__TrajectoryArray__trajectory_list(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Trajectory__Sequence * member =
    (ros2_interface__msg__Trajectory__Sequence *)(untyped_member);
  ros2_interface__msg__Trajectory__Sequence__fini(member);
  return ros2_interface__msg__Trajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrajectoryArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spline_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrajectoryArray, spline_s),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__size_function__TrajectoryArray__spline_s,  // size() function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_const_function__TrajectoryArray__spline_s,  // get_const(index) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_function__TrajectoryArray__spline_s,  // get(index) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__fetch_function__TrajectoryArray__spline_s,  // fetch(index, &value) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__assign_function__TrajectoryArray__spline_s,  // assign(index, value) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__resize_function__TrajectoryArray__spline_s  // resize(index) function pointer
  },
  {
    "qp_smooth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrajectoryArray, qp_smooth),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__size_function__TrajectoryArray__qp_smooth,  // size() function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_const_function__TrajectoryArray__qp_smooth,  // get_const(index) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_function__TrajectoryArray__qp_smooth,  // get(index) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__fetch_function__TrajectoryArray__qp_smooth,  // fetch(index, &value) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__assign_function__TrajectoryArray__qp_smooth,  // assign(index, value) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__resize_function__TrajectoryArray__qp_smooth  // resize(index) function pointer
  },
  {
    "trajectory_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrajectoryArray, trajectory_list),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__size_function__TrajectoryArray__trajectory_list,  // size() function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_const_function__TrajectoryArray__trajectory_list,  // get_const(index) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__get_function__TrajectoryArray__trajectory_list,  // get(index) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__fetch_function__TrajectoryArray__trajectory_list,  // fetch(index, &value) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__assign_function__TrajectoryArray__trajectory_list,  // assign(index, value) function pointer
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__resize_function__TrajectoryArray__trajectory_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_members = {
  "ros2_interface__msg",  // message namespace
  "TrajectoryArray",  // message name
  4,  // number of fields
  sizeof(ros2_interface__msg__TrajectoryArray),
  ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_member_array,  // message members
  ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_type_support_handle = {
  0,
  &ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrajectoryArray)() {
  ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Path)();
  ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Path)();
  ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Trajectory)();
  if (!ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__TrajectoryArray__rosidl_typesupport_introspection_c__TrajectoryArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

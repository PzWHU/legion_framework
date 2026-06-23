// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/ParkingStopper.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/parking_stopper__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/parking_stopper__functions.h"
#include "ros2_interface/msg/detail/parking_stopper__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `center_point_vehicle`
// Member `center_point_abs`
// Member `stopper_points_vehicle`
// Member `stopper_points_abs`
#include "ros2_interface/msg/point3_d.h"
// Member `center_point_vehicle`
// Member `center_point_abs`
// Member `stopper_points_vehicle`
// Member `stopper_points_abs`
#include "ros2_interface/msg/detail/point3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__ParkingStopper__init(message_memory);
}

void ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_fini_function(void * message_memory)
{
  ros2_interface__msg__ParkingStopper__fini(message_memory);
}

size_t ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__size_function__ParkingStopper__stopper_points_vehicle(
  const void * untyped_member)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_const_function__ParkingStopper__stopper_points_vehicle(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_function__ParkingStopper__stopper_points_vehicle(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__fetch_function__ParkingStopper__stopper_points_vehicle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point3D * item =
    ((const ros2_interface__msg__Point3D *)
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_const_function__ParkingStopper__stopper_points_vehicle(untyped_member, index));
  ros2_interface__msg__Point3D * value =
    (ros2_interface__msg__Point3D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__assign_function__ParkingStopper__stopper_points_vehicle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point3D * item =
    ((ros2_interface__msg__Point3D *)
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_function__ParkingStopper__stopper_points_vehicle(untyped_member, index));
  const ros2_interface__msg__Point3D * value =
    (const ros2_interface__msg__Point3D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__resize_function__ParkingStopper__stopper_points_vehicle(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  ros2_interface__msg__Point3D__Sequence__fini(member);
  return ros2_interface__msg__Point3D__Sequence__init(member, size);
}

size_t ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__size_function__ParkingStopper__stopper_points_abs(
  const void * untyped_member)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_const_function__ParkingStopper__stopper_points_abs(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__Point3D__Sequence * member =
    (const ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_function__ParkingStopper__stopper_points_abs(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__fetch_function__ParkingStopper__stopper_points_abs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__Point3D * item =
    ((const ros2_interface__msg__Point3D *)
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_const_function__ParkingStopper__stopper_points_abs(untyped_member, index));
  ros2_interface__msg__Point3D * value =
    (ros2_interface__msg__Point3D *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__assign_function__ParkingStopper__stopper_points_abs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__Point3D * item =
    ((ros2_interface__msg__Point3D *)
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_function__ParkingStopper__stopper_points_abs(untyped_member, index));
  const ros2_interface__msg__Point3D * value =
    (const ros2_interface__msg__Point3D *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__resize_function__ParkingStopper__stopper_points_abs(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__Point3D__Sequence * member =
    (ros2_interface__msg__Point3D__Sequence *)(untyped_member);
  ros2_interface__msg__Point3D__Sequence__fini(member);
  return ros2_interface__msg__Point3D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingStopper, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_point_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingStopper, center_point_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_point_abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingStopper, center_point_abs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stopper_points_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingStopper, stopper_points_vehicle),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__size_function__ParkingStopper__stopper_points_vehicle,  // size() function pointer
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_const_function__ParkingStopper__stopper_points_vehicle,  // get_const(index) function pointer
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_function__ParkingStopper__stopper_points_vehicle,  // get(index) function pointer
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__fetch_function__ParkingStopper__stopper_points_vehicle,  // fetch(index, &value) function pointer
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__assign_function__ParkingStopper__stopper_points_vehicle,  // assign(index, value) function pointer
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__resize_function__ParkingStopper__stopper_points_vehicle  // resize(index) function pointer
  },
  {
    "stopper_points_abs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingStopper, stopper_points_abs),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__size_function__ParkingStopper__stopper_points_abs,  // size() function pointer
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_const_function__ParkingStopper__stopper_points_abs,  // get_const(index) function pointer
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__get_function__ParkingStopper__stopper_points_abs,  // get(index) function pointer
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__fetch_function__ParkingStopper__stopper_points_abs,  // fetch(index, &value) function pointer
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__assign_function__ParkingStopper__stopper_points_abs,  // assign(index, value) function pointer
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__resize_function__ParkingStopper__stopper_points_abs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_members = {
  "ros2_interface__msg",  // message namespace
  "ParkingStopper",  // message name
  5,  // number of fields
  sizeof(ros2_interface__msg__ParkingStopper),
  ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_member_array,  // message members
  ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_type_support_handle = {
  0,
  &ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, ParkingStopper)() {
  ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  if (!ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__ParkingStopper__rosidl_typesupport_introspection_c__ParkingStopper_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

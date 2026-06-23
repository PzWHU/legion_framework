// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/lane_info__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/lane_info__functions.h"
#include "ros2_interface/msg/detail/lane_info__struct.h"


// Include directives for member types
// Member `lane_points`
#include "ros2_interface/msg/lane_point.h"
// Member `lane_points`
#include "ros2_interface/msg/detail/lane_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__LaneInfo__init(message_memory);
}

void ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_fini_function(void * message_memory)
{
  ros2_interface__msg__LaneInfo__fini(message_memory);
}

size_t ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__size_function__LaneInfo__lane_points(
  const void * untyped_member)
{
  const ros2_interface__msg__LanePoint__Sequence * member =
    (const ros2_interface__msg__LanePoint__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__get_const_function__LaneInfo__lane_points(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__LanePoint__Sequence * member =
    (const ros2_interface__msg__LanePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__get_function__LaneInfo__lane_points(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__LanePoint__Sequence * member =
    (ros2_interface__msg__LanePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__fetch_function__LaneInfo__lane_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__LanePoint * item =
    ((const ros2_interface__msg__LanePoint *)
    ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__get_const_function__LaneInfo__lane_points(untyped_member, index));
  ros2_interface__msg__LanePoint * value =
    (ros2_interface__msg__LanePoint *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__assign_function__LaneInfo__lane_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__LanePoint * item =
    ((ros2_interface__msg__LanePoint *)
    ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__get_function__LaneInfo__lane_points(untyped_member, index));
  const ros2_interface__msg__LanePoint * value =
    (const ros2_interface__msg__LanePoint *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__resize_function__LaneInfo__lane_points(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__LanePoint__Sequence * member =
    (ros2_interface__msg__LanePoint__Sequence *)(untyped_member);
  ros2_interface__msg__LanePoint__Sequence__fini(member);
  return ros2_interface__msg__LanePoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_member_array[8] = {
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfo, priority),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfo, global_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predecessor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfo, predecessor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "successor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfo, successor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_neighbor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfo, left_neighbor_id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneInfo, right_neighbor_id),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__LaneInfo, type),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__LaneInfo, lane_points),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__size_function__LaneInfo__lane_points,  // size() function pointer
    ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__get_const_function__LaneInfo__lane_points,  // get_const(index) function pointer
    ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__get_function__LaneInfo__lane_points,  // get(index) function pointer
    ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__fetch_function__LaneInfo__lane_points,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__assign_function__LaneInfo__lane_points,  // assign(index, value) function pointer
    ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__resize_function__LaneInfo__lane_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_members = {
  "ros2_interface__msg",  // message namespace
  "LaneInfo",  // message name
  8,  // number of fields
  sizeof(ros2_interface__msg__LaneInfo),
  ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_member_array,  // message members
  ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle = {
  0,
  &ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, LaneInfo)() {
  ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, LanePoint)();
  if (!ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__LaneInfo__rosidl_typesupport_introspection_c__LaneInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

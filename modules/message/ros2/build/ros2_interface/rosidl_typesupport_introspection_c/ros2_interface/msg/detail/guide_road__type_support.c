// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/GuideRoad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/guide_road__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/guide_road__functions.h"
#include "ros2_interface/msg/detail/guide_road__struct.h"


// Include directives for member types
// Member `curvature`
#include "ros2_interface/msg/curvature_info.h"
// Member `curvature`
#include "ros2_interface/msg/detail/curvature_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__GuideRoad__init(message_memory);
}

void ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_fini_function(void * message_memory)
{
  ros2_interface__msg__GuideRoad__fini(message_memory);
}

size_t ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__size_function__GuideRoad__curvature(
  const void * untyped_member)
{
  const ros2_interface__msg__CurvatureInfo__Sequence * member =
    (const ros2_interface__msg__CurvatureInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__get_const_function__GuideRoad__curvature(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__CurvatureInfo__Sequence * member =
    (const ros2_interface__msg__CurvatureInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__get_function__GuideRoad__curvature(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__CurvatureInfo__Sequence * member =
    (ros2_interface__msg__CurvatureInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__fetch_function__GuideRoad__curvature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__CurvatureInfo * item =
    ((const ros2_interface__msg__CurvatureInfo *)
    ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__get_const_function__GuideRoad__curvature(untyped_member, index));
  ros2_interface__msg__CurvatureInfo * value =
    (ros2_interface__msg__CurvatureInfo *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__assign_function__GuideRoad__curvature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__CurvatureInfo * item =
    ((ros2_interface__msg__CurvatureInfo *)
    ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__get_function__GuideRoad__curvature(untyped_member, index));
  const ros2_interface__msg__CurvatureInfo * value =
    (const ros2_interface__msg__CurvatureInfo *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__resize_function__GuideRoad__curvature(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__CurvatureInfo__Sequence * member =
    (ros2_interface__msg__CurvatureInfo__Sequence *)(untyped_member);
  ros2_interface__msg__CurvatureInfo__Sequence__fini(member);
  return ros2_interface__msg__CurvatureInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_message_member_array[6] = {
  {
    "road_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__GuideRoad, road_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__GuideRoad, road_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__GuideRoad, turn_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "avg_curvature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__GuideRoad, avg_curvature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curvature_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__GuideRoad, curvature_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curvature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__GuideRoad, curvature),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__size_function__GuideRoad__curvature,  // size() function pointer
    ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__get_const_function__GuideRoad__curvature,  // get_const(index) function pointer
    ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__get_function__GuideRoad__curvature,  // get(index) function pointer
    ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__fetch_function__GuideRoad__curvature,  // fetch(index, &value) function pointer
    ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__assign_function__GuideRoad__curvature,  // assign(index, value) function pointer
    ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__resize_function__GuideRoad__curvature  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_message_members = {
  "ros2_interface__msg",  // message namespace
  "GuideRoad",  // message name
  6,  // number of fields
  sizeof(ros2_interface__msg__GuideRoad),
  ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_message_member_array,  // message members
  ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_message_type_support_handle = {
  0,
  &ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, GuideRoad)() {
  ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, CurvatureInfo)();
  if (!ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__GuideRoad__rosidl_typesupport_introspection_c__GuideRoad_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

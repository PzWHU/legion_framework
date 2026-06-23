// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/traffic_light__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/traffic_light__functions.h"
#include "ros2_interface/msg/detail/traffic_light__struct.h"


// Include directives for member types
// Member `light_rect`
#include "ros2_interface/msg/image_rect.h"
// Member `light_rect`
#include "ros2_interface/msg/detail/image_rect__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "ros2_interface/msg/point3_d.h"
// Member `position`
#include "ros2_interface/msg/detail/point3_d__rosidl_typesupport_introspection_c.h"
// Member `light_lanes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `create_time`
#include "ros2_interface/msg/time.h"
// Member `create_time`
#include "ros2_interface/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__TrafficLight__init(message_memory);
}

void ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_fini_function(void * message_memory)
{
  ros2_interface__msg__TrafficLight__fini(message_memory);
}

size_t ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__size_function__TrafficLight__light_lanes(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__light_lanes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__light_lanes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__fetch_function__TrafficLight__light_lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__light_lanes(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__assign_function__TrafficLight__light_lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__light_lanes(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__resize_function__TrafficLight__light_lanes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_member_array[13] = {
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "light_rect",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, light_rect),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "light_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, light_lanes),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__size_function__TrafficLight__light_lanes,  // size() function pointer
    ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__light_lanes,  // get_const(index) function pointer
    ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__light_lanes,  // get(index) function pointer
    ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__fetch_function__TrafficLight__light_lanes,  // fetch(index, &value) function pointer
    ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__assign_function__TrafficLight__light_lanes,  // assign(index, value) function pointer
    ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__resize_function__TrafficLight__light_lanes  // resize(index) function pointer
  },
  {
    "tracking_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, tracking_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blink",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, blink),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blinking_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, blinking_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remaining_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, remaining_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "create_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__TrafficLight, create_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_members = {
  "ros2_interface__msg",  // message namespace
  "TrafficLight",  // message name
  13,  // number of fields
  sizeof(ros2_interface__msg__TrafficLight),
  ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_member_array,  // message members
  ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle = {
  0,
  &ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrafficLight)() {
  ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, ImageRect)();
  ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Time)();
  if (!ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

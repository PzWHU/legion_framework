// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/ParkingInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/parking_info__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/parking_info__functions.h"
#include "ros2_interface/msg/detail/parking_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `center_point_of_parking`
#include "ros2_interface/msg/point3_d.h"
// Member `center_point_of_parking`
#include "ros2_interface/msg/detail/point3_d__rosidl_typesupport_introspection_c.h"
// Member `polygon`
#include "ros2_interface/msg/polygon3_d.h"
// Member `polygon`
#include "ros2_interface/msg/detail/polygon3_d__rosidl_typesupport_introspection_c.h"
// Member `parking_stoppers`
#include "ros2_interface/msg/parking_stopper.h"
// Member `parking_stoppers`
#include "ros2_interface/msg/detail/parking_stopper__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__ParkingInfo__init(message_memory);
}

void ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_fini_function(void * message_memory)
{
  ros2_interface__msg__ParkingInfo__fini(message_memory);
}

size_t ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__size_function__ParkingInfo__parking_stoppers(
  const void * untyped_member)
{
  const ros2_interface__msg__ParkingStopper__Sequence * member =
    (const ros2_interface__msg__ParkingStopper__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__get_const_function__ParkingInfo__parking_stoppers(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__ParkingStopper__Sequence * member =
    (const ros2_interface__msg__ParkingStopper__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__get_function__ParkingInfo__parking_stoppers(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__ParkingStopper__Sequence * member =
    (ros2_interface__msg__ParkingStopper__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__fetch_function__ParkingInfo__parking_stoppers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__ParkingStopper * item =
    ((const ros2_interface__msg__ParkingStopper *)
    ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__get_const_function__ParkingInfo__parking_stoppers(untyped_member, index));
  ros2_interface__msg__ParkingStopper * value =
    (ros2_interface__msg__ParkingStopper *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__assign_function__ParkingInfo__parking_stoppers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__ParkingStopper * item =
    ((ros2_interface__msg__ParkingStopper *)
    ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__get_function__ParkingInfo__parking_stoppers(untyped_member, index));
  const ros2_interface__msg__ParkingStopper * value =
    (const ros2_interface__msg__ParkingStopper *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__resize_function__ParkingInfo__parking_stoppers(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__ParkingStopper__Sequence * member =
    (ros2_interface__msg__ParkingStopper__Sequence *)(untyped_member);
  ros2_interface__msg__ParkingStopper__Sequence__fini(member);
  return ros2_interface__msg__ParkingStopper__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_member_array[19] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parking_space_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, parking_space_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parking_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, parking_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parking_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, parking_status),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__ParkingInfo, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_point_of_parking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, center_point_of_parking),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, yaw_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, polygon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, sensor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_lane_width_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, is_lane_width_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, lane_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parking_stoppers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, parking_stoppers),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__size_function__ParkingInfo__parking_stoppers,  // size() function pointer
    ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__get_const_function__ParkingInfo__parking_stoppers,  // get_const(index) function pointer
    ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__get_function__ParkingInfo__parking_stoppers,  // get(index) function pointer
    ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__fetch_function__ParkingInfo__parking_stoppers,  // fetch(index, &value) function pointer
    ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__assign_function__ParkingInfo__parking_stoppers,  // assign(index, value) function pointer
    ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__resize_function__ParkingInfo__parking_stoppers  // resize(index) function pointer
  },
  {
    "parking_direction_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, parking_direction_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_occupied_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, left_occupied_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_occupied_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, right_occupied_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parking_source_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__ParkingInfo, parking_source_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_members = {
  "ros2_interface__msg",  // message namespace
  "ParkingInfo",  // message name
  19,  // number of fields
  sizeof(ros2_interface__msg__ParkingInfo),
  ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_member_array,  // message members
  ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_type_support_handle = {
  0,
  &ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, ParkingInfo)() {
  ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Polygon3D)();
  ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, ParkingStopper)();
  if (!ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__ParkingInfo__rosidl_typesupport_introspection_c__ParkingInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

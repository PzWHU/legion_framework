// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/CameraParkingInfoList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/camera_parking_info_list__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/camera_parking_info_list__functions.h"
#include "ros2_interface/msg/detail/camera_parking_info_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `camera_parking`
#include "ros2_interface/msg/camera_parking_info.h"
// Member `camera_parking`
#include "ros2_interface/msg/detail/camera_parking_info__rosidl_typesupport_introspection_c.h"
// Member `camera_parking_stoppers`
#include "ros2_interface/msg/camera_parking_stopper.h"
// Member `camera_parking_stoppers`
#include "ros2_interface/msg/detail/camera_parking_stopper__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__CameraParkingInfoList__init(message_memory);
}

void ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_fini_function(void * message_memory)
{
  ros2_interface__msg__CameraParkingInfoList__fini(message_memory);
}

size_t ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__size_function__CameraParkingInfoList__camera_parking(
  const void * untyped_member)
{
  const ros2_interface__msg__CameraParkingInfo__Sequence * member =
    (const ros2_interface__msg__CameraParkingInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_const_function__CameraParkingInfoList__camera_parking(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__CameraParkingInfo__Sequence * member =
    (const ros2_interface__msg__CameraParkingInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_function__CameraParkingInfoList__camera_parking(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__CameraParkingInfo__Sequence * member =
    (ros2_interface__msg__CameraParkingInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__fetch_function__CameraParkingInfoList__camera_parking(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__CameraParkingInfo * item =
    ((const ros2_interface__msg__CameraParkingInfo *)
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_const_function__CameraParkingInfoList__camera_parking(untyped_member, index));
  ros2_interface__msg__CameraParkingInfo * value =
    (ros2_interface__msg__CameraParkingInfo *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__assign_function__CameraParkingInfoList__camera_parking(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__CameraParkingInfo * item =
    ((ros2_interface__msg__CameraParkingInfo *)
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_function__CameraParkingInfoList__camera_parking(untyped_member, index));
  const ros2_interface__msg__CameraParkingInfo * value =
    (const ros2_interface__msg__CameraParkingInfo *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__resize_function__CameraParkingInfoList__camera_parking(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__CameraParkingInfo__Sequence * member =
    (ros2_interface__msg__CameraParkingInfo__Sequence *)(untyped_member);
  ros2_interface__msg__CameraParkingInfo__Sequence__fini(member);
  return ros2_interface__msg__CameraParkingInfo__Sequence__init(member, size);
}

size_t ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__size_function__CameraParkingInfoList__camera_parking_stoppers(
  const void * untyped_member)
{
  const ros2_interface__msg__CameraParkingStopper__Sequence * member =
    (const ros2_interface__msg__CameraParkingStopper__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_const_function__CameraParkingInfoList__camera_parking_stoppers(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__CameraParkingStopper__Sequence * member =
    (const ros2_interface__msg__CameraParkingStopper__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_function__CameraParkingInfoList__camera_parking_stoppers(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__CameraParkingStopper__Sequence * member =
    (ros2_interface__msg__CameraParkingStopper__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__fetch_function__CameraParkingInfoList__camera_parking_stoppers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__CameraParkingStopper * item =
    ((const ros2_interface__msg__CameraParkingStopper *)
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_const_function__CameraParkingInfoList__camera_parking_stoppers(untyped_member, index));
  ros2_interface__msg__CameraParkingStopper * value =
    (ros2_interface__msg__CameraParkingStopper *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__assign_function__CameraParkingInfoList__camera_parking_stoppers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__CameraParkingStopper * item =
    ((ros2_interface__msg__CameraParkingStopper *)
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_function__CameraParkingInfoList__camera_parking_stoppers(untyped_member, index));
  const ros2_interface__msg__CameraParkingStopper * value =
    (const ros2_interface__msg__CameraParkingStopper *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__resize_function__CameraParkingInfoList__camera_parking_stoppers(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__CameraParkingStopper__Sequence * member =
    (ros2_interface__msg__CameraParkingStopper__Sequence *)(untyped_member);
  ros2_interface__msg__CameraParkingStopper__Sequence__fini(member);
  return ros2_interface__msg__CameraParkingStopper__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CameraParkingInfoList, header),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__CameraParkingInfoList, sensor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_parking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CameraParkingInfoList, camera_parking),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__size_function__CameraParkingInfoList__camera_parking,  // size() function pointer
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_const_function__CameraParkingInfoList__camera_parking,  // get_const(index) function pointer
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_function__CameraParkingInfoList__camera_parking,  // get(index) function pointer
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__fetch_function__CameraParkingInfoList__camera_parking,  // fetch(index, &value) function pointer
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__assign_function__CameraParkingInfoList__camera_parking,  // assign(index, value) function pointer
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__resize_function__CameraParkingInfoList__camera_parking  // resize(index) function pointer
  },
  {
    "camera_parking_stoppers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CameraParkingInfoList, camera_parking_stoppers),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__size_function__CameraParkingInfoList__camera_parking_stoppers,  // size() function pointer
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_const_function__CameraParkingInfoList__camera_parking_stoppers,  // get_const(index) function pointer
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__get_function__CameraParkingInfoList__camera_parking_stoppers,  // get(index) function pointer
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__fetch_function__CameraParkingInfoList__camera_parking_stoppers,  // fetch(index, &value) function pointer
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__assign_function__CameraParkingInfoList__camera_parking_stoppers,  // assign(index, value) function pointer
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__resize_function__CameraParkingInfoList__camera_parking_stoppers  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CameraParkingInfoList, error_code),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__CameraParkingInfoList, is_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_message_members = {
  "ros2_interface__msg",  // message namespace
  "CameraParkingInfoList",  // message name
  6,  // number of fields
  sizeof(ros2_interface__msg__CameraParkingInfoList),
  ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_message_member_array,  // message members
  ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_message_type_support_handle = {
  0,
  &ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, CameraParkingInfoList)() {
  ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, CameraParkingInfo)();
  ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, CameraParkingStopper)();
  if (!ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__CameraParkingInfoList__rosidl_typesupport_introspection_c__CameraParkingInfoList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

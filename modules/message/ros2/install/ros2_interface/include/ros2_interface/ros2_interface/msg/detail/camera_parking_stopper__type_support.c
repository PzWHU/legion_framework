// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/CameraParkingStopper.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/camera_parking_stopper__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/camera_parking_stopper__functions.h"
#include "ros2_interface/msg/detail/camera_parking_stopper__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `bbox2d`
#include "ros2_interface/msg/b_box2_d.h"
// Member `bbox2d`
#include "ros2_interface/msg/detail/b_box2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__CameraParkingStopper__init(message_memory);
}

void ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_fini_function(void * message_memory)
{
  ros2_interface__msg__CameraParkingStopper__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CameraParkingStopper, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox2d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CameraParkingStopper, bbox2d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_message_members = {
  "ros2_interface__msg",  // message namespace
  "CameraParkingStopper",  // message name
  2,  // number of fields
  sizeof(ros2_interface__msg__CameraParkingStopper),
  ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_message_member_array,  // message members
  ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_message_type_support_handle = {
  0,
  &ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, CameraParkingStopper)() {
  ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, BBox2D)();
  if (!ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__CameraParkingStopper__rosidl_typesupport_introspection_c__CameraParkingStopper_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/CompressedImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/compressed_image__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/compressed_image__functions.h"
#include "ros2_interface/msg/detail/compressed_image__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `frame_id`
// Member `format`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__CompressedImage__init(message_memory);
}

void ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_fini_function(void * message_memory)
{
  ros2_interface__msg__CompressedImage__fini(message_memory);
}

size_t ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__size_function__CompressedImage__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__get_const_function__CompressedImage__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__get_function__CompressedImage__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__fetch_function__CompressedImage__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__get_const_function__CompressedImage__data(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__assign_function__CompressedImage__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__get_function__CompressedImage__data(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__resize_function__CompressedImage__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CompressedImage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CompressedImage, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CompressedImage, format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CompressedImage, data),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__size_function__CompressedImage__data,  // size() function pointer
    ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__get_const_function__CompressedImage__data,  // get_const(index) function pointer
    ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__get_function__CompressedImage__data,  // get(index) function pointer
    ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__fetch_function__CompressedImage__data,  // fetch(index, &value) function pointer
    ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__assign_function__CompressedImage__data,  // assign(index, value) function pointer
    ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__resize_function__CompressedImage__data  // resize(index) function pointer
  },
  {
    "measurement_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CompressedImage, measurement_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__CompressedImage, frame_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_message_members = {
  "ros2_interface__msg",  // message namespace
  "CompressedImage",  // message name
  6,  // number of fields
  sizeof(ros2_interface__msg__CompressedImage),
  ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_message_member_array,  // message members
  ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_message_type_support_handle = {
  0,
  &ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, CompressedImage)() {
  ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__CompressedImage__rosidl_typesupport_introspection_c__CompressedImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

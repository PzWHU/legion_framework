// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/VehicleSignal.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle_signal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/vehicle_signal__struct.h"
#include "ros2_interface/msg/detail/vehicle_signal__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VehicleSignal__ros_msg_type = ros2_interface__msg__VehicleSignal;

static bool _VehicleSignal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleSignal__ros_msg_type * ros_message = static_cast<const _VehicleSignal__ros_msg_type *>(untyped_ros_message);
  // Field name: turn_signal
  {
    cdr << ros_message->turn_signal;
  }

  // Field name: high_beam
  {
    cdr << (ros_message->high_beam ? true : false);
  }

  // Field name: low_beam
  {
    cdr << (ros_message->low_beam ? true : false);
  }

  // Field name: horn
  {
    cdr << (ros_message->horn ? true : false);
  }

  // Field name: emergency_light
  {
    cdr << (ros_message->emergency_light ? true : false);
  }

  return true;
}

static bool _VehicleSignal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleSignal__ros_msg_type * ros_message = static_cast<_VehicleSignal__ros_msg_type *>(untyped_ros_message);
  // Field name: turn_signal
  {
    cdr >> ros_message->turn_signal;
  }

  // Field name: high_beam
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->high_beam = tmp ? true : false;
  }

  // Field name: low_beam
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->low_beam = tmp ? true : false;
  }

  // Field name: horn
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->horn = tmp ? true : false;
  }

  // Field name: emergency_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_light = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__VehicleSignal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleSignal__ros_msg_type * ros_message = static_cast<const _VehicleSignal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name turn_signal
  {
    size_t item_size = sizeof(ros_message->turn_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name high_beam
  {
    size_t item_size = sizeof(ros_message->high_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name low_beam
  {
    size_t item_size = sizeof(ros_message->low_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horn
  {
    size_t item_size = sizeof(ros_message->horn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency_light
  {
    size_t item_size = sizeof(ros_message->emergency_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleSignal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__VehicleSignal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__VehicleSignal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: turn_signal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: high_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: low_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: horn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emergency_light
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_interface__msg__VehicleSignal;
    is_plain =
      (
      offsetof(DataType, emergency_light) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleSignal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__VehicleSignal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleSignal = {
  "ros2_interface::msg",
  "VehicleSignal",
  _VehicleSignal__cdr_serialize,
  _VehicleSignal__cdr_deserialize,
  _VehicleSignal__get_serialized_size,
  _VehicleSignal__max_serialized_size
};

static rosidl_message_type_support_t _VehicleSignal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleSignal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, VehicleSignal)() {
  return &_VehicleSignal__type_support;
}

#if defined(__cplusplus)
}
#endif

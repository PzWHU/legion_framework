// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/RadarStateError.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/radar_state_error__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/radar_state_error__struct.h"
#include "ros2_interface/msg/detail/radar_state_error__functions.h"
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


using _RadarStateError__ros_msg_type = ros2_interface__msg__RadarStateError;

static bool _RadarStateError__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RadarStateError__ros_msg_type * ros_message = static_cast<const _RadarStateError__ros_msg_type *>(untyped_ros_message);
  // Field name: persistent_error
  {
    cdr << ros_message->persistent_error;
  }

  // Field name: temporary_error
  {
    cdr << ros_message->temporary_error;
  }

  // Field name: interference_error
  {
    cdr << ros_message->interference_error;
  }

  // Field name: temperature_error
  {
    cdr << ros_message->temperature_error;
  }

  // Field name: voltage_error
  {
    cdr << ros_message->voltage_error;
  }

  // Field name: block_error
  {
    cdr << ros_message->block_error;
  }

  // Field name: broadcast_error
  {
    cdr << ros_message->broadcast_error;
  }

  // Field name: electric_axis_error
  {
    cdr << ros_message->electric_axis_error;
  }

  // Field name: config_error
  {
    cdr << ros_message->config_error;
  }

  // Field name: calibration_error
  {
    cdr << ros_message->calibration_error;
  }

  return true;
}

static bool _RadarStateError__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RadarStateError__ros_msg_type * ros_message = static_cast<_RadarStateError__ros_msg_type *>(untyped_ros_message);
  // Field name: persistent_error
  {
    cdr >> ros_message->persistent_error;
  }

  // Field name: temporary_error
  {
    cdr >> ros_message->temporary_error;
  }

  // Field name: interference_error
  {
    cdr >> ros_message->interference_error;
  }

  // Field name: temperature_error
  {
    cdr >> ros_message->temperature_error;
  }

  // Field name: voltage_error
  {
    cdr >> ros_message->voltage_error;
  }

  // Field name: block_error
  {
    cdr >> ros_message->block_error;
  }

  // Field name: broadcast_error
  {
    cdr >> ros_message->broadcast_error;
  }

  // Field name: electric_axis_error
  {
    cdr >> ros_message->electric_axis_error;
  }

  // Field name: config_error
  {
    cdr >> ros_message->config_error;
  }

  // Field name: calibration_error
  {
    cdr >> ros_message->calibration_error;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__RadarStateError(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RadarStateError__ros_msg_type * ros_message = static_cast<const _RadarStateError__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name persistent_error
  {
    size_t item_size = sizeof(ros_message->persistent_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temporary_error
  {
    size_t item_size = sizeof(ros_message->temporary_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name interference_error
  {
    size_t item_size = sizeof(ros_message->interference_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_error
  {
    size_t item_size = sizeof(ros_message->temperature_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_error
  {
    size_t item_size = sizeof(ros_message->voltage_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name block_error
  {
    size_t item_size = sizeof(ros_message->block_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name broadcast_error
  {
    size_t item_size = sizeof(ros_message->broadcast_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name electric_axis_error
  {
    size_t item_size = sizeof(ros_message->electric_axis_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name config_error
  {
    size_t item_size = sizeof(ros_message->config_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name calibration_error
  {
    size_t item_size = sizeof(ros_message->calibration_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RadarStateError__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__RadarStateError(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__RadarStateError(
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

  // member: persistent_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temporary_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: interference_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temperature_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: voltage_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: block_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: broadcast_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: electric_axis_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: config_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: calibration_error
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
    using DataType = ros2_interface__msg__RadarStateError;
    is_plain =
      (
      offsetof(DataType, calibration_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RadarStateError__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__RadarStateError(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RadarStateError = {
  "ros2_interface::msg",
  "RadarStateError",
  _RadarStateError__cdr_serialize,
  _RadarStateError__cdr_deserialize,
  _RadarStateError__get_serialized_size,
  _RadarStateError__max_serialized_size
};

static rosidl_message_type_support_t _RadarStateError__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RadarStateError,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, RadarStateError)() {
  return &_RadarStateError__type_support;
}

#if defined(__cplusplus)
}
#endif

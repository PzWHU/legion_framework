// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/RadarState.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/radar_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/radar_state__struct.h"
#include "ros2_interface/msg/detail/radar_state__functions.h"
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

#include "ros2_interface/msg/detail/radar_state_error__functions.h"  // radar_state_error
#include "ros2_interface/msg/detail/radar_state_mode__functions.h"  // radar_state_mode

// forward declare type support functions
size_t get_serialized_size_ros2_interface__msg__RadarStateError(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__RadarStateError(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, RadarStateError)();
size_t get_serialized_size_ros2_interface__msg__RadarStateMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__RadarStateMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, RadarStateMode)();


using _RadarState__ros_msg_type = ros2_interface__msg__RadarState;

static bool _RadarState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RadarState__ros_msg_type * ros_message = static_cast<const _RadarState__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_id
  {
    cdr << ros_message->sensor_id;
  }

  // Field name: nvm_read_status
  {
    cdr << ros_message->nvm_read_status;
  }

  // Field name: nvm_write_status
  {
    cdr << ros_message->nvm_write_status;
  }

  // Field name: radar_state_error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, RadarStateError
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->radar_state_error, cdr))
    {
      return false;
    }
  }

  // Field name: radar_state_mode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, RadarStateMode
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->radar_state_mode, cdr))
    {
      return false;
    }
  }

  // Field name: max_distance
  {
    cdr << ros_message->max_distance;
  }

  // Field name: sort_index
  {
    cdr << ros_message->sort_index;
  }

  // Field name: radar_power
  {
    cdr << ros_message->radar_power;
  }

  // Field name: ctl_relay
  {
    cdr << ros_message->ctl_relay;
  }

  // Field name: output_type
  {
    cdr << ros_message->output_type;
  }

  // Field name: send_quality
  {
    cdr << ros_message->send_quality;
  }

  // Field name: send_extinfo
  {
    cdr << ros_message->send_extinfo;
  }

  // Field name: motion_rx_state
  {
    cdr << ros_message->motion_rx_state;
  }

  // Field name: rcs_threshold
  {
    cdr << ros_message->rcs_threshold;
  }

  // Field name: connector_direction
  {
    cdr << ros_message->connector_direction;
  }

  // Field name: radar_position
  {
    cdr << ros_message->radar_position;
  }

  // Field name: hw_error
  {
    cdr << ros_message->hw_error;
  }

  return true;
}

static bool _RadarState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RadarState__ros_msg_type * ros_message = static_cast<_RadarState__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_id
  {
    cdr >> ros_message->sensor_id;
  }

  // Field name: nvm_read_status
  {
    cdr >> ros_message->nvm_read_status;
  }

  // Field name: nvm_write_status
  {
    cdr >> ros_message->nvm_write_status;
  }

  // Field name: radar_state_error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, RadarStateError
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->radar_state_error))
    {
      return false;
    }
  }

  // Field name: radar_state_mode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, RadarStateMode
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->radar_state_mode))
    {
      return false;
    }
  }

  // Field name: max_distance
  {
    cdr >> ros_message->max_distance;
  }

  // Field name: sort_index
  {
    cdr >> ros_message->sort_index;
  }

  // Field name: radar_power
  {
    cdr >> ros_message->radar_power;
  }

  // Field name: ctl_relay
  {
    cdr >> ros_message->ctl_relay;
  }

  // Field name: output_type
  {
    cdr >> ros_message->output_type;
  }

  // Field name: send_quality
  {
    cdr >> ros_message->send_quality;
  }

  // Field name: send_extinfo
  {
    cdr >> ros_message->send_extinfo;
  }

  // Field name: motion_rx_state
  {
    cdr >> ros_message->motion_rx_state;
  }

  // Field name: rcs_threshold
  {
    cdr >> ros_message->rcs_threshold;
  }

  // Field name: connector_direction
  {
    cdr >> ros_message->connector_direction;
  }

  // Field name: radar_position
  {
    cdr >> ros_message->radar_position;
  }

  // Field name: hw_error
  {
    cdr >> ros_message->hw_error;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__RadarState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RadarState__ros_msg_type * ros_message = static_cast<const _RadarState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sensor_id
  {
    size_t item_size = sizeof(ros_message->sensor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nvm_read_status
  {
    size_t item_size = sizeof(ros_message->nvm_read_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nvm_write_status
  {
    size_t item_size = sizeof(ros_message->nvm_write_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_state_error

  current_alignment += get_serialized_size_ros2_interface__msg__RadarStateError(
    &(ros_message->radar_state_error), current_alignment);
  // field.name radar_state_mode

  current_alignment += get_serialized_size_ros2_interface__msg__RadarStateMode(
    &(ros_message->radar_state_mode), current_alignment);
  // field.name max_distance
  {
    size_t item_size = sizeof(ros_message->max_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sort_index
  {
    size_t item_size = sizeof(ros_message->sort_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_power
  {
    size_t item_size = sizeof(ros_message->radar_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ctl_relay
  {
    size_t item_size = sizeof(ros_message->ctl_relay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name output_type
  {
    size_t item_size = sizeof(ros_message->output_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name send_quality
  {
    size_t item_size = sizeof(ros_message->send_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name send_extinfo
  {
    size_t item_size = sizeof(ros_message->send_extinfo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motion_rx_state
  {
    size_t item_size = sizeof(ros_message->motion_rx_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rcs_threshold
  {
    size_t item_size = sizeof(ros_message->rcs_threshold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name connector_direction
  {
    size_t item_size = sizeof(ros_message->connector_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_position
  {
    size_t item_size = sizeof(ros_message->radar_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hw_error
  {
    size_t item_size = sizeof(ros_message->hw_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RadarState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__RadarState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__RadarState(
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

  // member: sensor_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nvm_read_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nvm_write_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_state_error
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__RadarStateError(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: radar_state_mode
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__RadarStateMode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: max_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sort_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ctl_relay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: output_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: send_quality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: send_extinfo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motion_rx_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rcs_threshold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: connector_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hw_error
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
    using DataType = ros2_interface__msg__RadarState;
    is_plain =
      (
      offsetof(DataType, hw_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RadarState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__RadarState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RadarState = {
  "ros2_interface::msg",
  "RadarState",
  _RadarState__cdr_serialize,
  _RadarState__cdr_deserialize,
  _RadarState__get_serialized_size,
  _RadarState__max_serialized_size
};

static rosidl_message_type_support_t _RadarState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RadarState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, RadarState)() {
  return &_RadarState__type_support;
}

#if defined(__cplusplus)
}
#endif

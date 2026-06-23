// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/ControlCommand.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/control_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/control_command__struct.h"
#include "ros2_interface/msg/detail/control_command__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_interface
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_interface
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros2_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ControlCommand__ros_msg_type = ros2_interface__msg__ControlCommand;

static bool _ControlCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlCommand__ros_msg_type * ros_message = static_cast<const _ControlCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: steer_driving_mode
  {
    cdr << ros_message->steer_driving_mode;
  }

  // Field name: front_steering_target
  {
    cdr << ros_message->front_steering_target;
  }

  // Field name: rear_steering_target
  {
    cdr << ros_message->rear_steering_target;
  }

  // Field name: front_steering_rate
  {
    cdr << ros_message->front_steering_rate;
  }

  // Field name: rear_steering_rate
  {
    cdr << ros_message->rear_steering_rate;
  }

  // Field name: accel_driving_mode
  {
    cdr << ros_message->accel_driving_mode;
  }

  // Field name: accel_value
  {
    cdr << ros_message->accel_value;
  }

  // Field name: brake_driving_mode
  {
    cdr << ros_message->brake_driving_mode;
  }

  // Field name: brake_value
  {
    cdr << ros_message->brake_value;
  }

  // Field name: backup_brake_driving_mode
  {
    cdr << ros_message->backup_brake_driving_mode;
  }

  // Field name: backup_brake_value
  {
    cdr << ros_message->backup_brake_value;
  }

  // Field name: epb_driving_mode
  {
    cdr << ros_message->epb_driving_mode;
  }

  // Field name: epb_level
  {
    cdr << ros_message->epb_level;
  }

  // Field name: gear_driving_mode
  {
    cdr << ros_message->gear_driving_mode;
  }

  // Field name: emergency_brake_enable
  {
    cdr << ros_message->emergency_brake_enable;
  }

  // Field name: gear_location
  {
    cdr << ros_message->gear_location;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: acceleration
  {
    cdr << ros_message->acceleration;
  }

  // Field name: turn_lamp_ctrl
  {
    cdr << ros_message->turn_lamp_ctrl;
  }

  // Field name: high_beam_ctrl
  {
    cdr << ros_message->high_beam_ctrl;
  }

  // Field name: low_beam_ctrl
  {
    cdr << ros_message->low_beam_ctrl;
  }

  // Field name: horn_ctrl
  {
    cdr << ros_message->horn_ctrl;
  }

  // Field name: front_wiper_ctrl
  {
    cdr << ros_message->front_wiper_ctrl;
  }

  // Field name: rear_wiper_ctrl
  {
    cdr << ros_message->rear_wiper_ctrl;
  }

  // Field name: position_lamp_ctrl
  {
    cdr << ros_message->position_lamp_ctrl;
  }

  // Field name: front_fog_lamp_ctrl
  {
    cdr << ros_message->front_fog_lamp_ctrl;
  }

  // Field name: rear_fog_lamp_ctrl
  {
    cdr << ros_message->rear_fog_lamp_ctrl;
  }

  // Field name: brake_lamp_ctrl
  {
    cdr << ros_message->brake_lamp_ctrl;
  }

  // Field name: alarm_lamp_ctrl
  {
    cdr << ros_message->alarm_lamp_ctrl;
  }

  // Field name: lf_door_ctrl
  {
    cdr << ros_message->lf_door_ctrl;
  }

  // Field name: rf_door_ctrl
  {
    cdr << ros_message->rf_door_ctrl;
  }

  // Field name: lr_door_ctrl
  {
    cdr << ros_message->lr_door_ctrl;
  }

  // Field name: rr_door_ctrl
  {
    cdr << ros_message->rr_door_ctrl;
  }

  return true;
}

static bool _ControlCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlCommand__ros_msg_type * ros_message = static_cast<_ControlCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: steer_driving_mode
  {
    cdr >> ros_message->steer_driving_mode;
  }

  // Field name: front_steering_target
  {
    cdr >> ros_message->front_steering_target;
  }

  // Field name: rear_steering_target
  {
    cdr >> ros_message->rear_steering_target;
  }

  // Field name: front_steering_rate
  {
    cdr >> ros_message->front_steering_rate;
  }

  // Field name: rear_steering_rate
  {
    cdr >> ros_message->rear_steering_rate;
  }

  // Field name: accel_driving_mode
  {
    cdr >> ros_message->accel_driving_mode;
  }

  // Field name: accel_value
  {
    cdr >> ros_message->accel_value;
  }

  // Field name: brake_driving_mode
  {
    cdr >> ros_message->brake_driving_mode;
  }

  // Field name: brake_value
  {
    cdr >> ros_message->brake_value;
  }

  // Field name: backup_brake_driving_mode
  {
    cdr >> ros_message->backup_brake_driving_mode;
  }

  // Field name: backup_brake_value
  {
    cdr >> ros_message->backup_brake_value;
  }

  // Field name: epb_driving_mode
  {
    cdr >> ros_message->epb_driving_mode;
  }

  // Field name: epb_level
  {
    cdr >> ros_message->epb_level;
  }

  // Field name: gear_driving_mode
  {
    cdr >> ros_message->gear_driving_mode;
  }

  // Field name: emergency_brake_enable
  {
    cdr >> ros_message->emergency_brake_enable;
  }

  // Field name: gear_location
  {
    cdr >> ros_message->gear_location;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: acceleration
  {
    cdr >> ros_message->acceleration;
  }

  // Field name: turn_lamp_ctrl
  {
    cdr >> ros_message->turn_lamp_ctrl;
  }

  // Field name: high_beam_ctrl
  {
    cdr >> ros_message->high_beam_ctrl;
  }

  // Field name: low_beam_ctrl
  {
    cdr >> ros_message->low_beam_ctrl;
  }

  // Field name: horn_ctrl
  {
    cdr >> ros_message->horn_ctrl;
  }

  // Field name: front_wiper_ctrl
  {
    cdr >> ros_message->front_wiper_ctrl;
  }

  // Field name: rear_wiper_ctrl
  {
    cdr >> ros_message->rear_wiper_ctrl;
  }

  // Field name: position_lamp_ctrl
  {
    cdr >> ros_message->position_lamp_ctrl;
  }

  // Field name: front_fog_lamp_ctrl
  {
    cdr >> ros_message->front_fog_lamp_ctrl;
  }

  // Field name: rear_fog_lamp_ctrl
  {
    cdr >> ros_message->rear_fog_lamp_ctrl;
  }

  // Field name: brake_lamp_ctrl
  {
    cdr >> ros_message->brake_lamp_ctrl;
  }

  // Field name: alarm_lamp_ctrl
  {
    cdr >> ros_message->alarm_lamp_ctrl;
  }

  // Field name: lf_door_ctrl
  {
    cdr >> ros_message->lf_door_ctrl;
  }

  // Field name: rf_door_ctrl
  {
    cdr >> ros_message->rf_door_ctrl;
  }

  // Field name: lr_door_ctrl
  {
    cdr >> ros_message->lr_door_ctrl;
  }

  // Field name: rr_door_ctrl
  {
    cdr >> ros_message->rr_door_ctrl;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__ControlCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlCommand__ros_msg_type * ros_message = static_cast<const _ControlCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name steer_driving_mode
  {
    size_t item_size = sizeof(ros_message->steer_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steering_target
  {
    size_t item_size = sizeof(ros_message->front_steering_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steering_target
  {
    size_t item_size = sizeof(ros_message->rear_steering_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steering_rate
  {
    size_t item_size = sizeof(ros_message->front_steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steering_rate
  {
    size_t item_size = sizeof(ros_message->rear_steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_driving_mode
  {
    size_t item_size = sizeof(ros_message->accel_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_value
  {
    size_t item_size = sizeof(ros_message->accel_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_driving_mode
  {
    size_t item_size = sizeof(ros_message->brake_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_value
  {
    size_t item_size = sizeof(ros_message->brake_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name backup_brake_driving_mode
  {
    size_t item_size = sizeof(ros_message->backup_brake_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name backup_brake_value
  {
    size_t item_size = sizeof(ros_message->backup_brake_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_driving_mode
  {
    size_t item_size = sizeof(ros_message->epb_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_level
  {
    size_t item_size = sizeof(ros_message->epb_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_driving_mode
  {
    size_t item_size = sizeof(ros_message->gear_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency_brake_enable
  {
    size_t item_size = sizeof(ros_message->emergency_brake_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_location
  {
    size_t item_size = sizeof(ros_message->gear_location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration
  {
    size_t item_size = sizeof(ros_message->acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message->turn_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name high_beam_ctrl
  {
    size_t item_size = sizeof(ros_message->high_beam_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name low_beam_ctrl
  {
    size_t item_size = sizeof(ros_message->low_beam_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horn_ctrl
  {
    size_t item_size = sizeof(ros_message->horn_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_wiper_ctrl
  {
    size_t item_size = sizeof(ros_message->front_wiper_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_wiper_ctrl
  {
    size_t item_size = sizeof(ros_message->rear_wiper_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message->position_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_fog_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message->front_fog_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_fog_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message->rear_fog_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message->brake_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message->alarm_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lf_door_ctrl
  {
    size_t item_size = sizeof(ros_message->lf_door_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rf_door_ctrl
  {
    size_t item_size = sizeof(ros_message->rf_door_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lr_door_ctrl
  {
    size_t item_size = sizeof(ros_message->lr_door_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rr_door_ctrl
  {
    size_t item_size = sizeof(ros_message->rr_door_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__ControlCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__ControlCommand(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: steer_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_steering_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steering_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: accel_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: backup_brake_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: backup_brake_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: epb_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: epb_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: emergency_brake_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_location
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: turn_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: high_beam_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: low_beam_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: horn_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_wiper_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_wiper_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_fog_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_fog_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: alarm_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lf_door_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rf_door_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lr_door_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rr_door_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_interface__msg__ControlCommand;
    is_plain =
      (
      offsetof(DataType, rr_door_ctrl) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControlCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__ControlCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlCommand = {
  "ros2_interface::msg",
  "ControlCommand",
  _ControlCommand__cdr_serialize,
  _ControlCommand__cdr_deserialize,
  _ControlCommand__get_serialized_size,
  _ControlCommand__max_serialized_size
};

static rosidl_message_type_support_t _ControlCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, ControlCommand)() {
  return &_ControlCommand__type_support;
}

#if defined(__cplusplus)
}
#endif

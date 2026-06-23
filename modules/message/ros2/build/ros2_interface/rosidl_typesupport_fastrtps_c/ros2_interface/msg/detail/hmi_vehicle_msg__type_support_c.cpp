// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/HMIVehicleMsg.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/hmi_vehicle_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/hmi_vehicle_msg__struct.h"
#include "ros2_interface/msg/detail/hmi_vehicle_msg__functions.h"
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

#include "ros2_interface/msg/detail/point_enu__functions.h"  // mercator_position, utm_position
#include "ros2_interface/msg/detail/point_llh__functions.h"  // position
#include "rosidl_runtime_c/primitives_sequence.h"  // chassis_error_code
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // chassis_error_code
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_ros2_interface__msg__PointENU(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__PointENU(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, PointENU)();
size_t get_serialized_size_ros2_interface__msg__PointLLH(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__PointLLH(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, PointLLH)();
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


using _HMIVehicleMsg__ros_msg_type = ros2_interface__msg__HMIVehicleMsg;

static bool _HMIVehicleMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HMIVehicleMsg__ros_msg_type * ros_message = static_cast<const _HMIVehicleMsg__ros_msg_type *>(untyped_ros_message);
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

  // Field name: driving_mode
  {
    cdr << ros_message->driving_mode;
  }

  // Field name: gear_location
  {
    cdr << ros_message->gear_location;
  }

  // Field name: steering_value
  {
    cdr << ros_message->steering_value;
  }

  // Field name: accel_value
  {
    cdr << ros_message->accel_value;
  }

  // Field name: brake_value
  {
    cdr << ros_message->brake_value;
  }

  // Field name: speed_mps
  {
    cdr << ros_message->speed_mps;
  }

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, PointLLH
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position, cdr))
    {
      return false;
    }
  }

  // Field name: utm_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, PointENU
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->utm_position, cdr))
    {
      return false;
    }
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: rtk_flag
  {
    cdr << ros_message->rtk_flag;
  }

  // Field name: origin_lat
  {
    cdr << ros_message->origin_lat;
  }

  // Field name: origin_lon
  {
    cdr << ros_message->origin_lon;
  }

  // Field name: current_ins_yaw
  {
    cdr << ros_message->current_ins_yaw;
  }

  // Field name: auto_safe
  {
    cdr << ros_message->auto_safe;
  }

  // Field name: battery_power_percentage
  {
    cdr << ros_message->battery_power_percentage;
  }

  // Field name: charging_gun_status
  {
    cdr << ros_message->charging_gun_status;
  }

  // Field name: chassis_error_code
  {
    size_t size = ros_message->chassis_error_code.size;
    auto array_ptr = ros_message->chassis_error_code.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: brake_lamp_status
  {
    cdr << ros_message->brake_lamp_status;
  }

  // Field name: turn_lamp_status
  {
    cdr << ros_message->turn_lamp_status;
  }

  // Field name: mercator_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, PointENU
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mercator_position, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _HMIVehicleMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HMIVehicleMsg__ros_msg_type * ros_message = static_cast<_HMIVehicleMsg__ros_msg_type *>(untyped_ros_message);
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

  // Field name: driving_mode
  {
    cdr >> ros_message->driving_mode;
  }

  // Field name: gear_location
  {
    cdr >> ros_message->gear_location;
  }

  // Field name: steering_value
  {
    cdr >> ros_message->steering_value;
  }

  // Field name: accel_value
  {
    cdr >> ros_message->accel_value;
  }

  // Field name: brake_value
  {
    cdr >> ros_message->brake_value;
  }

  // Field name: speed_mps
  {
    cdr >> ros_message->speed_mps;
  }

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, PointLLH
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position))
    {
      return false;
    }
  }

  // Field name: utm_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, PointENU
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->utm_position))
    {
      return false;
    }
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: rtk_flag
  {
    cdr >> ros_message->rtk_flag;
  }

  // Field name: origin_lat
  {
    cdr >> ros_message->origin_lat;
  }

  // Field name: origin_lon
  {
    cdr >> ros_message->origin_lon;
  }

  // Field name: current_ins_yaw
  {
    cdr >> ros_message->current_ins_yaw;
  }

  // Field name: auto_safe
  {
    cdr >> ros_message->auto_safe;
  }

  // Field name: battery_power_percentage
  {
    cdr >> ros_message->battery_power_percentage;
  }

  // Field name: charging_gun_status
  {
    cdr >> ros_message->charging_gun_status;
  }

  // Field name: chassis_error_code
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->chassis_error_code.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->chassis_error_code);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->chassis_error_code, size)) {
      fprintf(stderr, "failed to create array for field 'chassis_error_code'");
      return false;
    }
    auto array_ptr = ros_message->chassis_error_code.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: brake_lamp_status
  {
    cdr >> ros_message->brake_lamp_status;
  }

  // Field name: turn_lamp_status
  {
    cdr >> ros_message->turn_lamp_status;
  }

  // Field name: mercator_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, PointENU
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mercator_position))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__HMIVehicleMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HMIVehicleMsg__ros_msg_type * ros_message = static_cast<const _HMIVehicleMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name driving_mode
  {
    size_t item_size = sizeof(ros_message->driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_location
  {
    size_t item_size = sizeof(ros_message->gear_location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_value
  {
    size_t item_size = sizeof(ros_message->steering_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_value
  {
    size_t item_size = sizeof(ros_message->accel_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_value
  {
    size_t item_size = sizeof(ros_message->brake_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_mps
  {
    size_t item_size = sizeof(ros_message->speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position

  current_alignment += get_serialized_size_ros2_interface__msg__PointLLH(
    &(ros_message->position), current_alignment);
  // field.name utm_position

  current_alignment += get_serialized_size_ros2_interface__msg__PointENU(
    &(ros_message->utm_position), current_alignment);
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtk_flag
  {
    size_t item_size = sizeof(ros_message->rtk_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name origin_lat
  {
    size_t item_size = sizeof(ros_message->origin_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name origin_lon
  {
    size_t item_size = sizeof(ros_message->origin_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_ins_yaw
  {
    size_t item_size = sizeof(ros_message->current_ins_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_safe
  {
    size_t item_size = sizeof(ros_message->auto_safe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_power_percentage
  {
    size_t item_size = sizeof(ros_message->battery_power_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charging_gun_status
  {
    size_t item_size = sizeof(ros_message->charging_gun_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chassis_error_code
  {
    size_t array_size = ros_message->chassis_error_code.size;
    auto array_ptr = ros_message->chassis_error_code.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_lamp_status
  {
    size_t item_size = sizeof(ros_message->brake_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_lamp_status
  {
    size_t item_size = sizeof(ros_message->turn_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mercator_position

  current_alignment += get_serialized_size_ros2_interface__msg__PointENU(
    &(ros_message->mercator_position), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _HMIVehicleMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__HMIVehicleMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__HMIVehicleMsg(
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
  // member: driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_location
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: accel_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: position
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__PointLLH(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: utm_position
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__PointENU(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rtk_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: origin_lat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: origin_lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_ins_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: auto_safe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: battery_power_percentage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: charging_gun_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: chassis_error_code
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: turn_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mercator_position
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__PointENU(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_interface__msg__HMIVehicleMsg;
    is_plain =
      (
      offsetof(DataType, mercator_position) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HMIVehicleMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__HMIVehicleMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HMIVehicleMsg = {
  "ros2_interface::msg",
  "HMIVehicleMsg",
  _HMIVehicleMsg__cdr_serialize,
  _HMIVehicleMsg__cdr_deserialize,
  _HMIVehicleMsg__get_serialized_size,
  _HMIVehicleMsg__max_serialized_size
};

static rosidl_message_type_support_t _HMIVehicleMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HMIVehicleMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, HMIVehicleMsg)() {
  return &_HMIVehicleMsg__type_support;
}

#if defined(__cplusplus)
}
#endif

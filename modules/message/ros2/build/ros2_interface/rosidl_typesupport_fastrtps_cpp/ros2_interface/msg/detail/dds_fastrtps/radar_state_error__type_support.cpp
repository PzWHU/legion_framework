// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/RadarStateError.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/radar_state_error__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/radar_state_error__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ros2_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_serialize(
  const ros2_interface::msg::RadarStateError & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: persistent_error
  cdr << ros_message.persistent_error;
  // Member: temporary_error
  cdr << ros_message.temporary_error;
  // Member: interference_error
  cdr << ros_message.interference_error;
  // Member: temperature_error
  cdr << ros_message.temperature_error;
  // Member: voltage_error
  cdr << ros_message.voltage_error;
  // Member: block_error
  cdr << ros_message.block_error;
  // Member: broadcast_error
  cdr << ros_message.broadcast_error;
  // Member: electric_axis_error
  cdr << ros_message.electric_axis_error;
  // Member: config_error
  cdr << ros_message.config_error;
  // Member: calibration_error
  cdr << ros_message.calibration_error;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::RadarStateError & ros_message)
{
  // Member: persistent_error
  cdr >> ros_message.persistent_error;

  // Member: temporary_error
  cdr >> ros_message.temporary_error;

  // Member: interference_error
  cdr >> ros_message.interference_error;

  // Member: temperature_error
  cdr >> ros_message.temperature_error;

  // Member: voltage_error
  cdr >> ros_message.voltage_error;

  // Member: block_error
  cdr >> ros_message.block_error;

  // Member: broadcast_error
  cdr >> ros_message.broadcast_error;

  // Member: electric_axis_error
  cdr >> ros_message.electric_axis_error;

  // Member: config_error
  cdr >> ros_message.config_error;

  // Member: calibration_error
  cdr >> ros_message.calibration_error;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::RadarStateError & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: persistent_error
  {
    size_t item_size = sizeof(ros_message.persistent_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temporary_error
  {
    size_t item_size = sizeof(ros_message.temporary_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: interference_error
  {
    size_t item_size = sizeof(ros_message.interference_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature_error
  {
    size_t item_size = sizeof(ros_message.temperature_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_error
  {
    size_t item_size = sizeof(ros_message.voltage_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: block_error
  {
    size_t item_size = sizeof(ros_message.block_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: broadcast_error
  {
    size_t item_size = sizeof(ros_message.broadcast_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: electric_axis_error
  {
    size_t item_size = sizeof(ros_message.electric_axis_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: config_error
  {
    size_t item_size = sizeof(ros_message.config_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: calibration_error
  {
    size_t item_size = sizeof(ros_message.calibration_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_RadarStateError(
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


  // Member: persistent_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: temporary_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: interference_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: temperature_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: voltage_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: block_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: broadcast_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: electric_axis_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: config_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: calibration_error
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
    using DataType = ros2_interface::msg::RadarStateError;
    is_plain =
      (
      offsetof(DataType, calibration_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RadarStateError__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::RadarStateError *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RadarStateError__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::RadarStateError *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RadarStateError__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::RadarStateError *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RadarStateError__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RadarStateError(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RadarStateError__callbacks = {
  "ros2_interface::msg",
  "RadarStateError",
  _RadarStateError__cdr_serialize,
  _RadarStateError__cdr_deserialize,
  _RadarStateError__get_serialized_size,
  _RadarStateError__max_serialized_size
};

static rosidl_message_type_support_t _RadarStateError__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RadarStateError__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_interface::msg::RadarStateError>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_RadarStateError__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, RadarStateError)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_RadarStateError__handle;
}

#ifdef __cplusplus
}
#endif

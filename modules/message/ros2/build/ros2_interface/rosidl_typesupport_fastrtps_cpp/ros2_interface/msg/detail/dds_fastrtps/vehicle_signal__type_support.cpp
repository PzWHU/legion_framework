// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/VehicleSignal.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle_signal__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/vehicle_signal__struct.hpp"

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
  const ros2_interface::msg::VehicleSignal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: turn_signal
  cdr << ros_message.turn_signal;
  // Member: high_beam
  cdr << (ros_message.high_beam ? true : false);
  // Member: low_beam
  cdr << (ros_message.low_beam ? true : false);
  // Member: horn
  cdr << (ros_message.horn ? true : false);
  // Member: emergency_light
  cdr << (ros_message.emergency_light ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::VehicleSignal & ros_message)
{
  // Member: turn_signal
  cdr >> ros_message.turn_signal;

  // Member: high_beam
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.high_beam = tmp ? true : false;
  }

  // Member: low_beam
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.low_beam = tmp ? true : false;
  }

  // Member: horn
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.horn = tmp ? true : false;
  }

  // Member: emergency_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_light = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::VehicleSignal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: turn_signal
  {
    size_t item_size = sizeof(ros_message.turn_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: high_beam
  {
    size_t item_size = sizeof(ros_message.high_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: low_beam
  {
    size_t item_size = sizeof(ros_message.low_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: horn
  {
    size_t item_size = sizeof(ros_message.horn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emergency_light
  {
    size_t item_size = sizeof(ros_message.emergency_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_VehicleSignal(
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


  // Member: turn_signal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: high_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: low_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: horn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emergency_light
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
    using DataType = ros2_interface::msg::VehicleSignal;
    is_plain =
      (
      offsetof(DataType, emergency_light) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VehicleSignal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::VehicleSignal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleSignal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::VehicleSignal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleSignal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::VehicleSignal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleSignal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleSignal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleSignal__callbacks = {
  "ros2_interface::msg",
  "VehicleSignal",
  _VehicleSignal__cdr_serialize,
  _VehicleSignal__cdr_deserialize,
  _VehicleSignal__get_serialized_size,
  _VehicleSignal__max_serialized_size
};

static rosidl_message_type_support_t _VehicleSignal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleSignal__callbacks,
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
get_message_type_support_handle<ros2_interface::msg::VehicleSignal>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_VehicleSignal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, VehicleSignal)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_VehicleSignal__handle;
}

#ifdef __cplusplus
}
#endif

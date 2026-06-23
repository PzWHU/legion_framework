// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/PlanningCmd.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/planning_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/planning_cmd__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace ros2_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_serialize(
  const ros2_interface::msg::PlanningCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: turn_lamp_ctrl
  cdr << ros_message.turn_lamp_ctrl;
  // Member: high_beam_ctrl
  cdr << ros_message.high_beam_ctrl;
  // Member: low_beam_ctrl
  cdr << ros_message.low_beam_ctrl;
  // Member: horn_ctrl
  cdr << ros_message.horn_ctrl;
  // Member: front_wiper_ctrl
  cdr << ros_message.front_wiper_ctrl;
  // Member: rear_wiper_ctrl
  cdr << ros_message.rear_wiper_ctrl;
  // Member: position_lamp_ctrl
  cdr << ros_message.position_lamp_ctrl;
  // Member: front_fog_lamp_ctrl
  cdr << ros_message.front_fog_lamp_ctrl;
  // Member: rear_fog_lamp_ctrl
  cdr << ros_message.rear_fog_lamp_ctrl;
  // Member: brake_lamp_ctrl
  cdr << ros_message.brake_lamp_ctrl;
  // Member: alarm_lamp_ctrl
  cdr << ros_message.alarm_lamp_ctrl;
  // Member: lf_door_ctrl
  cdr << ros_message.lf_door_ctrl;
  // Member: rf_door_ctrl
  cdr << ros_message.rf_door_ctrl;
  // Member: lr_door_ctrl
  cdr << ros_message.lr_door_ctrl;
  // Member: rr_door_ctrl
  cdr << ros_message.rr_door_ctrl;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::PlanningCmd & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: turn_lamp_ctrl
  cdr >> ros_message.turn_lamp_ctrl;

  // Member: high_beam_ctrl
  cdr >> ros_message.high_beam_ctrl;

  // Member: low_beam_ctrl
  cdr >> ros_message.low_beam_ctrl;

  // Member: horn_ctrl
  cdr >> ros_message.horn_ctrl;

  // Member: front_wiper_ctrl
  cdr >> ros_message.front_wiper_ctrl;

  // Member: rear_wiper_ctrl
  cdr >> ros_message.rear_wiper_ctrl;

  // Member: position_lamp_ctrl
  cdr >> ros_message.position_lamp_ctrl;

  // Member: front_fog_lamp_ctrl
  cdr >> ros_message.front_fog_lamp_ctrl;

  // Member: rear_fog_lamp_ctrl
  cdr >> ros_message.rear_fog_lamp_ctrl;

  // Member: brake_lamp_ctrl
  cdr >> ros_message.brake_lamp_ctrl;

  // Member: alarm_lamp_ctrl
  cdr >> ros_message.alarm_lamp_ctrl;

  // Member: lf_door_ctrl
  cdr >> ros_message.lf_door_ctrl;

  // Member: rf_door_ctrl
  cdr >> ros_message.rf_door_ctrl;

  // Member: lr_door_ctrl
  cdr >> ros_message.lr_door_ctrl;

  // Member: rr_door_ctrl
  cdr >> ros_message.rr_door_ctrl;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::PlanningCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: turn_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message.turn_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: high_beam_ctrl
  {
    size_t item_size = sizeof(ros_message.high_beam_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: low_beam_ctrl
  {
    size_t item_size = sizeof(ros_message.low_beam_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: horn_ctrl
  {
    size_t item_size = sizeof(ros_message.horn_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_wiper_ctrl
  {
    size_t item_size = sizeof(ros_message.front_wiper_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_wiper_ctrl
  {
    size_t item_size = sizeof(ros_message.rear_wiper_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message.position_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_fog_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message.front_fog_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_fog_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message.rear_fog_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message.brake_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alarm_lamp_ctrl
  {
    size_t item_size = sizeof(ros_message.alarm_lamp_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lf_door_ctrl
  {
    size_t item_size = sizeof(ros_message.lf_door_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rf_door_ctrl
  {
    size_t item_size = sizeof(ros_message.rf_door_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lr_door_ctrl
  {
    size_t item_size = sizeof(ros_message.lr_door_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_door_ctrl
  {
    size_t item_size = sizeof(ros_message.rr_door_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_PlanningCmd(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: turn_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: high_beam_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: low_beam_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: horn_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: front_wiper_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rear_wiper_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: front_fog_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rear_fog_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alarm_lamp_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lf_door_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rf_door_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lr_door_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_door_ctrl
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
    using DataType = ros2_interface::msg::PlanningCmd;
    is_plain =
      (
      offsetof(DataType, rr_door_ctrl) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PlanningCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::PlanningCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlanningCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::PlanningCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlanningCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::PlanningCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlanningCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PlanningCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PlanningCmd__callbacks = {
  "ros2_interface::msg",
  "PlanningCmd",
  _PlanningCmd__cdr_serialize,
  _PlanningCmd__cdr_deserialize,
  _PlanningCmd__get_serialized_size,
  _PlanningCmd__max_serialized_size
};

static rosidl_message_type_support_t _PlanningCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanningCmd__callbacks,
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
get_message_type_support_handle<ros2_interface::msg::PlanningCmd>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_PlanningCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, PlanningCmd)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_PlanningCmd__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/RouteFusionInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/route_fusion_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/route_fusion_info__struct.h"
#include "ros2_interface/msg/detail/route_fusion_info__functions.h"
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

#include "rosidl_runtime_c/string.h"  // fusion_reason
#include "rosidl_runtime_c/string_functions.h"  // fusion_reason

// forward declare type support functions


using _RouteFusionInfo__ros_msg_type = ros2_interface__msg__RouteFusionInfo;

static bool _RouteFusionInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RouteFusionInfo__ros_msg_type * ros_message = static_cast<const _RouteFusionInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: fusion_flag
  {
    cdr << ros_message->fusion_flag;
  }

  // Field name: fusion_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->fusion_reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RouteFusionInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RouteFusionInfo__ros_msg_type * ros_message = static_cast<_RouteFusionInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: fusion_flag
  {
    cdr >> ros_message->fusion_flag;
  }

  // Field name: fusion_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->fusion_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->fusion_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->fusion_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'fusion_reason'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__RouteFusionInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RouteFusionInfo__ros_msg_type * ros_message = static_cast<const _RouteFusionInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name fusion_flag
  {
    size_t item_size = sizeof(ros_message->fusion_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fusion_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->fusion_reason.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RouteFusionInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__RouteFusionInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__RouteFusionInfo(
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

  // member: fusion_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fusion_reason
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_interface__msg__RouteFusionInfo;
    is_plain =
      (
      offsetof(DataType, fusion_reason) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RouteFusionInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__RouteFusionInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RouteFusionInfo = {
  "ros2_interface::msg",
  "RouteFusionInfo",
  _RouteFusionInfo__cdr_serialize,
  _RouteFusionInfo__cdr_deserialize,
  _RouteFusionInfo__get_serialized_size,
  _RouteFusionInfo__max_serialized_size
};

static rosidl_message_type_support_t _RouteFusionInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RouteFusionInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, RouteFusionInfo)() {
  return &_RouteFusionInfo__type_support;
}

#if defined(__cplusplus)
}
#endif

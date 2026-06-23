// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/RSSInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/rss_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/rss_info__struct.h"
#include "ros2_interface/msg/detail/rss_info__functions.h"
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


using _RSSInfo__ros_msg_type = ros2_interface__msg__RSSInfo;

static bool _RSSInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RSSInfo__ros_msg_type * ros_message = static_cast<const _RSSInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: is_rss_safe
  {
    cdr << (ros_message->is_rss_safe ? true : false);
  }

  // Field name: cur_dist_lon
  {
    cdr << ros_message->cur_dist_lon;
  }

  // Field name: rss_safe_dist_lon
  {
    cdr << ros_message->rss_safe_dist_lon;
  }

  // Field name: acc_lon_range_minimum
  {
    cdr << ros_message->acc_lon_range_minimum;
  }

  // Field name: acc_lon_range_maximum
  {
    cdr << ros_message->acc_lon_range_maximum;
  }

  // Field name: acc_lat_left_range_minimum
  {
    cdr << ros_message->acc_lat_left_range_minimum;
  }

  // Field name: acc_lat_left_range_maximum
  {
    cdr << ros_message->acc_lat_left_range_maximum;
  }

  // Field name: acc_lat_right_range_minimum
  {
    cdr << ros_message->acc_lat_right_range_minimum;
  }

  // Field name: acc_lat_right_range_maximum
  {
    cdr << ros_message->acc_lat_right_range_maximum;
  }

  return true;
}

static bool _RSSInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RSSInfo__ros_msg_type * ros_message = static_cast<_RSSInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: is_rss_safe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_rss_safe = tmp ? true : false;
  }

  // Field name: cur_dist_lon
  {
    cdr >> ros_message->cur_dist_lon;
  }

  // Field name: rss_safe_dist_lon
  {
    cdr >> ros_message->rss_safe_dist_lon;
  }

  // Field name: acc_lon_range_minimum
  {
    cdr >> ros_message->acc_lon_range_minimum;
  }

  // Field name: acc_lon_range_maximum
  {
    cdr >> ros_message->acc_lon_range_maximum;
  }

  // Field name: acc_lat_left_range_minimum
  {
    cdr >> ros_message->acc_lat_left_range_minimum;
  }

  // Field name: acc_lat_left_range_maximum
  {
    cdr >> ros_message->acc_lat_left_range_maximum;
  }

  // Field name: acc_lat_right_range_minimum
  {
    cdr >> ros_message->acc_lat_right_range_minimum;
  }

  // Field name: acc_lat_right_range_maximum
  {
    cdr >> ros_message->acc_lat_right_range_maximum;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__RSSInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RSSInfo__ros_msg_type * ros_message = static_cast<const _RSSInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_rss_safe
  {
    size_t item_size = sizeof(ros_message->is_rss_safe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_dist_lon
  {
    size_t item_size = sizeof(ros_message->cur_dist_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rss_safe_dist_lon
  {
    size_t item_size = sizeof(ros_message->rss_safe_dist_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_lon_range_minimum
  {
    size_t item_size = sizeof(ros_message->acc_lon_range_minimum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_lon_range_maximum
  {
    size_t item_size = sizeof(ros_message->acc_lon_range_maximum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_lat_left_range_minimum
  {
    size_t item_size = sizeof(ros_message->acc_lat_left_range_minimum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_lat_left_range_maximum
  {
    size_t item_size = sizeof(ros_message->acc_lat_left_range_maximum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_lat_right_range_minimum
  {
    size_t item_size = sizeof(ros_message->acc_lat_right_range_minimum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_lat_right_range_maximum
  {
    size_t item_size = sizeof(ros_message->acc_lat_right_range_maximum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RSSInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__RSSInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__RSSInfo(
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

  // member: is_rss_safe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cur_dist_lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rss_safe_dist_lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_lon_range_minimum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_lon_range_maximum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_lat_left_range_minimum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_lat_left_range_maximum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_lat_right_range_minimum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_lat_right_range_maximum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_interface__msg__RSSInfo;
    is_plain =
      (
      offsetof(DataType, acc_lat_right_range_maximum) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RSSInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__RSSInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RSSInfo = {
  "ros2_interface::msg",
  "RSSInfo",
  _RSSInfo__cdr_serialize,
  _RSSInfo__cdr_deserialize,
  _RSSInfo__get_serialized_size,
  _RSSInfo__max_serialized_size
};

static rosidl_message_type_support_t _RSSInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RSSInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, RSSInfo)() {
  return &_RSSInfo__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/RSSInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/rss_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/rss_info__struct.hpp"

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
  const ros2_interface::msg::RSSInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_rss_safe
  cdr << (ros_message.is_rss_safe ? true : false);
  // Member: cur_dist_lon
  cdr << ros_message.cur_dist_lon;
  // Member: rss_safe_dist_lon
  cdr << ros_message.rss_safe_dist_lon;
  // Member: acc_lon_range_minimum
  cdr << ros_message.acc_lon_range_minimum;
  // Member: acc_lon_range_maximum
  cdr << ros_message.acc_lon_range_maximum;
  // Member: acc_lat_left_range_minimum
  cdr << ros_message.acc_lat_left_range_minimum;
  // Member: acc_lat_left_range_maximum
  cdr << ros_message.acc_lat_left_range_maximum;
  // Member: acc_lat_right_range_minimum
  cdr << ros_message.acc_lat_right_range_minimum;
  // Member: acc_lat_right_range_maximum
  cdr << ros_message.acc_lat_right_range_maximum;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::RSSInfo & ros_message)
{
  // Member: is_rss_safe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_rss_safe = tmp ? true : false;
  }

  // Member: cur_dist_lon
  cdr >> ros_message.cur_dist_lon;

  // Member: rss_safe_dist_lon
  cdr >> ros_message.rss_safe_dist_lon;

  // Member: acc_lon_range_minimum
  cdr >> ros_message.acc_lon_range_minimum;

  // Member: acc_lon_range_maximum
  cdr >> ros_message.acc_lon_range_maximum;

  // Member: acc_lat_left_range_minimum
  cdr >> ros_message.acc_lat_left_range_minimum;

  // Member: acc_lat_left_range_maximum
  cdr >> ros_message.acc_lat_left_range_maximum;

  // Member: acc_lat_right_range_minimum
  cdr >> ros_message.acc_lat_right_range_minimum;

  // Member: acc_lat_right_range_maximum
  cdr >> ros_message.acc_lat_right_range_maximum;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::RSSInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_rss_safe
  {
    size_t item_size = sizeof(ros_message.is_rss_safe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cur_dist_lon
  {
    size_t item_size = sizeof(ros_message.cur_dist_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rss_safe_dist_lon
  {
    size_t item_size = sizeof(ros_message.rss_safe_dist_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_lon_range_minimum
  {
    size_t item_size = sizeof(ros_message.acc_lon_range_minimum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_lon_range_maximum
  {
    size_t item_size = sizeof(ros_message.acc_lon_range_maximum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_lat_left_range_minimum
  {
    size_t item_size = sizeof(ros_message.acc_lat_left_range_minimum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_lat_left_range_maximum
  {
    size_t item_size = sizeof(ros_message.acc_lat_left_range_maximum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_lat_right_range_minimum
  {
    size_t item_size = sizeof(ros_message.acc_lat_right_range_minimum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_lat_right_range_maximum
  {
    size_t item_size = sizeof(ros_message.acc_lat_right_range_maximum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_RSSInfo(
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


  // Member: is_rss_safe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cur_dist_lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rss_safe_dist_lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_lon_range_minimum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_lon_range_maximum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_lat_left_range_minimum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_lat_left_range_maximum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_lat_right_range_minimum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_lat_right_range_maximum
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
    using DataType = ros2_interface::msg::RSSInfo;
    is_plain =
      (
      offsetof(DataType, acc_lat_right_range_maximum) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RSSInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::RSSInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RSSInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::RSSInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RSSInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::RSSInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RSSInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RSSInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RSSInfo__callbacks = {
  "ros2_interface::msg",
  "RSSInfo",
  _RSSInfo__cdr_serialize,
  _RSSInfo__cdr_deserialize,
  _RSSInfo__get_serialized_size,
  _RSSInfo__max_serialized_size
};

static rosidl_message_type_support_t _RSSInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RSSInfo__callbacks,
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
get_message_type_support_handle<ros2_interface::msg::RSSInfo>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_RSSInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, RSSInfo)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_RSSInfo__handle;
}

#ifdef __cplusplus
}
#endif

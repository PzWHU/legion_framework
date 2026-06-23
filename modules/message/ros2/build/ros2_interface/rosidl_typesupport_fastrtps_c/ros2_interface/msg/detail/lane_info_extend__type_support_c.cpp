// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/LaneInfoExtend.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/lane_info_extend__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/lane_info_extend__struct.h"
#include "ros2_interface/msg/detail/lane_info_extend__functions.h"
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

#include "ros2_interface/msg/detail/lane_point__functions.h"  // lane_points
#include "rosidl_runtime_c/primitives_sequence.h"  // predecessor_ids, successor_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // predecessor_ids, successor_ids

// forward declare type support functions
size_t get_serialized_size_ros2_interface__msg__LanePoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__LanePoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, LanePoint)();


using _LaneInfoExtend__ros_msg_type = ros2_interface__msg__LaneInfoExtend;

static bool _LaneInfoExtend__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneInfoExtend__ros_msg_type * ros_message = static_cast<const _LaneInfoExtend__ros_msg_type *>(untyped_ros_message);
  // Field name: priority
  {
    cdr << ros_message->priority;
  }

  // Field name: global_id
  {
    cdr << ros_message->global_id;
  }

  // Field name: predecessor_ids
  {
    size_t size = ros_message->predecessor_ids.size;
    auto array_ptr = ros_message->predecessor_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: successor_ids
  {
    size_t size = ros_message->successor_ids.size;
    auto array_ptr = ros_message->successor_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: left_neighbor_id
  {
    cdr << ros_message->left_neighbor_id;
  }

  // Field name: right_neighbor_id
  {
    cdr << ros_message->right_neighbor_id;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: lane_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, LanePoint
      )()->data);
    size_t size = ros_message->lane_points.size;
    auto array_ptr = ros_message->lane_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _LaneInfoExtend__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneInfoExtend__ros_msg_type * ros_message = static_cast<_LaneInfoExtend__ros_msg_type *>(untyped_ros_message);
  // Field name: priority
  {
    cdr >> ros_message->priority;
  }

  // Field name: global_id
  {
    cdr >> ros_message->global_id;
  }

  // Field name: predecessor_ids
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

    if (ros_message->predecessor_ids.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->predecessor_ids);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->predecessor_ids, size)) {
      fprintf(stderr, "failed to create array for field 'predecessor_ids'");
      return false;
    }
    auto array_ptr = ros_message->predecessor_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: successor_ids
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

    if (ros_message->successor_ids.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->successor_ids);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->successor_ids, size)) {
      fprintf(stderr, "failed to create array for field 'successor_ids'");
      return false;
    }
    auto array_ptr = ros_message->successor_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: left_neighbor_id
  {
    cdr >> ros_message->left_neighbor_id;
  }

  // Field name: right_neighbor_id
  {
    cdr >> ros_message->right_neighbor_id;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: lane_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, LanePoint
      )()->data);
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

    if (ros_message->lane_points.data) {
      ros2_interface__msg__LanePoint__Sequence__fini(&ros_message->lane_points);
    }
    if (!ros2_interface__msg__LanePoint__Sequence__init(&ros_message->lane_points, size)) {
      fprintf(stderr, "failed to create array for field 'lane_points'");
      return false;
    }
    auto array_ptr = ros_message->lane_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__LaneInfoExtend(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneInfoExtend__ros_msg_type * ros_message = static_cast<const _LaneInfoExtend__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name priority
  {
    size_t item_size = sizeof(ros_message->priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_id
  {
    size_t item_size = sizeof(ros_message->global_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predecessor_ids
  {
    size_t array_size = ros_message->predecessor_ids.size;
    auto array_ptr = ros_message->predecessor_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name successor_ids
  {
    size_t array_size = ros_message->successor_ids.size;
    auto array_ptr = ros_message->successor_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_neighbor_id
  {
    size_t item_size = sizeof(ros_message->left_neighbor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_neighbor_id
  {
    size_t item_size = sizeof(ros_message->right_neighbor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_points
  {
    size_t array_size = ros_message->lane_points.size;
    auto array_ptr = ros_message->lane_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_interface__msg__LanePoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneInfoExtend__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__LaneInfoExtend(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__LaneInfoExtend(
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

  // member: priority
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: global_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predecessor_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: successor_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_neighbor_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_neighbor_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__LanePoint(
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
    using DataType = ros2_interface__msg__LaneInfoExtend;
    is_plain =
      (
      offsetof(DataType, lane_points) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LaneInfoExtend__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__LaneInfoExtend(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LaneInfoExtend = {
  "ros2_interface::msg",
  "LaneInfoExtend",
  _LaneInfoExtend__cdr_serialize,
  _LaneInfoExtend__cdr_deserialize,
  _LaneInfoExtend__get_serialized_size,
  _LaneInfoExtend__max_serialized_size
};

static rosidl_message_type_support_t _LaneInfoExtend__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneInfoExtend,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, LaneInfoExtend)() {
  return &_LaneInfoExtend__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/Matrix3D.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/matrix3_d__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/matrix3_d__struct.h"
#include "ros2_interface/msg/detail/matrix3_d__functions.h"
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


using _Matrix3D__ros_msg_type = ros2_interface__msg__Matrix3D;

static bool _Matrix3D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Matrix3D__ros_msg_type * ros_message = static_cast<const _Matrix3D__ros_msg_type *>(untyped_ros_message);
  // Field name: a00
  {
    cdr << ros_message->a00;
  }

  // Field name: a01
  {
    cdr << ros_message->a01;
  }

  // Field name: a02
  {
    cdr << ros_message->a02;
  }

  // Field name: a10
  {
    cdr << ros_message->a10;
  }

  // Field name: a11
  {
    cdr << ros_message->a11;
  }

  // Field name: a12
  {
    cdr << ros_message->a12;
  }

  // Field name: a20
  {
    cdr << ros_message->a20;
  }

  // Field name: a21
  {
    cdr << ros_message->a21;
  }

  // Field name: a22
  {
    cdr << ros_message->a22;
  }

  return true;
}

static bool _Matrix3D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Matrix3D__ros_msg_type * ros_message = static_cast<_Matrix3D__ros_msg_type *>(untyped_ros_message);
  // Field name: a00
  {
    cdr >> ros_message->a00;
  }

  // Field name: a01
  {
    cdr >> ros_message->a01;
  }

  // Field name: a02
  {
    cdr >> ros_message->a02;
  }

  // Field name: a10
  {
    cdr >> ros_message->a10;
  }

  // Field name: a11
  {
    cdr >> ros_message->a11;
  }

  // Field name: a12
  {
    cdr >> ros_message->a12;
  }

  // Field name: a20
  {
    cdr >> ros_message->a20;
  }

  // Field name: a21
  {
    cdr >> ros_message->a21;
  }

  // Field name: a22
  {
    cdr >> ros_message->a22;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__Matrix3D(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Matrix3D__ros_msg_type * ros_message = static_cast<const _Matrix3D__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a00
  {
    size_t item_size = sizeof(ros_message->a00);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a01
  {
    size_t item_size = sizeof(ros_message->a01);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a02
  {
    size_t item_size = sizeof(ros_message->a02);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a10
  {
    size_t item_size = sizeof(ros_message->a10);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a11
  {
    size_t item_size = sizeof(ros_message->a11);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a12
  {
    size_t item_size = sizeof(ros_message->a12);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a20
  {
    size_t item_size = sizeof(ros_message->a20);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a21
  {
    size_t item_size = sizeof(ros_message->a21);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a22
  {
    size_t item_size = sizeof(ros_message->a22);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Matrix3D__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__Matrix3D(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__Matrix3D(
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

  // member: a00
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a01
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a02
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a10
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a11
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a12
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a20
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a21
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a22
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
    using DataType = ros2_interface__msg__Matrix3D;
    is_plain =
      (
      offsetof(DataType, a22) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Matrix3D__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__Matrix3D(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Matrix3D = {
  "ros2_interface::msg",
  "Matrix3D",
  _Matrix3D__cdr_serialize,
  _Matrix3D__cdr_deserialize,
  _Matrix3D__get_serialized_size,
  _Matrix3D__max_serialized_size
};

static rosidl_message_type_support_t _Matrix3D__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Matrix3D,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, Matrix3D)() {
  return &_Matrix3D__type_support;
}

#if defined(__cplusplus)
}
#endif

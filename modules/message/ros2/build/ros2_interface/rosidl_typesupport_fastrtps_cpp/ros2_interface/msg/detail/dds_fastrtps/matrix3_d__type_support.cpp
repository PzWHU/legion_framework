// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/Matrix3D.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/matrix3_d__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/matrix3_d__struct.hpp"

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
  const ros2_interface::msg::Matrix3D & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: a00
  cdr << ros_message.a00;
  // Member: a01
  cdr << ros_message.a01;
  // Member: a02
  cdr << ros_message.a02;
  // Member: a10
  cdr << ros_message.a10;
  // Member: a11
  cdr << ros_message.a11;
  // Member: a12
  cdr << ros_message.a12;
  // Member: a20
  cdr << ros_message.a20;
  // Member: a21
  cdr << ros_message.a21;
  // Member: a22
  cdr << ros_message.a22;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::Matrix3D & ros_message)
{
  // Member: a00
  cdr >> ros_message.a00;

  // Member: a01
  cdr >> ros_message.a01;

  // Member: a02
  cdr >> ros_message.a02;

  // Member: a10
  cdr >> ros_message.a10;

  // Member: a11
  cdr >> ros_message.a11;

  // Member: a12
  cdr >> ros_message.a12;

  // Member: a20
  cdr >> ros_message.a20;

  // Member: a21
  cdr >> ros_message.a21;

  // Member: a22
  cdr >> ros_message.a22;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::Matrix3D & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: a00
  {
    size_t item_size = sizeof(ros_message.a00);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a01
  {
    size_t item_size = sizeof(ros_message.a01);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a02
  {
    size_t item_size = sizeof(ros_message.a02);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a10
  {
    size_t item_size = sizeof(ros_message.a10);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a11
  {
    size_t item_size = sizeof(ros_message.a11);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a12
  {
    size_t item_size = sizeof(ros_message.a12);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a20
  {
    size_t item_size = sizeof(ros_message.a20);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a21
  {
    size_t item_size = sizeof(ros_message.a21);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a22
  {
    size_t item_size = sizeof(ros_message.a22);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_Matrix3D(
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


  // Member: a00
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a01
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a02
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a10
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a11
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a12
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a20
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a21
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a22
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
    using DataType = ros2_interface::msg::Matrix3D;
    is_plain =
      (
      offsetof(DataType, a22) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Matrix3D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::Matrix3D *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Matrix3D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::Matrix3D *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Matrix3D__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::Matrix3D *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Matrix3D__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Matrix3D(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Matrix3D__callbacks = {
  "ros2_interface::msg",
  "Matrix3D",
  _Matrix3D__cdr_serialize,
  _Matrix3D__cdr_deserialize,
  _Matrix3D__get_serialized_size,
  _Matrix3D__max_serialized_size
};

static rosidl_message_type_support_t _Matrix3D__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Matrix3D__callbacks,
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
get_message_type_support_handle<ros2_interface::msg::Matrix3D>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_Matrix3D__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, Matrix3D)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_Matrix3D__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/ADCTrajectory.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/adc_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/adc_trajectory__struct.h"
#include "ros2_interface/msg/detail/adc_trajectory__functions.h"
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

#include "ros2_interface/msg/detail/e_stop__functions.h"  // estop
#include "ros2_interface/msg/detail/rss_info__functions.h"  // rss_info
#include "ros2_interface/msg/detail/trajectory_point__functions.h"  // trajectory_points
#include "rosidl_runtime_c/string.h"  // replan_reason
#include "rosidl_runtime_c/string_functions.h"  // replan_reason
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_ros2_interface__msg__EStop(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__EStop(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, EStop)();
size_t get_serialized_size_ros2_interface__msg__RSSInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__RSSInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, RSSInfo)();
size_t get_serialized_size_ros2_interface__msg__TrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2_interface__msg__TrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, TrajectoryPoint)();
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


using _ADCTrajectory__ros_msg_type = ros2_interface__msg__ADCTrajectory;

static bool _ADCTrajectory__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ADCTrajectory__ros_msg_type * ros_message = static_cast<const _ADCTrajectory__ros_msg_type *>(untyped_ros_message);
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

  // Field name: total_path_length
  {
    cdr << ros_message->total_path_length;
  }

  // Field name: total_path_time
  {
    cdr << ros_message->total_path_time;
  }

  // Field name: trajectory_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, TrajectoryPoint
      )()->data);
    size_t size = ros_message->trajectory_points.size;
    auto array_ptr = ros_message->trajectory_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: car_action
  {
    cdr << ros_message->car_action;
  }

  // Field name: behaviour_lat_state
  {
    cdr << ros_message->behaviour_lat_state;
  }

  // Field name: behaviour_lon_state
  {
    cdr << ros_message->behaviour_lon_state;
  }

  // Field name: scenario
  {
    cdr << ros_message->scenario;
  }

  // Field name: driving_mode
  {
    cdr << ros_message->driving_mode;
  }

  // Field name: adc_trajectory_type
  {
    cdr << ros_message->adc_trajectory_type;
  }

  // Field name: estop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, EStop
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->estop, cdr))
    {
      return false;
    }
  }

  // Field name: is_replan
  {
    cdr << (ros_message->is_replan ? true : false);
  }

  // Field name: replan_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->replan_reason;
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

  // Field name: right_of_way_status
  {
    cdr << ros_message->right_of_way_status;
  }

  // Field name: rss_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, RSSInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rss_info, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ADCTrajectory__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ADCTrajectory__ros_msg_type * ros_message = static_cast<_ADCTrajectory__ros_msg_type *>(untyped_ros_message);
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

  // Field name: total_path_length
  {
    cdr >> ros_message->total_path_length;
  }

  // Field name: total_path_time
  {
    cdr >> ros_message->total_path_time;
  }

  // Field name: trajectory_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, TrajectoryPoint
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

    if (ros_message->trajectory_points.data) {
      ros2_interface__msg__TrajectoryPoint__Sequence__fini(&ros_message->trajectory_points);
    }
    if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&ros_message->trajectory_points, size)) {
      fprintf(stderr, "failed to create array for field 'trajectory_points'");
      return false;
    }
    auto array_ptr = ros_message->trajectory_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: car_action
  {
    cdr >> ros_message->car_action;
  }

  // Field name: behaviour_lat_state
  {
    cdr >> ros_message->behaviour_lat_state;
  }

  // Field name: behaviour_lon_state
  {
    cdr >> ros_message->behaviour_lon_state;
  }

  // Field name: scenario
  {
    cdr >> ros_message->scenario;
  }

  // Field name: driving_mode
  {
    cdr >> ros_message->driving_mode;
  }

  // Field name: adc_trajectory_type
  {
    cdr >> ros_message->adc_trajectory_type;
  }

  // Field name: estop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, EStop
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->estop))
    {
      return false;
    }
  }

  // Field name: is_replan
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_replan = tmp ? true : false;
  }

  // Field name: replan_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->replan_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->replan_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->replan_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'replan_reason'\n");
      return false;
    }
  }

  // Field name: right_of_way_status
  {
    cdr >> ros_message->right_of_way_status;
  }

  // Field name: rss_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2_interface, msg, RSSInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rss_info))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__ADCTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ADCTrajectory__ros_msg_type * ros_message = static_cast<const _ADCTrajectory__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name total_path_length
  {
    size_t item_size = sizeof(ros_message->total_path_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_path_time
  {
    size_t item_size = sizeof(ros_message->total_path_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_points
  {
    size_t array_size = ros_message->trajectory_points.size;
    auto array_ptr = ros_message->trajectory_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros2_interface__msg__TrajectoryPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name car_action
  {
    size_t item_size = sizeof(ros_message->car_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name behaviour_lat_state
  {
    size_t item_size = sizeof(ros_message->behaviour_lat_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name behaviour_lon_state
  {
    size_t item_size = sizeof(ros_message->behaviour_lon_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scenario
  {
    size_t item_size = sizeof(ros_message->scenario);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driving_mode
  {
    size_t item_size = sizeof(ros_message->driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adc_trajectory_type
  {
    size_t item_size = sizeof(ros_message->adc_trajectory_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estop

  current_alignment += get_serialized_size_ros2_interface__msg__EStop(
    &(ros_message->estop), current_alignment);
  // field.name is_replan
  {
    size_t item_size = sizeof(ros_message->is_replan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name replan_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->replan_reason.size + 1);
  // field.name right_of_way_status
  {
    size_t item_size = sizeof(ros_message->right_of_way_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rss_info

  current_alignment += get_serialized_size_ros2_interface__msg__RSSInfo(
    &(ros_message->rss_info), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ADCTrajectory__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__ADCTrajectory(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__ADCTrajectory(
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
  // member: total_path_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: total_path_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: trajectory_points
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
        max_serialized_size_ros2_interface__msg__TrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: car_action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: behaviour_lat_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: behaviour_lon_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scenario
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: adc_trajectory_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: estop
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__EStop(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_replan
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: replan_reason
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
  // member: right_of_way_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rss_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2_interface__msg__RSSInfo(
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
    using DataType = ros2_interface__msg__ADCTrajectory;
    is_plain =
      (
      offsetof(DataType, rss_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ADCTrajectory__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__ADCTrajectory(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ADCTrajectory = {
  "ros2_interface::msg",
  "ADCTrajectory",
  _ADCTrajectory__cdr_serialize,
  _ADCTrajectory__cdr_deserialize,
  _ADCTrajectory__get_serialized_size,
  _ADCTrajectory__max_serialized_size
};

static rosidl_message_type_support_t _ADCTrajectory__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ADCTrajectory,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, ADCTrajectory)() {
  return &_ADCTrajectory__type_support;
}

#if defined(__cplusplus)
}
#endif

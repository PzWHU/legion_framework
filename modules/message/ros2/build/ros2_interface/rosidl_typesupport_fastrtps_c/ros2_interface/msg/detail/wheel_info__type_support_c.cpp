// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/WheelInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/wheel_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/wheel_info__struct.h"
#include "ros2_interface/msg/detail/wheel_info__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
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


using _WheelInfo__ros_msg_type = ros2_interface__msg__WheelInfo;

static bool _WheelInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WheelInfo__ros_msg_type * ros_message = static_cast<const _WheelInfo__ros_msg_type *>(untyped_ros_message);
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

  // Field name: moving_status
  {
    cdr << ros_message->moving_status;
  }

  // Field name: steer_driving_mode
  {
    cdr << ros_message->steer_driving_mode;
  }

  // Field name: steering_value
  {
    cdr << ros_message->steering_value;
  }

  // Field name: steering_torque_nm
  {
    cdr << ros_message->steering_torque_nm;
  }

  // Field name: steering_rate_dps
  {
    cdr << ros_message->steering_rate_dps;
  }

  // Field name: speed_mps
  {
    cdr << ros_message->speed_mps;
  }

  // Field name: veh_spd_vld
  {
    cdr << (ros_message->veh_spd_vld ? true : false);
  }

  // Field name: gear
  {
    cdr << ros_message->gear;
  }

  // Field name: gear_vld
  {
    cdr << (ros_message->gear_vld ? true : false);
  }

  // Field name: wheel_direction_rr
  {
    cdr << ros_message->wheel_direction_rr;
  }

  // Field name: wheel_spd_rr
  {
    cdr << ros_message->wheel_spd_rr;
  }

  // Field name: wheel_direction_rl
  {
    cdr << ros_message->wheel_direction_rl;
  }

  // Field name: wheel_spd_rl
  {
    cdr << ros_message->wheel_spd_rl;
  }

  // Field name: wheel_direction_fr
  {
    cdr << ros_message->wheel_direction_fr;
  }

  // Field name: wheel_spd_fr
  {
    cdr << ros_message->wheel_spd_fr;
  }

  // Field name: wheel_direction_fl
  {
    cdr << ros_message->wheel_direction_fl;
  }

  // Field name: wheel_spd_fl
  {
    cdr << ros_message->wheel_spd_fl;
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  // Field name: wss_fl_edges_sum
  {
    cdr << ros_message->wss_fl_edges_sum;
  }

  // Field name: wss_fr_edges_sum
  {
    cdr << ros_message->wss_fr_edges_sum;
  }

  // Field name: wss_rl_edges_sum
  {
    cdr << ros_message->wss_rl_edges_sum;
  }

  // Field name: wss_rr_edges_sum
  {
    cdr << ros_message->wss_rr_edges_sum;
  }

  // Field name: wss_fl_edges_sum_vld
  {
    cdr << (ros_message->wss_fl_edges_sum_vld ? true : false);
  }

  // Field name: wss_fr_edges_sum_vld
  {
    cdr << (ros_message->wss_fr_edges_sum_vld ? true : false);
  }

  // Field name: wss_rl_edges_sum_vld
  {
    cdr << (ros_message->wss_rl_edges_sum_vld ? true : false);
  }

  // Field name: wss_rr_edges_sum_vld
  {
    cdr << (ros_message->wss_rr_edges_sum_vld ? true : false);
  }

  // Field name: veh_lat_accel
  {
    cdr << ros_message->veh_lat_accel;
  }

  // Field name: veh_lgt_accel
  {
    cdr << ros_message->veh_lgt_accel;
  }

  // Field name: veh_lat_accel_vld
  {
    cdr << (ros_message->veh_lat_accel_vld ? true : false);
  }

  // Field name: veh_lgt_accel_vld
  {
    cdr << (ros_message->veh_lgt_accel_vld ? true : false);
  }

  return true;
}

static bool _WheelInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WheelInfo__ros_msg_type * ros_message = static_cast<_WheelInfo__ros_msg_type *>(untyped_ros_message);
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

  // Field name: moving_status
  {
    cdr >> ros_message->moving_status;
  }

  // Field name: steer_driving_mode
  {
    cdr >> ros_message->steer_driving_mode;
  }

  // Field name: steering_value
  {
    cdr >> ros_message->steering_value;
  }

  // Field name: steering_torque_nm
  {
    cdr >> ros_message->steering_torque_nm;
  }

  // Field name: steering_rate_dps
  {
    cdr >> ros_message->steering_rate_dps;
  }

  // Field name: speed_mps
  {
    cdr >> ros_message->speed_mps;
  }

  // Field name: veh_spd_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->veh_spd_vld = tmp ? true : false;
  }

  // Field name: gear
  {
    cdr >> ros_message->gear;
  }

  // Field name: gear_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gear_vld = tmp ? true : false;
  }

  // Field name: wheel_direction_rr
  {
    cdr >> ros_message->wheel_direction_rr;
  }

  // Field name: wheel_spd_rr
  {
    cdr >> ros_message->wheel_spd_rr;
  }

  // Field name: wheel_direction_rl
  {
    cdr >> ros_message->wheel_direction_rl;
  }

  // Field name: wheel_spd_rl
  {
    cdr >> ros_message->wheel_spd_rl;
  }

  // Field name: wheel_direction_fr
  {
    cdr >> ros_message->wheel_direction_fr;
  }

  // Field name: wheel_spd_fr
  {
    cdr >> ros_message->wheel_spd_fr;
  }

  // Field name: wheel_direction_fl
  {
    cdr >> ros_message->wheel_direction_fl;
  }

  // Field name: wheel_spd_fl
  {
    cdr >> ros_message->wheel_spd_fl;
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  // Field name: wss_fl_edges_sum
  {
    cdr >> ros_message->wss_fl_edges_sum;
  }

  // Field name: wss_fr_edges_sum
  {
    cdr >> ros_message->wss_fr_edges_sum;
  }

  // Field name: wss_rl_edges_sum
  {
    cdr >> ros_message->wss_rl_edges_sum;
  }

  // Field name: wss_rr_edges_sum
  {
    cdr >> ros_message->wss_rr_edges_sum;
  }

  // Field name: wss_fl_edges_sum_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wss_fl_edges_sum_vld = tmp ? true : false;
  }

  // Field name: wss_fr_edges_sum_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wss_fr_edges_sum_vld = tmp ? true : false;
  }

  // Field name: wss_rl_edges_sum_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wss_rl_edges_sum_vld = tmp ? true : false;
  }

  // Field name: wss_rr_edges_sum_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wss_rr_edges_sum_vld = tmp ? true : false;
  }

  // Field name: veh_lat_accel
  {
    cdr >> ros_message->veh_lat_accel;
  }

  // Field name: veh_lgt_accel
  {
    cdr >> ros_message->veh_lgt_accel;
  }

  // Field name: veh_lat_accel_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->veh_lat_accel_vld = tmp ? true : false;
  }

  // Field name: veh_lgt_accel_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->veh_lgt_accel_vld = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__WheelInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WheelInfo__ros_msg_type * ros_message = static_cast<const _WheelInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name moving_status
  {
    size_t item_size = sizeof(ros_message->moving_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_driving_mode
  {
    size_t item_size = sizeof(ros_message->steer_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_value
  {
    size_t item_size = sizeof(ros_message->steering_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_torque_nm
  {
    size_t item_size = sizeof(ros_message->steering_torque_nm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_rate_dps
  {
    size_t item_size = sizeof(ros_message->steering_rate_dps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_mps
  {
    size_t item_size = sizeof(ros_message->speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_spd_vld
  {
    size_t item_size = sizeof(ros_message->veh_spd_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear
  {
    size_t item_size = sizeof(ros_message->gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_vld
  {
    size_t item_size = sizeof(ros_message->gear_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_direction_rr
  {
    size_t item_size = sizeof(ros_message->wheel_direction_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_spd_rr
  {
    size_t item_size = sizeof(ros_message->wheel_spd_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_direction_rl
  {
    size_t item_size = sizeof(ros_message->wheel_direction_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_spd_rl
  {
    size_t item_size = sizeof(ros_message->wheel_spd_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_direction_fr
  {
    size_t item_size = sizeof(ros_message->wheel_direction_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_spd_fr
  {
    size_t item_size = sizeof(ros_message->wheel_spd_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_direction_fl
  {
    size_t item_size = sizeof(ros_message->wheel_direction_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_spd_fl
  {
    size_t item_size = sizeof(ros_message->wheel_spd_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wss_fl_edges_sum
  {
    size_t item_size = sizeof(ros_message->wss_fl_edges_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wss_fr_edges_sum
  {
    size_t item_size = sizeof(ros_message->wss_fr_edges_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wss_rl_edges_sum
  {
    size_t item_size = sizeof(ros_message->wss_rl_edges_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wss_rr_edges_sum
  {
    size_t item_size = sizeof(ros_message->wss_rr_edges_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wss_fl_edges_sum_vld
  {
    size_t item_size = sizeof(ros_message->wss_fl_edges_sum_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wss_fr_edges_sum_vld
  {
    size_t item_size = sizeof(ros_message->wss_fr_edges_sum_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wss_rl_edges_sum_vld
  {
    size_t item_size = sizeof(ros_message->wss_rl_edges_sum_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wss_rr_edges_sum_vld
  {
    size_t item_size = sizeof(ros_message->wss_rr_edges_sum_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_lat_accel
  {
    size_t item_size = sizeof(ros_message->veh_lat_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_lgt_accel
  {
    size_t item_size = sizeof(ros_message->veh_lgt_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_lat_accel_vld
  {
    size_t item_size = sizeof(ros_message->veh_lat_accel_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_lgt_accel_vld
  {
    size_t item_size = sizeof(ros_message->veh_lgt_accel_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WheelInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__WheelInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__WheelInfo(
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
  // member: moving_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steer_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering_torque_nm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering_rate_dps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: veh_spd_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wheel_direction_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_spd_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheel_direction_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_spd_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheel_direction_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_spd_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheel_direction_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_spd_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wss_fl_edges_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wss_fr_edges_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wss_rl_edges_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wss_rr_edges_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wss_fl_edges_sum_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wss_fr_edges_sum_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wss_rl_edges_sum_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wss_rr_edges_sum_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_lat_accel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: veh_lgt_accel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: veh_lat_accel_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_lgt_accel_vld
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
    using DataType = ros2_interface__msg__WheelInfo;
    is_plain =
      (
      offsetof(DataType, veh_lgt_accel_vld) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WheelInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__WheelInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WheelInfo = {
  "ros2_interface::msg",
  "WheelInfo",
  _WheelInfo__cdr_serialize,
  _WheelInfo__cdr_deserialize,
  _WheelInfo__get_serialized_size,
  _WheelInfo__max_serialized_size
};

static rosidl_message_type_support_t _WheelInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WheelInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, WheelInfo)() {
  return &_WheelInfo__type_support;
}

#if defined(__cplusplus)
}
#endif

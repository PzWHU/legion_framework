// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/ControlAnalysis.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/control_analysis__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/control_analysis__struct.h"
#include "ros2_interface/msg/detail/control_analysis__functions.h"
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


using _ControlAnalysis__ros_msg_type = ros2_interface__msg__ControlAnalysis;

static bool _ControlAnalysis__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlAnalysis__ros_msg_type * ros_message = static_cast<const _ControlAnalysis__ros_msg_type *>(untyped_ros_message);
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

  // Field name: driving_mode
  {
    cdr << ros_message->driving_mode;
  }

  // Field name: driving_mode_fd
  {
    cdr << ros_message->driving_mode_fd;
  }

  // Field name: gear_location_fd
  {
    cdr << ros_message->gear_location_fd;
  }

  // Field name: gear_location_cmd
  {
    cdr << ros_message->gear_location_cmd;
  }

  // Field name: epb_level_fd
  {
    cdr << ros_message->epb_level_fd;
  }

  // Field name: epb_level_cmd
  {
    cdr << ros_message->epb_level_cmd;
  }

  // Field name: speed_mps
  {
    cdr << ros_message->speed_mps;
  }

  // Field name: speed_reference
  {
    cdr << ros_message->speed_reference;
  }

  // Field name: accel_value_fd
  {
    cdr << ros_message->accel_value_fd;
  }

  // Field name: accel_value_cmd
  {
    cdr << ros_message->accel_value_cmd;
  }

  // Field name: brake_value_fd
  {
    cdr << ros_message->brake_value_fd;
  }

  // Field name: brake_value_cmd
  {
    cdr << ros_message->brake_value_cmd;
  }

  // Field name: path_remain
  {
    cdr << ros_message->path_remain;
  }

  // Field name: has_stop_point
  {
    cdr << (ros_message->has_stop_point ? true : false);
  }

  // Field name: is_full_stop
  {
    cdr << (ros_message->is_full_stop ? true : false);
  }

  // Field name: is_stopped
  {
    cdr << (ros_message->is_stopped ? true : false);
  }

  // Field name: lon_acc_jerk
  {
    cdr << ros_message->lon_acc_jerk;
  }

  // Field name: acceleration_cmd
  {
    cdr << ros_message->acceleration_cmd;
  }

  // Field name: acceleration_cmd_closeloop
  {
    cdr << ros_message->acceleration_cmd_closeloop;
  }

  // Field name: preview_acceleration_reference
  {
    cdr << ros_message->preview_acceleration_reference;
  }

  // Field name: slope_offset_compensation
  {
    cdr << ros_message->slope_offset_compensation;
  }

  // Field name: turning_offset_compensation
  {
    cdr << ros_message->turning_offset_compensation;
  }

  // Field name: speed_error_limited
  {
    cdr << ros_message->speed_error_limited;
  }

  // Field name: speed_error
  {
    cdr << ros_message->speed_error;
  }

  // Field name: speed_offset
  {
    cdr << ros_message->speed_offset;
  }

  // Field name: station_error_limited
  {
    cdr << ros_message->station_error_limited;
  }

  // Field name: station_error
  {
    cdr << ros_message->station_error;
  }

  // Field name: lon_target_point_s
  {
    cdr << ros_message->lon_target_point_s;
  }

  // Field name: lon_calculate_time
  {
    cdr << ros_message->lon_calculate_time;
  }

  // Field name: lon_calculate_time_max
  {
    cdr << ros_message->lon_calculate_time_max;
  }

  // Field name: ref_curvature
  {
    cdr << ros_message->ref_curvature;
  }

  // Field name: ref_heading
  {
    cdr << ros_message->ref_heading;
  }

  // Field name: current_heading
  {
    cdr << ros_message->current_heading;
  }

  // Field name: heading_error
  {
    cdr << ros_message->heading_error;
  }

  // Field name: heading_error_rate
  {
    cdr << ros_message->heading_error_rate;
  }

  // Field name: lateral_error
  {
    cdr << ros_message->lateral_error;
  }

  // Field name: lateral_error_rate
  {
    cdr << ros_message->lateral_error_rate;
  }

  // Field name: lon_error
  {
    cdr << ros_message->lon_error;
  }

  // Field name: front_steering_value_fd
  {
    cdr << ros_message->front_steering_value_fd;
  }

  // Field name: front_steering_target
  {
    cdr << ros_message->front_steering_target;
  }

  // Field name: front_steering_rate
  {
    cdr << ros_message->front_steering_rate;
  }

  // Field name: front_steer_angle_feedforward
  {
    cdr << ros_message->front_steer_angle_feedforward;
  }

  // Field name: front_steer_angle_feedback
  {
    cdr << ros_message->front_steer_angle_feedback;
  }

  // Field name: front_steer_angle_lateral_contribution
  {
    cdr << ros_message->front_steer_angle_lateral_contribution;
  }

  // Field name: front_steer_angle_lateral_rate_contribution
  {
    cdr << ros_message->front_steer_angle_lateral_rate_contribution;
  }

  // Field name: front_steer_angle_heading_contribution
  {
    cdr << ros_message->front_steer_angle_heading_contribution;
  }

  // Field name: front_steer_angle_heading_rate_contribution
  {
    cdr << ros_message->front_steer_angle_heading_rate_contribution;
  }

  // Field name: rear_steering_value_fd
  {
    cdr << ros_message->rear_steering_value_fd;
  }

  // Field name: rear_steering_target
  {
    cdr << ros_message->rear_steering_target;
  }

  // Field name: rear_steering_rate
  {
    cdr << ros_message->rear_steering_rate;
  }

  // Field name: rear_steer_angle_feedforward
  {
    cdr << ros_message->rear_steer_angle_feedforward;
  }

  // Field name: rear_steer_angle_feedback
  {
    cdr << ros_message->rear_steer_angle_feedback;
  }

  // Field name: rear_steer_angle_lateral_contribution
  {
    cdr << ros_message->rear_steer_angle_lateral_contribution;
  }

  // Field name: rear_steer_angle_lateral_rate_contribution
  {
    cdr << ros_message->rear_steer_angle_lateral_rate_contribution;
  }

  // Field name: rear_steer_angle_heading_contribution
  {
    cdr << ros_message->rear_steer_angle_heading_contribution;
  }

  // Field name: rear_steer_angle_heading_rate_contribution
  {
    cdr << ros_message->rear_steer_angle_heading_rate_contribution;
  }

  // Field name: matrix_k_00
  {
    cdr << ros_message->matrix_k_00;
  }

  // Field name: matrix_k_01
  {
    cdr << ros_message->matrix_k_01;
  }

  // Field name: matrix_k_02
  {
    cdr << ros_message->matrix_k_02;
  }

  // Field name: matrix_k_03
  {
    cdr << ros_message->matrix_k_03;
  }

  // Field name: matrix_k_10
  {
    cdr << ros_message->matrix_k_10;
  }

  // Field name: matrix_k_11
  {
    cdr << ros_message->matrix_k_11;
  }

  // Field name: matrix_k_12
  {
    cdr << ros_message->matrix_k_12;
  }

  // Field name: matrix_k_13
  {
    cdr << ros_message->matrix_k_13;
  }

  // Field name: matrix_state_0
  {
    cdr << ros_message->matrix_state_0;
  }

  // Field name: matrix_state_1
  {
    cdr << ros_message->matrix_state_1;
  }

  // Field name: matrix_state_2
  {
    cdr << ros_message->matrix_state_2;
  }

  // Field name: matrix_state_3
  {
    cdr << ros_message->matrix_state_3;
  }

  // Field name: matrix_q_updated_0
  {
    cdr << ros_message->matrix_q_updated_0;
  }

  // Field name: matrix_q_updated_1
  {
    cdr << ros_message->matrix_q_updated_1;
  }

  // Field name: matrix_q_updated_2
  {
    cdr << ros_message->matrix_q_updated_2;
  }

  // Field name: matrix_q_updated_3
  {
    cdr << ros_message->matrix_q_updated_3;
  }

  // Field name: current_x
  {
    cdr << ros_message->current_x;
  }

  // Field name: current_y
  {
    cdr << ros_message->current_y;
  }

  // Field name: target_point_x
  {
    cdr << ros_message->target_point_x;
  }

  // Field name: target_point_y
  {
    cdr << ros_message->target_point_y;
  }

  // Field name: lat_target_point_s
  {
    cdr << ros_message->lat_target_point_s;
  }

  // Field name: lqr_calculate_time
  {
    cdr << ros_message->lqr_calculate_time;
  }

  // Field name: lqr_calculate_time_max
  {
    cdr << ros_message->lqr_calculate_time_max;
  }

  return true;
}

static bool _ControlAnalysis__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlAnalysis__ros_msg_type * ros_message = static_cast<_ControlAnalysis__ros_msg_type *>(untyped_ros_message);
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

  // Field name: driving_mode
  {
    cdr >> ros_message->driving_mode;
  }

  // Field name: driving_mode_fd
  {
    cdr >> ros_message->driving_mode_fd;
  }

  // Field name: gear_location_fd
  {
    cdr >> ros_message->gear_location_fd;
  }

  // Field name: gear_location_cmd
  {
    cdr >> ros_message->gear_location_cmd;
  }

  // Field name: epb_level_fd
  {
    cdr >> ros_message->epb_level_fd;
  }

  // Field name: epb_level_cmd
  {
    cdr >> ros_message->epb_level_cmd;
  }

  // Field name: speed_mps
  {
    cdr >> ros_message->speed_mps;
  }

  // Field name: speed_reference
  {
    cdr >> ros_message->speed_reference;
  }

  // Field name: accel_value_fd
  {
    cdr >> ros_message->accel_value_fd;
  }

  // Field name: accel_value_cmd
  {
    cdr >> ros_message->accel_value_cmd;
  }

  // Field name: brake_value_fd
  {
    cdr >> ros_message->brake_value_fd;
  }

  // Field name: brake_value_cmd
  {
    cdr >> ros_message->brake_value_cmd;
  }

  // Field name: path_remain
  {
    cdr >> ros_message->path_remain;
  }

  // Field name: has_stop_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_stop_point = tmp ? true : false;
  }

  // Field name: is_full_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_full_stop = tmp ? true : false;
  }

  // Field name: is_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_stopped = tmp ? true : false;
  }

  // Field name: lon_acc_jerk
  {
    cdr >> ros_message->lon_acc_jerk;
  }

  // Field name: acceleration_cmd
  {
    cdr >> ros_message->acceleration_cmd;
  }

  // Field name: acceleration_cmd_closeloop
  {
    cdr >> ros_message->acceleration_cmd_closeloop;
  }

  // Field name: preview_acceleration_reference
  {
    cdr >> ros_message->preview_acceleration_reference;
  }

  // Field name: slope_offset_compensation
  {
    cdr >> ros_message->slope_offset_compensation;
  }

  // Field name: turning_offset_compensation
  {
    cdr >> ros_message->turning_offset_compensation;
  }

  // Field name: speed_error_limited
  {
    cdr >> ros_message->speed_error_limited;
  }

  // Field name: speed_error
  {
    cdr >> ros_message->speed_error;
  }

  // Field name: speed_offset
  {
    cdr >> ros_message->speed_offset;
  }

  // Field name: station_error_limited
  {
    cdr >> ros_message->station_error_limited;
  }

  // Field name: station_error
  {
    cdr >> ros_message->station_error;
  }

  // Field name: lon_target_point_s
  {
    cdr >> ros_message->lon_target_point_s;
  }

  // Field name: lon_calculate_time
  {
    cdr >> ros_message->lon_calculate_time;
  }

  // Field name: lon_calculate_time_max
  {
    cdr >> ros_message->lon_calculate_time_max;
  }

  // Field name: ref_curvature
  {
    cdr >> ros_message->ref_curvature;
  }

  // Field name: ref_heading
  {
    cdr >> ros_message->ref_heading;
  }

  // Field name: current_heading
  {
    cdr >> ros_message->current_heading;
  }

  // Field name: heading_error
  {
    cdr >> ros_message->heading_error;
  }

  // Field name: heading_error_rate
  {
    cdr >> ros_message->heading_error_rate;
  }

  // Field name: lateral_error
  {
    cdr >> ros_message->lateral_error;
  }

  // Field name: lateral_error_rate
  {
    cdr >> ros_message->lateral_error_rate;
  }

  // Field name: lon_error
  {
    cdr >> ros_message->lon_error;
  }

  // Field name: front_steering_value_fd
  {
    cdr >> ros_message->front_steering_value_fd;
  }

  // Field name: front_steering_target
  {
    cdr >> ros_message->front_steering_target;
  }

  // Field name: front_steering_rate
  {
    cdr >> ros_message->front_steering_rate;
  }

  // Field name: front_steer_angle_feedforward
  {
    cdr >> ros_message->front_steer_angle_feedforward;
  }

  // Field name: front_steer_angle_feedback
  {
    cdr >> ros_message->front_steer_angle_feedback;
  }

  // Field name: front_steer_angle_lateral_contribution
  {
    cdr >> ros_message->front_steer_angle_lateral_contribution;
  }

  // Field name: front_steer_angle_lateral_rate_contribution
  {
    cdr >> ros_message->front_steer_angle_lateral_rate_contribution;
  }

  // Field name: front_steer_angle_heading_contribution
  {
    cdr >> ros_message->front_steer_angle_heading_contribution;
  }

  // Field name: front_steer_angle_heading_rate_contribution
  {
    cdr >> ros_message->front_steer_angle_heading_rate_contribution;
  }

  // Field name: rear_steering_value_fd
  {
    cdr >> ros_message->rear_steering_value_fd;
  }

  // Field name: rear_steering_target
  {
    cdr >> ros_message->rear_steering_target;
  }

  // Field name: rear_steering_rate
  {
    cdr >> ros_message->rear_steering_rate;
  }

  // Field name: rear_steer_angle_feedforward
  {
    cdr >> ros_message->rear_steer_angle_feedforward;
  }

  // Field name: rear_steer_angle_feedback
  {
    cdr >> ros_message->rear_steer_angle_feedback;
  }

  // Field name: rear_steer_angle_lateral_contribution
  {
    cdr >> ros_message->rear_steer_angle_lateral_contribution;
  }

  // Field name: rear_steer_angle_lateral_rate_contribution
  {
    cdr >> ros_message->rear_steer_angle_lateral_rate_contribution;
  }

  // Field name: rear_steer_angle_heading_contribution
  {
    cdr >> ros_message->rear_steer_angle_heading_contribution;
  }

  // Field name: rear_steer_angle_heading_rate_contribution
  {
    cdr >> ros_message->rear_steer_angle_heading_rate_contribution;
  }

  // Field name: matrix_k_00
  {
    cdr >> ros_message->matrix_k_00;
  }

  // Field name: matrix_k_01
  {
    cdr >> ros_message->matrix_k_01;
  }

  // Field name: matrix_k_02
  {
    cdr >> ros_message->matrix_k_02;
  }

  // Field name: matrix_k_03
  {
    cdr >> ros_message->matrix_k_03;
  }

  // Field name: matrix_k_10
  {
    cdr >> ros_message->matrix_k_10;
  }

  // Field name: matrix_k_11
  {
    cdr >> ros_message->matrix_k_11;
  }

  // Field name: matrix_k_12
  {
    cdr >> ros_message->matrix_k_12;
  }

  // Field name: matrix_k_13
  {
    cdr >> ros_message->matrix_k_13;
  }

  // Field name: matrix_state_0
  {
    cdr >> ros_message->matrix_state_0;
  }

  // Field name: matrix_state_1
  {
    cdr >> ros_message->matrix_state_1;
  }

  // Field name: matrix_state_2
  {
    cdr >> ros_message->matrix_state_2;
  }

  // Field name: matrix_state_3
  {
    cdr >> ros_message->matrix_state_3;
  }

  // Field name: matrix_q_updated_0
  {
    cdr >> ros_message->matrix_q_updated_0;
  }

  // Field name: matrix_q_updated_1
  {
    cdr >> ros_message->matrix_q_updated_1;
  }

  // Field name: matrix_q_updated_2
  {
    cdr >> ros_message->matrix_q_updated_2;
  }

  // Field name: matrix_q_updated_3
  {
    cdr >> ros_message->matrix_q_updated_3;
  }

  // Field name: current_x
  {
    cdr >> ros_message->current_x;
  }

  // Field name: current_y
  {
    cdr >> ros_message->current_y;
  }

  // Field name: target_point_x
  {
    cdr >> ros_message->target_point_x;
  }

  // Field name: target_point_y
  {
    cdr >> ros_message->target_point_y;
  }

  // Field name: lat_target_point_s
  {
    cdr >> ros_message->lat_target_point_s;
  }

  // Field name: lqr_calculate_time
  {
    cdr >> ros_message->lqr_calculate_time;
  }

  // Field name: lqr_calculate_time_max
  {
    cdr >> ros_message->lqr_calculate_time_max;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__ControlAnalysis(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlAnalysis__ros_msg_type * ros_message = static_cast<const _ControlAnalysis__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name driving_mode
  {
    size_t item_size = sizeof(ros_message->driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driving_mode_fd
  {
    size_t item_size = sizeof(ros_message->driving_mode_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_location_fd
  {
    size_t item_size = sizeof(ros_message->gear_location_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_location_cmd
  {
    size_t item_size = sizeof(ros_message->gear_location_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_level_fd
  {
    size_t item_size = sizeof(ros_message->epb_level_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_level_cmd
  {
    size_t item_size = sizeof(ros_message->epb_level_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_mps
  {
    size_t item_size = sizeof(ros_message->speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_reference
  {
    size_t item_size = sizeof(ros_message->speed_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_value_fd
  {
    size_t item_size = sizeof(ros_message->accel_value_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_value_cmd
  {
    size_t item_size = sizeof(ros_message->accel_value_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_value_fd
  {
    size_t item_size = sizeof(ros_message->brake_value_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_value_cmd
  {
    size_t item_size = sizeof(ros_message->brake_value_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_remain
  {
    size_t item_size = sizeof(ros_message->path_remain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_stop_point
  {
    size_t item_size = sizeof(ros_message->has_stop_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_full_stop
  {
    size_t item_size = sizeof(ros_message->is_full_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_stopped
  {
    size_t item_size = sizeof(ros_message->is_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon_acc_jerk
  {
    size_t item_size = sizeof(ros_message->lon_acc_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_cmd
  {
    size_t item_size = sizeof(ros_message->acceleration_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_cmd_closeloop
  {
    size_t item_size = sizeof(ros_message->acceleration_cmd_closeloop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name preview_acceleration_reference
  {
    size_t item_size = sizeof(ros_message->preview_acceleration_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slope_offset_compensation
  {
    size_t item_size = sizeof(ros_message->slope_offset_compensation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turning_offset_compensation
  {
    size_t item_size = sizeof(ros_message->turning_offset_compensation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_error_limited
  {
    size_t item_size = sizeof(ros_message->speed_error_limited);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_error
  {
    size_t item_size = sizeof(ros_message->speed_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_offset
  {
    size_t item_size = sizeof(ros_message->speed_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name station_error_limited
  {
    size_t item_size = sizeof(ros_message->station_error_limited);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name station_error
  {
    size_t item_size = sizeof(ros_message->station_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon_target_point_s
  {
    size_t item_size = sizeof(ros_message->lon_target_point_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon_calculate_time
  {
    size_t item_size = sizeof(ros_message->lon_calculate_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon_calculate_time_max
  {
    size_t item_size = sizeof(ros_message->lon_calculate_time_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_curvature
  {
    size_t item_size = sizeof(ros_message->ref_curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_heading
  {
    size_t item_size = sizeof(ros_message->ref_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_heading
  {
    size_t item_size = sizeof(ros_message->current_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_error
  {
    size_t item_size = sizeof(ros_message->heading_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_error_rate
  {
    size_t item_size = sizeof(ros_message->heading_error_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_error
  {
    size_t item_size = sizeof(ros_message->lateral_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_error_rate
  {
    size_t item_size = sizeof(ros_message->lateral_error_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon_error
  {
    size_t item_size = sizeof(ros_message->lon_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steering_value_fd
  {
    size_t item_size = sizeof(ros_message->front_steering_value_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steering_target
  {
    size_t item_size = sizeof(ros_message->front_steering_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steering_rate
  {
    size_t item_size = sizeof(ros_message->front_steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steer_angle_feedforward
  {
    size_t item_size = sizeof(ros_message->front_steer_angle_feedforward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steer_angle_feedback
  {
    size_t item_size = sizeof(ros_message->front_steer_angle_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steer_angle_lateral_contribution
  {
    size_t item_size = sizeof(ros_message->front_steer_angle_lateral_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steer_angle_lateral_rate_contribution
  {
    size_t item_size = sizeof(ros_message->front_steer_angle_lateral_rate_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steer_angle_heading_contribution
  {
    size_t item_size = sizeof(ros_message->front_steer_angle_heading_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steer_angle_heading_rate_contribution
  {
    size_t item_size = sizeof(ros_message->front_steer_angle_heading_rate_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steering_value_fd
  {
    size_t item_size = sizeof(ros_message->rear_steering_value_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steering_target
  {
    size_t item_size = sizeof(ros_message->rear_steering_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steering_rate
  {
    size_t item_size = sizeof(ros_message->rear_steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steer_angle_feedforward
  {
    size_t item_size = sizeof(ros_message->rear_steer_angle_feedforward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steer_angle_feedback
  {
    size_t item_size = sizeof(ros_message->rear_steer_angle_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steer_angle_lateral_contribution
  {
    size_t item_size = sizeof(ros_message->rear_steer_angle_lateral_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steer_angle_lateral_rate_contribution
  {
    size_t item_size = sizeof(ros_message->rear_steer_angle_lateral_rate_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steer_angle_heading_contribution
  {
    size_t item_size = sizeof(ros_message->rear_steer_angle_heading_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steer_angle_heading_rate_contribution
  {
    size_t item_size = sizeof(ros_message->rear_steer_angle_heading_rate_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_k_00
  {
    size_t item_size = sizeof(ros_message->matrix_k_00);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_k_01
  {
    size_t item_size = sizeof(ros_message->matrix_k_01);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_k_02
  {
    size_t item_size = sizeof(ros_message->matrix_k_02);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_k_03
  {
    size_t item_size = sizeof(ros_message->matrix_k_03);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_k_10
  {
    size_t item_size = sizeof(ros_message->matrix_k_10);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_k_11
  {
    size_t item_size = sizeof(ros_message->matrix_k_11);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_k_12
  {
    size_t item_size = sizeof(ros_message->matrix_k_12);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_k_13
  {
    size_t item_size = sizeof(ros_message->matrix_k_13);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_state_0
  {
    size_t item_size = sizeof(ros_message->matrix_state_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_state_1
  {
    size_t item_size = sizeof(ros_message->matrix_state_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_state_2
  {
    size_t item_size = sizeof(ros_message->matrix_state_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_state_3
  {
    size_t item_size = sizeof(ros_message->matrix_state_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_q_updated_0
  {
    size_t item_size = sizeof(ros_message->matrix_q_updated_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_q_updated_1
  {
    size_t item_size = sizeof(ros_message->matrix_q_updated_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_q_updated_2
  {
    size_t item_size = sizeof(ros_message->matrix_q_updated_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matrix_q_updated_3
  {
    size_t item_size = sizeof(ros_message->matrix_q_updated_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_x
  {
    size_t item_size = sizeof(ros_message->current_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_y
  {
    size_t item_size = sizeof(ros_message->current_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_point_x
  {
    size_t item_size = sizeof(ros_message->target_point_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_point_y
  {
    size_t item_size = sizeof(ros_message->target_point_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_target_point_s
  {
    size_t item_size = sizeof(ros_message->lat_target_point_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lqr_calculate_time
  {
    size_t item_size = sizeof(ros_message->lqr_calculate_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lqr_calculate_time_max
  {
    size_t item_size = sizeof(ros_message->lqr_calculate_time_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlAnalysis__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__ControlAnalysis(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__ControlAnalysis(
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
  // member: driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: driving_mode_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_location_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_location_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: epb_level_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: epb_level_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_reference
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: accel_value_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: accel_value_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_value_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_value_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: path_remain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: has_stop_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_full_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_stopped
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lon_acc_jerk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acceleration_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acceleration_cmd_closeloop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: preview_acceleration_reference
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: slope_offset_compensation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: turning_offset_compensation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_error_limited
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: station_error_limited
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: station_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon_target_point_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon_calculate_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon_calculate_time_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_curvature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading_error_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lateral_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lateral_error_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_steering_value_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_steering_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_steer_angle_feedforward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_steer_angle_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_steer_angle_lateral_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_steer_angle_lateral_rate_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_steer_angle_heading_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_steer_angle_heading_rate_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steering_value_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steering_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steer_angle_feedforward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steer_angle_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steer_angle_lateral_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steer_angle_lateral_rate_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steer_angle_heading_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steer_angle_heading_rate_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_k_00
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_k_01
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_k_02
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_k_03
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_k_10
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_k_11
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_k_12
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_k_13
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_state_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_state_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_state_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_state_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_q_updated_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_q_updated_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_q_updated_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: matrix_q_updated_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_point_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_point_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lat_target_point_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lqr_calculate_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lqr_calculate_time_max
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
    using DataType = ros2_interface__msg__ControlAnalysis;
    is_plain =
      (
      offsetof(DataType, lqr_calculate_time_max) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControlAnalysis__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__ControlAnalysis(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlAnalysis = {
  "ros2_interface::msg",
  "ControlAnalysis",
  _ControlAnalysis__cdr_serialize,
  _ControlAnalysis__cdr_deserialize,
  _ControlAnalysis__get_serialized_size,
  _ControlAnalysis__max_serialized_size
};

static rosidl_message_type_support_t _ControlAnalysis__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlAnalysis,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, ControlAnalysis)() {
  return &_ControlAnalysis__type_support;
}

#if defined(__cplusplus)
}
#endif

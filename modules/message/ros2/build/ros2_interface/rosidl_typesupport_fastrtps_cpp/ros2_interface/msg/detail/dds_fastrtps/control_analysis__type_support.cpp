// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/ControlAnalysis.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/control_analysis__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/control_analysis__struct.hpp"

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
  const ros2_interface::msg::ControlAnalysis & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: driving_mode
  cdr << ros_message.driving_mode;
  // Member: driving_mode_fd
  cdr << ros_message.driving_mode_fd;
  // Member: gear_location_fd
  cdr << ros_message.gear_location_fd;
  // Member: gear_location_cmd
  cdr << ros_message.gear_location_cmd;
  // Member: epb_level_fd
  cdr << ros_message.epb_level_fd;
  // Member: epb_level_cmd
  cdr << ros_message.epb_level_cmd;
  // Member: speed_mps
  cdr << ros_message.speed_mps;
  // Member: speed_reference
  cdr << ros_message.speed_reference;
  // Member: accel_value_fd
  cdr << ros_message.accel_value_fd;
  // Member: accel_value_cmd
  cdr << ros_message.accel_value_cmd;
  // Member: brake_value_fd
  cdr << ros_message.brake_value_fd;
  // Member: brake_value_cmd
  cdr << ros_message.brake_value_cmd;
  // Member: path_remain
  cdr << ros_message.path_remain;
  // Member: has_stop_point
  cdr << (ros_message.has_stop_point ? true : false);
  // Member: is_full_stop
  cdr << (ros_message.is_full_stop ? true : false);
  // Member: is_stopped
  cdr << (ros_message.is_stopped ? true : false);
  // Member: lon_acc_jerk
  cdr << ros_message.lon_acc_jerk;
  // Member: acceleration_cmd
  cdr << ros_message.acceleration_cmd;
  // Member: acceleration_cmd_closeloop
  cdr << ros_message.acceleration_cmd_closeloop;
  // Member: preview_acceleration_reference
  cdr << ros_message.preview_acceleration_reference;
  // Member: slope_offset_compensation
  cdr << ros_message.slope_offset_compensation;
  // Member: turning_offset_compensation
  cdr << ros_message.turning_offset_compensation;
  // Member: speed_error_limited
  cdr << ros_message.speed_error_limited;
  // Member: speed_error
  cdr << ros_message.speed_error;
  // Member: speed_offset
  cdr << ros_message.speed_offset;
  // Member: station_error_limited
  cdr << ros_message.station_error_limited;
  // Member: station_error
  cdr << ros_message.station_error;
  // Member: lon_target_point_s
  cdr << ros_message.lon_target_point_s;
  // Member: lon_calculate_time
  cdr << ros_message.lon_calculate_time;
  // Member: lon_calculate_time_max
  cdr << ros_message.lon_calculate_time_max;
  // Member: ref_curvature
  cdr << ros_message.ref_curvature;
  // Member: ref_heading
  cdr << ros_message.ref_heading;
  // Member: current_heading
  cdr << ros_message.current_heading;
  // Member: heading_error
  cdr << ros_message.heading_error;
  // Member: heading_error_rate
  cdr << ros_message.heading_error_rate;
  // Member: lateral_error
  cdr << ros_message.lateral_error;
  // Member: lateral_error_rate
  cdr << ros_message.lateral_error_rate;
  // Member: lon_error
  cdr << ros_message.lon_error;
  // Member: front_steering_value_fd
  cdr << ros_message.front_steering_value_fd;
  // Member: front_steering_target
  cdr << ros_message.front_steering_target;
  // Member: front_steering_rate
  cdr << ros_message.front_steering_rate;
  // Member: front_steer_angle_feedforward
  cdr << ros_message.front_steer_angle_feedforward;
  // Member: front_steer_angle_feedback
  cdr << ros_message.front_steer_angle_feedback;
  // Member: front_steer_angle_lateral_contribution
  cdr << ros_message.front_steer_angle_lateral_contribution;
  // Member: front_steer_angle_lateral_rate_contribution
  cdr << ros_message.front_steer_angle_lateral_rate_contribution;
  // Member: front_steer_angle_heading_contribution
  cdr << ros_message.front_steer_angle_heading_contribution;
  // Member: front_steer_angle_heading_rate_contribution
  cdr << ros_message.front_steer_angle_heading_rate_contribution;
  // Member: rear_steering_value_fd
  cdr << ros_message.rear_steering_value_fd;
  // Member: rear_steering_target
  cdr << ros_message.rear_steering_target;
  // Member: rear_steering_rate
  cdr << ros_message.rear_steering_rate;
  // Member: rear_steer_angle_feedforward
  cdr << ros_message.rear_steer_angle_feedforward;
  // Member: rear_steer_angle_feedback
  cdr << ros_message.rear_steer_angle_feedback;
  // Member: rear_steer_angle_lateral_contribution
  cdr << ros_message.rear_steer_angle_lateral_contribution;
  // Member: rear_steer_angle_lateral_rate_contribution
  cdr << ros_message.rear_steer_angle_lateral_rate_contribution;
  // Member: rear_steer_angle_heading_contribution
  cdr << ros_message.rear_steer_angle_heading_contribution;
  // Member: rear_steer_angle_heading_rate_contribution
  cdr << ros_message.rear_steer_angle_heading_rate_contribution;
  // Member: matrix_k_00
  cdr << ros_message.matrix_k_00;
  // Member: matrix_k_01
  cdr << ros_message.matrix_k_01;
  // Member: matrix_k_02
  cdr << ros_message.matrix_k_02;
  // Member: matrix_k_03
  cdr << ros_message.matrix_k_03;
  // Member: matrix_k_10
  cdr << ros_message.matrix_k_10;
  // Member: matrix_k_11
  cdr << ros_message.matrix_k_11;
  // Member: matrix_k_12
  cdr << ros_message.matrix_k_12;
  // Member: matrix_k_13
  cdr << ros_message.matrix_k_13;
  // Member: matrix_state_0
  cdr << ros_message.matrix_state_0;
  // Member: matrix_state_1
  cdr << ros_message.matrix_state_1;
  // Member: matrix_state_2
  cdr << ros_message.matrix_state_2;
  // Member: matrix_state_3
  cdr << ros_message.matrix_state_3;
  // Member: matrix_q_updated_0
  cdr << ros_message.matrix_q_updated_0;
  // Member: matrix_q_updated_1
  cdr << ros_message.matrix_q_updated_1;
  // Member: matrix_q_updated_2
  cdr << ros_message.matrix_q_updated_2;
  // Member: matrix_q_updated_3
  cdr << ros_message.matrix_q_updated_3;
  // Member: current_x
  cdr << ros_message.current_x;
  // Member: current_y
  cdr << ros_message.current_y;
  // Member: target_point_x
  cdr << ros_message.target_point_x;
  // Member: target_point_y
  cdr << ros_message.target_point_y;
  // Member: lat_target_point_s
  cdr << ros_message.lat_target_point_s;
  // Member: lqr_calculate_time
  cdr << ros_message.lqr_calculate_time;
  // Member: lqr_calculate_time_max
  cdr << ros_message.lqr_calculate_time_max;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::ControlAnalysis & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: driving_mode
  cdr >> ros_message.driving_mode;

  // Member: driving_mode_fd
  cdr >> ros_message.driving_mode_fd;

  // Member: gear_location_fd
  cdr >> ros_message.gear_location_fd;

  // Member: gear_location_cmd
  cdr >> ros_message.gear_location_cmd;

  // Member: epb_level_fd
  cdr >> ros_message.epb_level_fd;

  // Member: epb_level_cmd
  cdr >> ros_message.epb_level_cmd;

  // Member: speed_mps
  cdr >> ros_message.speed_mps;

  // Member: speed_reference
  cdr >> ros_message.speed_reference;

  // Member: accel_value_fd
  cdr >> ros_message.accel_value_fd;

  // Member: accel_value_cmd
  cdr >> ros_message.accel_value_cmd;

  // Member: brake_value_fd
  cdr >> ros_message.brake_value_fd;

  // Member: brake_value_cmd
  cdr >> ros_message.brake_value_cmd;

  // Member: path_remain
  cdr >> ros_message.path_remain;

  // Member: has_stop_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_stop_point = tmp ? true : false;
  }

  // Member: is_full_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_full_stop = tmp ? true : false;
  }

  // Member: is_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_stopped = tmp ? true : false;
  }

  // Member: lon_acc_jerk
  cdr >> ros_message.lon_acc_jerk;

  // Member: acceleration_cmd
  cdr >> ros_message.acceleration_cmd;

  // Member: acceleration_cmd_closeloop
  cdr >> ros_message.acceleration_cmd_closeloop;

  // Member: preview_acceleration_reference
  cdr >> ros_message.preview_acceleration_reference;

  // Member: slope_offset_compensation
  cdr >> ros_message.slope_offset_compensation;

  // Member: turning_offset_compensation
  cdr >> ros_message.turning_offset_compensation;

  // Member: speed_error_limited
  cdr >> ros_message.speed_error_limited;

  // Member: speed_error
  cdr >> ros_message.speed_error;

  // Member: speed_offset
  cdr >> ros_message.speed_offset;

  // Member: station_error_limited
  cdr >> ros_message.station_error_limited;

  // Member: station_error
  cdr >> ros_message.station_error;

  // Member: lon_target_point_s
  cdr >> ros_message.lon_target_point_s;

  // Member: lon_calculate_time
  cdr >> ros_message.lon_calculate_time;

  // Member: lon_calculate_time_max
  cdr >> ros_message.lon_calculate_time_max;

  // Member: ref_curvature
  cdr >> ros_message.ref_curvature;

  // Member: ref_heading
  cdr >> ros_message.ref_heading;

  // Member: current_heading
  cdr >> ros_message.current_heading;

  // Member: heading_error
  cdr >> ros_message.heading_error;

  // Member: heading_error_rate
  cdr >> ros_message.heading_error_rate;

  // Member: lateral_error
  cdr >> ros_message.lateral_error;

  // Member: lateral_error_rate
  cdr >> ros_message.lateral_error_rate;

  // Member: lon_error
  cdr >> ros_message.lon_error;

  // Member: front_steering_value_fd
  cdr >> ros_message.front_steering_value_fd;

  // Member: front_steering_target
  cdr >> ros_message.front_steering_target;

  // Member: front_steering_rate
  cdr >> ros_message.front_steering_rate;

  // Member: front_steer_angle_feedforward
  cdr >> ros_message.front_steer_angle_feedforward;

  // Member: front_steer_angle_feedback
  cdr >> ros_message.front_steer_angle_feedback;

  // Member: front_steer_angle_lateral_contribution
  cdr >> ros_message.front_steer_angle_lateral_contribution;

  // Member: front_steer_angle_lateral_rate_contribution
  cdr >> ros_message.front_steer_angle_lateral_rate_contribution;

  // Member: front_steer_angle_heading_contribution
  cdr >> ros_message.front_steer_angle_heading_contribution;

  // Member: front_steer_angle_heading_rate_contribution
  cdr >> ros_message.front_steer_angle_heading_rate_contribution;

  // Member: rear_steering_value_fd
  cdr >> ros_message.rear_steering_value_fd;

  // Member: rear_steering_target
  cdr >> ros_message.rear_steering_target;

  // Member: rear_steering_rate
  cdr >> ros_message.rear_steering_rate;

  // Member: rear_steer_angle_feedforward
  cdr >> ros_message.rear_steer_angle_feedforward;

  // Member: rear_steer_angle_feedback
  cdr >> ros_message.rear_steer_angle_feedback;

  // Member: rear_steer_angle_lateral_contribution
  cdr >> ros_message.rear_steer_angle_lateral_contribution;

  // Member: rear_steer_angle_lateral_rate_contribution
  cdr >> ros_message.rear_steer_angle_lateral_rate_contribution;

  // Member: rear_steer_angle_heading_contribution
  cdr >> ros_message.rear_steer_angle_heading_contribution;

  // Member: rear_steer_angle_heading_rate_contribution
  cdr >> ros_message.rear_steer_angle_heading_rate_contribution;

  // Member: matrix_k_00
  cdr >> ros_message.matrix_k_00;

  // Member: matrix_k_01
  cdr >> ros_message.matrix_k_01;

  // Member: matrix_k_02
  cdr >> ros_message.matrix_k_02;

  // Member: matrix_k_03
  cdr >> ros_message.matrix_k_03;

  // Member: matrix_k_10
  cdr >> ros_message.matrix_k_10;

  // Member: matrix_k_11
  cdr >> ros_message.matrix_k_11;

  // Member: matrix_k_12
  cdr >> ros_message.matrix_k_12;

  // Member: matrix_k_13
  cdr >> ros_message.matrix_k_13;

  // Member: matrix_state_0
  cdr >> ros_message.matrix_state_0;

  // Member: matrix_state_1
  cdr >> ros_message.matrix_state_1;

  // Member: matrix_state_2
  cdr >> ros_message.matrix_state_2;

  // Member: matrix_state_3
  cdr >> ros_message.matrix_state_3;

  // Member: matrix_q_updated_0
  cdr >> ros_message.matrix_q_updated_0;

  // Member: matrix_q_updated_1
  cdr >> ros_message.matrix_q_updated_1;

  // Member: matrix_q_updated_2
  cdr >> ros_message.matrix_q_updated_2;

  // Member: matrix_q_updated_3
  cdr >> ros_message.matrix_q_updated_3;

  // Member: current_x
  cdr >> ros_message.current_x;

  // Member: current_y
  cdr >> ros_message.current_y;

  // Member: target_point_x
  cdr >> ros_message.target_point_x;

  // Member: target_point_y
  cdr >> ros_message.target_point_y;

  // Member: lat_target_point_s
  cdr >> ros_message.lat_target_point_s;

  // Member: lqr_calculate_time
  cdr >> ros_message.lqr_calculate_time;

  // Member: lqr_calculate_time_max
  cdr >> ros_message.lqr_calculate_time_max;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::ControlAnalysis & ros_message,
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
  // Member: driving_mode
  {
    size_t item_size = sizeof(ros_message.driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driving_mode_fd
  {
    size_t item_size = sizeof(ros_message.driving_mode_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_location_fd
  {
    size_t item_size = sizeof(ros_message.gear_location_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_location_cmd
  {
    size_t item_size = sizeof(ros_message.gear_location_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epb_level_fd
  {
    size_t item_size = sizeof(ros_message.epb_level_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epb_level_cmd
  {
    size_t item_size = sizeof(ros_message.epb_level_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_mps
  {
    size_t item_size = sizeof(ros_message.speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_reference
  {
    size_t item_size = sizeof(ros_message.speed_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_value_fd
  {
    size_t item_size = sizeof(ros_message.accel_value_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_value_cmd
  {
    size_t item_size = sizeof(ros_message.accel_value_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_value_fd
  {
    size_t item_size = sizeof(ros_message.brake_value_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_value_cmd
  {
    size_t item_size = sizeof(ros_message.brake_value_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: path_remain
  {
    size_t item_size = sizeof(ros_message.path_remain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_stop_point
  {
    size_t item_size = sizeof(ros_message.has_stop_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_full_stop
  {
    size_t item_size = sizeof(ros_message.is_full_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_stopped
  {
    size_t item_size = sizeof(ros_message.is_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lon_acc_jerk
  {
    size_t item_size = sizeof(ros_message.lon_acc_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acceleration_cmd
  {
    size_t item_size = sizeof(ros_message.acceleration_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acceleration_cmd_closeloop
  {
    size_t item_size = sizeof(ros_message.acceleration_cmd_closeloop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: preview_acceleration_reference
  {
    size_t item_size = sizeof(ros_message.preview_acceleration_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slope_offset_compensation
  {
    size_t item_size = sizeof(ros_message.slope_offset_compensation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turning_offset_compensation
  {
    size_t item_size = sizeof(ros_message.turning_offset_compensation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_error_limited
  {
    size_t item_size = sizeof(ros_message.speed_error_limited);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_error
  {
    size_t item_size = sizeof(ros_message.speed_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_offset
  {
    size_t item_size = sizeof(ros_message.speed_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: station_error_limited
  {
    size_t item_size = sizeof(ros_message.station_error_limited);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: station_error
  {
    size_t item_size = sizeof(ros_message.station_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lon_target_point_s
  {
    size_t item_size = sizeof(ros_message.lon_target_point_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lon_calculate_time
  {
    size_t item_size = sizeof(ros_message.lon_calculate_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lon_calculate_time_max
  {
    size_t item_size = sizeof(ros_message.lon_calculate_time_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ref_curvature
  {
    size_t item_size = sizeof(ros_message.ref_curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ref_heading
  {
    size_t item_size = sizeof(ros_message.ref_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_heading
  {
    size_t item_size = sizeof(ros_message.current_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_error
  {
    size_t item_size = sizeof(ros_message.heading_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_error_rate
  {
    size_t item_size = sizeof(ros_message.heading_error_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_error
  {
    size_t item_size = sizeof(ros_message.lateral_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_error_rate
  {
    size_t item_size = sizeof(ros_message.lateral_error_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lon_error
  {
    size_t item_size = sizeof(ros_message.lon_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_steering_value_fd
  {
    size_t item_size = sizeof(ros_message.front_steering_value_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_steering_target
  {
    size_t item_size = sizeof(ros_message.front_steering_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_steering_rate
  {
    size_t item_size = sizeof(ros_message.front_steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_steer_angle_feedforward
  {
    size_t item_size = sizeof(ros_message.front_steer_angle_feedforward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_steer_angle_feedback
  {
    size_t item_size = sizeof(ros_message.front_steer_angle_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_steer_angle_lateral_contribution
  {
    size_t item_size = sizeof(ros_message.front_steer_angle_lateral_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_steer_angle_lateral_rate_contribution
  {
    size_t item_size = sizeof(ros_message.front_steer_angle_lateral_rate_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_steer_angle_heading_contribution
  {
    size_t item_size = sizeof(ros_message.front_steer_angle_heading_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_steer_angle_heading_rate_contribution
  {
    size_t item_size = sizeof(ros_message.front_steer_angle_heading_rate_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_steering_value_fd
  {
    size_t item_size = sizeof(ros_message.rear_steering_value_fd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_steering_target
  {
    size_t item_size = sizeof(ros_message.rear_steering_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_steering_rate
  {
    size_t item_size = sizeof(ros_message.rear_steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_steer_angle_feedforward
  {
    size_t item_size = sizeof(ros_message.rear_steer_angle_feedforward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_steer_angle_feedback
  {
    size_t item_size = sizeof(ros_message.rear_steer_angle_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_steer_angle_lateral_contribution
  {
    size_t item_size = sizeof(ros_message.rear_steer_angle_lateral_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_steer_angle_lateral_rate_contribution
  {
    size_t item_size = sizeof(ros_message.rear_steer_angle_lateral_rate_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_steer_angle_heading_contribution
  {
    size_t item_size = sizeof(ros_message.rear_steer_angle_heading_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_steer_angle_heading_rate_contribution
  {
    size_t item_size = sizeof(ros_message.rear_steer_angle_heading_rate_contribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_k_00
  {
    size_t item_size = sizeof(ros_message.matrix_k_00);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_k_01
  {
    size_t item_size = sizeof(ros_message.matrix_k_01);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_k_02
  {
    size_t item_size = sizeof(ros_message.matrix_k_02);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_k_03
  {
    size_t item_size = sizeof(ros_message.matrix_k_03);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_k_10
  {
    size_t item_size = sizeof(ros_message.matrix_k_10);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_k_11
  {
    size_t item_size = sizeof(ros_message.matrix_k_11);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_k_12
  {
    size_t item_size = sizeof(ros_message.matrix_k_12);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_k_13
  {
    size_t item_size = sizeof(ros_message.matrix_k_13);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_state_0
  {
    size_t item_size = sizeof(ros_message.matrix_state_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_state_1
  {
    size_t item_size = sizeof(ros_message.matrix_state_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_state_2
  {
    size_t item_size = sizeof(ros_message.matrix_state_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_state_3
  {
    size_t item_size = sizeof(ros_message.matrix_state_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_q_updated_0
  {
    size_t item_size = sizeof(ros_message.matrix_q_updated_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_q_updated_1
  {
    size_t item_size = sizeof(ros_message.matrix_q_updated_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_q_updated_2
  {
    size_t item_size = sizeof(ros_message.matrix_q_updated_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matrix_q_updated_3
  {
    size_t item_size = sizeof(ros_message.matrix_q_updated_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_x
  {
    size_t item_size = sizeof(ros_message.current_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_y
  {
    size_t item_size = sizeof(ros_message.current_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_point_x
  {
    size_t item_size = sizeof(ros_message.target_point_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_point_y
  {
    size_t item_size = sizeof(ros_message.target_point_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lat_target_point_s
  {
    size_t item_size = sizeof(ros_message.lat_target_point_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lqr_calculate_time
  {
    size_t item_size = sizeof(ros_message.lqr_calculate_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lqr_calculate_time_max
  {
    size_t item_size = sizeof(ros_message.lqr_calculate_time_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_ControlAnalysis(
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

  // Member: driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: driving_mode_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_location_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_location_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: epb_level_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: epb_level_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_reference
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: accel_value_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: accel_value_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_value_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_value_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: path_remain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: has_stop_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_full_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_stopped
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lon_acc_jerk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acceleration_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acceleration_cmd_closeloop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: preview_acceleration_reference
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: slope_offset_compensation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: turning_offset_compensation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_error_limited
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: station_error_limited
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: station_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lon_target_point_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lon_calculate_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lon_calculate_time_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ref_curvature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ref_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading_error_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lateral_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lateral_error_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lon_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_steering_value_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_steering_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_steer_angle_feedforward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_steer_angle_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_steer_angle_lateral_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_steer_angle_lateral_rate_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_steer_angle_heading_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_steer_angle_heading_rate_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_steering_value_fd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_steering_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_steer_angle_feedforward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_steer_angle_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_steer_angle_lateral_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_steer_angle_lateral_rate_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_steer_angle_heading_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_steer_angle_heading_rate_contribution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_k_00
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_k_01
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_k_02
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_k_03
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_k_10
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_k_11
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_k_12
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_k_13
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_state_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_state_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_state_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_state_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_q_updated_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_q_updated_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_q_updated_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matrix_q_updated_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: target_point_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: target_point_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lat_target_point_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lqr_calculate_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lqr_calculate_time_max
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
    using DataType = ros2_interface::msg::ControlAnalysis;
    is_plain =
      (
      offsetof(DataType, lqr_calculate_time_max) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ControlAnalysis__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::ControlAnalysis *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControlAnalysis__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::ControlAnalysis *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControlAnalysis__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::ControlAnalysis *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControlAnalysis__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControlAnalysis(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControlAnalysis__callbacks = {
  "ros2_interface::msg",
  "ControlAnalysis",
  _ControlAnalysis__cdr_serialize,
  _ControlAnalysis__cdr_deserialize,
  _ControlAnalysis__get_serialized_size,
  _ControlAnalysis__max_serialized_size
};

static rosidl_message_type_support_t _ControlAnalysis__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlAnalysis__callbacks,
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
get_message_type_support_handle<ros2_interface::msg::ControlAnalysis>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_ControlAnalysis__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, ControlAnalysis)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_ControlAnalysis__handle;
}

#ifdef __cplusplus
}
#endif

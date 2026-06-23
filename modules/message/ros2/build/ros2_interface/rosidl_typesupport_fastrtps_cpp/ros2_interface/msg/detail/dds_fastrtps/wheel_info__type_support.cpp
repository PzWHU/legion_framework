// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/WheelInfo.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/wheel_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/wheel_info__struct.hpp"

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
  const ros2_interface::msg::WheelInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: moving_status
  cdr << ros_message.moving_status;
  // Member: steer_driving_mode
  cdr << ros_message.steer_driving_mode;
  // Member: steering_value
  cdr << ros_message.steering_value;
  // Member: steering_torque_nm
  cdr << ros_message.steering_torque_nm;
  // Member: steering_rate_dps
  cdr << ros_message.steering_rate_dps;
  // Member: speed_mps
  cdr << ros_message.speed_mps;
  // Member: veh_spd_vld
  cdr << (ros_message.veh_spd_vld ? true : false);
  // Member: gear
  cdr << ros_message.gear;
  // Member: gear_vld
  cdr << (ros_message.gear_vld ? true : false);
  // Member: wheel_direction_rr
  cdr << ros_message.wheel_direction_rr;
  // Member: wheel_spd_rr
  cdr << ros_message.wheel_spd_rr;
  // Member: wheel_direction_rl
  cdr << ros_message.wheel_direction_rl;
  // Member: wheel_spd_rl
  cdr << ros_message.wheel_spd_rl;
  // Member: wheel_direction_fr
  cdr << ros_message.wheel_direction_fr;
  // Member: wheel_spd_fr
  cdr << ros_message.wheel_spd_fr;
  // Member: wheel_direction_fl
  cdr << ros_message.wheel_direction_fl;
  // Member: wheel_spd_fl
  cdr << ros_message.wheel_spd_fl;
  // Member: yaw_rate
  cdr << ros_message.yaw_rate;
  // Member: wss_fl_edges_sum
  cdr << ros_message.wss_fl_edges_sum;
  // Member: wss_fr_edges_sum
  cdr << ros_message.wss_fr_edges_sum;
  // Member: wss_rl_edges_sum
  cdr << ros_message.wss_rl_edges_sum;
  // Member: wss_rr_edges_sum
  cdr << ros_message.wss_rr_edges_sum;
  // Member: wss_fl_edges_sum_vld
  cdr << (ros_message.wss_fl_edges_sum_vld ? true : false);
  // Member: wss_fr_edges_sum_vld
  cdr << (ros_message.wss_fr_edges_sum_vld ? true : false);
  // Member: wss_rl_edges_sum_vld
  cdr << (ros_message.wss_rl_edges_sum_vld ? true : false);
  // Member: wss_rr_edges_sum_vld
  cdr << (ros_message.wss_rr_edges_sum_vld ? true : false);
  // Member: veh_lat_accel
  cdr << ros_message.veh_lat_accel;
  // Member: veh_lgt_accel
  cdr << ros_message.veh_lgt_accel;
  // Member: veh_lat_accel_vld
  cdr << (ros_message.veh_lat_accel_vld ? true : false);
  // Member: veh_lgt_accel_vld
  cdr << (ros_message.veh_lgt_accel_vld ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::WheelInfo & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: moving_status
  cdr >> ros_message.moving_status;

  // Member: steer_driving_mode
  cdr >> ros_message.steer_driving_mode;

  // Member: steering_value
  cdr >> ros_message.steering_value;

  // Member: steering_torque_nm
  cdr >> ros_message.steering_torque_nm;

  // Member: steering_rate_dps
  cdr >> ros_message.steering_rate_dps;

  // Member: speed_mps
  cdr >> ros_message.speed_mps;

  // Member: veh_spd_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.veh_spd_vld = tmp ? true : false;
  }

  // Member: gear
  cdr >> ros_message.gear;

  // Member: gear_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gear_vld = tmp ? true : false;
  }

  // Member: wheel_direction_rr
  cdr >> ros_message.wheel_direction_rr;

  // Member: wheel_spd_rr
  cdr >> ros_message.wheel_spd_rr;

  // Member: wheel_direction_rl
  cdr >> ros_message.wheel_direction_rl;

  // Member: wheel_spd_rl
  cdr >> ros_message.wheel_spd_rl;

  // Member: wheel_direction_fr
  cdr >> ros_message.wheel_direction_fr;

  // Member: wheel_spd_fr
  cdr >> ros_message.wheel_spd_fr;

  // Member: wheel_direction_fl
  cdr >> ros_message.wheel_direction_fl;

  // Member: wheel_spd_fl
  cdr >> ros_message.wheel_spd_fl;

  // Member: yaw_rate
  cdr >> ros_message.yaw_rate;

  // Member: wss_fl_edges_sum
  cdr >> ros_message.wss_fl_edges_sum;

  // Member: wss_fr_edges_sum
  cdr >> ros_message.wss_fr_edges_sum;

  // Member: wss_rl_edges_sum
  cdr >> ros_message.wss_rl_edges_sum;

  // Member: wss_rr_edges_sum
  cdr >> ros_message.wss_rr_edges_sum;

  // Member: wss_fl_edges_sum_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wss_fl_edges_sum_vld = tmp ? true : false;
  }

  // Member: wss_fr_edges_sum_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wss_fr_edges_sum_vld = tmp ? true : false;
  }

  // Member: wss_rl_edges_sum_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wss_rl_edges_sum_vld = tmp ? true : false;
  }

  // Member: wss_rr_edges_sum_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wss_rr_edges_sum_vld = tmp ? true : false;
  }

  // Member: veh_lat_accel
  cdr >> ros_message.veh_lat_accel;

  // Member: veh_lgt_accel
  cdr >> ros_message.veh_lgt_accel;

  // Member: veh_lat_accel_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.veh_lat_accel_vld = tmp ? true : false;
  }

  // Member: veh_lgt_accel_vld
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.veh_lgt_accel_vld = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::WheelInfo & ros_message,
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
  // Member: moving_status
  {
    size_t item_size = sizeof(ros_message.moving_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_driving_mode
  {
    size_t item_size = sizeof(ros_message.steer_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_value
  {
    size_t item_size = sizeof(ros_message.steering_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_torque_nm
  {
    size_t item_size = sizeof(ros_message.steering_torque_nm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_rate_dps
  {
    size_t item_size = sizeof(ros_message.steering_rate_dps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_mps
  {
    size_t item_size = sizeof(ros_message.speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_spd_vld
  {
    size_t item_size = sizeof(ros_message.veh_spd_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear
  {
    size_t item_size = sizeof(ros_message.gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_vld
  {
    size_t item_size = sizeof(ros_message.gear_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_direction_rr
  {
    size_t item_size = sizeof(ros_message.wheel_direction_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_spd_rr
  {
    size_t item_size = sizeof(ros_message.wheel_spd_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_direction_rl
  {
    size_t item_size = sizeof(ros_message.wheel_direction_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_spd_rl
  {
    size_t item_size = sizeof(ros_message.wheel_spd_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_direction_fr
  {
    size_t item_size = sizeof(ros_message.wheel_direction_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_spd_fr
  {
    size_t item_size = sizeof(ros_message.wheel_spd_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_direction_fl
  {
    size_t item_size = sizeof(ros_message.wheel_direction_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_spd_fl
  {
    size_t item_size = sizeof(ros_message.wheel_spd_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate
  {
    size_t item_size = sizeof(ros_message.yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wss_fl_edges_sum
  {
    size_t item_size = sizeof(ros_message.wss_fl_edges_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wss_fr_edges_sum
  {
    size_t item_size = sizeof(ros_message.wss_fr_edges_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wss_rl_edges_sum
  {
    size_t item_size = sizeof(ros_message.wss_rl_edges_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wss_rr_edges_sum
  {
    size_t item_size = sizeof(ros_message.wss_rr_edges_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wss_fl_edges_sum_vld
  {
    size_t item_size = sizeof(ros_message.wss_fl_edges_sum_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wss_fr_edges_sum_vld
  {
    size_t item_size = sizeof(ros_message.wss_fr_edges_sum_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wss_rl_edges_sum_vld
  {
    size_t item_size = sizeof(ros_message.wss_rl_edges_sum_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wss_rr_edges_sum_vld
  {
    size_t item_size = sizeof(ros_message.wss_rr_edges_sum_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_lat_accel
  {
    size_t item_size = sizeof(ros_message.veh_lat_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_lgt_accel
  {
    size_t item_size = sizeof(ros_message.veh_lgt_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_lat_accel_vld
  {
    size_t item_size = sizeof(ros_message.veh_lat_accel_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_lgt_accel_vld
  {
    size_t item_size = sizeof(ros_message.veh_lgt_accel_vld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_WheelInfo(
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

  // Member: moving_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steer_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steering_torque_nm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steering_rate_dps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: veh_spd_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wheel_direction_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_spd_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_direction_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_spd_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_direction_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_spd_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_direction_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_spd_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wss_fl_edges_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wss_fr_edges_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wss_rl_edges_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wss_rr_edges_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wss_fl_edges_sum_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wss_fr_edges_sum_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wss_rl_edges_sum_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wss_rr_edges_sum_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_lat_accel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: veh_lgt_accel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: veh_lat_accel_vld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_lgt_accel_vld
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
    using DataType = ros2_interface::msg::WheelInfo;
    is_plain =
      (
      offsetof(DataType, veh_lgt_accel_vld) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _WheelInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::WheelInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WheelInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::WheelInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WheelInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::WheelInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WheelInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WheelInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WheelInfo__callbacks = {
  "ros2_interface::msg",
  "WheelInfo",
  _WheelInfo__cdr_serialize,
  _WheelInfo__cdr_deserialize,
  _WheelInfo__get_serialized_size,
  _WheelInfo__max_serialized_size
};

static rosidl_message_type_support_t _WheelInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WheelInfo__callbacks,
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
get_message_type_support_handle<ros2_interface::msg::WheelInfo>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_WheelInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, WheelInfo)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_WheelInfo__handle;
}

#ifdef __cplusplus
}
#endif

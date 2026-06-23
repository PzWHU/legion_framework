// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/VehicleParam.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle_param__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_interface/msg/detail/vehicle_param__struct.hpp"

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
  const ros2_interface::msg::VehicleParam & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: brand
  cdr << ros_message.brand;
  // Member: steer_mode
  cdr << ros_message.steer_mode;
  // Member: length
  cdr << ros_message.length;
  // Member: width
  cdr << ros_message.width;
  // Member: height
  cdr << ros_message.height;
  // Member: mass_fl
  cdr << ros_message.mass_fl;
  // Member: mass_fr
  cdr << ros_message.mass_fr;
  // Member: mass_rl
  cdr << ros_message.mass_rl;
  // Member: mass_rr
  cdr << ros_message.mass_rr;
  // Member: wheel_radius
  cdr << ros_message.wheel_radius;
  // Member: wheelbase
  cdr << ros_message.wheelbase;
  // Member: front_edge_to_center
  cdr << ros_message.front_edge_to_center;
  // Member: back_edge_to_center
  cdr << ros_message.back_edge_to_center;
  // Member: lf
  cdr << ros_message.lf;
  // Member: lr
  cdr << ros_message.lr;
  // Member: cf
  cdr << ros_message.cf;
  // Member: cr
  cdr << ros_message.cr;
  // Member: steer_ratio
  cdr << ros_message.steer_ratio;
  // Member: rolling_coefficient
  cdr << ros_message.rolling_coefficient;
  // Member: air_density
  cdr << ros_message.air_density;
  // Member: air_damping_coefficient
  cdr << ros_message.air_damping_coefficient;
  // Member: max_front_steer_angle
  cdr << ros_message.max_front_steer_angle;
  // Member: min_front_steer_angle
  cdr << ros_message.min_front_steer_angle;
  // Member: max_rear_steer_angle
  cdr << ros_message.max_rear_steer_angle;
  // Member: min_rear_steer_angle
  cdr << ros_message.min_rear_steer_angle;
  // Member: speed_limit
  cdr << ros_message.speed_limit;
  // Member: max_brake_value
  cdr << ros_message.max_brake_value;
  // Member: min_brake_value
  cdr << ros_message.min_brake_value;
  // Member: max_accel_value
  cdr << ros_message.max_accel_value;
  // Member: min_accel_value
  cdr << ros_message.min_accel_value;
  // Member: speed_deadzone
  cdr << ros_message.speed_deadzone;
  // Member: standstill_acceleration
  cdr << ros_message.standstill_acceleration;
  // Member: max_front_steer_angle_rate
  cdr << ros_message.max_front_steer_angle_rate;
  // Member: max_rear_steer_angle_rate
  cdr << ros_message.max_rear_steer_angle_rate;
  // Member: max_abs_speed_when_stopped
  cdr << ros_message.max_abs_speed_when_stopped;
  // Member: max_abs_speed_when_stopped_duration
  cdr << ros_message.max_abs_speed_when_stopped_duration;
  // Member: brake_value_when_gear_transitioning
  cdr << ros_message.brake_value_when_gear_transitioning;
  // Member: accel_deadzone
  cdr << ros_message.accel_deadzone;
  // Member: brake_deadzone
  cdr << ros_message.brake_deadzone;
  // Member: acceleration_in_idle
  cdr << ros_message.acceleration_in_idle;
  // Member: deceleration_in_idle
  cdr << ros_message.deceleration_in_idle;
  // Member: max_acceleration_jerk
  cdr << ros_message.max_acceleration_jerk;
  // Member: max_acceleration
  cdr << ros_message.max_acceleration;
  // Member: max_deceleration
  cdr << ros_message.max_deceleration;
  // Member: min_turning_radius
  cdr << ros_message.min_turning_radius;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_interface::msg::VehicleParam & ros_message)
{
  // Member: brand
  cdr >> ros_message.brand;

  // Member: steer_mode
  cdr >> ros_message.steer_mode;

  // Member: length
  cdr >> ros_message.length;

  // Member: width
  cdr >> ros_message.width;

  // Member: height
  cdr >> ros_message.height;

  // Member: mass_fl
  cdr >> ros_message.mass_fl;

  // Member: mass_fr
  cdr >> ros_message.mass_fr;

  // Member: mass_rl
  cdr >> ros_message.mass_rl;

  // Member: mass_rr
  cdr >> ros_message.mass_rr;

  // Member: wheel_radius
  cdr >> ros_message.wheel_radius;

  // Member: wheelbase
  cdr >> ros_message.wheelbase;

  // Member: front_edge_to_center
  cdr >> ros_message.front_edge_to_center;

  // Member: back_edge_to_center
  cdr >> ros_message.back_edge_to_center;

  // Member: lf
  cdr >> ros_message.lf;

  // Member: lr
  cdr >> ros_message.lr;

  // Member: cf
  cdr >> ros_message.cf;

  // Member: cr
  cdr >> ros_message.cr;

  // Member: steer_ratio
  cdr >> ros_message.steer_ratio;

  // Member: rolling_coefficient
  cdr >> ros_message.rolling_coefficient;

  // Member: air_density
  cdr >> ros_message.air_density;

  // Member: air_damping_coefficient
  cdr >> ros_message.air_damping_coefficient;

  // Member: max_front_steer_angle
  cdr >> ros_message.max_front_steer_angle;

  // Member: min_front_steer_angle
  cdr >> ros_message.min_front_steer_angle;

  // Member: max_rear_steer_angle
  cdr >> ros_message.max_rear_steer_angle;

  // Member: min_rear_steer_angle
  cdr >> ros_message.min_rear_steer_angle;

  // Member: speed_limit
  cdr >> ros_message.speed_limit;

  // Member: max_brake_value
  cdr >> ros_message.max_brake_value;

  // Member: min_brake_value
  cdr >> ros_message.min_brake_value;

  // Member: max_accel_value
  cdr >> ros_message.max_accel_value;

  // Member: min_accel_value
  cdr >> ros_message.min_accel_value;

  // Member: speed_deadzone
  cdr >> ros_message.speed_deadzone;

  // Member: standstill_acceleration
  cdr >> ros_message.standstill_acceleration;

  // Member: max_front_steer_angle_rate
  cdr >> ros_message.max_front_steer_angle_rate;

  // Member: max_rear_steer_angle_rate
  cdr >> ros_message.max_rear_steer_angle_rate;

  // Member: max_abs_speed_when_stopped
  cdr >> ros_message.max_abs_speed_when_stopped;

  // Member: max_abs_speed_when_stopped_duration
  cdr >> ros_message.max_abs_speed_when_stopped_duration;

  // Member: brake_value_when_gear_transitioning
  cdr >> ros_message.brake_value_when_gear_transitioning;

  // Member: accel_deadzone
  cdr >> ros_message.accel_deadzone;

  // Member: brake_deadzone
  cdr >> ros_message.brake_deadzone;

  // Member: acceleration_in_idle
  cdr >> ros_message.acceleration_in_idle;

  // Member: deceleration_in_idle
  cdr >> ros_message.deceleration_in_idle;

  // Member: max_acceleration_jerk
  cdr >> ros_message.max_acceleration_jerk;

  // Member: max_acceleration
  cdr >> ros_message.max_acceleration;

  // Member: max_deceleration
  cdr >> ros_message.max_deceleration;

  // Member: min_turning_radius
  cdr >> ros_message.min_turning_radius;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
get_serialized_size(
  const ros2_interface::msg::VehicleParam & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: brand
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.brand.size() + 1);
  // Member: steer_mode
  {
    size_t item_size = sizeof(ros_message.steer_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: width
  {
    size_t item_size = sizeof(ros_message.width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height
  {
    size_t item_size = sizeof(ros_message.height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mass_fl
  {
    size_t item_size = sizeof(ros_message.mass_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mass_fr
  {
    size_t item_size = sizeof(ros_message.mass_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mass_rl
  {
    size_t item_size = sizeof(ros_message.mass_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mass_rr
  {
    size_t item_size = sizeof(ros_message.mass_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_radius
  {
    size_t item_size = sizeof(ros_message.wheel_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheelbase
  {
    size_t item_size = sizeof(ros_message.wheelbase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_edge_to_center
  {
    size_t item_size = sizeof(ros_message.front_edge_to_center);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: back_edge_to_center
  {
    size_t item_size = sizeof(ros_message.back_edge_to_center);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lf
  {
    size_t item_size = sizeof(ros_message.lf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lr
  {
    size_t item_size = sizeof(ros_message.lr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cf
  {
    size_t item_size = sizeof(ros_message.cf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cr
  {
    size_t item_size = sizeof(ros_message.cr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_ratio
  {
    size_t item_size = sizeof(ros_message.steer_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rolling_coefficient
  {
    size_t item_size = sizeof(ros_message.rolling_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: air_density
  {
    size_t item_size = sizeof(ros_message.air_density);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: air_damping_coefficient
  {
    size_t item_size = sizeof(ros_message.air_damping_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_front_steer_angle
  {
    size_t item_size = sizeof(ros_message.max_front_steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_front_steer_angle
  {
    size_t item_size = sizeof(ros_message.min_front_steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_rear_steer_angle
  {
    size_t item_size = sizeof(ros_message.max_rear_steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_rear_steer_angle
  {
    size_t item_size = sizeof(ros_message.min_rear_steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limit
  {
    size_t item_size = sizeof(ros_message.speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_brake_value
  {
    size_t item_size = sizeof(ros_message.max_brake_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_brake_value
  {
    size_t item_size = sizeof(ros_message.min_brake_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_accel_value
  {
    size_t item_size = sizeof(ros_message.max_accel_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_accel_value
  {
    size_t item_size = sizeof(ros_message.min_accel_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_deadzone
  {
    size_t item_size = sizeof(ros_message.speed_deadzone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: standstill_acceleration
  {
    size_t item_size = sizeof(ros_message.standstill_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_front_steer_angle_rate
  {
    size_t item_size = sizeof(ros_message.max_front_steer_angle_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_rear_steer_angle_rate
  {
    size_t item_size = sizeof(ros_message.max_rear_steer_angle_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_abs_speed_when_stopped
  {
    size_t item_size = sizeof(ros_message.max_abs_speed_when_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_abs_speed_when_stopped_duration
  {
    size_t item_size = sizeof(ros_message.max_abs_speed_when_stopped_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_value_when_gear_transitioning
  {
    size_t item_size = sizeof(ros_message.brake_value_when_gear_transitioning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_deadzone
  {
    size_t item_size = sizeof(ros_message.accel_deadzone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_deadzone
  {
    size_t item_size = sizeof(ros_message.brake_deadzone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acceleration_in_idle
  {
    size_t item_size = sizeof(ros_message.acceleration_in_idle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: deceleration_in_idle
  {
    size_t item_size = sizeof(ros_message.deceleration_in_idle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_acceleration_jerk
  {
    size_t item_size = sizeof(ros_message.max_acceleration_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_acceleration
  {
    size_t item_size = sizeof(ros_message.max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_deceleration
  {
    size_t item_size = sizeof(ros_message.max_deceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_turning_radius
  {
    size_t item_size = sizeof(ros_message.min_turning_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_interface
max_serialized_size_VehicleParam(
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


  // Member: brand
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

  // Member: steer_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mass_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mass_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mass_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mass_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheelbase
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_edge_to_center
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: back_edge_to_center
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steer_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rolling_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: air_density
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: air_damping_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_front_steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_front_steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_rear_steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_rear_steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_brake_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_brake_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_accel_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_accel_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_deadzone
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: standstill_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_front_steer_angle_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_rear_steer_angle_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_abs_speed_when_stopped
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_abs_speed_when_stopped_duration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_value_when_gear_transitioning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: accel_deadzone
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_deadzone
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acceleration_in_idle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: deceleration_in_idle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_acceleration_jerk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_deceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_turning_radius
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
    using DataType = ros2_interface::msg::VehicleParam;
    is_plain =
      (
      offsetof(DataType, min_turning_radius) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VehicleParam__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::VehicleParam *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleParam__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_interface::msg::VehicleParam *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleParam__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_interface::msg::VehicleParam *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleParam__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleParam(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleParam__callbacks = {
  "ros2_interface::msg",
  "VehicleParam",
  _VehicleParam__cdr_serialize,
  _VehicleParam__cdr_deserialize,
  _VehicleParam__get_serialized_size,
  _VehicleParam__max_serialized_size
};

static rosidl_message_type_support_t _VehicleParam__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleParam__callbacks,
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
get_message_type_support_handle<ros2_interface::msg::VehicleParam>()
{
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_VehicleParam__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_interface, msg, VehicleParam)() {
  return &ros2_interface::msg::typesupport_fastrtps_cpp::_VehicleParam__handle;
}

#ifdef __cplusplus
}
#endif

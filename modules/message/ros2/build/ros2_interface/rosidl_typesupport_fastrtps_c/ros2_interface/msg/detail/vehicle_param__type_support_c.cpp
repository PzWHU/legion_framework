// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/VehicleParam.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle_param__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/vehicle_param__struct.h"
#include "ros2_interface/msg/detail/vehicle_param__functions.h"
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

#include "rosidl_runtime_c/string.h"  // brand
#include "rosidl_runtime_c/string_functions.h"  // brand

// forward declare type support functions


using _VehicleParam__ros_msg_type = ros2_interface__msg__VehicleParam;

static bool _VehicleParam__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleParam__ros_msg_type * ros_message = static_cast<const _VehicleParam__ros_msg_type *>(untyped_ros_message);
  // Field name: brand
  {
    const rosidl_runtime_c__String * str = &ros_message->brand;
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

  // Field name: steer_mode
  {
    cdr << ros_message->steer_mode;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: width
  {
    cdr << ros_message->width;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: mass_fl
  {
    cdr << ros_message->mass_fl;
  }

  // Field name: mass_fr
  {
    cdr << ros_message->mass_fr;
  }

  // Field name: mass_rl
  {
    cdr << ros_message->mass_rl;
  }

  // Field name: mass_rr
  {
    cdr << ros_message->mass_rr;
  }

  // Field name: wheel_radius
  {
    cdr << ros_message->wheel_radius;
  }

  // Field name: wheelbase
  {
    cdr << ros_message->wheelbase;
  }

  // Field name: front_edge_to_center
  {
    cdr << ros_message->front_edge_to_center;
  }

  // Field name: back_edge_to_center
  {
    cdr << ros_message->back_edge_to_center;
  }

  // Field name: lf
  {
    cdr << ros_message->lf;
  }

  // Field name: lr
  {
    cdr << ros_message->lr;
  }

  // Field name: cf
  {
    cdr << ros_message->cf;
  }

  // Field name: cr
  {
    cdr << ros_message->cr;
  }

  // Field name: steer_ratio
  {
    cdr << ros_message->steer_ratio;
  }

  // Field name: rolling_coefficient
  {
    cdr << ros_message->rolling_coefficient;
  }

  // Field name: air_density
  {
    cdr << ros_message->air_density;
  }

  // Field name: air_damping_coefficient
  {
    cdr << ros_message->air_damping_coefficient;
  }

  // Field name: max_front_steer_angle
  {
    cdr << ros_message->max_front_steer_angle;
  }

  // Field name: min_front_steer_angle
  {
    cdr << ros_message->min_front_steer_angle;
  }

  // Field name: max_rear_steer_angle
  {
    cdr << ros_message->max_rear_steer_angle;
  }

  // Field name: min_rear_steer_angle
  {
    cdr << ros_message->min_rear_steer_angle;
  }

  // Field name: speed_limit
  {
    cdr << ros_message->speed_limit;
  }

  // Field name: max_brake_value
  {
    cdr << ros_message->max_brake_value;
  }

  // Field name: min_brake_value
  {
    cdr << ros_message->min_brake_value;
  }

  // Field name: max_accel_value
  {
    cdr << ros_message->max_accel_value;
  }

  // Field name: min_accel_value
  {
    cdr << ros_message->min_accel_value;
  }

  // Field name: speed_deadzone
  {
    cdr << ros_message->speed_deadzone;
  }

  // Field name: standstill_acceleration
  {
    cdr << ros_message->standstill_acceleration;
  }

  // Field name: max_front_steer_angle_rate
  {
    cdr << ros_message->max_front_steer_angle_rate;
  }

  // Field name: max_rear_steer_angle_rate
  {
    cdr << ros_message->max_rear_steer_angle_rate;
  }

  // Field name: max_abs_speed_when_stopped
  {
    cdr << ros_message->max_abs_speed_when_stopped;
  }

  // Field name: max_abs_speed_when_stopped_duration
  {
    cdr << ros_message->max_abs_speed_when_stopped_duration;
  }

  // Field name: brake_value_when_gear_transitioning
  {
    cdr << ros_message->brake_value_when_gear_transitioning;
  }

  // Field name: accel_deadzone
  {
    cdr << ros_message->accel_deadzone;
  }

  // Field name: brake_deadzone
  {
    cdr << ros_message->brake_deadzone;
  }

  // Field name: acceleration_in_idle
  {
    cdr << ros_message->acceleration_in_idle;
  }

  // Field name: deceleration_in_idle
  {
    cdr << ros_message->deceleration_in_idle;
  }

  // Field name: max_acceleration_jerk
  {
    cdr << ros_message->max_acceleration_jerk;
  }

  // Field name: max_acceleration
  {
    cdr << ros_message->max_acceleration;
  }

  // Field name: max_deceleration
  {
    cdr << ros_message->max_deceleration;
  }

  // Field name: min_turning_radius
  {
    cdr << ros_message->min_turning_radius;
  }

  return true;
}

static bool _VehicleParam__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleParam__ros_msg_type * ros_message = static_cast<_VehicleParam__ros_msg_type *>(untyped_ros_message);
  // Field name: brand
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->brand.data) {
      rosidl_runtime_c__String__init(&ros_message->brand);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->brand,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'brand'\n");
      return false;
    }
  }

  // Field name: steer_mode
  {
    cdr >> ros_message->steer_mode;
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: width
  {
    cdr >> ros_message->width;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: mass_fl
  {
    cdr >> ros_message->mass_fl;
  }

  // Field name: mass_fr
  {
    cdr >> ros_message->mass_fr;
  }

  // Field name: mass_rl
  {
    cdr >> ros_message->mass_rl;
  }

  // Field name: mass_rr
  {
    cdr >> ros_message->mass_rr;
  }

  // Field name: wheel_radius
  {
    cdr >> ros_message->wheel_radius;
  }

  // Field name: wheelbase
  {
    cdr >> ros_message->wheelbase;
  }

  // Field name: front_edge_to_center
  {
    cdr >> ros_message->front_edge_to_center;
  }

  // Field name: back_edge_to_center
  {
    cdr >> ros_message->back_edge_to_center;
  }

  // Field name: lf
  {
    cdr >> ros_message->lf;
  }

  // Field name: lr
  {
    cdr >> ros_message->lr;
  }

  // Field name: cf
  {
    cdr >> ros_message->cf;
  }

  // Field name: cr
  {
    cdr >> ros_message->cr;
  }

  // Field name: steer_ratio
  {
    cdr >> ros_message->steer_ratio;
  }

  // Field name: rolling_coefficient
  {
    cdr >> ros_message->rolling_coefficient;
  }

  // Field name: air_density
  {
    cdr >> ros_message->air_density;
  }

  // Field name: air_damping_coefficient
  {
    cdr >> ros_message->air_damping_coefficient;
  }

  // Field name: max_front_steer_angle
  {
    cdr >> ros_message->max_front_steer_angle;
  }

  // Field name: min_front_steer_angle
  {
    cdr >> ros_message->min_front_steer_angle;
  }

  // Field name: max_rear_steer_angle
  {
    cdr >> ros_message->max_rear_steer_angle;
  }

  // Field name: min_rear_steer_angle
  {
    cdr >> ros_message->min_rear_steer_angle;
  }

  // Field name: speed_limit
  {
    cdr >> ros_message->speed_limit;
  }

  // Field name: max_brake_value
  {
    cdr >> ros_message->max_brake_value;
  }

  // Field name: min_brake_value
  {
    cdr >> ros_message->min_brake_value;
  }

  // Field name: max_accel_value
  {
    cdr >> ros_message->max_accel_value;
  }

  // Field name: min_accel_value
  {
    cdr >> ros_message->min_accel_value;
  }

  // Field name: speed_deadzone
  {
    cdr >> ros_message->speed_deadzone;
  }

  // Field name: standstill_acceleration
  {
    cdr >> ros_message->standstill_acceleration;
  }

  // Field name: max_front_steer_angle_rate
  {
    cdr >> ros_message->max_front_steer_angle_rate;
  }

  // Field name: max_rear_steer_angle_rate
  {
    cdr >> ros_message->max_rear_steer_angle_rate;
  }

  // Field name: max_abs_speed_when_stopped
  {
    cdr >> ros_message->max_abs_speed_when_stopped;
  }

  // Field name: max_abs_speed_when_stopped_duration
  {
    cdr >> ros_message->max_abs_speed_when_stopped_duration;
  }

  // Field name: brake_value_when_gear_transitioning
  {
    cdr >> ros_message->brake_value_when_gear_transitioning;
  }

  // Field name: accel_deadzone
  {
    cdr >> ros_message->accel_deadzone;
  }

  // Field name: brake_deadzone
  {
    cdr >> ros_message->brake_deadzone;
  }

  // Field name: acceleration_in_idle
  {
    cdr >> ros_message->acceleration_in_idle;
  }

  // Field name: deceleration_in_idle
  {
    cdr >> ros_message->deceleration_in_idle;
  }

  // Field name: max_acceleration_jerk
  {
    cdr >> ros_message->max_acceleration_jerk;
  }

  // Field name: max_acceleration
  {
    cdr >> ros_message->max_acceleration;
  }

  // Field name: max_deceleration
  {
    cdr >> ros_message->max_deceleration;
  }

  // Field name: min_turning_radius
  {
    cdr >> ros_message->min_turning_radius;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__VehicleParam(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleParam__ros_msg_type * ros_message = static_cast<const _VehicleParam__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name brand
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->brand.size + 1);
  // field.name steer_mode
  {
    size_t item_size = sizeof(ros_message->steer_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mass_fl
  {
    size_t item_size = sizeof(ros_message->mass_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mass_fr
  {
    size_t item_size = sizeof(ros_message->mass_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mass_rl
  {
    size_t item_size = sizeof(ros_message->mass_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mass_rr
  {
    size_t item_size = sizeof(ros_message->mass_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_radius
  {
    size_t item_size = sizeof(ros_message->wheel_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelbase
  {
    size_t item_size = sizeof(ros_message->wheelbase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_edge_to_center
  {
    size_t item_size = sizeof(ros_message->front_edge_to_center);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name back_edge_to_center
  {
    size_t item_size = sizeof(ros_message->back_edge_to_center);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lf
  {
    size_t item_size = sizeof(ros_message->lf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lr
  {
    size_t item_size = sizeof(ros_message->lr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cf
  {
    size_t item_size = sizeof(ros_message->cf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cr
  {
    size_t item_size = sizeof(ros_message->cr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_ratio
  {
    size_t item_size = sizeof(ros_message->steer_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rolling_coefficient
  {
    size_t item_size = sizeof(ros_message->rolling_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name air_density
  {
    size_t item_size = sizeof(ros_message->air_density);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name air_damping_coefficient
  {
    size_t item_size = sizeof(ros_message->air_damping_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_front_steer_angle
  {
    size_t item_size = sizeof(ros_message->max_front_steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_front_steer_angle
  {
    size_t item_size = sizeof(ros_message->min_front_steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_rear_steer_angle
  {
    size_t item_size = sizeof(ros_message->max_rear_steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_rear_steer_angle
  {
    size_t item_size = sizeof(ros_message->min_rear_steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_limit
  {
    size_t item_size = sizeof(ros_message->speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_brake_value
  {
    size_t item_size = sizeof(ros_message->max_brake_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_brake_value
  {
    size_t item_size = sizeof(ros_message->min_brake_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_accel_value
  {
    size_t item_size = sizeof(ros_message->max_accel_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_accel_value
  {
    size_t item_size = sizeof(ros_message->min_accel_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_deadzone
  {
    size_t item_size = sizeof(ros_message->speed_deadzone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name standstill_acceleration
  {
    size_t item_size = sizeof(ros_message->standstill_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_front_steer_angle_rate
  {
    size_t item_size = sizeof(ros_message->max_front_steer_angle_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_rear_steer_angle_rate
  {
    size_t item_size = sizeof(ros_message->max_rear_steer_angle_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_abs_speed_when_stopped
  {
    size_t item_size = sizeof(ros_message->max_abs_speed_when_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_abs_speed_when_stopped_duration
  {
    size_t item_size = sizeof(ros_message->max_abs_speed_when_stopped_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_value_when_gear_transitioning
  {
    size_t item_size = sizeof(ros_message->brake_value_when_gear_transitioning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_deadzone
  {
    size_t item_size = sizeof(ros_message->accel_deadzone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_deadzone
  {
    size_t item_size = sizeof(ros_message->brake_deadzone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_in_idle
  {
    size_t item_size = sizeof(ros_message->acceleration_in_idle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deceleration_in_idle
  {
    size_t item_size = sizeof(ros_message->deceleration_in_idle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_acceleration_jerk
  {
    size_t item_size = sizeof(ros_message->max_acceleration_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_acceleration
  {
    size_t item_size = sizeof(ros_message->max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_deceleration
  {
    size_t item_size = sizeof(ros_message->max_deceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_turning_radius
  {
    size_t item_size = sizeof(ros_message->min_turning_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleParam__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__VehicleParam(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__VehicleParam(
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

  // member: brand
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
  // member: steer_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mass_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mass_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mass_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mass_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheel_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheelbase
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_edge_to_center
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: back_edge_to_center
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steer_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rolling_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: air_density
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: air_damping_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_front_steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: min_front_steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_rear_steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: min_rear_steer_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_brake_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: min_brake_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_accel_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: min_accel_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_deadzone
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: standstill_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_front_steer_angle_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_rear_steer_angle_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_abs_speed_when_stopped
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_abs_speed_when_stopped_duration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_value_when_gear_transitioning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: accel_deadzone
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_deadzone
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acceleration_in_idle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: deceleration_in_idle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_acceleration_jerk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_deceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: min_turning_radius
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
    using DataType = ros2_interface__msg__VehicleParam;
    is_plain =
      (
      offsetof(DataType, min_turning_radius) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleParam__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__VehicleParam(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleParam = {
  "ros2_interface::msg",
  "VehicleParam",
  _VehicleParam__cdr_serialize,
  _VehicleParam__cdr_deserialize,
  _VehicleParam__get_serialized_size,
  _VehicleParam__max_serialized_size
};

static rosidl_message_type_support_t _VehicleParam__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleParam,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, VehicleParam)() {
  return &_VehicleParam__type_support;
}

#if defined(__cplusplus)
}
#endif

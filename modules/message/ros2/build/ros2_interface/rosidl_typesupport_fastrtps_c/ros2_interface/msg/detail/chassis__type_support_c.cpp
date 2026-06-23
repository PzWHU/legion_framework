// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/Chassis.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/chassis__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/chassis__struct.h"
#include "ros2_interface/msg/detail/chassis__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // chassis_error_code
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // chassis_error_code
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


using _Chassis__ros_msg_type = ros2_interface__msg__Chassis;

static bool _Chassis__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Chassis__ros_msg_type * ros_message = static_cast<const _Chassis__ros_msg_type *>(untyped_ros_message);
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

  // Field name: driving_mode
  {
    cdr << ros_message->driving_mode;
  }

  // Field name: steer_driving_mode
  {
    cdr << ros_message->steer_driving_mode;
  }

  // Field name: steering_status
  {
    cdr << ros_message->steering_status;
  }

  // Field name: front_steering_value
  {
    cdr << ros_message->front_steering_value;
  }

  // Field name: rear_steering_value
  {
    cdr << ros_message->rear_steering_value;
  }

  // Field name: steering_torque_nm
  {
    cdr << ros_message->steering_torque_nm;
  }

  // Field name: front_steering_rate_dps
  {
    cdr << ros_message->front_steering_rate_dps;
  }

  // Field name: rear_steering_rate_dps
  {
    cdr << ros_message->rear_steering_rate_dps;
  }

  // Field name: accel_driving_mode
  {
    cdr << ros_message->accel_driving_mode;
  }

  // Field name: accel_status
  {
    cdr << ros_message->accel_status;
  }

  // Field name: accel_value
  {
    cdr << ros_message->accel_value;
  }

  // Field name: brake_driving_mode
  {
    cdr << ros_message->brake_driving_mode;
  }

  // Field name: brake_status
  {
    cdr << ros_message->brake_status;
  }

  // Field name: brake_value
  {
    cdr << ros_message->brake_value;
  }

  // Field name: backup_brake_driving_mode
  {
    cdr << ros_message->backup_brake_driving_mode;
  }

  // Field name: backup_brake_status
  {
    cdr << ros_message->backup_brake_status;
  }

  // Field name: backup_brake_value
  {
    cdr << ros_message->backup_brake_value;
  }

  // Field name: epb_driving_mode
  {
    cdr << ros_message->epb_driving_mode;
  }

  // Field name: epb_status
  {
    cdr << ros_message->epb_status;
  }

  // Field name: epb_level
  {
    cdr << ros_message->epb_level;
  }

  // Field name: engine_status
  {
    cdr << ros_message->engine_status;
  }

  // Field name: engine_rpm
  {
    cdr << ros_message->engine_rpm;
  }

  // Field name: engine_torque
  {
    cdr << ros_message->engine_torque;
  }

  // Field name: speed_mps
  {
    cdr << ros_message->speed_mps;
  }

  // Field name: odometer_m
  {
    cdr << ros_message->odometer_m;
  }

  // Field name: fuel_range_m
  {
    cdr << ros_message->fuel_range_m;
  }

  // Field name: gear_driving_mode
  {
    cdr << ros_message->gear_driving_mode;
  }

  // Field name: gear_status
  {
    cdr << ros_message->gear_status;
  }

  // Field name: gear_location
  {
    cdr << ros_message->gear_location;
  }

  // Field name: driver_seat_belt
  {
    cdr << ros_message->driver_seat_belt;
  }

  // Field name: high_beam_status
  {
    cdr << ros_message->high_beam_status;
  }

  // Field name: low_beam_status
  {
    cdr << ros_message->low_beam_status;
  }

  // Field name: horn_status
  {
    cdr << ros_message->horn_status;
  }

  // Field name: turn_lamp_status
  {
    cdr << ros_message->turn_lamp_status;
  }

  // Field name: front_wiper_status
  {
    cdr << ros_message->front_wiper_status;
  }

  // Field name: rear_wiper_status
  {
    cdr << ros_message->rear_wiper_status;
  }

  // Field name: position_lamp_status
  {
    cdr << ros_message->position_lamp_status;
  }

  // Field name: front_fog_lamp_status
  {
    cdr << ros_message->front_fog_lamp_status;
  }

  // Field name: rear_fog_lamp_status
  {
    cdr << ros_message->rear_fog_lamp_status;
  }

  // Field name: brake_lamp_status
  {
    cdr << ros_message->brake_lamp_status;
  }

  // Field name: alarm_lamp_status
  {
    cdr << ros_message->alarm_lamp_status;
  }

  // Field name: lf_door_status
  {
    cdr << ros_message->lf_door_status;
  }

  // Field name: rf_door_status
  {
    cdr << ros_message->rf_door_status;
  }

  // Field name: lr_door_status
  {
    cdr << ros_message->lr_door_status;
  }

  // Field name: rr_door_status
  {
    cdr << ros_message->rr_door_status;
  }

  // Field name: rearview_mirror_status
  {
    cdr << ros_message->rearview_mirror_status;
  }

  // Field name: trunk_status
  {
    cdr << ros_message->trunk_status;
  }

  // Field name: engine_bay_door_status
  {
    cdr << ros_message->engine_bay_door_status;
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

  // Field name: is_tire_pressure_ok
  {
    cdr << ros_message->is_tire_pressure_ok;
  }

  // Field name: is_tire_pressure_lf_valid
  {
    cdr << ros_message->is_tire_pressure_lf_valid;
  }

  // Field name: tire_pressure_lf
  {
    cdr << ros_message->tire_pressure_lf;
  }

  // Field name: is_tire_pressure_rf_valid
  {
    cdr << ros_message->is_tire_pressure_rf_valid;
  }

  // Field name: tire_pressure_rf
  {
    cdr << ros_message->tire_pressure_rf;
  }

  // Field name: is_tire_pressure_lr_valid
  {
    cdr << ros_message->is_tire_pressure_lr_valid;
  }

  // Field name: tire_pressure_lr
  {
    cdr << ros_message->tire_pressure_lr;
  }

  // Field name: is_tire_pressure_rr_valid
  {
    cdr << ros_message->is_tire_pressure_rr_valid;
  }

  // Field name: tire_pressure_rr
  {
    cdr << ros_message->tire_pressure_rr;
  }

  // Field name: battery_power_percentage
  {
    cdr << ros_message->battery_power_percentage;
  }

  // Field name: air_bag_status
  {
    cdr << ros_message->air_bag_status;
  }

  // Field name: charging_gun_status
  {
    cdr << ros_message->charging_gun_status;
  }

  // Field name: vehicle_power_status
  {
    cdr << ros_message->vehicle_power_status;
  }

  // Field name: chassis_error_code
  {
    size_t size = ros_message->chassis_error_code.size;
    auto array_ptr = ros_message->chassis_error_code.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Chassis__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Chassis__ros_msg_type * ros_message = static_cast<_Chassis__ros_msg_type *>(untyped_ros_message);
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

  // Field name: driving_mode
  {
    cdr >> ros_message->driving_mode;
  }

  // Field name: steer_driving_mode
  {
    cdr >> ros_message->steer_driving_mode;
  }

  // Field name: steering_status
  {
    cdr >> ros_message->steering_status;
  }

  // Field name: front_steering_value
  {
    cdr >> ros_message->front_steering_value;
  }

  // Field name: rear_steering_value
  {
    cdr >> ros_message->rear_steering_value;
  }

  // Field name: steering_torque_nm
  {
    cdr >> ros_message->steering_torque_nm;
  }

  // Field name: front_steering_rate_dps
  {
    cdr >> ros_message->front_steering_rate_dps;
  }

  // Field name: rear_steering_rate_dps
  {
    cdr >> ros_message->rear_steering_rate_dps;
  }

  // Field name: accel_driving_mode
  {
    cdr >> ros_message->accel_driving_mode;
  }

  // Field name: accel_status
  {
    cdr >> ros_message->accel_status;
  }

  // Field name: accel_value
  {
    cdr >> ros_message->accel_value;
  }

  // Field name: brake_driving_mode
  {
    cdr >> ros_message->brake_driving_mode;
  }

  // Field name: brake_status
  {
    cdr >> ros_message->brake_status;
  }

  // Field name: brake_value
  {
    cdr >> ros_message->brake_value;
  }

  // Field name: backup_brake_driving_mode
  {
    cdr >> ros_message->backup_brake_driving_mode;
  }

  // Field name: backup_brake_status
  {
    cdr >> ros_message->backup_brake_status;
  }

  // Field name: backup_brake_value
  {
    cdr >> ros_message->backup_brake_value;
  }

  // Field name: epb_driving_mode
  {
    cdr >> ros_message->epb_driving_mode;
  }

  // Field name: epb_status
  {
    cdr >> ros_message->epb_status;
  }

  // Field name: epb_level
  {
    cdr >> ros_message->epb_level;
  }

  // Field name: engine_status
  {
    cdr >> ros_message->engine_status;
  }

  // Field name: engine_rpm
  {
    cdr >> ros_message->engine_rpm;
  }

  // Field name: engine_torque
  {
    cdr >> ros_message->engine_torque;
  }

  // Field name: speed_mps
  {
    cdr >> ros_message->speed_mps;
  }

  // Field name: odometer_m
  {
    cdr >> ros_message->odometer_m;
  }

  // Field name: fuel_range_m
  {
    cdr >> ros_message->fuel_range_m;
  }

  // Field name: gear_driving_mode
  {
    cdr >> ros_message->gear_driving_mode;
  }

  // Field name: gear_status
  {
    cdr >> ros_message->gear_status;
  }

  // Field name: gear_location
  {
    cdr >> ros_message->gear_location;
  }

  // Field name: driver_seat_belt
  {
    cdr >> ros_message->driver_seat_belt;
  }

  // Field name: high_beam_status
  {
    cdr >> ros_message->high_beam_status;
  }

  // Field name: low_beam_status
  {
    cdr >> ros_message->low_beam_status;
  }

  // Field name: horn_status
  {
    cdr >> ros_message->horn_status;
  }

  // Field name: turn_lamp_status
  {
    cdr >> ros_message->turn_lamp_status;
  }

  // Field name: front_wiper_status
  {
    cdr >> ros_message->front_wiper_status;
  }

  // Field name: rear_wiper_status
  {
    cdr >> ros_message->rear_wiper_status;
  }

  // Field name: position_lamp_status
  {
    cdr >> ros_message->position_lamp_status;
  }

  // Field name: front_fog_lamp_status
  {
    cdr >> ros_message->front_fog_lamp_status;
  }

  // Field name: rear_fog_lamp_status
  {
    cdr >> ros_message->rear_fog_lamp_status;
  }

  // Field name: brake_lamp_status
  {
    cdr >> ros_message->brake_lamp_status;
  }

  // Field name: alarm_lamp_status
  {
    cdr >> ros_message->alarm_lamp_status;
  }

  // Field name: lf_door_status
  {
    cdr >> ros_message->lf_door_status;
  }

  // Field name: rf_door_status
  {
    cdr >> ros_message->rf_door_status;
  }

  // Field name: lr_door_status
  {
    cdr >> ros_message->lr_door_status;
  }

  // Field name: rr_door_status
  {
    cdr >> ros_message->rr_door_status;
  }

  // Field name: rearview_mirror_status
  {
    cdr >> ros_message->rearview_mirror_status;
  }

  // Field name: trunk_status
  {
    cdr >> ros_message->trunk_status;
  }

  // Field name: engine_bay_door_status
  {
    cdr >> ros_message->engine_bay_door_status;
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

  // Field name: is_tire_pressure_ok
  {
    cdr >> ros_message->is_tire_pressure_ok;
  }

  // Field name: is_tire_pressure_lf_valid
  {
    cdr >> ros_message->is_tire_pressure_lf_valid;
  }

  // Field name: tire_pressure_lf
  {
    cdr >> ros_message->tire_pressure_lf;
  }

  // Field name: is_tire_pressure_rf_valid
  {
    cdr >> ros_message->is_tire_pressure_rf_valid;
  }

  // Field name: tire_pressure_rf
  {
    cdr >> ros_message->tire_pressure_rf;
  }

  // Field name: is_tire_pressure_lr_valid
  {
    cdr >> ros_message->is_tire_pressure_lr_valid;
  }

  // Field name: tire_pressure_lr
  {
    cdr >> ros_message->tire_pressure_lr;
  }

  // Field name: is_tire_pressure_rr_valid
  {
    cdr >> ros_message->is_tire_pressure_rr_valid;
  }

  // Field name: tire_pressure_rr
  {
    cdr >> ros_message->tire_pressure_rr;
  }

  // Field name: battery_power_percentage
  {
    cdr >> ros_message->battery_power_percentage;
  }

  // Field name: air_bag_status
  {
    cdr >> ros_message->air_bag_status;
  }

  // Field name: charging_gun_status
  {
    cdr >> ros_message->charging_gun_status;
  }

  // Field name: vehicle_power_status
  {
    cdr >> ros_message->vehicle_power_status;
  }

  // Field name: chassis_error_code
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

    if (ros_message->chassis_error_code.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->chassis_error_code);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->chassis_error_code, size)) {
      fprintf(stderr, "failed to create array for field 'chassis_error_code'");
      return false;
    }
    auto array_ptr = ros_message->chassis_error_code.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__Chassis(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Chassis__ros_msg_type * ros_message = static_cast<const _Chassis__ros_msg_type *>(untyped_ros_message);
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
  // field.name driving_mode
  {
    size_t item_size = sizeof(ros_message->driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_driving_mode
  {
    size_t item_size = sizeof(ros_message->steer_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_status
  {
    size_t item_size = sizeof(ros_message->steering_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steering_value
  {
    size_t item_size = sizeof(ros_message->front_steering_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steering_value
  {
    size_t item_size = sizeof(ros_message->rear_steering_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_torque_nm
  {
    size_t item_size = sizeof(ros_message->steering_torque_nm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_steering_rate_dps
  {
    size_t item_size = sizeof(ros_message->front_steering_rate_dps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_steering_rate_dps
  {
    size_t item_size = sizeof(ros_message->rear_steering_rate_dps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_driving_mode
  {
    size_t item_size = sizeof(ros_message->accel_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_status
  {
    size_t item_size = sizeof(ros_message->accel_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_value
  {
    size_t item_size = sizeof(ros_message->accel_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_driving_mode
  {
    size_t item_size = sizeof(ros_message->brake_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_status
  {
    size_t item_size = sizeof(ros_message->brake_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_value
  {
    size_t item_size = sizeof(ros_message->brake_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name backup_brake_driving_mode
  {
    size_t item_size = sizeof(ros_message->backup_brake_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name backup_brake_status
  {
    size_t item_size = sizeof(ros_message->backup_brake_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name backup_brake_value
  {
    size_t item_size = sizeof(ros_message->backup_brake_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_driving_mode
  {
    size_t item_size = sizeof(ros_message->epb_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_status
  {
    size_t item_size = sizeof(ros_message->epb_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_level
  {
    size_t item_size = sizeof(ros_message->epb_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_status
  {
    size_t item_size = sizeof(ros_message->engine_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_rpm
  {
    size_t item_size = sizeof(ros_message->engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_torque
  {
    size_t item_size = sizeof(ros_message->engine_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_mps
  {
    size_t item_size = sizeof(ros_message->speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odometer_m
  {
    size_t item_size = sizeof(ros_message->odometer_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_range_m
  {
    size_t item_size = sizeof(ros_message->fuel_range_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_driving_mode
  {
    size_t item_size = sizeof(ros_message->gear_driving_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_status
  {
    size_t item_size = sizeof(ros_message->gear_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_location
  {
    size_t item_size = sizeof(ros_message->gear_location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_seat_belt
  {
    size_t item_size = sizeof(ros_message->driver_seat_belt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name high_beam_status
  {
    size_t item_size = sizeof(ros_message->high_beam_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name low_beam_status
  {
    size_t item_size = sizeof(ros_message->low_beam_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horn_status
  {
    size_t item_size = sizeof(ros_message->horn_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_lamp_status
  {
    size_t item_size = sizeof(ros_message->turn_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_wiper_status
  {
    size_t item_size = sizeof(ros_message->front_wiper_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_wiper_status
  {
    size_t item_size = sizeof(ros_message->rear_wiper_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_lamp_status
  {
    size_t item_size = sizeof(ros_message->position_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_fog_lamp_status
  {
    size_t item_size = sizeof(ros_message->front_fog_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_fog_lamp_status
  {
    size_t item_size = sizeof(ros_message->rear_fog_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_lamp_status
  {
    size_t item_size = sizeof(ros_message->brake_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_lamp_status
  {
    size_t item_size = sizeof(ros_message->alarm_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lf_door_status
  {
    size_t item_size = sizeof(ros_message->lf_door_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rf_door_status
  {
    size_t item_size = sizeof(ros_message->rf_door_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lr_door_status
  {
    size_t item_size = sizeof(ros_message->lr_door_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rr_door_status
  {
    size_t item_size = sizeof(ros_message->rr_door_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rearview_mirror_status
  {
    size_t item_size = sizeof(ros_message->rearview_mirror_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trunk_status
  {
    size_t item_size = sizeof(ros_message->trunk_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_bay_door_status
  {
    size_t item_size = sizeof(ros_message->engine_bay_door_status);
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
  // field.name is_tire_pressure_ok
  {
    size_t item_size = sizeof(ros_message->is_tire_pressure_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_tire_pressure_lf_valid
  {
    size_t item_size = sizeof(ros_message->is_tire_pressure_lf_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tire_pressure_lf
  {
    size_t item_size = sizeof(ros_message->tire_pressure_lf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_tire_pressure_rf_valid
  {
    size_t item_size = sizeof(ros_message->is_tire_pressure_rf_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tire_pressure_rf
  {
    size_t item_size = sizeof(ros_message->tire_pressure_rf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_tire_pressure_lr_valid
  {
    size_t item_size = sizeof(ros_message->is_tire_pressure_lr_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tire_pressure_lr
  {
    size_t item_size = sizeof(ros_message->tire_pressure_lr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_tire_pressure_rr_valid
  {
    size_t item_size = sizeof(ros_message->is_tire_pressure_rr_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tire_pressure_rr
  {
    size_t item_size = sizeof(ros_message->tire_pressure_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_power_percentage
  {
    size_t item_size = sizeof(ros_message->battery_power_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name air_bag_status
  {
    size_t item_size = sizeof(ros_message->air_bag_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charging_gun_status
  {
    size_t item_size = sizeof(ros_message->charging_gun_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_power_status
  {
    size_t item_size = sizeof(ros_message->vehicle_power_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chassis_error_code
  {
    size_t array_size = ros_message->chassis_error_code.size;
    auto array_ptr = ros_message->chassis_error_code.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Chassis__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__Chassis(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__Chassis(
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
  // member: driving_mode
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
  // member: steering_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_steering_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steering_value
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
  // member: front_steering_rate_dps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_steering_rate_dps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: accel_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: backup_brake_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: backup_brake_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: backup_brake_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: epb_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: epb_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: epb_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: engine_torque
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
  // member: odometer_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fuel_range_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_driving_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_location
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: driver_seat_belt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: high_beam_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: low_beam_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: horn_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: turn_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_wiper_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_wiper_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_fog_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_fog_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: alarm_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lf_door_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rf_door_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lr_door_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rr_door_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rearview_mirror_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trunk_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_bay_door_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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
  // member: is_tire_pressure_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_tire_pressure_lf_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tire_pressure_lf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_tire_pressure_rf_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tire_pressure_rf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_tire_pressure_lr_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tire_pressure_lr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_tire_pressure_rr_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tire_pressure_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_power_percentage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: air_bag_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: charging_gun_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_power_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: chassis_error_code
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_interface__msg__Chassis;
    is_plain =
      (
      offsetof(DataType, chassis_error_code) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Chassis__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__Chassis(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Chassis = {
  "ros2_interface::msg",
  "Chassis",
  _Chassis__cdr_serialize,
  _Chassis__cdr_deserialize,
  _Chassis__get_serialized_size,
  _Chassis__max_serialized_size
};

static rosidl_message_type_support_t _Chassis__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Chassis,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, Chassis)() {
  return &_Chassis__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_interface:msg/Vehicle.idl
// generated code does not contain a copyright notice
#include "ros2_interface/msg/detail/vehicle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_interface/msg/detail/vehicle__struct.h"
#include "ros2_interface/msg/detail/vehicle__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // battery_temperatures, door_status, seat_belt, seats
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // battery_temperatures, door_status, seat_belt, seats
#include "rosidl_runtime_c/string.h"  // oid, vehicle_num, vid
#include "rosidl_runtime_c/string_functions.h"  // oid, vehicle_num, vid
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


using _Vehicle__ros_msg_type = ros2_interface__msg__Vehicle;

static bool _Vehicle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Vehicle__ros_msg_type * ros_message = static_cast<const _Vehicle__ros_msg_type *>(untyped_ros_message);
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

  // Field name: vehicle_type
  {
    cdr << ros_message->vehicle_type;
  }

  // Field name: vid
  {
    const rosidl_runtime_c__String * str = &ros_message->vid;
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

  // Field name: vehicle_num
  {
    const rosidl_runtime_c__String * str = &ros_message->vehicle_num;
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

  // Field name: oid
  {
    const rosidl_runtime_c__String * str = &ros_message->oid;
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

  // Field name: operation
  {
    cdr << ros_message->operation;
  }

  // Field name: totalcurrent
  {
    cdr << ros_message->totalcurrent;
  }

  // Field name: batterysoc
  {
    cdr << ros_message->batterysoc;
  }

  // Field name: totalvoltage
  {
    cdr << ros_message->totalvoltage;
  }

  // Field name: recharge
  {
    cdr << ros_message->recharge;
  }

  // Field name: dcdc
  {
    cdr << ros_message->dcdc;
  }

  // Field name: resistance
  {
    cdr << ros_message->resistance;
  }

  // Field name: seats
  {
    size_t size = ros_message->seats.size;
    auto array_ptr = ros_message->seats.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: servicemode
  {
    cdr << ros_message->servicemode;
  }

  // Field name: seat_belt
  {
    size_t size = ros_message->seat_belt.size;
    auto array_ptr = ros_message->seat_belt.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: engine_status
  {
    cdr << ros_message->engine_status;
  }

  // Field name: battery_voltage
  {
    cdr << ros_message->battery_voltage;
  }

  // Field name: battery_ammeter
  {
    cdr << ros_message->battery_ammeter;
  }

  // Field name: battery_consumption
  {
    cdr << ros_message->battery_consumption;
  }

  // Field name: battery_probe
  {
    cdr << ros_message->battery_probe;
  }

  // Field name: battery_temperatures
  {
    size_t size = ros_message->battery_temperatures.size;
    auto array_ptr = ros_message->battery_temperatures.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: battery_h_tepemperatures
  {
    cdr << ros_message->battery_h_tepemperatures;
  }

  // Field name: battery_ltepemperatures
  {
    cdr << ros_message->battery_ltepemperatures;
  }

  // Field name: battery_probe_code
  {
    cdr << ros_message->battery_probe_code;
  }

  // Field name: battery_h_concentration
  {
    cdr << ros_message->battery_h_concentration;
  }

  // Field name: battery_c_sensor_code
  {
    cdr << ros_message->battery_c_sensor_code;
  }

  // Field name: battery_stress
  {
    cdr << ros_message->battery_stress;
  }

  // Field name: battery_s_sensor_code
  {
    cdr << ros_message->battery_s_sensor_code;
  }

  // Field name: battery_h_dc_dc
  {
    cdr << ros_message->battery_h_dc_dc;
  }

  // Field name: battery_capacity
  {
    cdr << ros_message->battery_capacity;
  }

  // Field name: airconditioning_idx
  {
    cdr << ros_message->airconditioning_idx;
  }

  // Field name: airconditioning_status
  {
    cdr << ros_message->airconditioning_status;
  }

  // Field name: airconditioning_model
  {
    cdr << ros_message->airconditioning_model;
  }

  // Field name: airconditioning_volume
  {
    cdr << ros_message->airconditioning_volume;
  }

  // Field name: airconditioning_defrost
  {
    cdr << ros_message->airconditioning_defrost;
  }

  // Field name: door_status
  {
    size_t size = ros_message->door_status.size;
    auto array_ptr = ros_message->door_status.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rsrp
  {
    cdr << ros_message->rsrp;
  }

  // Field name: sinr
  {
    cdr << ros_message->sinr;
  }

  // Field name: uspeed
  {
    cdr << ros_message->uspeed;
  }

  // Field name: dspeed
  {
    cdr << ros_message->dspeed;
  }

  // Field name: loss
  {
    cdr << ros_message->loss;
  }

  // Field name: delay
  {
    cdr << ros_message->delay;
  }

  // Field name: refrigeration_idx
  {
    cdr << ros_message->refrigeration_idx;
  }

  // Field name: refrigeration_status
  {
    cdr << ros_message->refrigeration_status;
  }

  // Field name: refrigeration_stemp
  {
    cdr << ros_message->refrigeration_stemp;
  }

  // Field name: refrigeration_ctemp
  {
    cdr << ros_message->refrigeration_ctemp;
  }

  // Field name: driving_motor_idx
  {
    cdr << ros_message->driving_motor_idx;
  }

  // Field name: driving_motor_status
  {
    cdr << ros_message->driving_motor_status;
  }

  // Field name: driving_motor_ctemp
  {
    cdr << ros_message->driving_motor_ctemp;
  }

  // Field name: driving_motor_rspeed
  {
    cdr << ros_message->driving_motor_rspeed;
  }

  // Field name: driving_motor_torque
  {
    cdr << ros_message->driving_motor_torque;
  }

  // Field name: driving_motor_etemp
  {
    cdr << ros_message->driving_motor_etemp;
  }

  // Field name: driving_motor_voltage
  {
    cdr << ros_message->driving_motor_voltage;
  }

  // Field name: driving_motor_ammeter
  {
    cdr << ros_message->driving_motor_ammeter;
  }

  // Field name: outline_lamp_status
  {
    cdr << ros_message->outline_lamp_status;
  }

  // Field name: warning_lamp_status
  {
    cdr << ros_message->warning_lamp_status;
  }

  // Field name: backlight_lamp_status
  {
    cdr << ros_message->backlight_lamp_status;
  }

  // Field name: brakelamp_lamp_status
  {
    cdr << ros_message->brakelamp_lamp_status;
  }

  // Field name: left_lamp_status
  {
    cdr << ros_message->left_lamp_status;
  }

  // Field name: right_lamp_status
  {
    cdr << ros_message->right_lamp_status;
  }

  // Field name: front_touch_status
  {
    cdr << ros_message->front_touch_status;
  }

  // Field name: rear_touch_status
  {
    cdr << ros_message->rear_touch_status;
  }

  // Field name: horn_status
  {
    cdr << ros_message->horn_status;
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

  // Field name: cleanup_switch_status
  {
    cdr << ros_message->cleanup_switch_status;
  }

  // Field name: watering_switch_status
  {
    cdr << ros_message->watering_switch_status;
  }

  // Field name: trash_can_status
  {
    cdr << ros_message->trash_can_status;
  }

  // Field name: water_tank_status
  {
    cdr << ros_message->water_tank_status;
  }

  // Field name: water_add_switch_status
  {
    cdr << ros_message->water_add_switch_status;
  }

  // Field name: hatch_unlock_switch_status
  {
    cdr << ros_message->hatch_unlock_switch_status;
  }

  // Field name: water_tank_level
  {
    cdr << ros_message->water_tank_level;
  }

  // Field name: hmi_highbeam
  {
    cdr << ros_message->hmi_highbeam;
  }

  // Field name: hmi_cleanup
  {
    cdr << ros_message->hmi_cleanup;
  }

  // Field name: hmi_watering
  {
    cdr << ros_message->hmi_watering;
  }

  // Field name: bms_charge_status
  {
    cdr << ros_message->bms_charge_status;
  }

  // Field name: emergency_button_status
  {
    cdr << ros_message->emergency_button_status;
  }

  // Field name: traction
  {
    cdr << ros_message->traction;
  }

  // Field name: abs
  {
    cdr << ros_message->abs;
  }

  // Field name: scs
  {
    cdr << ros_message->scs;
  }

  // Field name: brake_boost
  {
    cdr << ros_message->brake_boost;
  }

  // Field name: aux_brakes
  {
    cdr << ros_message->aux_brakes;
  }

  return true;
}

static bool _Vehicle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Vehicle__ros_msg_type * ros_message = static_cast<_Vehicle__ros_msg_type *>(untyped_ros_message);
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

  // Field name: vehicle_type
  {
    cdr >> ros_message->vehicle_type;
  }

  // Field name: vid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vid.data) {
      rosidl_runtime_c__String__init(&ros_message->vid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vid'\n");
      return false;
    }
  }

  // Field name: vehicle_num
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vehicle_num.data) {
      rosidl_runtime_c__String__init(&ros_message->vehicle_num);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vehicle_num,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vehicle_num'\n");
      return false;
    }
  }

  // Field name: oid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->oid.data) {
      rosidl_runtime_c__String__init(&ros_message->oid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->oid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'oid'\n");
      return false;
    }
  }

  // Field name: operation
  {
    cdr >> ros_message->operation;
  }

  // Field name: totalcurrent
  {
    cdr >> ros_message->totalcurrent;
  }

  // Field name: batterysoc
  {
    cdr >> ros_message->batterysoc;
  }

  // Field name: totalvoltage
  {
    cdr >> ros_message->totalvoltage;
  }

  // Field name: recharge
  {
    cdr >> ros_message->recharge;
  }

  // Field name: dcdc
  {
    cdr >> ros_message->dcdc;
  }

  // Field name: resistance
  {
    cdr >> ros_message->resistance;
  }

  // Field name: seats
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

    if (ros_message->seats.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->seats);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->seats, size)) {
      fprintf(stderr, "failed to create array for field 'seats'");
      return false;
    }
    auto array_ptr = ros_message->seats.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: servicemode
  {
    cdr >> ros_message->servicemode;
  }

  // Field name: seat_belt
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

    if (ros_message->seat_belt.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->seat_belt);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->seat_belt, size)) {
      fprintf(stderr, "failed to create array for field 'seat_belt'");
      return false;
    }
    auto array_ptr = ros_message->seat_belt.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: engine_status
  {
    cdr >> ros_message->engine_status;
  }

  // Field name: battery_voltage
  {
    cdr >> ros_message->battery_voltage;
  }

  // Field name: battery_ammeter
  {
    cdr >> ros_message->battery_ammeter;
  }

  // Field name: battery_consumption
  {
    cdr >> ros_message->battery_consumption;
  }

  // Field name: battery_probe
  {
    cdr >> ros_message->battery_probe;
  }

  // Field name: battery_temperatures
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

    if (ros_message->battery_temperatures.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->battery_temperatures);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->battery_temperatures, size)) {
      fprintf(stderr, "failed to create array for field 'battery_temperatures'");
      return false;
    }
    auto array_ptr = ros_message->battery_temperatures.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: battery_h_tepemperatures
  {
    cdr >> ros_message->battery_h_tepemperatures;
  }

  // Field name: battery_ltepemperatures
  {
    cdr >> ros_message->battery_ltepemperatures;
  }

  // Field name: battery_probe_code
  {
    cdr >> ros_message->battery_probe_code;
  }

  // Field name: battery_h_concentration
  {
    cdr >> ros_message->battery_h_concentration;
  }

  // Field name: battery_c_sensor_code
  {
    cdr >> ros_message->battery_c_sensor_code;
  }

  // Field name: battery_stress
  {
    cdr >> ros_message->battery_stress;
  }

  // Field name: battery_s_sensor_code
  {
    cdr >> ros_message->battery_s_sensor_code;
  }

  // Field name: battery_h_dc_dc
  {
    cdr >> ros_message->battery_h_dc_dc;
  }

  // Field name: battery_capacity
  {
    cdr >> ros_message->battery_capacity;
  }

  // Field name: airconditioning_idx
  {
    cdr >> ros_message->airconditioning_idx;
  }

  // Field name: airconditioning_status
  {
    cdr >> ros_message->airconditioning_status;
  }

  // Field name: airconditioning_model
  {
    cdr >> ros_message->airconditioning_model;
  }

  // Field name: airconditioning_volume
  {
    cdr >> ros_message->airconditioning_volume;
  }

  // Field name: airconditioning_defrost
  {
    cdr >> ros_message->airconditioning_defrost;
  }

  // Field name: door_status
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

    if (ros_message->door_status.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->door_status);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->door_status, size)) {
      fprintf(stderr, "failed to create array for field 'door_status'");
      return false;
    }
    auto array_ptr = ros_message->door_status.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rsrp
  {
    cdr >> ros_message->rsrp;
  }

  // Field name: sinr
  {
    cdr >> ros_message->sinr;
  }

  // Field name: uspeed
  {
    cdr >> ros_message->uspeed;
  }

  // Field name: dspeed
  {
    cdr >> ros_message->dspeed;
  }

  // Field name: loss
  {
    cdr >> ros_message->loss;
  }

  // Field name: delay
  {
    cdr >> ros_message->delay;
  }

  // Field name: refrigeration_idx
  {
    cdr >> ros_message->refrigeration_idx;
  }

  // Field name: refrigeration_status
  {
    cdr >> ros_message->refrigeration_status;
  }

  // Field name: refrigeration_stemp
  {
    cdr >> ros_message->refrigeration_stemp;
  }

  // Field name: refrigeration_ctemp
  {
    cdr >> ros_message->refrigeration_ctemp;
  }

  // Field name: driving_motor_idx
  {
    cdr >> ros_message->driving_motor_idx;
  }

  // Field name: driving_motor_status
  {
    cdr >> ros_message->driving_motor_status;
  }

  // Field name: driving_motor_ctemp
  {
    cdr >> ros_message->driving_motor_ctemp;
  }

  // Field name: driving_motor_rspeed
  {
    cdr >> ros_message->driving_motor_rspeed;
  }

  // Field name: driving_motor_torque
  {
    cdr >> ros_message->driving_motor_torque;
  }

  // Field name: driving_motor_etemp
  {
    cdr >> ros_message->driving_motor_etemp;
  }

  // Field name: driving_motor_voltage
  {
    cdr >> ros_message->driving_motor_voltage;
  }

  // Field name: driving_motor_ammeter
  {
    cdr >> ros_message->driving_motor_ammeter;
  }

  // Field name: outline_lamp_status
  {
    cdr >> ros_message->outline_lamp_status;
  }

  // Field name: warning_lamp_status
  {
    cdr >> ros_message->warning_lamp_status;
  }

  // Field name: backlight_lamp_status
  {
    cdr >> ros_message->backlight_lamp_status;
  }

  // Field name: brakelamp_lamp_status
  {
    cdr >> ros_message->brakelamp_lamp_status;
  }

  // Field name: left_lamp_status
  {
    cdr >> ros_message->left_lamp_status;
  }

  // Field name: right_lamp_status
  {
    cdr >> ros_message->right_lamp_status;
  }

  // Field name: front_touch_status
  {
    cdr >> ros_message->front_touch_status;
  }

  // Field name: rear_touch_status
  {
    cdr >> ros_message->rear_touch_status;
  }

  // Field name: horn_status
  {
    cdr >> ros_message->horn_status;
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

  // Field name: cleanup_switch_status
  {
    cdr >> ros_message->cleanup_switch_status;
  }

  // Field name: watering_switch_status
  {
    cdr >> ros_message->watering_switch_status;
  }

  // Field name: trash_can_status
  {
    cdr >> ros_message->trash_can_status;
  }

  // Field name: water_tank_status
  {
    cdr >> ros_message->water_tank_status;
  }

  // Field name: water_add_switch_status
  {
    cdr >> ros_message->water_add_switch_status;
  }

  // Field name: hatch_unlock_switch_status
  {
    cdr >> ros_message->hatch_unlock_switch_status;
  }

  // Field name: water_tank_level
  {
    cdr >> ros_message->water_tank_level;
  }

  // Field name: hmi_highbeam
  {
    cdr >> ros_message->hmi_highbeam;
  }

  // Field name: hmi_cleanup
  {
    cdr >> ros_message->hmi_cleanup;
  }

  // Field name: hmi_watering
  {
    cdr >> ros_message->hmi_watering;
  }

  // Field name: bms_charge_status
  {
    cdr >> ros_message->bms_charge_status;
  }

  // Field name: emergency_button_status
  {
    cdr >> ros_message->emergency_button_status;
  }

  // Field name: traction
  {
    cdr >> ros_message->traction;
  }

  // Field name: abs
  {
    cdr >> ros_message->abs;
  }

  // Field name: scs
  {
    cdr >> ros_message->scs;
  }

  // Field name: brake_boost
  {
    cdr >> ros_message->brake_boost;
  }

  // Field name: aux_brakes
  {
    cdr >> ros_message->aux_brakes;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t get_serialized_size_ros2_interface__msg__Vehicle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Vehicle__ros_msg_type * ros_message = static_cast<const _Vehicle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name vehicle_type
  {
    size_t item_size = sizeof(ros_message->vehicle_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vid.size + 1);
  // field.name vehicle_num
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vehicle_num.size + 1);
  // field.name oid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->oid.size + 1);
  // field.name operation
  {
    size_t item_size = sizeof(ros_message->operation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name totalcurrent
  {
    size_t item_size = sizeof(ros_message->totalcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name batterysoc
  {
    size_t item_size = sizeof(ros_message->batterysoc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name totalvoltage
  {
    size_t item_size = sizeof(ros_message->totalvoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name recharge
  {
    size_t item_size = sizeof(ros_message->recharge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dcdc
  {
    size_t item_size = sizeof(ros_message->dcdc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name resistance
  {
    size_t item_size = sizeof(ros_message->resistance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seats
  {
    size_t array_size = ros_message->seats.size;
    auto array_ptr = ros_message->seats.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servicemode
  {
    size_t item_size = sizeof(ros_message->servicemode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seat_belt
  {
    size_t array_size = ros_message->seat_belt.size;
    auto array_ptr = ros_message->seat_belt.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_status
  {
    size_t item_size = sizeof(ros_message->engine_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_voltage
  {
    size_t item_size = sizeof(ros_message->battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_ammeter
  {
    size_t item_size = sizeof(ros_message->battery_ammeter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_consumption
  {
    size_t item_size = sizeof(ros_message->battery_consumption);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_probe
  {
    size_t item_size = sizeof(ros_message->battery_probe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_temperatures
  {
    size_t array_size = ros_message->battery_temperatures.size;
    auto array_ptr = ros_message->battery_temperatures.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_h_tepemperatures
  {
    size_t item_size = sizeof(ros_message->battery_h_tepemperatures);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_ltepemperatures
  {
    size_t item_size = sizeof(ros_message->battery_ltepemperatures);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_probe_code
  {
    size_t item_size = sizeof(ros_message->battery_probe_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_h_concentration
  {
    size_t item_size = sizeof(ros_message->battery_h_concentration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_c_sensor_code
  {
    size_t item_size = sizeof(ros_message->battery_c_sensor_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_stress
  {
    size_t item_size = sizeof(ros_message->battery_stress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_s_sensor_code
  {
    size_t item_size = sizeof(ros_message->battery_s_sensor_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_h_dc_dc
  {
    size_t item_size = sizeof(ros_message->battery_h_dc_dc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_capacity
  {
    size_t item_size = sizeof(ros_message->battery_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name airconditioning_idx
  {
    size_t item_size = sizeof(ros_message->airconditioning_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name airconditioning_status
  {
    size_t item_size = sizeof(ros_message->airconditioning_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name airconditioning_model
  {
    size_t item_size = sizeof(ros_message->airconditioning_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name airconditioning_volume
  {
    size_t item_size = sizeof(ros_message->airconditioning_volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name airconditioning_defrost
  {
    size_t item_size = sizeof(ros_message->airconditioning_defrost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_status
  {
    size_t array_size = ros_message->door_status.size;
    auto array_ptr = ros_message->door_status.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rsrp
  {
    size_t item_size = sizeof(ros_message->rsrp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sinr
  {
    size_t item_size = sizeof(ros_message->sinr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uspeed
  {
    size_t item_size = sizeof(ros_message->uspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dspeed
  {
    size_t item_size = sizeof(ros_message->dspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loss
  {
    size_t item_size = sizeof(ros_message->loss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delay
  {
    size_t item_size = sizeof(ros_message->delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name refrigeration_idx
  {
    size_t item_size = sizeof(ros_message->refrigeration_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name refrigeration_status
  {
    size_t item_size = sizeof(ros_message->refrigeration_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name refrigeration_stemp
  {
    size_t item_size = sizeof(ros_message->refrigeration_stemp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name refrigeration_ctemp
  {
    size_t item_size = sizeof(ros_message->refrigeration_ctemp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driving_motor_idx
  {
    size_t item_size = sizeof(ros_message->driving_motor_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driving_motor_status
  {
    size_t item_size = sizeof(ros_message->driving_motor_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driving_motor_ctemp
  {
    size_t item_size = sizeof(ros_message->driving_motor_ctemp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driving_motor_rspeed
  {
    size_t item_size = sizeof(ros_message->driving_motor_rspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driving_motor_torque
  {
    size_t item_size = sizeof(ros_message->driving_motor_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driving_motor_etemp
  {
    size_t item_size = sizeof(ros_message->driving_motor_etemp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driving_motor_voltage
  {
    size_t item_size = sizeof(ros_message->driving_motor_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driving_motor_ammeter
  {
    size_t item_size = sizeof(ros_message->driving_motor_ammeter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outline_lamp_status
  {
    size_t item_size = sizeof(ros_message->outline_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name warning_lamp_status
  {
    size_t item_size = sizeof(ros_message->warning_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name backlight_lamp_status
  {
    size_t item_size = sizeof(ros_message->backlight_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brakelamp_lamp_status
  {
    size_t item_size = sizeof(ros_message->brakelamp_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_lamp_status
  {
    size_t item_size = sizeof(ros_message->left_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_lamp_status
  {
    size_t item_size = sizeof(ros_message->right_lamp_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_touch_status
  {
    size_t item_size = sizeof(ros_message->front_touch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_touch_status
  {
    size_t item_size = sizeof(ros_message->rear_touch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horn_status
  {
    size_t item_size = sizeof(ros_message->horn_status);
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
  // field.name cleanup_switch_status
  {
    size_t item_size = sizeof(ros_message->cleanup_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name watering_switch_status
  {
    size_t item_size = sizeof(ros_message->watering_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trash_can_status
  {
    size_t item_size = sizeof(ros_message->trash_can_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name water_tank_status
  {
    size_t item_size = sizeof(ros_message->water_tank_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name water_add_switch_status
  {
    size_t item_size = sizeof(ros_message->water_add_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hatch_unlock_switch_status
  {
    size_t item_size = sizeof(ros_message->hatch_unlock_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name water_tank_level
  {
    size_t item_size = sizeof(ros_message->water_tank_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_highbeam
  {
    size_t item_size = sizeof(ros_message->hmi_highbeam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_cleanup
  {
    size_t item_size = sizeof(ros_message->hmi_cleanup);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_watering
  {
    size_t item_size = sizeof(ros_message->hmi_watering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms_charge_status
  {
    size_t item_size = sizeof(ros_message->bms_charge_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency_button_status
  {
    size_t item_size = sizeof(ros_message->emergency_button_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name traction
  {
    size_t item_size = sizeof(ros_message->traction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name abs
  {
    size_t item_size = sizeof(ros_message->abs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scs
  {
    size_t item_size = sizeof(ros_message->scs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_boost
  {
    size_t item_size = sizeof(ros_message->brake_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux_brakes
  {
    size_t item_size = sizeof(ros_message->aux_brakes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Vehicle__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_interface__msg__Vehicle(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_interface
size_t max_serialized_size_ros2_interface__msg__Vehicle(
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
  // member: vehicle_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vid
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
  // member: vehicle_num
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
  // member: oid
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
  // member: operation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: totalcurrent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: batterysoc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: totalvoltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: recharge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dcdc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: resistance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: seats
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: servicemode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: seat_belt
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
  // member: engine_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: battery_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_ammeter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_consumption
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_probe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_temperatures
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_h_tepemperatures
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_ltepemperatures
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_probe_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_h_concentration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_c_sensor_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_stress
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_s_sensor_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_h_dc_dc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: battery_capacity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: airconditioning_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: airconditioning_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: airconditioning_model
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: airconditioning_volume
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: airconditioning_defrost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: door_status
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
  // member: rsrp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sinr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: loss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: refrigeration_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: refrigeration_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: refrigeration_stemp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: refrigeration_ctemp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: driving_motor_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: driving_motor_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: driving_motor_ctemp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: driving_motor_rspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: driving_motor_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: driving_motor_etemp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: driving_motor_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: driving_motor_ammeter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outline_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: warning_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: backlight_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brakelamp_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_lamp_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_touch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_touch_status
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
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cleanup_switch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: watering_switch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trash_can_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: water_tank_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: water_add_switch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hatch_unlock_switch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: water_tank_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hmi_highbeam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hmi_cleanup
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hmi_watering
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bms_charge_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: emergency_button_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: traction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: abs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux_brakes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_interface__msg__Vehicle;
    is_plain =
      (
      offsetof(DataType, aux_brakes) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Vehicle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_interface__msg__Vehicle(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Vehicle = {
  "ros2_interface::msg",
  "Vehicle",
  _Vehicle__cdr_serialize,
  _Vehicle__cdr_deserialize,
  _Vehicle__get_serialized_size,
  _Vehicle__max_serialized_size
};

static rosidl_message_type_support_t _Vehicle__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Vehicle,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_interface, msg, Vehicle)() {
  return &_Vehicle__type_support;
}

#if defined(__cplusplus)
}
#endif

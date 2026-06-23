// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_interface:msg/Vehicle.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__VEHICLE__TRAITS_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__VEHICLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_interface/msg/detail/vehicle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vehicle & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vehicle_type
  {
    out << "vehicle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_type, out);
    out << ", ";
  }

  // member: vid
  {
    out << "vid: ";
    rosidl_generator_traits::value_to_yaml(msg.vid, out);
    out << ", ";
  }

  // member: vehicle_num
  {
    out << "vehicle_num: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_num, out);
    out << ", ";
  }

  // member: oid
  {
    out << "oid: ";
    rosidl_generator_traits::value_to_yaml(msg.oid, out);
    out << ", ";
  }

  // member: operation
  {
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << ", ";
  }

  // member: totalcurrent
  {
    out << "totalcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.totalcurrent, out);
    out << ", ";
  }

  // member: batterysoc
  {
    out << "batterysoc: ";
    rosidl_generator_traits::value_to_yaml(msg.batterysoc, out);
    out << ", ";
  }

  // member: totalvoltage
  {
    out << "totalvoltage: ";
    rosidl_generator_traits::value_to_yaml(msg.totalvoltage, out);
    out << ", ";
  }

  // member: recharge
  {
    out << "recharge: ";
    rosidl_generator_traits::value_to_yaml(msg.recharge, out);
    out << ", ";
  }

  // member: dcdc
  {
    out << "dcdc: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc, out);
    out << ", ";
  }

  // member: resistance
  {
    out << "resistance: ";
    rosidl_generator_traits::value_to_yaml(msg.resistance, out);
    out << ", ";
  }

  // member: seats
  {
    if (msg.seats.size() == 0) {
      out << "seats: []";
    } else {
      out << "seats: [";
      size_t pending_items = msg.seats.size();
      for (auto item : msg.seats) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: servicemode
  {
    out << "servicemode: ";
    rosidl_generator_traits::value_to_yaml(msg.servicemode, out);
    out << ", ";
  }

  // member: seat_belt
  {
    if (msg.seat_belt.size() == 0) {
      out << "seat_belt: []";
    } else {
      out << "seat_belt: [";
      size_t pending_items = msg.seat_belt.size();
      for (auto item : msg.seat_belt) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: engine_status
  {
    out << "engine_status: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_status, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: battery_ammeter
  {
    out << "battery_ammeter: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_ammeter, out);
    out << ", ";
  }

  // member: battery_consumption
  {
    out << "battery_consumption: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_consumption, out);
    out << ", ";
  }

  // member: battery_probe
  {
    out << "battery_probe: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_probe, out);
    out << ", ";
  }

  // member: battery_temperatures
  {
    if (msg.battery_temperatures.size() == 0) {
      out << "battery_temperatures: []";
    } else {
      out << "battery_temperatures: [";
      size_t pending_items = msg.battery_temperatures.size();
      for (auto item : msg.battery_temperatures) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: battery_h_tepemperatures
  {
    out << "battery_h_tepemperatures: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_h_tepemperatures, out);
    out << ", ";
  }

  // member: battery_ltepemperatures
  {
    out << "battery_ltepemperatures: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_ltepemperatures, out);
    out << ", ";
  }

  // member: battery_probe_code
  {
    out << "battery_probe_code: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_probe_code, out);
    out << ", ";
  }

  // member: battery_h_concentration
  {
    out << "battery_h_concentration: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_h_concentration, out);
    out << ", ";
  }

  // member: battery_c_sensor_code
  {
    out << "battery_c_sensor_code: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_c_sensor_code, out);
    out << ", ";
  }

  // member: battery_stress
  {
    out << "battery_stress: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_stress, out);
    out << ", ";
  }

  // member: battery_s_sensor_code
  {
    out << "battery_s_sensor_code: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_s_sensor_code, out);
    out << ", ";
  }

  // member: battery_h_dc_dc
  {
    out << "battery_h_dc_dc: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_h_dc_dc, out);
    out << ", ";
  }

  // member: battery_capacity
  {
    out << "battery_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_capacity, out);
    out << ", ";
  }

  // member: airconditioning_idx
  {
    out << "airconditioning_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.airconditioning_idx, out);
    out << ", ";
  }

  // member: airconditioning_status
  {
    out << "airconditioning_status: ";
    rosidl_generator_traits::value_to_yaml(msg.airconditioning_status, out);
    out << ", ";
  }

  // member: airconditioning_model
  {
    out << "airconditioning_model: ";
    rosidl_generator_traits::value_to_yaml(msg.airconditioning_model, out);
    out << ", ";
  }

  // member: airconditioning_volume
  {
    out << "airconditioning_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.airconditioning_volume, out);
    out << ", ";
  }

  // member: airconditioning_defrost
  {
    out << "airconditioning_defrost: ";
    rosidl_generator_traits::value_to_yaml(msg.airconditioning_defrost, out);
    out << ", ";
  }

  // member: door_status
  {
    if (msg.door_status.size() == 0) {
      out << "door_status: []";
    } else {
      out << "door_status: [";
      size_t pending_items = msg.door_status.size();
      for (auto item : msg.door_status) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rsrp
  {
    out << "rsrp: ";
    rosidl_generator_traits::value_to_yaml(msg.rsrp, out);
    out << ", ";
  }

  // member: sinr
  {
    out << "sinr: ";
    rosidl_generator_traits::value_to_yaml(msg.sinr, out);
    out << ", ";
  }

  // member: uspeed
  {
    out << "uspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.uspeed, out);
    out << ", ";
  }

  // member: dspeed
  {
    out << "dspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.dspeed, out);
    out << ", ";
  }

  // member: loss
  {
    out << "loss: ";
    rosidl_generator_traits::value_to_yaml(msg.loss, out);
    out << ", ";
  }

  // member: delay
  {
    out << "delay: ";
    rosidl_generator_traits::value_to_yaml(msg.delay, out);
    out << ", ";
  }

  // member: refrigeration_idx
  {
    out << "refrigeration_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.refrigeration_idx, out);
    out << ", ";
  }

  // member: refrigeration_status
  {
    out << "refrigeration_status: ";
    rosidl_generator_traits::value_to_yaml(msg.refrigeration_status, out);
    out << ", ";
  }

  // member: refrigeration_stemp
  {
    out << "refrigeration_stemp: ";
    rosidl_generator_traits::value_to_yaml(msg.refrigeration_stemp, out);
    out << ", ";
  }

  // member: refrigeration_ctemp
  {
    out << "refrigeration_ctemp: ";
    rosidl_generator_traits::value_to_yaml(msg.refrigeration_ctemp, out);
    out << ", ";
  }

  // member: driving_motor_idx
  {
    out << "driving_motor_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_idx, out);
    out << ", ";
  }

  // member: driving_motor_status
  {
    out << "driving_motor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_status, out);
    out << ", ";
  }

  // member: driving_motor_ctemp
  {
    out << "driving_motor_ctemp: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_ctemp, out);
    out << ", ";
  }

  // member: driving_motor_rspeed
  {
    out << "driving_motor_rspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_rspeed, out);
    out << ", ";
  }

  // member: driving_motor_torque
  {
    out << "driving_motor_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_torque, out);
    out << ", ";
  }

  // member: driving_motor_etemp
  {
    out << "driving_motor_etemp: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_etemp, out);
    out << ", ";
  }

  // member: driving_motor_voltage
  {
    out << "driving_motor_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_voltage, out);
    out << ", ";
  }

  // member: driving_motor_ammeter
  {
    out << "driving_motor_ammeter: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_ammeter, out);
    out << ", ";
  }

  // member: outline_lamp_status
  {
    out << "outline_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.outline_lamp_status, out);
    out << ", ";
  }

  // member: warning_lamp_status
  {
    out << "warning_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_lamp_status, out);
    out << ", ";
  }

  // member: backlight_lamp_status
  {
    out << "backlight_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.backlight_lamp_status, out);
    out << ", ";
  }

  // member: brakelamp_lamp_status
  {
    out << "brakelamp_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brakelamp_lamp_status, out);
    out << ", ";
  }

  // member: left_lamp_status
  {
    out << "left_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lamp_status, out);
    out << ", ";
  }

  // member: right_lamp_status
  {
    out << "right_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lamp_status, out);
    out << ", ";
  }

  // member: front_touch_status
  {
    out << "front_touch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.front_touch_status, out);
    out << ", ";
  }

  // member: rear_touch_status
  {
    out << "rear_touch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_touch_status, out);
    out << ", ";
  }

  // member: horn_status
  {
    out << "horn_status: ";
    rosidl_generator_traits::value_to_yaml(msg.horn_status, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: cleanup_switch_status
  {
    out << "cleanup_switch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.cleanup_switch_status, out);
    out << ", ";
  }

  // member: watering_switch_status
  {
    out << "watering_switch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.watering_switch_status, out);
    out << ", ";
  }

  // member: trash_can_status
  {
    out << "trash_can_status: ";
    rosidl_generator_traits::value_to_yaml(msg.trash_can_status, out);
    out << ", ";
  }

  // member: water_tank_status
  {
    out << "water_tank_status: ";
    rosidl_generator_traits::value_to_yaml(msg.water_tank_status, out);
    out << ", ";
  }

  // member: water_add_switch_status
  {
    out << "water_add_switch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.water_add_switch_status, out);
    out << ", ";
  }

  // member: hatch_unlock_switch_status
  {
    out << "hatch_unlock_switch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.hatch_unlock_switch_status, out);
    out << ", ";
  }

  // member: water_tank_level
  {
    out << "water_tank_level: ";
    rosidl_generator_traits::value_to_yaml(msg.water_tank_level, out);
    out << ", ";
  }

  // member: hmi_highbeam
  {
    out << "hmi_highbeam: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_highbeam, out);
    out << ", ";
  }

  // member: hmi_cleanup
  {
    out << "hmi_cleanup: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_cleanup, out);
    out << ", ";
  }

  // member: hmi_watering
  {
    out << "hmi_watering: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_watering, out);
    out << ", ";
  }

  // member: bms_charge_status
  {
    out << "bms_charge_status: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_charge_status, out);
    out << ", ";
  }

  // member: emergency_button_status
  {
    out << "emergency_button_status: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_button_status, out);
    out << ", ";
  }

  // member: traction
  {
    out << "traction: ";
    rosidl_generator_traits::value_to_yaml(msg.traction, out);
    out << ", ";
  }

  // member: abs
  {
    out << "abs: ";
    rosidl_generator_traits::value_to_yaml(msg.abs, out);
    out << ", ";
  }

  // member: scs
  {
    out << "scs: ";
    rosidl_generator_traits::value_to_yaml(msg.scs, out);
    out << ", ";
  }

  // member: brake_boost
  {
    out << "brake_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_boost, out);
    out << ", ";
  }

  // member: aux_brakes
  {
    out << "aux_brakes: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_brakes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Vehicle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: vehicle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_type, out);
    out << "\n";
  }

  // member: vid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vid: ";
    rosidl_generator_traits::value_to_yaml(msg.vid, out);
    out << "\n";
  }

  // member: vehicle_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_num: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_num, out);
    out << "\n";
  }

  // member: oid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oid: ";
    rosidl_generator_traits::value_to_yaml(msg.oid, out);
    out << "\n";
  }

  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << "\n";
  }

  // member: totalcurrent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "totalcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.totalcurrent, out);
    out << "\n";
  }

  // member: batterysoc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batterysoc: ";
    rosidl_generator_traits::value_to_yaml(msg.batterysoc, out);
    out << "\n";
  }

  // member: totalvoltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "totalvoltage: ";
    rosidl_generator_traits::value_to_yaml(msg.totalvoltage, out);
    out << "\n";
  }

  // member: recharge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recharge: ";
    rosidl_generator_traits::value_to_yaml(msg.recharge, out);
    out << "\n";
  }

  // member: dcdc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcdc: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc, out);
    out << "\n";
  }

  // member: resistance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resistance: ";
    rosidl_generator_traits::value_to_yaml(msg.resistance, out);
    out << "\n";
  }

  // member: seats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.seats.size() == 0) {
      out << "seats: []\n";
    } else {
      out << "seats:\n";
      for (auto item : msg.seats) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: servicemode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servicemode: ";
    rosidl_generator_traits::value_to_yaml(msg.servicemode, out);
    out << "\n";
  }

  // member: seat_belt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.seat_belt.size() == 0) {
      out << "seat_belt: []\n";
    } else {
      out << "seat_belt:\n";
      for (auto item : msg.seat_belt) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: engine_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_status: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_status, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: battery_ammeter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_ammeter: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_ammeter, out);
    out << "\n";
  }

  // member: battery_consumption
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_consumption: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_consumption, out);
    out << "\n";
  }

  // member: battery_probe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_probe: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_probe, out);
    out << "\n";
  }

  // member: battery_temperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.battery_temperatures.size() == 0) {
      out << "battery_temperatures: []\n";
    } else {
      out << "battery_temperatures:\n";
      for (auto item : msg.battery_temperatures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: battery_h_tepemperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_h_tepemperatures: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_h_tepemperatures, out);
    out << "\n";
  }

  // member: battery_ltepemperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_ltepemperatures: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_ltepemperatures, out);
    out << "\n";
  }

  // member: battery_probe_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_probe_code: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_probe_code, out);
    out << "\n";
  }

  // member: battery_h_concentration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_h_concentration: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_h_concentration, out);
    out << "\n";
  }

  // member: battery_c_sensor_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_c_sensor_code: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_c_sensor_code, out);
    out << "\n";
  }

  // member: battery_stress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_stress: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_stress, out);
    out << "\n";
  }

  // member: battery_s_sensor_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_s_sensor_code: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_s_sensor_code, out);
    out << "\n";
  }

  // member: battery_h_dc_dc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_h_dc_dc: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_h_dc_dc, out);
    out << "\n";
  }

  // member: battery_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_capacity, out);
    out << "\n";
  }

  // member: airconditioning_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airconditioning_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.airconditioning_idx, out);
    out << "\n";
  }

  // member: airconditioning_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airconditioning_status: ";
    rosidl_generator_traits::value_to_yaml(msg.airconditioning_status, out);
    out << "\n";
  }

  // member: airconditioning_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airconditioning_model: ";
    rosidl_generator_traits::value_to_yaml(msg.airconditioning_model, out);
    out << "\n";
  }

  // member: airconditioning_volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airconditioning_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.airconditioning_volume, out);
    out << "\n";
  }

  // member: airconditioning_defrost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airconditioning_defrost: ";
    rosidl_generator_traits::value_to_yaml(msg.airconditioning_defrost, out);
    out << "\n";
  }

  // member: door_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.door_status.size() == 0) {
      out << "door_status: []\n";
    } else {
      out << "door_status:\n";
      for (auto item : msg.door_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rsrp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rsrp: ";
    rosidl_generator_traits::value_to_yaml(msg.rsrp, out);
    out << "\n";
  }

  // member: sinr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sinr: ";
    rosidl_generator_traits::value_to_yaml(msg.sinr, out);
    out << "\n";
  }

  // member: uspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.uspeed, out);
    out << "\n";
  }

  // member: dspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.dspeed, out);
    out << "\n";
  }

  // member: loss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loss: ";
    rosidl_generator_traits::value_to_yaml(msg.loss, out);
    out << "\n";
  }

  // member: delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay: ";
    rosidl_generator_traits::value_to_yaml(msg.delay, out);
    out << "\n";
  }

  // member: refrigeration_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refrigeration_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.refrigeration_idx, out);
    out << "\n";
  }

  // member: refrigeration_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refrigeration_status: ";
    rosidl_generator_traits::value_to_yaml(msg.refrigeration_status, out);
    out << "\n";
  }

  // member: refrigeration_stemp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refrigeration_stemp: ";
    rosidl_generator_traits::value_to_yaml(msg.refrigeration_stemp, out);
    out << "\n";
  }

  // member: refrigeration_ctemp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refrigeration_ctemp: ";
    rosidl_generator_traits::value_to_yaml(msg.refrigeration_ctemp, out);
    out << "\n";
  }

  // member: driving_motor_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_motor_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_idx, out);
    out << "\n";
  }

  // member: driving_motor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_motor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_status, out);
    out << "\n";
  }

  // member: driving_motor_ctemp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_motor_ctemp: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_ctemp, out);
    out << "\n";
  }

  // member: driving_motor_rspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_motor_rspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_rspeed, out);
    out << "\n";
  }

  // member: driving_motor_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_motor_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_torque, out);
    out << "\n";
  }

  // member: driving_motor_etemp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_motor_etemp: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_etemp, out);
    out << "\n";
  }

  // member: driving_motor_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_motor_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_voltage, out);
    out << "\n";
  }

  // member: driving_motor_ammeter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_motor_ammeter: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_motor_ammeter, out);
    out << "\n";
  }

  // member: outline_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outline_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.outline_lamp_status, out);
    out << "\n";
  }

  // member: warning_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_lamp_status, out);
    out << "\n";
  }

  // member: backlight_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "backlight_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.backlight_lamp_status, out);
    out << "\n";
  }

  // member: brakelamp_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brakelamp_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brakelamp_lamp_status, out);
    out << "\n";
  }

  // member: left_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lamp_status, out);
    out << "\n";
  }

  // member: right_lamp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lamp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lamp_status, out);
    out << "\n";
  }

  // member: front_touch_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_touch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.front_touch_status, out);
    out << "\n";
  }

  // member: rear_touch_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_touch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_touch_status, out);
    out << "\n";
  }

  // member: horn_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn_status: ";
    rosidl_generator_traits::value_to_yaml(msg.horn_status, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: cleanup_switch_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cleanup_switch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.cleanup_switch_status, out);
    out << "\n";
  }

  // member: watering_switch_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "watering_switch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.watering_switch_status, out);
    out << "\n";
  }

  // member: trash_can_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trash_can_status: ";
    rosidl_generator_traits::value_to_yaml(msg.trash_can_status, out);
    out << "\n";
  }

  // member: water_tank_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "water_tank_status: ";
    rosidl_generator_traits::value_to_yaml(msg.water_tank_status, out);
    out << "\n";
  }

  // member: water_add_switch_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "water_add_switch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.water_add_switch_status, out);
    out << "\n";
  }

  // member: hatch_unlock_switch_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hatch_unlock_switch_status: ";
    rosidl_generator_traits::value_to_yaml(msg.hatch_unlock_switch_status, out);
    out << "\n";
  }

  // member: water_tank_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "water_tank_level: ";
    rosidl_generator_traits::value_to_yaml(msg.water_tank_level, out);
    out << "\n";
  }

  // member: hmi_highbeam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_highbeam: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_highbeam, out);
    out << "\n";
  }

  // member: hmi_cleanup
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_cleanup: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_cleanup, out);
    out << "\n";
  }

  // member: hmi_watering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_watering: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_watering, out);
    out << "\n";
  }

  // member: bms_charge_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_charge_status: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_charge_status, out);
    out << "\n";
  }

  // member: emergency_button_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_button_status: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_button_status, out);
    out << "\n";
  }

  // member: traction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traction: ";
    rosidl_generator_traits::value_to_yaml(msg.traction, out);
    out << "\n";
  }

  // member: abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs: ";
    rosidl_generator_traits::value_to_yaml(msg.abs, out);
    out << "\n";
  }

  // member: scs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scs: ";
    rosidl_generator_traits::value_to_yaml(msg.scs, out);
    out << "\n";
  }

  // member: brake_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_boost, out);
    out << "\n";
  }

  // member: aux_brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux_brakes: ";
    rosidl_generator_traits::value_to_yaml(msg.aux_brakes, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Vehicle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_interface

namespace rosidl_generator_traits
{

[[deprecated("use ros2_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_interface::msg::Vehicle & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_interface::msg::Vehicle & msg)
{
  return ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_interface::msg::Vehicle>()
{
  return "ros2_interface::msg::Vehicle";
}

template<>
inline const char * name<ros2_interface::msg::Vehicle>()
{
  return "ros2_interface/msg/Vehicle";
}

template<>
struct has_fixed_size<ros2_interface::msg::Vehicle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_interface::msg::Vehicle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_interface::msg::Vehicle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_INTERFACE__MSG__DETAIL__VEHICLE__TRAITS_HPP_

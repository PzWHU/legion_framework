// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/Chassis.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ros2_interface/msg/detail/chassis__struct.h"
#include "ros2_interface/msg/detail/chassis__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__chassis__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ros2_interface.msg._chassis.Chassis", full_classname_dest, 35) == 0);
  }
  ros2_interface__msg__Chassis * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // moving_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "moving_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->moving_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // steer_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // steering_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steering_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // front_steering_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steering_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steering_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steering_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steering_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steering_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_torque_nm
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_torque_nm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_torque_nm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_steering_rate_dps
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steering_rate_dps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steering_rate_dps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steering_rate_dps
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steering_rate_dps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steering_rate_dps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accel_driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // accel_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accel_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // accel_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // brake_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // brake_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // backup_brake_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "backup_brake_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->backup_brake_driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // backup_brake_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "backup_brake_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->backup_brake_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // backup_brake_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "backup_brake_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->backup_brake_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // epb_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epb_driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // epb_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epb_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // epb_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epb_level = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // engine_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engine_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // engine_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_rpm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_mps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odometer_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "odometer_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odometer_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel_range_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_range_m");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fuel_range_m = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gear_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gear_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gear_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_location");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_location = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // driver_seat_belt
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver_seat_belt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driver_seat_belt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // high_beam_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "high_beam_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->high_beam_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // low_beam_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_beam_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->low_beam_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // horn_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "horn_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->horn_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // turn_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // front_wiper_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_wiper_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_wiper_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rear_wiper_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_wiper_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rear_wiper_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // position_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // front_fog_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_fog_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_fog_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rear_fog_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_fog_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rear_fog_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // brake_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // alarm_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "alarm_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alarm_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lf_door_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "lf_door_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lf_door_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rf_door_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "rf_door_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rf_door_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lr_door_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "lr_door_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lr_door_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rr_door_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_door_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rr_door_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rearview_mirror_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "rearview_mirror_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rearview_mirror_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trunk_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "trunk_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trunk_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // engine_bay_door_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_bay_door_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engine_bay_door_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wheel_direction_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_direction_rr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wheel_direction_rr = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wheel_spd_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_spd_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_spd_rr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_direction_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_direction_rl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wheel_direction_rl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wheel_spd_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_spd_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_spd_rl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_direction_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_direction_fr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wheel_direction_fr = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wheel_spd_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_spd_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_spd_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_direction_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_direction_fl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wheel_direction_fl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wheel_spd_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_spd_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_spd_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_tire_pressure_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_tire_pressure_ok");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_tire_pressure_ok = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_tire_pressure_lf_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_tire_pressure_lf_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_tire_pressure_lf_valid = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tire_pressure_lf
    PyObject * field = PyObject_GetAttrString(_pymsg, "tire_pressure_lf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tire_pressure_lf = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_tire_pressure_rf_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_tire_pressure_rf_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_tire_pressure_rf_valid = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tire_pressure_rf
    PyObject * field = PyObject_GetAttrString(_pymsg, "tire_pressure_rf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tire_pressure_rf = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_tire_pressure_lr_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_tire_pressure_lr_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_tire_pressure_lr_valid = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tire_pressure_lr
    PyObject * field = PyObject_GetAttrString(_pymsg, "tire_pressure_lr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tire_pressure_lr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_tire_pressure_rr_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_tire_pressure_rr_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_tire_pressure_rr_valid = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tire_pressure_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "tire_pressure_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tire_pressure_rr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_power_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_power_percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_power_percentage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // air_bag_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "air_bag_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->air_bag_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // charging_gun_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_gun_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->charging_gun_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_power_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_power_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_power_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // chassis_error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_error_code");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->chassis_error_code), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->chassis_error_code.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'chassis_error_code'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->chassis_error_code), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->chassis_error_code.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__chassis__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Chassis */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._chassis");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Chassis");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__Chassis * ros_message = (ros2_interface__msg__Chassis *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moving_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->moving_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moving_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->steer_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_driving_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->steering_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steering_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steering_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steering_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steering_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steering_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steering_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_torque_nm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_torque_nm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_torque_nm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steering_rate_dps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steering_rate_dps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steering_rate_dps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steering_rate_dps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steering_rate_dps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steering_rate_dps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->accel_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_driving_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->accel_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->brake_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_driving_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->brake_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // backup_brake_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->backup_brake_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "backup_brake_driving_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // backup_brake_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->backup_brake_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "backup_brake_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // backup_brake_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->backup_brake_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "backup_brake_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->epb_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_driving_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->epb_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_level
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->epb_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->engine_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odometer_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odometer_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odometer_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_range_m
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fuel_range_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_range_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_driving_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_location
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_location);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driver_seat_belt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->driver_seat_belt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driver_seat_belt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // high_beam_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->high_beam_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "high_beam_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_beam_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->low_beam_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_beam_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horn_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->horn_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horn_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->turn_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_wiper_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->front_wiper_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_wiper_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_wiper_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rear_wiper_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_wiper_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->position_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_fog_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->front_fog_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_fog_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_fog_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rear_fog_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_fog_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->brake_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alarm_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->alarm_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alarm_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lf_door_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lf_door_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lf_door_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rf_door_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rf_door_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rf_door_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lr_door_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lr_door_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lr_door_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_door_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rr_door_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_door_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rearview_mirror_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rearview_mirror_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rearview_mirror_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trunk_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trunk_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trunk_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_bay_door_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->engine_bay_door_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_bay_door_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_direction_rr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wheel_direction_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_direction_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_spd_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_spd_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_spd_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_direction_rl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wheel_direction_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_direction_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_spd_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_spd_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_spd_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_direction_fr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wheel_direction_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_direction_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_spd_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_spd_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_spd_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_direction_fl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wheel_direction_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_direction_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_spd_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_spd_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_spd_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_tire_pressure_ok
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->is_tire_pressure_ok);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_tire_pressure_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_tire_pressure_lf_valid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->is_tire_pressure_lf_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_tire_pressure_lf_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tire_pressure_lf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tire_pressure_lf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tire_pressure_lf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_tire_pressure_rf_valid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->is_tire_pressure_rf_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_tire_pressure_rf_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tire_pressure_rf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tire_pressure_rf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tire_pressure_rf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_tire_pressure_lr_valid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->is_tire_pressure_lr_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_tire_pressure_lr_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tire_pressure_lr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tire_pressure_lr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tire_pressure_lr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_tire_pressure_rr_valid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->is_tire_pressure_rr_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_tire_pressure_rr_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tire_pressure_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tire_pressure_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tire_pressure_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_power_percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_power_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_power_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // air_bag_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->air_bag_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "air_bag_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_gun_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->charging_gun_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_gun_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_power_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vehicle_power_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_power_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chassis_error_code
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "chassis_error_code");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(int32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->chassis_error_code.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->chassis_error_code.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->chassis_error_code.size * sizeof(int32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

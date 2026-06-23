// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/VehicleParam.idl
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
#include "ros2_interface/msg/detail/vehicle_param__struct.h"
#include "ros2_interface/msg/detail/vehicle_param__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__vehicle_param__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("ros2_interface.msg._vehicle_param.VehicleParam", full_classname_dest, 46) == 0);
  }
  ros2_interface__msg__VehicleParam * ros_message = _ros_message;
  {  // brand
    PyObject * field = PyObject_GetAttrString(_pymsg, "brand");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->brand, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // steer_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mass_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mass_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mass_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass_rl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mass_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass_rr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheelbase
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelbase");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheelbase = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_edge_to_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_edge_to_center");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_edge_to_center = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // back_edge_to_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_edge_to_center");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->back_edge_to_center = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lf
    PyObject * field = PyObject_GetAttrString(_pymsg, "lf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lf = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lr
    PyObject * field = PyObject_GetAttrString(_pymsg, "lr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cf
    PyObject * field = PyObject_GetAttrString(_pymsg, "cf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cf = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cr
    PyObject * field = PyObject_GetAttrString(_pymsg, "cr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rolling_coefficient
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_coefficient");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rolling_coefficient = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // air_density
    PyObject * field = PyObject_GetAttrString(_pymsg, "air_density");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->air_density = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // air_damping_coefficient
    PyObject * field = PyObject_GetAttrString(_pymsg, "air_damping_coefficient");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->air_damping_coefficient = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_front_steer_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_front_steer_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_front_steer_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_front_steer_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_front_steer_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_front_steer_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_rear_steer_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_rear_steer_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_rear_steer_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_rear_steer_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_rear_steer_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_rear_steer_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_limit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_brake_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_brake_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_brake_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_brake_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_brake_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_brake_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_accel_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_accel_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_accel_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_accel_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_accel_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_accel_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_deadzone
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_deadzone");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_deadzone = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // standstill_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "standstill_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->standstill_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_front_steer_angle_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_front_steer_angle_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_front_steer_angle_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_rear_steer_angle_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_rear_steer_angle_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_rear_steer_angle_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_abs_speed_when_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_abs_speed_when_stopped");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_abs_speed_when_stopped = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_abs_speed_when_stopped_duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_abs_speed_when_stopped_duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_abs_speed_when_stopped_duration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_value_when_gear_transitioning
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_value_when_gear_transitioning");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_value_when_gear_transitioning = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_deadzone
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_deadzone");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_deadzone = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_deadzone
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_deadzone");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_deadzone = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_in_idle
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_in_idle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_in_idle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // deceleration_in_idle
    PyObject * field = PyObject_GetAttrString(_pymsg, "deceleration_in_idle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->deceleration_in_idle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_acceleration_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_acceleration_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_acceleration_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_deceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_deceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_deceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_turning_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_turning_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_turning_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__vehicle_param__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleParam */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._vehicle_param");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleParam");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__VehicleParam * ros_message = (ros2_interface__msg__VehicleParam *)raw_ros_message;
  {  // brand
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->brand.data,
      strlen(ros_message->brand.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "brand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->steer_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelbase
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheelbase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelbase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_edge_to_center
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_edge_to_center);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_edge_to_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_edge_to_center
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->back_edge_to_center);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_edge_to_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rolling_coefficient
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rolling_coefficient);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rolling_coefficient", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // air_density
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->air_density);
    {
      int rc = PyObject_SetAttrString(_pymessage, "air_density", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // air_damping_coefficient
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->air_damping_coefficient);
    {
      int rc = PyObject_SetAttrString(_pymessage, "air_damping_coefficient", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_front_steer_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_front_steer_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_front_steer_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_front_steer_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_front_steer_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_front_steer_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_rear_steer_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_rear_steer_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_rear_steer_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_rear_steer_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_rear_steer_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_rear_steer_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_brake_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_brake_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_brake_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_brake_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_brake_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_brake_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_accel_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_accel_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_accel_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_accel_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_accel_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_accel_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_deadzone
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_deadzone);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_deadzone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // standstill_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->standstill_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "standstill_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_front_steer_angle_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_front_steer_angle_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_front_steer_angle_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_rear_steer_angle_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_rear_steer_angle_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_rear_steer_angle_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_abs_speed_when_stopped
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_abs_speed_when_stopped);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_abs_speed_when_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_abs_speed_when_stopped_duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_abs_speed_when_stopped_duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_abs_speed_when_stopped_duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_value_when_gear_transitioning
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_value_when_gear_transitioning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_value_when_gear_transitioning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_deadzone
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_deadzone);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_deadzone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_deadzone
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_deadzone);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_deadzone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_in_idle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_in_idle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_in_idle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deceleration_in_idle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->deceleration_in_idle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deceleration_in_idle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_acceleration_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_acceleration_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_acceleration_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_deceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_deceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_deceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_turning_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_turning_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_turning_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

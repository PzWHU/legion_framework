// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/WheelInfo.idl
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
#include "ros2_interface/msg/detail/wheel_info__struct.h"
#include "ros2_interface/msg/detail/wheel_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__wheel_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("ros2_interface.msg._wheel_info.WheelInfo", full_classname_dest, 40) == 0);
  }
  ros2_interface__msg__WheelInfo * ros_message = _ros_message;
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
  {  // steer_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // steering_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_value = PyFloat_AS_DOUBLE(field);
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
  {  // steering_rate_dps
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_rate_dps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_rate_dps = PyFloat_AS_DOUBLE(field);
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
  {  // veh_spd_vld
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_spd_vld");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->veh_spd_vld = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gear_vld
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_vld");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gear_vld = (Py_True == field);
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
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wss_fl_edges_sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "wss_fl_edges_sum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wss_fl_edges_sum = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wss_fr_edges_sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "wss_fr_edges_sum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wss_fr_edges_sum = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wss_rl_edges_sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "wss_rl_edges_sum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wss_rl_edges_sum = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wss_rr_edges_sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "wss_rr_edges_sum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wss_rr_edges_sum = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wss_fl_edges_sum_vld
    PyObject * field = PyObject_GetAttrString(_pymsg, "wss_fl_edges_sum_vld");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wss_fl_edges_sum_vld = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wss_fr_edges_sum_vld
    PyObject * field = PyObject_GetAttrString(_pymsg, "wss_fr_edges_sum_vld");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wss_fr_edges_sum_vld = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wss_rl_edges_sum_vld
    PyObject * field = PyObject_GetAttrString(_pymsg, "wss_rl_edges_sum_vld");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wss_rl_edges_sum_vld = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wss_rr_edges_sum_vld
    PyObject * field = PyObject_GetAttrString(_pymsg, "wss_rr_edges_sum_vld");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wss_rr_edges_sum_vld = (Py_True == field);
    Py_DECREF(field);
  }
  {  // veh_lat_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_lat_accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_lat_accel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_lgt_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_lgt_accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_lgt_accel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_lat_accel_vld
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_lat_accel_vld");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->veh_lat_accel_vld = (Py_True == field);
    Py_DECREF(field);
  }
  {  // veh_lgt_accel_vld
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_lgt_accel_vld");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->veh_lgt_accel_vld = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__wheel_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WheelInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._wheel_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WheelInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__WheelInfo * ros_message = (ros2_interface__msg__WheelInfo *)raw_ros_message;
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
  {  // steering_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_value", field);
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
  {  // steering_rate_dps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_rate_dps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_rate_dps", field);
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
  {  // veh_spd_vld
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->veh_spd_vld ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_spd_vld", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_vld
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gear_vld ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_vld", field);
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
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wss_fl_edges_sum
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wss_fl_edges_sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wss_fl_edges_sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wss_fr_edges_sum
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wss_fr_edges_sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wss_fr_edges_sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wss_rl_edges_sum
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wss_rl_edges_sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wss_rl_edges_sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wss_rr_edges_sum
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wss_rr_edges_sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wss_rr_edges_sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wss_fl_edges_sum_vld
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wss_fl_edges_sum_vld ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wss_fl_edges_sum_vld", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wss_fr_edges_sum_vld
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wss_fr_edges_sum_vld ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wss_fr_edges_sum_vld", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wss_rl_edges_sum_vld
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wss_rl_edges_sum_vld ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wss_rl_edges_sum_vld", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wss_rr_edges_sum_vld
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wss_rr_edges_sum_vld ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wss_rr_edges_sum_vld", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_lat_accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_lat_accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_lat_accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_lgt_accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_lgt_accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_lgt_accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_lat_accel_vld
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->veh_lat_accel_vld ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_lat_accel_vld", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_lgt_accel_vld
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->veh_lgt_accel_vld ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_lgt_accel_vld", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

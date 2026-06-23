// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/RadarState.idl
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
#include "ros2_interface/msg/detail/radar_state__struct.h"
#include "ros2_interface/msg/detail/radar_state__functions.h"

bool ros2_interface__msg__radar_state_error__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__radar_state_error__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__radar_state_mode__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__radar_state_mode__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__radar_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("ros2_interface.msg._radar_state.RadarState", full_classname_dest, 42) == 0);
  }
  ros2_interface__msg__RadarState * ros_message = _ros_message;
  {  // sensor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nvm_read_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "nvm_read_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nvm_read_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nvm_write_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "nvm_write_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nvm_write_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // radar_state_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_state_error");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__radar_state_error__convert_from_py(field, &ros_message->radar_state_error)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radar_state_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_state_mode");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__radar_state_mode__convert_from_py(field, &ros_message->radar_state_mode)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // max_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_distance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_distance = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sort_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "sort_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sort_index = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // radar_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_power");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radar_power = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ctl_relay
    PyObject * field = PyObject_GetAttrString(_pymsg, "ctl_relay");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ctl_relay = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // output_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->output_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // send_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "send_quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->send_quality = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // send_extinfo
    PyObject * field = PyObject_GetAttrString(_pymsg, "send_extinfo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->send_extinfo = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motion_rx_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_rx_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motion_rx_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rcs_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcs_threshold");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rcs_threshold = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // connector_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "connector_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->connector_direction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // radar_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radar_position = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hw_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hw_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__radar_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._radar_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__RadarState * ros_message = (ros2_interface__msg__RadarState *)raw_ros_message;
  {  // sensor_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nvm_read_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nvm_read_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nvm_read_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nvm_write_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nvm_write_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nvm_write_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_state_error
    PyObject * field = NULL;
    field = ros2_interface__msg__radar_state_error__convert_to_py(&ros_message->radar_state_error);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_state_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_state_mode
    PyObject * field = NULL;
    field = ros2_interface__msg__radar_state_mode__convert_to_py(&ros_message->radar_state_mode);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_state_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_distance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sort_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sort_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sort_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_power
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->radar_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ctl_relay
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ctl_relay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ctl_relay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->output_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // send_quality
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->send_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "send_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // send_extinfo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->send_extinfo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "send_extinfo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_rx_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motion_rx_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_rx_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcs_threshold
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rcs_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcs_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connector_direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->connector_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connector_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->radar_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hw_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

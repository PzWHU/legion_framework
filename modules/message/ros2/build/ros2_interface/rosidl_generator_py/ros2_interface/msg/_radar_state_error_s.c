// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/RadarStateError.idl
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
#include "ros2_interface/msg/detail/radar_state_error__struct.h"
#include "ros2_interface/msg/detail/radar_state_error__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__radar_state_error__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("ros2_interface.msg._radar_state_error.RadarStateError", full_classname_dest, 53) == 0);
  }
  ros2_interface__msg__RadarStateError * ros_message = _ros_message;
  {  // persistent_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "persistent_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->persistent_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temporary_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "temporary_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temporary_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // interference_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "interference_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->interference_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temperature_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temperature_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voltage_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // block_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "block_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->block_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // broadcast_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "broadcast_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->broadcast_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // electric_axis_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "electric_axis_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->electric_axis_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // config_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "config_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->config_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // calibration_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->calibration_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__radar_state_error__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarStateError */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._radar_state_error");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarStateError");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__RadarStateError * ros_message = (ros2_interface__msg__RadarStateError *)raw_ros_message;
  {  // persistent_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->persistent_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "persistent_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temporary_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temporary_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temporary_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // interference_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->interference_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "interference_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temperature_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voltage_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // block_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->block_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "block_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // broadcast_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->broadcast_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "broadcast_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // electric_axis_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->electric_axis_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "electric_axis_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // config_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->config_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "config_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->calibration_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/VehicleSignal.idl
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
#include "ros2_interface/msg/detail/vehicle_signal__struct.h"
#include "ros2_interface/msg/detail/vehicle_signal__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__vehicle_signal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("ros2_interface.msg._vehicle_signal.VehicleSignal", full_classname_dest, 48) == 0);
  }
  ros2_interface__msg__VehicleSignal * ros_message = _ros_message;
  {  // turn_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_signal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_signal = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // high_beam
    PyObject * field = PyObject_GetAttrString(_pymsg, "high_beam");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->high_beam = (Py_True == field);
    Py_DECREF(field);
  }
  {  // low_beam
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_beam");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->low_beam = (Py_True == field);
    Py_DECREF(field);
  }
  {  // horn
    PyObject * field = PyObject_GetAttrString(_pymsg, "horn");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->horn = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_light");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_light = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__vehicle_signal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleSignal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._vehicle_signal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleSignal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__VehicleSignal * ros_message = (ros2_interface__msg__VehicleSignal *)raw_ros_message;
  {  // turn_signal
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->turn_signal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // high_beam
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->high_beam ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "high_beam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_beam
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->low_beam ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_beam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horn
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->horn ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_light
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_light ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

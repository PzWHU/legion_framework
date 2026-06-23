// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/TrajectoryLimitCommand.idl
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
#include "ros2_interface/msg/detail/trajectory_limit_command__struct.h"
#include "ros2_interface/msg/detail/trajectory_limit_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__trajectory_limit_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("ros2_interface.msg._trajectory_limit_command.TrajectoryLimitCommand", full_classname_dest, 67) == 0);
  }
  ros2_interface__msg__TrajectoryLimitCommand * ros_message = _ros_message;
  {  // speed_limit_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limit_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->speed_limit_enable = (Py_True == field);
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
  {  // kappa_limit_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "kappa_limit_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->kappa_limit_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // kappa_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "kappa_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kappa_limit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__trajectory_limit_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrajectoryLimitCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._trajectory_limit_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrajectoryLimitCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__TrajectoryLimitCommand * ros_message = (ros2_interface__msg__TrajectoryLimitCommand *)raw_ros_message;
  {  // speed_limit_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->speed_limit_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limit_enable", field);
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
  {  // kappa_limit_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->kappa_limit_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kappa_limit_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kappa_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kappa_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kappa_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

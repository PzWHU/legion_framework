// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/SecurityDecision.idl
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
#include "ros2_interface/msg/detail/security_decision__struct.h"
#include "ros2_interface/msg/detail/security_decision__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__warning_command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__warning_command__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory_limit_command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory_limit_command__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__security_decision__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("ros2_interface.msg._security_decision.SecurityDecision", full_classname_dest, 54) == 0);
  }
  ros2_interface__msg__SecurityDecision * ros_message = _ros_message;
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
  {  // warning_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning_command");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__warning_command__convert_from_py(field, &ros_message->warning_command)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // brake_report
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_report");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_report = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // change_lane_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_lane_command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->change_lane_command = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trajectory_limit_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_limit_command");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__trajectory_limit_command__convert_from_py(field, &ros_message->trajectory_limit_command)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // park_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "park_command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->park_command = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // drivingmode_report
    PyObject * field = PyObject_GetAttrString(_pymsg, "drivingmode_report");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drivingmode_report = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__security_decision__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SecurityDecision */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._security_decision");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SecurityDecision");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__SecurityDecision * ros_message = (ros2_interface__msg__SecurityDecision *)raw_ros_message;
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
  {  // warning_command
    PyObject * field = NULL;
    field = ros2_interface__msg__warning_command__convert_to_py(&ros_message->warning_command);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_report
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->brake_report);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_report", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_lane_command
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->change_lane_command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_lane_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_limit_command
    PyObject * field = NULL;
    field = ros2_interface__msg__trajectory_limit_command__convert_to_py(&ros_message->trajectory_limit_command);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_limit_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // park_command
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->park_command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "park_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drivingmode_report
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->drivingmode_report);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drivingmode_report", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

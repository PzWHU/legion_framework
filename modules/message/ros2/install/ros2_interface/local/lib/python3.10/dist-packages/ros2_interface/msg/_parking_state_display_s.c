// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/ParkingStateDisplay.idl
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
#include "ros2_interface/msg/detail/parking_state_display__struct.h"
#include "ros2_interface/msg/detail/parking_state_display__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__parking_state_display__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("ros2_interface.msg._parking_state_display.ParkingStateDisplay", full_classname_dest, 61) == 0);
  }
  ros2_interface__msg__ParkingStateDisplay * ros_message = _ros_message;
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
  {  // parking_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parking_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // moves_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "moves_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->moves_counter = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // remian_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "remian_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remian_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // display_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "display_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->display_info = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // distance_to_leader_obj
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_leader_obj");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_leader_obj = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__parking_state_display__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ParkingStateDisplay */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._parking_state_display");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParkingStateDisplay");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__ParkingStateDisplay * ros_message = (ros2_interface__msg__ParkingStateDisplay *)raw_ros_message;
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
  {  // parking_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->parking_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moves_counter
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->moves_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moves_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remian_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remian_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remian_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // display_info
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->display_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "display_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_leader_obj
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_leader_obj);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_leader_obj", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

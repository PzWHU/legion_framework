// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/TrajectoryPoint.idl
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
#include "ros2_interface/msg/detail/trajectory_point__struct.h"
#include "ros2_interface/msg/detail/trajectory_point__functions.h"

bool ros2_interface__msg__path_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__path_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("ros2_interface.msg._trajectory_point.TrajectoryPoint", full_classname_dest, 52) == 0);
  }
  ros2_interface__msg__TrajectoryPoint * ros_message = _ros_message;
  {  // path_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_point");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__path_point__convert_from_py(field, &ros_message->path_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // v
    PyObject * field = PyObject_GetAttrString(_pymsg, "v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a
    PyObject * field = PyObject_GetAttrString(_pymsg, "a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // relative_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->relative_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // da
    PyObject * field = PyObject_GetAttrString(_pymsg, "da");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->da = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_steer_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_steer_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_steer_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // front_steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steer = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steer = PyFloat_AS_DOUBLE(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__trajectory_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrajectoryPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._trajectory_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrajectoryPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__TrajectoryPoint * ros_message = (ros2_interface__msg__TrajectoryPoint *)raw_ros_message;
  {  // path_point
    PyObject * field = NULL;
    field = ros2_interface__msg__path_point__convert_to_py(&ros_message->path_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->relative_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // da
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->da);
    {
      int rc = PyObject_SetAttrString(_pymessage, "da", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_steer_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_steer_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_steer_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steer", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/RSSInfo.idl
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
#include "ros2_interface/msg/detail/rss_info__struct.h"
#include "ros2_interface/msg/detail/rss_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__rss_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("ros2_interface.msg._rss_info.RSSInfo", full_classname_dest, 36) == 0);
  }
  ros2_interface__msg__RSSInfo * ros_message = _ros_message;
  {  // is_rss_safe
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_rss_safe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_rss_safe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cur_dist_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_dist_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cur_dist_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rss_safe_dist_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "rss_safe_dist_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rss_safe_dist_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_lon_range_minimum
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_lon_range_minimum");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_lon_range_minimum = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_lon_range_maximum
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_lon_range_maximum");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_lon_range_maximum = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_lat_left_range_minimum
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_lat_left_range_minimum");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_lat_left_range_minimum = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_lat_left_range_maximum
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_lat_left_range_maximum");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_lat_left_range_maximum = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_lat_right_range_minimum
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_lat_right_range_minimum");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_lat_right_range_minimum = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_lat_right_range_maximum
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_lat_right_range_maximum");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_lat_right_range_maximum = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__rss_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RSSInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._rss_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RSSInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__RSSInfo * ros_message = (ros2_interface__msg__RSSInfo *)raw_ros_message;
  {  // is_rss_safe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_rss_safe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_rss_safe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_dist_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cur_dist_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_dist_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rss_safe_dist_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rss_safe_dist_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rss_safe_dist_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_lon_range_minimum
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_lon_range_minimum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_lon_range_minimum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_lon_range_maximum
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_lon_range_maximum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_lon_range_maximum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_lat_left_range_minimum
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_lat_left_range_minimum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_lat_left_range_minimum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_lat_left_range_maximum
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_lat_left_range_maximum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_lat_left_range_maximum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_lat_right_range_minimum
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_lat_right_range_minimum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_lat_right_range_minimum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_lat_right_range_maximum
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_lat_right_range_maximum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_lat_right_range_maximum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

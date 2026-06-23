// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/GuideInfo.idl
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
#include "ros2_interface/msg/detail/guide_info__struct.h"
#include "ros2_interface/msg/detail/guide_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__guide_road__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__guide_road__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__guide_road__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__guide_road__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__guide_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ros2_interface.msg._guide_info.GuideInfo", full_classname_dest, 40) == 0);
  }
  ros2_interface__msg__GuideInfo * ros_message = _ros_message;
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
  {  // next_dis
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_dis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->next_dis = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_road");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__guide_road__convert_from_py(field, &ros_message->current_road)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // next_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_road");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__guide_road__convert_from_py(field, &ros_message->next_road)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // round_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "round_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->round_status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // intersection_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersection_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->intersection_status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // roads_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "roads_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->roads_status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__guide_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GuideInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._guide_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GuideInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__GuideInfo * ros_message = (ros2_interface__msg__GuideInfo *)raw_ros_message;
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
  {  // next_dis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->next_dis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_dis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_road
    PyObject * field = NULL;
    field = ros2_interface__msg__guide_road__convert_to_py(&ros_message->current_road);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_road
    PyObject * field = NULL;
    field = ros2_interface__msg__guide_road__convert_to_py(&ros_message->next_road);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // round_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->round_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "round_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intersection_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->intersection_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "intersection_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roads_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->roads_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roads_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

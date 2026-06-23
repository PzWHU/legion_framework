// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/ParkingOutInfo.idl
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
#include "ros2_interface/msg/detail/parking_out_info__struct.h"
#include "ros2_interface/msg/detail/parking_out_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__parking_out_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("ros2_interface.msg._parking_out_info.ParkingOutInfo", full_classname_dest, 51) == 0);
  }
  ros2_interface__msg__ParkingOutInfo * ros_message = _ros_message;
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
  {  // parking_out_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_out_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parking_out_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // parking_direction_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_direction_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parking_direction_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_parking_out_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_parking_out_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_parking_out_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // parking_out_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_out_point");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->parking_out_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__parking_out_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ParkingOutInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._parking_out_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParkingOutInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__ParkingOutInfo * ros_message = (ros2_interface__msg__ParkingOutInfo *)raw_ros_message;
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
  {  // parking_out_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->parking_out_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_out_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parking_direction_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->parking_direction_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_direction_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_parking_out_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_parking_out_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_parking_out_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parking_out_point
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->parking_out_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_out_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

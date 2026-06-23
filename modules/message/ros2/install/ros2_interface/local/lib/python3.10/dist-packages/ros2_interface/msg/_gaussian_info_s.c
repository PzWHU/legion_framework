// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/GaussianInfo.idl
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
#include "ros2_interface/msg/detail/gaussian_info__struct.h"
#include "ros2_interface/msg/detail/gaussian_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__gaussian_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("ros2_interface.msg._gaussian_info.GaussianInfo", full_classname_dest, 46) == 0);
  }
  ros2_interface__msg__GaussianInfo * ros_message = _ros_message;
  {  // sigma_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "sigma_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sigma_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sigma_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "sigma_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sigma_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // correlation
    PyObject * field = PyObject_GetAttrString(_pymsg, "correlation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->correlation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // area_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "area_probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->area_probability = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ellipse_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "ellipse_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ellipse_a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ellipse_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "ellipse_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ellipse_b = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__gaussian_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GaussianInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._gaussian_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GaussianInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__GaussianInfo * ros_message = (ros2_interface__msg__GaussianInfo *)raw_ros_message;
  {  // sigma_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sigma_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sigma_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sigma_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sigma_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sigma_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // correlation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->correlation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "correlation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // area_probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->area_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "area_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ellipse_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ellipse_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ellipse_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ellipse_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ellipse_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ellipse_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

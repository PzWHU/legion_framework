// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/Matrix3D.idl
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
#include "ros2_interface/msg/detail/matrix3_d__struct.h"
#include "ros2_interface/msg/detail/matrix3_d__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__matrix3_d__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("ros2_interface.msg._matrix3_d.Matrix3D", full_classname_dest, 38) == 0);
  }
  ros2_interface__msg__Matrix3D * ros_message = _ros_message;
  {  // a00
    PyObject * field = PyObject_GetAttrString(_pymsg, "a00");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a00 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a01
    PyObject * field = PyObject_GetAttrString(_pymsg, "a01");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a01 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a02
    PyObject * field = PyObject_GetAttrString(_pymsg, "a02");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a02 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a10
    PyObject * field = PyObject_GetAttrString(_pymsg, "a10");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a10 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a11
    PyObject * field = PyObject_GetAttrString(_pymsg, "a11");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a11 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a12
    PyObject * field = PyObject_GetAttrString(_pymsg, "a12");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a12 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a20
    PyObject * field = PyObject_GetAttrString(_pymsg, "a20");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a20 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a21
    PyObject * field = PyObject_GetAttrString(_pymsg, "a21");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a21 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a22
    PyObject * field = PyObject_GetAttrString(_pymsg, "a22");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a22 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__matrix3_d__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Matrix3D */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._matrix3_d");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Matrix3D");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__Matrix3D * ros_message = (ros2_interface__msg__Matrix3D *)raw_ros_message;
  {  // a00
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a00);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a00", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a01
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a01);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a01", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a02
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a02);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a02", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a10
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a10);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a11
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a11);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a11", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a12
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a12);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a12", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a20
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a20);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a20", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a21
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a21);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a21", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a22
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a22);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a22", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

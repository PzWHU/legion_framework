// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/GlobalRouteMsg.idl
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
#include "ros2_interface/msg/detail/global_route_msg__struct.h"
#include "ros2_interface/msg/detail/global_route_msg__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/lanelet_info__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__lanelet_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__lanelet_info__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__lanelet_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__lanelet_info__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__lanelet_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__lanelet_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__global_route_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ros2_interface.msg._global_route_msg.GlobalRouteMsg", full_classname_dest, 51) == 0);
  }
  ros2_interface__msg__GlobalRouteMsg * ros_message = _ros_message;
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
  {  // route
    PyObject * field = PyObject_GetAttrString(_pymsg, "route");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'route'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ros2_interface__msg__LaneletInfo__Sequence__init(&(ros_message->route), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__LaneletInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__LaneletInfo * dest = ros_message->route.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__lanelet_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // current_lanelet
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_lanelet");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__lanelet_info__convert_from_py(field, &ros_message->current_lanelet)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // total_mileage
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_mileage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_mileage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cur_mileage
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_mileage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cur_mileage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cur_slice
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_slice");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cur_slice'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ros2_interface__msg__LaneletInfo__Sequence__init(&(ros_message->cur_slice), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__LaneletInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__LaneletInfo * dest = ros_message->cur_slice.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__lanelet_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__global_route_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GlobalRouteMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._global_route_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GlobalRouteMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__GlobalRouteMsg * ros_message = (ros2_interface__msg__GlobalRouteMsg *)raw_ros_message;
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
  {  // route
    PyObject * field = NULL;
    size_t size = ros_message->route.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__LaneletInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->route.data[i]);
      PyObject * pyitem = ros2_interface__msg__lanelet_info__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "route", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_lanelet
    PyObject * field = NULL;
    field = ros2_interface__msg__lanelet_info__convert_to_py(&ros_message->current_lanelet);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_lanelet", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_mileage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_mileage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_mileage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_mileage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cur_mileage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_mileage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_slice
    PyObject * field = NULL;
    size_t size = ros_message->cur_slice.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__LaneletInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cur_slice.data[i]);
      PyObject * pyitem = ros2_interface__msg__lanelet_info__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_slice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

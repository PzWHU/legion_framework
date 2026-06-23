// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/LaneInfo.idl
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
#include "ros2_interface/msg/detail/lane_info__struct.h"
#include "ros2_interface/msg/detail/lane_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/lane_point__functions.h"
// end nested array functions include
bool ros2_interface__msg__lane_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__lane_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__lane_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ros2_interface.msg._lane_info.LaneInfo", full_classname_dest, 38) == 0);
  }
  ros2_interface__msg__LaneInfo * ros_message = _ros_message;
  {  // priority
    PyObject * field = PyObject_GetAttrString(_pymsg, "priority");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->priority = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // global_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->global_id = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // predecessor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "predecessor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->predecessor_id = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // successor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "successor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->successor_id = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_neighbor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_neighbor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_neighbor_id = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_neighbor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_neighbor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_neighbor_id = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lane_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lane_points'");
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
    if (!ros2_interface__msg__LanePoint__Sequence__init(&(ros_message->lane_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__LanePoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__LanePoint * dest = ros_message->lane_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__lane_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ros2_interface__msg__lane_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._lane_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__LaneInfo * ros_message = (ros2_interface__msg__LaneInfo *)raw_ros_message;
  {  // priority
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->priority);
    {
      int rc = PyObject_SetAttrString(_pymessage, "priority", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // global_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->global_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // predecessor_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->predecessor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "predecessor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // successor_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->successor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "successor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_neighbor_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_neighbor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_neighbor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_neighbor_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_neighbor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_neighbor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_points
    PyObject * field = NULL;
    size_t size = ros_message->lane_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__LanePoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lane_points.data[i]);
      PyObject * pyitem = ros2_interface__msg__lane_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "lane_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

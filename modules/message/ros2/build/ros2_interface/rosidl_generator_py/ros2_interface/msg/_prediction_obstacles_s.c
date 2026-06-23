// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/PredictionObstacles.idl
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
#include "ros2_interface/msg/detail/prediction_obstacles__struct.h"
#include "ros2_interface/msg/detail/prediction_obstacles__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/prediction_obstacle__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__prediction_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__prediction_obstacle__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__prediction_obstacles__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("ros2_interface.msg._prediction_obstacles.PredictionObstacles", full_classname_dest, 60) == 0);
  }
  ros2_interface__msg__PredictionObstacles * ros_message = _ros_message;
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
  {  // prediction_obstacles
    PyObject * field = PyObject_GetAttrString(_pymsg, "prediction_obstacles");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'prediction_obstacles'");
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
    if (!ros2_interface__msg__PredictionObstacle__Sequence__init(&(ros_message->prediction_obstacles), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__PredictionObstacle__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__PredictionObstacle * dest = ros_message->prediction_obstacles.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__prediction_obstacle__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // change_origin_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_origin_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->change_origin_flag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // start_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->start_timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // end_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->end_timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // self_intent
    PyObject * field = PyObject_GetAttrString(_pymsg, "self_intent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->self_intent = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // scenario
    PyObject * field = PyObject_GetAttrString(_pymsg, "scenario");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scenario = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__prediction_obstacles__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PredictionObstacles */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._prediction_obstacles");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PredictionObstacles");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__PredictionObstacles * ros_message = (ros2_interface__msg__PredictionObstacles *)raw_ros_message;
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
  {  // prediction_obstacles
    PyObject * field = NULL;
    size_t size = ros_message->prediction_obstacles.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__PredictionObstacle * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->prediction_obstacles.data[i]);
      PyObject * pyitem = ros2_interface__msg__prediction_obstacle__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "prediction_obstacles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_origin_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->change_origin_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_origin_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->start_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->end_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // self_intent
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->self_intent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "self_intent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scenario
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->scenario);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scenario", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

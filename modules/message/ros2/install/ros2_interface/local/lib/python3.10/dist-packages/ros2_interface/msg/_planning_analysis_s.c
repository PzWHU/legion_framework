// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/PlanningAnalysis.idl
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
#include "ros2_interface/msg/detail/planning_analysis__struct.h"
#include "ros2_interface/msg/detail/planning_analysis__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/time_consume__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__time_consume__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__time_consume__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__planning_parking_debug__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__planning_parking_debug__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__planning_analysis__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("ros2_interface.msg._planning_analysis.PlanningAnalysis", full_classname_dest, 54) == 0);
  }
  ros2_interface__msg__PlanningAnalysis * ros_message = _ros_message;
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
  {  // frame_update_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_update_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->frame_update_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // generator_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "generator_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->generator_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // evaluator_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "evaluator_time");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'evaluator_time'");
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
    if (!ros2_interface__msg__TimeConsume__Sequence__init(&(ros_message->evaluator_time), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TimeConsume__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TimeConsume * dest = ros_message->evaluator_time.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__time_consume__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // selector_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "selector_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->selector_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // planning_parking_debug
    PyObject * field = PyObject_GetAttrString(_pymsg, "planning_parking_debug");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__planning_parking_debug__convert_from_py(field, &ros_message->planning_parking_debug)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dis_to_center_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "dis_to_center_line");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dis_to_center_line = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // diff_to_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_to_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_to_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // referencline_kappa
    PyObject * field = PyObject_GetAttrString(_pymsg, "referencline_kappa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->referencline_kappa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__planning_analysis__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanningAnalysis */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._planning_analysis");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanningAnalysis");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__PlanningAnalysis * ros_message = (ros2_interface__msg__PlanningAnalysis *)raw_ros_message;
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
  {  // frame_update_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->frame_update_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_update_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // generator_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->generator_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "generator_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // evaluator_time
    PyObject * field = NULL;
    size_t size = ros_message->evaluator_time.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TimeConsume * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->evaluator_time.data[i]);
      PyObject * pyitem = ros2_interface__msg__time_consume__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "evaluator_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // selector_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->selector_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "selector_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // planning_parking_debug
    PyObject * field = NULL;
    field = ros2_interface__msg__planning_parking_debug__convert_to_py(&ros_message->planning_parking_debug);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "planning_parking_debug", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dis_to_center_line
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dis_to_center_line);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dis_to_center_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_to_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_to_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_to_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // referencline_kappa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->referencline_kappa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "referencline_kappa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/ADCTrajectory.idl
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
#include "ros2_interface/msg/detail/adc_trajectory__struct.h"
#include "ros2_interface/msg/detail/adc_trajectory__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/trajectory_point__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory_point__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__e_stop__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__e_stop__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__rss_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__rss_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__adc_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("ros2_interface.msg._adc_trajectory.ADCTrajectory", full_classname_dest, 48) == 0);
  }
  ros2_interface__msg__ADCTrajectory * ros_message = _ros_message;
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
  {  // total_path_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_path_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_path_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_path_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_path_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_path_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trajectory_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'trajectory_points'");
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
    if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&(ros_message->trajectory_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrajectoryPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrajectoryPoint * dest = ros_message->trajectory_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__trajectory_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // car_action
    PyObject * field = PyObject_GetAttrString(_pymsg, "car_action");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->car_action = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // behaviour_lat_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "behaviour_lat_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->behaviour_lat_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // behaviour_lon_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "behaviour_lon_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->behaviour_lon_state = (int32_t)PyLong_AsLong(field);
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
  {  // driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // adc_trajectory_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "adc_trajectory_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->adc_trajectory_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // estop
    PyObject * field = PyObject_GetAttrString(_pymsg, "estop");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__e_stop__convert_from_py(field, &ros_message->estop)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_replan
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_replan");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_replan = (Py_True == field);
    Py_DECREF(field);
  }
  {  // replan_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "replan_reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->replan_reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // right_of_way_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_of_way_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_of_way_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rss_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "rss_info");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__rss_info__convert_from_py(field, &ros_message->rss_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__adc_trajectory__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ADCTrajectory */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._adc_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ADCTrajectory");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__ADCTrajectory * ros_message = (ros2_interface__msg__ADCTrajectory *)raw_ros_message;
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
  {  // total_path_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_path_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_path_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_path_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_path_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_path_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_points
    PyObject * field = NULL;
    size_t size = ros_message->trajectory_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrajectoryPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->trajectory_points.data[i]);
      PyObject * pyitem = ros2_interface__msg__trajectory_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // car_action
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->car_action);
    {
      int rc = PyObject_SetAttrString(_pymessage, "car_action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // behaviour_lat_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->behaviour_lat_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "behaviour_lat_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // behaviour_lon_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->behaviour_lon_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "behaviour_lon_state", field);
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
  {  // driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adc_trajectory_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->adc_trajectory_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adc_trajectory_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estop
    PyObject * field = NULL;
    field = ros2_interface__msg__e_stop__convert_to_py(&ros_message->estop);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "estop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_replan
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_replan ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_replan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replan_reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->replan_reason.data,
      strlen(ros_message->replan_reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "replan_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_of_way_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_of_way_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_of_way_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rss_info
    PyObject * field = NULL;
    field = ros2_interface__msg__rss_info__convert_to_py(&ros_message->rss_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rss_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

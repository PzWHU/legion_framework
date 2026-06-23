// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/LaneList.idl
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
#include "ros2_interface/msg/detail/lane_list__struct.h"
#include "ros2_interface/msg/detail/lane_list__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/lane_line__functions.h"
#include "ros2_interface/msg/detail/road_mark__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__sensor_calibrator__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__sensor_calibrator__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__lane_line__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__lane_line__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__holistic_path_prediction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__holistic_path_prediction__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__road_mark__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__road_mark__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__lane_list__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ros2_interface.msg._lane_list.LaneList", full_classname_dest, 38) == 0);
  }
  ros2_interface__msg__LaneList * ros_message = _ros_message;
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
  {  // sensor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_code = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sensor_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_status = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // is_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sensor_calibrator
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_calibrator");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__sensor_calibrator__convert_from_py(field, &ros_message->sensor_calibrator)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // camera_laneline
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_laneline");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'camera_laneline'");
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
    if (!ros2_interface__msg__LaneLine__Sequence__init(&(ros_message->camera_laneline), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__LaneLine__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__LaneLine * dest = ros_message->camera_laneline.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__lane_line__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // hpp
    PyObject * field = PyObject_GetAttrString(_pymsg, "hpp");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__holistic_path_prediction__convert_from_py(field, &ros_message->hpp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // road_marks
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_marks");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'road_marks'");
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
    if (!ros2_interface__msg__RoadMark__Sequence__init(&(ros_message->road_marks), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__RoadMark__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__RoadMark * dest = ros_message->road_marks.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__road_mark__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ros2_interface__msg__lane_list__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneList */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._lane_list");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneList");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__LaneList * ros_message = (ros2_interface__msg__LaneList *)raw_ros_message;
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
  {  // sensor_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sensor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_code
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_status", field);
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
  {  // is_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_calibrator
    PyObject * field = NULL;
    field = ros2_interface__msg__sensor_calibrator__convert_to_py(&ros_message->sensor_calibrator);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_calibrator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_laneline
    PyObject * field = NULL;
    size_t size = ros_message->camera_laneline.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__LaneLine * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->camera_laneline.data[i]);
      PyObject * pyitem = ros2_interface__msg__lane_line__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "camera_laneline", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hpp
    PyObject * field = NULL;
    field = ros2_interface__msg__holistic_path_prediction__convert_to_py(&ros_message->hpp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hpp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_marks
    PyObject * field = NULL;
    size_t size = ros_message->road_marks.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__RoadMark * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->road_marks.data[i]);
      PyObject * pyitem = ros2_interface__msg__road_mark__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "road_marks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

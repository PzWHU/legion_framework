// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/TrafficLightDebug.idl
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
#include "ros2_interface/msg/detail/traffic_light_debug__struct.h"
#include "ros2_interface/msg/detail/traffic_light_debug__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/traffic_light_box__functions.h"
// end nested array functions include
bool ros2_interface__msg__traffic_light_box__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__traffic_light_box__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__traffic_light_box__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__traffic_light_box__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__traffic_light_box__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__traffic_light_box__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__traffic_light_box__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__traffic_light_box__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__traffic_light_box__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__traffic_light_box__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__traffic_light_box__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__traffic_light_box__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__traffic_light_debug__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("ros2_interface.msg._traffic_light_debug.TrafficLightDebug", full_classname_dest, 57) == 0);
  }
  ros2_interface__msg__TrafficLightDebug * ros_message = _ros_message;
  {  // cropbox
    PyObject * field = PyObject_GetAttrString(_pymsg, "cropbox");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__traffic_light_box__convert_from_py(field, &ros_message->cropbox)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // box
    PyObject * field = PyObject_GetAttrString(_pymsg, "box");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'box'");
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
    if (!ros2_interface__msg__TrafficLightBox__Sequence__init(&(ros_message->box), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrafficLightBox__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrafficLightBox * dest = ros_message->box.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__traffic_light_box__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // signal_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // valid_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->valid_pos = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ts_diff_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "ts_diff_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ts_diff_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ts_diff_sys
    PyObject * field = PyObject_GetAttrString(_pymsg, "ts_diff_sys");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ts_diff_sys = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // project_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "project_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->project_error = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // distance_to_stop_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_stop_line");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_stop_line = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // camera_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->camera_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // crop_roi
    PyObject * field = PyObject_GetAttrString(_pymsg, "crop_roi");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'crop_roi'");
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
    if (!ros2_interface__msg__TrafficLightBox__Sequence__init(&(ros_message->crop_roi), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrafficLightBox__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrafficLightBox * dest = ros_message->crop_roi.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__traffic_light_box__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // projected_roi
    PyObject * field = PyObject_GetAttrString(_pymsg, "projected_roi");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'projected_roi'");
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
    if (!ros2_interface__msg__TrafficLightBox__Sequence__init(&(ros_message->projected_roi), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrafficLightBox__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrafficLightBox * dest = ros_message->projected_roi.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__traffic_light_box__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // rectified_roi
    PyObject * field = PyObject_GetAttrString(_pymsg, "rectified_roi");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'rectified_roi'");
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
    if (!ros2_interface__msg__TrafficLightBox__Sequence__init(&(ros_message->rectified_roi), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrafficLightBox__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrafficLightBox * dest = ros_message->rectified_roi.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__traffic_light_box__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // debug_roi
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug_roi");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'debug_roi'");
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
    if (!ros2_interface__msg__TrafficLightBox__Sequence__init(&(ros_message->debug_roi), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrafficLightBox__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrafficLightBox * dest = ros_message->debug_roi.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__traffic_light_box__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ros2_interface__msg__traffic_light_debug__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficLightDebug */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._traffic_light_debug");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficLightDebug");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__TrafficLightDebug * ros_message = (ros2_interface__msg__TrafficLightDebug *)raw_ros_message;
  {  // cropbox
    PyObject * field = NULL;
    field = ros2_interface__msg__traffic_light_box__convert_to_py(&ros_message->cropbox);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cropbox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // box
    PyObject * field = NULL;
    size_t size = ros_message->box.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrafficLightBox * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->box.data[i]);
      PyObject * pyitem = ros2_interface__msg__traffic_light_box__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "box", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->signal_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid_pos
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->valid_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ts_diff_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ts_diff_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ts_diff_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ts_diff_sys
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ts_diff_sys);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ts_diff_sys", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // project_error
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->project_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "project_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_stop_line
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_stop_line);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_stop_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->camera_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crop_roi
    PyObject * field = NULL;
    size_t size = ros_message->crop_roi.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrafficLightBox * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->crop_roi.data[i]);
      PyObject * pyitem = ros2_interface__msg__traffic_light_box__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "crop_roi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // projected_roi
    PyObject * field = NULL;
    size_t size = ros_message->projected_roi.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrafficLightBox * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->projected_roi.data[i]);
      PyObject * pyitem = ros2_interface__msg__traffic_light_box__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "projected_roi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rectified_roi
    PyObject * field = NULL;
    size_t size = ros_message->rectified_roi.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrafficLightBox * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->rectified_roi.data[i]);
      PyObject * pyitem = ros2_interface__msg__traffic_light_box__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "rectified_roi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug_roi
    PyObject * field = NULL;
    size_t size = ros_message->debug_roi.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrafficLightBox * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->debug_roi.data[i]);
      PyObject * pyitem = ros2_interface__msg__traffic_light_box__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "debug_roi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

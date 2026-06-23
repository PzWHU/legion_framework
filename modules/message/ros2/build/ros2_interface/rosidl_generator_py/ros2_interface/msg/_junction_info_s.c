// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/JunctionInfo.idl
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
#include "ros2_interface/msg/detail/junction_info__struct.h"
#include "ros2_interface/msg/detail/junction_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/point3_d__functions.h"
// end nested array functions include
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__junction_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ros2_interface.msg._junction_info.JunctionInfo", full_classname_dest, 46) == 0);
  }
  ros2_interface__msg__JunctionInfo * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // light_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->light_flag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // light_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->light_color = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // light_remain_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_remain_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->light_remain_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_to_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_stop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_stop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // direction_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction_flag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // distance_to_junction
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_junction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_junction = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stop_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_line");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'stop_line'");
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
    if (!ros2_interface__msg__Point3D__Sequence__init(&(ros_message->stop_line), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Point3D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Point3D * dest = ros_message->stop_line.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__point3_d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ros2_interface__msg__junction_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JunctionInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._junction_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JunctionInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__JunctionInfo * ros_message = (ros2_interface__msg__JunctionInfo *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->light_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_color
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->light_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_remain_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->light_remain_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_remain_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_stop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_stop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->direction_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_junction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_junction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_junction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_line
    PyObject * field = NULL;
    size_t size = ros_message->stop_line.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Point3D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->stop_line.data[i]);
      PyObject * pyitem = ros2_interface__msg__point3_d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "stop_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

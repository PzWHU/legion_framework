// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/NaviInfoMsg.idl
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
#include "ros2_interface/msg/detail/navi_info_msg__struct.h"
#include "ros2_interface/msg/detail/navi_info_msg__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__navi_info_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("ros2_interface.msg._navi_info_msg.NaviInfoMsg", full_classname_dest, 45) == 0);
  }
  ros2_interface__msg__NaviInfoMsg * ros_message = _ros_message;
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
  {  // lane_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_index = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_target");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_target = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->road_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turning_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "turning_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turning_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turning_deriction
    PyObject * field = PyObject_GetAttrString(_pymsg, "turning_deriction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turning_deriction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_to_cross
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_cross");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_cross = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // traffic_light_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_light_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->traffic_light_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // crossing_behavior
    PyObject * field = PyObject_GetAttrString(_pymsg, "crossing_behavior");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crossing_behavior = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // distance_to_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_stop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_stop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__navi_info_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NaviInfoMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._navi_info_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NaviInfoMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__NaviInfoMsg * ros_message = (ros2_interface__msg__NaviInfoMsg *)raw_ros_message;
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
  {  // lane_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_target
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->road_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turning_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turning_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turning_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turning_deriction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turning_deriction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turning_deriction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_cross
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_cross);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_cross", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_light_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->traffic_light_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_light_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crossing_behavior
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->crossing_behavior);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crossing_behavior", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

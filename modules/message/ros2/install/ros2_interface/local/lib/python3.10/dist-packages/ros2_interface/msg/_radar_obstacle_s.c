// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/RadarObstacle.idl
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
#include "ros2_interface/msg/detail/radar_obstacle__struct.h"
#include "ros2_interface/msg/detail/radar_obstacle__functions.h"

bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__radar_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ros2_interface.msg._radar_obstacle.RadarObstacle", full_classname_dest, 48) == 0);
  }
  ros2_interface__msg__RadarObstacle * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // life_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "life_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->life_time = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // relative_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_position");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->relative_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relative_position_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_position_rms");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->relative_position_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relative_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_velocity");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->relative_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relative_velocity_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_velocity_rms");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->relative_velocity_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relative_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_acceleration");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->relative_acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relative_acceleration_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_acceleration_rms");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->relative_acceleration_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rcs
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rcs = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // snr
    PyObject * field = PyObject_GetAttrString(_pymsg, "snr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->snr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // moving_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "moving_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->moving_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // absolute_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_position");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->absolute_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // absolute_position_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_position_rms");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->absolute_position_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // absolute_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_velocity");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->absolute_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // absolute_velocity_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_velocity_rms");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->absolute_velocity_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // absolute_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_acceleration");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->absolute_acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // absolute_acceleration_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "absolute_acceleration_rms");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->absolute_acceleration_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orient_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "orient_rms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orient_rms = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rms = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // count
    PyObject * field = PyObject_GetAttrString(_pymsg, "count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // moving_frames_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "moving_frames_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->moving_frames_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__status__convert_from_py(field, &ros_message->status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // underpass_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "underpass_probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->underpass_probability = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // overpass_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "overpass_probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->overpass_probability = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // exist_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "exist_probability");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->exist_probability = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mov_property
    PyObject * field = PyObject_GetAttrString(_pymsg, "mov_property");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mov_property = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // track_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // track_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__radar_obstacle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarObstacle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._radar_obstacle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarObstacle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__RadarObstacle * ros_message = (ros2_interface__msg__RadarObstacle *)raw_ros_message;
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
  {  // life_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->life_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "life_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_position
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->relative_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_position_rms
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->relative_position_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_position_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_velocity
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->relative_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_velocity_rms
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->relative_velocity_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_velocity_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_acceleration
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->relative_acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_acceleration_rms
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->relative_acceleration_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_acceleration_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rcs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // snr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->snr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "snr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moving_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->moving_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moving_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // absolute_position
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->absolute_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // absolute_position_rms
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->absolute_position_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_position_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // absolute_velocity
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->absolute_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // absolute_velocity_rms
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->absolute_velocity_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_velocity_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // absolute_acceleration
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->absolute_acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // absolute_acceleration_rms
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->absolute_acceleration_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "absolute_acceleration_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orient_rms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orient_rms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orient_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moving_frames_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->moving_frames_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moving_frames_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = ros2_interface__msg__status__convert_to_py(&ros_message->status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // underpass_probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->underpass_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "underpass_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overpass_probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->overpass_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overpass_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exist_probability
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->exist_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exist_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mov_property
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mov_property);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mov_property", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->track_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->track_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

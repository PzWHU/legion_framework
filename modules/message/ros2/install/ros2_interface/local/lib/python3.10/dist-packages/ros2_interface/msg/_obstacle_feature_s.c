// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/ObstacleFeature.idl
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
#include "ros2_interface/msg/detail/obstacle_feature__struct.h"
#include "ros2_interface/msg/detail/obstacle_feature__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/prediction_trajectory_point__functions.h"
#include "ros2_interface/msg/detail/trajectory_in_prediction__functions.h"
#include "ros2_interface/msg/detail/trajectory_point_in_prediction__functions.h"
// end nested array functions include
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__obstacle_priority__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__obstacle_priority__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__prediction_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__prediction_trajectory_point__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory_point_in_prediction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory_point_in_prediction__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory_in_prediction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory_in_prediction__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory_point_in_prediction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory_point_in_prediction__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__obstacle_feature__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("ros2_interface.msg._obstacle_feature.ObstacleFeature", full_classname_dest, 52) == 0);
  }
  ros2_interface__msg__ObstacleFeature * ros_message = _ros_message;
  {  // obstacle_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obstacle_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // polygon_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "polygon_point");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->polygon_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // front_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_position");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->front_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // raw_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw_velocity");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->raw_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc = PyFloat_AS_DOUBLE(field);
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
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = PyFloat_AS_DOUBLE(field);
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
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tracking_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tracking_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_position");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->t_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // t_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_velocity");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->t_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // t_velocity_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_velocity_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_velocity_heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_acceleration");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->t_acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // t_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_still
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_still");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_still = (Py_True == field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // label_update_time_delta
    PyObject * field = PyObject_GetAttrString(_pymsg, "label_update_time_delta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->label_update_time_delta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // priority
    PyObject * field = PyObject_GetAttrString(_pymsg, "priority");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__obstacle_priority__convert_from_py(field, &ros_message->priority)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_near_junction
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_near_junction");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_near_junction = (Py_True == field);
    Py_DECREF(field);
  }
  {  // future_trajectory_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "future_trajectory_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'future_trajectory_points'");
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
    if (!ros2_interface__msg__PredictionTrajectoryPoint__Sequence__init(&(ros_message->future_trajectory_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__PredictionTrajectoryPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__PredictionTrajectoryPoint * dest = ros_message->future_trajectory_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__prediction_trajectory_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // short_term_predicted_trajectory_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "short_term_predicted_trajectory_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'short_term_predicted_trajectory_points'");
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
    if (!ros2_interface__msg__TrajectoryPointInPrediction__Sequence__init(&(ros_message->short_term_predicted_trajectory_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrajectoryPointInPrediction__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrajectoryPointInPrediction * dest = ros_message->short_term_predicted_trajectory_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__trajectory_point_in_prediction__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // predicted_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "predicted_trajectory");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'predicted_trajectory'");
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
    if (!ros2_interface__msg__TrajectoryInPrediction__Sequence__init(&(ros_message->predicted_trajectory), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrajectoryInPrediction__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrajectoryInPrediction * dest = ros_message->predicted_trajectory.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__trajectory_in_prediction__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // adc_trajectory_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "adc_trajectory_point");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'adc_trajectory_point'");
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
    if (!ros2_interface__msg__TrajectoryPointInPrediction__Sequence__init(&(ros_message->adc_trajectory_point), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrajectoryPointInPrediction__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrajectoryPointInPrediction * dest = ros_message->adc_trajectory_point.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__trajectory_point_in_prediction__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * ros2_interface__msg__obstacle_feature__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObstacleFeature */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._obstacle_feature");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObstacleFeature");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__ObstacleFeature * ros_message = (ros2_interface__msg__ObstacleFeature *)raw_ros_message;
  {  // obstacle_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->obstacle_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // polygon_point
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->polygon_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "polygon_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_position
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->front_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raw_velocity
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->raw_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "raw_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc", field);
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
  {  // tracking_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tracking_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_position
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->t_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_velocity
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->t_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_velocity_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_velocity_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_velocity_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_acceleration
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->t_acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_still
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_still ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_still", field);
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
  {  // label_update_time_delta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->label_update_time_delta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "label_update_time_delta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // priority
    PyObject * field = NULL;
    field = ros2_interface__msg__obstacle_priority__convert_to_py(&ros_message->priority);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "priority", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_near_junction
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_near_junction ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_near_junction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // future_trajectory_points
    PyObject * field = NULL;
    size_t size = ros_message->future_trajectory_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__PredictionTrajectoryPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->future_trajectory_points.data[i]);
      PyObject * pyitem = ros2_interface__msg__prediction_trajectory_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "future_trajectory_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // short_term_predicted_trajectory_points
    PyObject * field = NULL;
    size_t size = ros_message->short_term_predicted_trajectory_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrajectoryPointInPrediction * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->short_term_predicted_trajectory_points.data[i]);
      PyObject * pyitem = ros2_interface__msg__trajectory_point_in_prediction__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "short_term_predicted_trajectory_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // predicted_trajectory
    PyObject * field = NULL;
    size_t size = ros_message->predicted_trajectory.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrajectoryInPrediction * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->predicted_trajectory.data[i]);
      PyObject * pyitem = ros2_interface__msg__trajectory_in_prediction__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "predicted_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adc_trajectory_point
    PyObject * field = NULL;
    size_t size = ros_message->adc_trajectory_point.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrajectoryPointInPrediction * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->adc_trajectory_point.data[i]);
      PyObject * pyitem = ros2_interface__msg__trajectory_point_in_prediction__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "adc_trajectory_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

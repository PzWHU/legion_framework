// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/ControlAnalysis.idl
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
#include "ros2_interface/msg/detail/control_analysis__struct.h"
#include "ros2_interface/msg/detail/control_analysis__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__control_analysis__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ros2_interface.msg._control_analysis.ControlAnalysis", full_classname_dest, 52) == 0);
  }
  ros2_interface__msg__ControlAnalysis * ros_message = _ros_message;
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
  {  // driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // driving_mode_fd
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_mode_fd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driving_mode_fd = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gear_location_fd
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_location_fd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_location_fd = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gear_location_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_location_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_location_cmd = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // epb_level_fd
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_level_fd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epb_level_fd = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // epb_level_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_level_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epb_level_cmd = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_mps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_reference");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_reference = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_value_fd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_value_fd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_value_fd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_value_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_value_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_value_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_value_fd
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_value_fd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_value_fd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_value_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_value_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_value_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // path_remain
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_remain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->path_remain = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // has_stop_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_stop_point");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_stop_point = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_full_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_full_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_full_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lon_acc_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_acc_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon_acc_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_cmd_closeloop
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_cmd_closeloop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_cmd_closeloop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // preview_acceleration_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "preview_acceleration_reference");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->preview_acceleration_reference = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // slope_offset_compensation
    PyObject * field = PyObject_GetAttrString(_pymsg, "slope_offset_compensation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->slope_offset_compensation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turning_offset_compensation
    PyObject * field = PyObject_GetAttrString(_pymsg, "turning_offset_compensation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turning_offset_compensation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_error_limited
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_error_limited");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_error_limited = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // station_error_limited
    PyObject * field = PyObject_GetAttrString(_pymsg, "station_error_limited");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->station_error_limited = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // station_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "station_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->station_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon_target_point_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_target_point_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon_target_point_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon_calculate_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_calculate_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lon_calculate_time = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // lon_calculate_time_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_calculate_time_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lon_calculate_time_max = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // ref_curvature
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_curvature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_curvature = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_error_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_error_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_error_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_error_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_error_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_error_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_steering_value_fd
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steering_value_fd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steering_value_fd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_steering_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steering_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steering_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_steering_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steering_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steering_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_steer_angle_feedforward
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steer_angle_feedforward");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steer_angle_feedforward = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_steer_angle_feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steer_angle_feedback");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steer_angle_feedback = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_steer_angle_lateral_contribution
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steer_angle_lateral_contribution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steer_angle_lateral_contribution = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_steer_angle_lateral_rate_contribution
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steer_angle_lateral_rate_contribution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steer_angle_lateral_rate_contribution = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_steer_angle_heading_contribution
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steer_angle_heading_contribution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steer_angle_heading_contribution = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_steer_angle_heading_rate_contribution
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_steer_angle_heading_rate_contribution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_steer_angle_heading_rate_contribution = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steering_value_fd
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steering_value_fd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steering_value_fd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steering_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steering_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steering_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steering_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steering_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steering_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steer_angle_feedforward
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steer_angle_feedforward");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steer_angle_feedforward = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steer_angle_feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steer_angle_feedback");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steer_angle_feedback = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steer_angle_lateral_contribution
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steer_angle_lateral_contribution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steer_angle_lateral_contribution = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steer_angle_lateral_rate_contribution
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steer_angle_lateral_rate_contribution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steer_angle_lateral_rate_contribution = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steer_angle_heading_contribution
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steer_angle_heading_contribution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steer_angle_heading_contribution = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_steer_angle_heading_rate_contribution
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steer_angle_heading_rate_contribution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steer_angle_heading_rate_contribution = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_k_00
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_k_00");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_k_00 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_k_01
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_k_01");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_k_01 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_k_02
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_k_02");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_k_02 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_k_03
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_k_03");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_k_03 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_k_10
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_k_10");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_k_10 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_k_11
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_k_11");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_k_11 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_k_12
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_k_12");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_k_12 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_k_13
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_k_13");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_k_13 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_state_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_state_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_state_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_state_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_state_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_state_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_state_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_state_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_state_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_state_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_state_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_state_3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_q_updated_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_q_updated_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_q_updated_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_q_updated_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_q_updated_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_q_updated_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_q_updated_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_q_updated_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_q_updated_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matrix_q_updated_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "matrix_q_updated_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matrix_q_updated_3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_point_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_point_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_point_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_point_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_point_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_point_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat_target_point_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_target_point_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_target_point_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lqr_calculate_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "lqr_calculate_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lqr_calculate_time = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // lqr_calculate_time_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "lqr_calculate_time_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lqr_calculate_time_max = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__control_analysis__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlAnalysis */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._control_analysis");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlAnalysis");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__ControlAnalysis * ros_message = (ros2_interface__msg__ControlAnalysis *)raw_ros_message;
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
  {  // driving_mode_fd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->driving_mode_fd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving_mode_fd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_location_fd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_location_fd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_location_fd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_location_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_location_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_location_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_level_fd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->epb_level_fd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_level_fd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_level_cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->epb_level_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_level_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_reference
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_reference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_value_fd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_value_fd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_value_fd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_value_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_value_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_value_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_value_fd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_value_fd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_value_fd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_value_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_value_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_value_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_remain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->path_remain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_remain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_stop_point
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_stop_point ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_stop_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_full_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_full_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_full_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_acc_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon_acc_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_acc_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_cmd_closeloop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_cmd_closeloop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_cmd_closeloop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preview_acceleration_reference
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->preview_acceleration_reference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "preview_acceleration_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slope_offset_compensation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->slope_offset_compensation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slope_offset_compensation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turning_offset_compensation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turning_offset_compensation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turning_offset_compensation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_error_limited
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_error_limited);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_error_limited", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // station_error_limited
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->station_error_limited);
    {
      int rc = PyObject_SetAttrString(_pymessage, "station_error_limited", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // station_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->station_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "station_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_target_point_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon_target_point_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_target_point_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_calculate_time
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lon_calculate_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_calculate_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_calculate_time_max
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lon_calculate_time_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_calculate_time_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_curvature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_curvature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_curvature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_error_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_error_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_error_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_error_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_error_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_error_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steering_value_fd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steering_value_fd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steering_value_fd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steering_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steering_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steering_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steering_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steering_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steering_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steer_angle_feedforward
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steer_angle_feedforward);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steer_angle_feedforward", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steer_angle_feedback
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steer_angle_feedback);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steer_angle_feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steer_angle_lateral_contribution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steer_angle_lateral_contribution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steer_angle_lateral_contribution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steer_angle_lateral_rate_contribution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steer_angle_lateral_rate_contribution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steer_angle_lateral_rate_contribution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steer_angle_heading_contribution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steer_angle_heading_contribution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steer_angle_heading_contribution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_steer_angle_heading_rate_contribution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_steer_angle_heading_rate_contribution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_steer_angle_heading_rate_contribution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steering_value_fd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steering_value_fd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steering_value_fd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steering_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steering_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steering_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steering_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steering_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steering_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steer_angle_feedforward
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steer_angle_feedforward);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steer_angle_feedforward", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steer_angle_feedback
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steer_angle_feedback);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steer_angle_feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steer_angle_lateral_contribution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steer_angle_lateral_contribution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steer_angle_lateral_contribution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steer_angle_lateral_rate_contribution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steer_angle_lateral_rate_contribution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steer_angle_lateral_rate_contribution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steer_angle_heading_contribution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steer_angle_heading_contribution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steer_angle_heading_contribution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_steer_angle_heading_rate_contribution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_steer_angle_heading_rate_contribution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_steer_angle_heading_rate_contribution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_k_00
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_k_00);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_k_00", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_k_01
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_k_01);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_k_01", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_k_02
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_k_02);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_k_02", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_k_03
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_k_03);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_k_03", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_k_10
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_k_10);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_k_10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_k_11
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_k_11);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_k_11", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_k_12
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_k_12);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_k_12", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_k_13
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_k_13);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_k_13", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_state_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_state_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_state_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_state_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_state_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_state_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_state_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_state_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_state_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_state_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_state_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_state_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_q_updated_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_q_updated_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_q_updated_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_q_updated_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_q_updated_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_q_updated_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_q_updated_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_q_updated_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_q_updated_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matrix_q_updated_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matrix_q_updated_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matrix_q_updated_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_point_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_point_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_point_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_point_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_point_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_point_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_target_point_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_target_point_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_target_point_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lqr_calculate_time
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lqr_calculate_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lqr_calculate_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lqr_calculate_time_max
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lqr_calculate_time_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lqr_calculate_time_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

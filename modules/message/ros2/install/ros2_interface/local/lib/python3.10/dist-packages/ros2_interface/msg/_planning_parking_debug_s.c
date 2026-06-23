// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/PlanningParkingDebug.idl
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
#include "ros2_interface/msg/detail/planning_parking_debug__struct.h"
#include "ros2_interface/msg/detail/planning_parking_debug__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/path_point__functions.h"
#include "ros2_interface/msg/detail/point2d_list__functions.h"
#include "ros2_interface/msg/detail/polygon2_d__functions.h"
#include "ros2_interface/msg/detail/trajectory__functions.h"
#include "ros2_interface/msg/detail/trajectory_point__functions.h"
// end nested array functions include
bool ros2_interface__msg__polygon2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__polygon2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__polygon2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__polygon2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__path_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__path_point__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2d_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2d_list__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory_point__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory_point__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory_point__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__trajectory__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__planning_parking_debug__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("ros2_interface.msg._planning_parking_debug.PlanningParkingDebug", full_classname_dest, 63) == 0);
  }
  ros2_interface__msg__PlanningParkingDebug * ros_message = _ros_message;
  {  // vehicle_preiew_polygon
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_preiew_polygon");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'vehicle_preiew_polygon'");
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
    if (!ros2_interface__msg__Polygon2D__Sequence__init(&(ros_message->vehicle_preiew_polygon), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Polygon2D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Polygon2D * dest = ros_message->vehicle_preiew_polygon.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__polygon2_d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // obstacles_polygon
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacles_polygon");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'obstacles_polygon'");
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
    if (!ros2_interface__msg__Polygon2D__Sequence__init(&(ros_message->obstacles_polygon), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Polygon2D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Polygon2D * dest = ros_message->obstacles_polygon.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__polygon2_d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // path_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'path_points'");
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
    if (!ros2_interface__msg__PathPoint__Sequence__init(&(ros_message->path_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__PathPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__PathPoint * dest = ros_message->path_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__path_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // lat_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_error = PyFloat_AS_DOUBLE(field);
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
  {  // yaw_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // obstacles_vec
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacles_vec");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'obstacles_vec'");
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
    if (!ros2_interface__msg__Point2dList__Sequence__init(&(ros_message->obstacles_vec), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Point2dList__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Point2dList * dest = ros_message->obstacles_vec.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__point2d_list__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // warm_start_traj
    PyObject * field = PyObject_GetAttrString(_pymsg, "warm_start_traj");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'warm_start_traj'");
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
    if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&(ros_message->warm_start_traj), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrajectoryPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrajectoryPoint * dest = ros_message->warm_start_traj.data;
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
  {  // smoothed_traj_stage1
    PyObject * field = PyObject_GetAttrString(_pymsg, "smoothed_traj_stage1");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'smoothed_traj_stage1'");
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
    if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&(ros_message->smoothed_traj_stage1), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrajectoryPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrajectoryPoint * dest = ros_message->smoothed_traj_stage1.data;
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
  {  // smoothed_traj_stage2
    PyObject * field = PyObject_GetAttrString(_pymsg, "smoothed_traj_stage2");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'smoothed_traj_stage2'");
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
    if (!ros2_interface__msg__TrajectoryPoint__Sequence__init(&(ros_message->smoothed_traj_stage2), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__TrajectoryPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__TrajectoryPoint * dest = ros_message->smoothed_traj_stage2.data;
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
  {  // reference_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_line");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__trajectory__convert_from_py(field, &ros_message->reference_line)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // trajectory_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_array");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'trajectory_array'");
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
    if (!ros2_interface__msg__Trajectory__Sequence__init(&(ros_message->trajectory_array), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Trajectory__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Trajectory * dest = ros_message->trajectory_array.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__trajectory__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // optimal_coarse_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimal_coarse_trajectory");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__trajectory__convert_from_py(field, &ros_message->optimal_coarse_trajectory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // optimal_smooth_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimal_smooth_trajectory");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__trajectory__convert_from_py(field, &ros_message->optimal_smooth_trajectory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // hybrid_a_star_map_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "hybrid_a_star_map_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hybrid_a_star_map_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hybrid_a_star_heuristic_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "hybrid_a_star_heuristic_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hybrid_a_star_heuristic_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hybrid_a_star_rs_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "hybrid_a_star_rs_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hybrid_a_star_rs_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hybrid_a_star_total_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "hybrid_a_star_total_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hybrid_a_star_total_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ias_collision_avoidance_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "ias_collision_avoidance_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ias_collision_avoidance_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ias_path_smooth_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "ias_path_smooth_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ias_path_smooth_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ias_speed_smooth_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "ias_speed_smooth_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ias_speed_smooth_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ias_total_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "ias_total_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ias_total_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // samping_trajectory_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "samping_trajectory_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->samping_trajectory_time = PyFloat_AS_DOUBLE(field);
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
  {  // replan_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "replan_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->replan_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // replan_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "replan_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->replan_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // optimizer_thread_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimizer_thread_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->optimizer_thread_counter = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // replan_by_context_update_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "replan_by_context_update_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->replan_by_context_update_counter = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // replan_by_large_error_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "replan_by_large_error_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->replan_by_large_error_counter = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // parking_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parking_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // moves_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "moves_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->moves_counter = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // remain_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remain_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_to_leader_obj
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_leader_obj");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_leader_obj = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__planning_parking_debug__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanningParkingDebug */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._planning_parking_debug");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanningParkingDebug");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__PlanningParkingDebug * ros_message = (ros2_interface__msg__PlanningParkingDebug *)raw_ros_message;
  {  // vehicle_preiew_polygon
    PyObject * field = NULL;
    size_t size = ros_message->vehicle_preiew_polygon.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Polygon2D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->vehicle_preiew_polygon.data[i]);
      PyObject * pyitem = ros2_interface__msg__polygon2_d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_preiew_polygon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacles_polygon
    PyObject * field = NULL;
    size_t size = ros_message->obstacles_polygon.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Polygon2D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->obstacles_polygon.data[i]);
      PyObject * pyitem = ros2_interface__msg__polygon2_d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "obstacles_polygon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_points
    PyObject * field = NULL;
    size_t size = ros_message->path_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__PathPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->path_points.data[i]);
      PyObject * pyitem = ros2_interface__msg__path_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "path_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_error", field);
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
  {  // yaw_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacles_vec
    PyObject * field = NULL;
    size_t size = ros_message->obstacles_vec.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Point2dList * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->obstacles_vec.data[i]);
      PyObject * pyitem = ros2_interface__msg__point2d_list__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "obstacles_vec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warm_start_traj
    PyObject * field = NULL;
    size_t size = ros_message->warm_start_traj.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrajectoryPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->warm_start_traj.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "warm_start_traj", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // smoothed_traj_stage1
    PyObject * field = NULL;
    size_t size = ros_message->smoothed_traj_stage1.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrajectoryPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->smoothed_traj_stage1.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "smoothed_traj_stage1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // smoothed_traj_stage2
    PyObject * field = NULL;
    size_t size = ros_message->smoothed_traj_stage2.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__TrajectoryPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->smoothed_traj_stage2.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "smoothed_traj_stage2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_line
    PyObject * field = NULL;
    field = ros2_interface__msg__trajectory__convert_to_py(&ros_message->reference_line);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_array
    PyObject * field = NULL;
    size_t size = ros_message->trajectory_array.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Trajectory * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->trajectory_array.data[i]);
      PyObject * pyitem = ros2_interface__msg__trajectory__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_array", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimal_coarse_trajectory
    PyObject * field = NULL;
    field = ros2_interface__msg__trajectory__convert_to_py(&ros_message->optimal_coarse_trajectory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "optimal_coarse_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimal_smooth_trajectory
    PyObject * field = NULL;
    field = ros2_interface__msg__trajectory__convert_to_py(&ros_message->optimal_smooth_trajectory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "optimal_smooth_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hybrid_a_star_map_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hybrid_a_star_map_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hybrid_a_star_map_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hybrid_a_star_heuristic_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hybrid_a_star_heuristic_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hybrid_a_star_heuristic_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hybrid_a_star_rs_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hybrid_a_star_rs_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hybrid_a_star_rs_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hybrid_a_star_total_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hybrid_a_star_total_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hybrid_a_star_total_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ias_collision_avoidance_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ias_collision_avoidance_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ias_collision_avoidance_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ias_path_smooth_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ias_path_smooth_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ias_path_smooth_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ias_speed_smooth_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ias_speed_smooth_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ias_speed_smooth_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ias_total_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ias_total_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ias_total_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // samping_trajectory_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->samping_trajectory_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "samping_trajectory_time", field);
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
  {  // replan_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->replan_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replan_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replan_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->replan_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replan_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimizer_thread_counter
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->optimizer_thread_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "optimizer_thread_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replan_by_context_update_counter
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->replan_by_context_update_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replan_by_context_update_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replan_by_large_error_counter
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->replan_by_large_error_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replan_by_large_error_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parking_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->parking_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moves_counter
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->moves_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moves_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remain_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_leader_obj
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_leader_obj);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_leader_obj", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

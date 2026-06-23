// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/Obstacle.idl
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
#include "ros2_interface/msg/detail/obstacle__struct.h"
#include "ros2_interface/msg/detail/obstacle__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/image_key_point__functions.h"
#include "ros2_interface/msg/detail/point3_d__functions.h"
// end nested array functions include
bool ros2_interface__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__time__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__time__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__time__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__image_key_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__image_key_point__convert_to_py(void * raw_ros_message);
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
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__b_box2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__b_box2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__b_box2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__b_box2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__sensor_calibrator__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__sensor_calibrator__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("ros2_interface.msg._obstacle.Obstacle", full_classname_dest, 37) == 0);
  }
  ros2_interface__msg__Obstacle * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__time__convert_from_py(field, &ros_message->timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // existence_prob
    PyObject * field = PyObject_GetAttrString(_pymsg, "existence_prob");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->existence_prob = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // create_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "create_time");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__time__convert_from_py(field, &ros_message->create_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // last_updated_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_updated_time");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__time__convert_from_py(field, &ros_message->last_updated_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // center_pos_vehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_pos_vehicle");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->center_pos_vehicle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // center_pos_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_pos_abs");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->center_pos_abs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // theta_vehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_vehicle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_vehicle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_abs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_abs = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_vehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_vehicle");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->velocity_vehicle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_abs");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->velocity_abs)) {
      Py_DECREF(field);
      return false;
    }
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
  {  // image_key_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "image_key_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'image_key_points'");
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
    if (!ros2_interface__msg__ImageKeyPoint__Sequence__init(&(ros_message->image_key_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__ImageKeyPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__ImageKeyPoint * dest = ros_message->image_key_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__image_key_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // polygon_point_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "polygon_point_abs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'polygon_point_abs'");
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
    if (!ros2_interface__msg__Point3D__Sequence__init(&(ros_message->polygon_point_abs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Point3D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Point3D * dest = ros_message->polygon_point_abs.data;
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
  {  // polygon_point_vehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "polygon_point_vehicle");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'polygon_point_vehicle'");
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
    if (!ros2_interface__msg__Point3D__Sequence__init(&(ros_message->polygon_point_vehicle), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Point3D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Point3D * dest = ros_message->polygon_point_vehicle.data;
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
  {  // tracking_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tracking_time = PyFloat_AS_DOUBLE(field);
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
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->confidence = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // confidence_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confidence_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // drops
    PyObject * field = PyObject_GetAttrString(_pymsg, "drops");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'drops'");
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
    if (!ros2_interface__msg__Point3D__Sequence__init(&(ros_message->drops), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Point3D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Point3D * dest = ros_message->drops.data;
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
  {  // acceleration_vehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_vehicle");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->acceleration_vehicle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_abs");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->acceleration_abs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // anchor_point_image
    PyObject * field = PyObject_GetAttrString(_pymsg, "anchor_point_image");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point2_d__convert_from_py(field, &ros_message->anchor_point_image)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // anchor_point_vehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "anchor_point_vehicle");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->anchor_point_vehicle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // anchor_point_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "anchor_point_abs");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->anchor_point_abs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bbox2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox2d");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__b_box2_d__convert_from_py(field, &ros_message->bbox2d)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bbox2d_rear
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox2d_rear");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__b_box2_d__convert_from_py(field, &ros_message->bbox2d_rear)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sub_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "sub_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sub_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // height_above_ground
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_above_ground");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_above_ground = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_abs_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_abs_covariance");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->position_abs_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->position_abs_covariance.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'position_abs_covariance'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->position_abs_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->position_abs_covariance.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // velocity_abs_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_abs_covariance");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->velocity_abs_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->velocity_abs_covariance.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'velocity_abs_covariance'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->velocity_abs_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->velocity_abs_covariance.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // acceleration_abs_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_abs_covariance");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->acceleration_abs_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->acceleration_abs_covariance.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'acceleration_abs_covariance'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->acceleration_abs_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->acceleration_abs_covariance.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // theta_abs_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_abs_covariance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_abs_covariance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_vehicle_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_vehicle_covariance");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->position_vehicle_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->position_vehicle_covariance.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'position_vehicle_covariance'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->position_vehicle_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->position_vehicle_covariance.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // velocity_vehicle_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_vehicle_covariance");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->velocity_vehicle_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->velocity_vehicle_covariance.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'velocity_vehicle_covariance'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->velocity_vehicle_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->velocity_vehicle_covariance.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // acceleration_vehicle_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_vehicle_covariance");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->acceleration_vehicle_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->acceleration_vehicle_covariance.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'acceleration_vehicle_covariance'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->acceleration_vehicle_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->acceleration_vehicle_covariance.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // theta_vehicle_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_vehicle_covariance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_vehicle_covariance = PyFloat_AS_DOUBLE(field);
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
  {  // cipv_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "cipv_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cipv_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_position = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pihp_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "pihp_percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pihp_percentage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // blinker_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "blinker_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blinker_flag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fusion_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusion_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fusion_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__obstacle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Obstacle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._obstacle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Obstacle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__Obstacle * ros_message = (ros2_interface__msg__Obstacle *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = ros2_interface__msg__time__convert_to_py(&ros_message->timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // existence_prob
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->existence_prob);
    {
      int rc = PyObject_SetAttrString(_pymessage, "existence_prob", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // create_time
    PyObject * field = NULL;
    field = ros2_interface__msg__time__convert_to_py(&ros_message->create_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "create_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_updated_time
    PyObject * field = NULL;
    field = ros2_interface__msg__time__convert_to_py(&ros_message->last_updated_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_updated_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_pos_vehicle
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->center_pos_vehicle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_pos_vehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_pos_abs
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->center_pos_abs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_pos_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_vehicle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_vehicle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_vehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_abs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_abs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_vehicle
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->velocity_vehicle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_vehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_abs
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->velocity_abs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_abs", field);
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
  {  // image_key_points
    PyObject * field = NULL;
    size_t size = ros_message->image_key_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__ImageKeyPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->image_key_points.data[i]);
      PyObject * pyitem = ros2_interface__msg__image_key_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "image_key_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // polygon_point_abs
    PyObject * field = NULL;
    size_t size = ros_message->polygon_point_abs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Point3D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->polygon_point_abs.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "polygon_point_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // polygon_point_vehicle
    PyObject * field = NULL;
    size_t size = ros_message->polygon_point_vehicle.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Point3D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->polygon_point_vehicle.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "polygon_point_vehicle", field);
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
  {  // confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->confidence_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drops
    PyObject * field = NULL;
    size_t size = ros_message->drops.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Point3D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->drops.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "drops", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_vehicle
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->acceleration_vehicle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_vehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_abs
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->acceleration_abs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // anchor_point_image
    PyObject * field = NULL;
    field = ros2_interface__msg__point2_d__convert_to_py(&ros_message->anchor_point_image);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "anchor_point_image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // anchor_point_vehicle
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->anchor_point_vehicle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "anchor_point_vehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // anchor_point_abs
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->anchor_point_abs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "anchor_point_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox2d
    PyObject * field = NULL;
    field = ros2_interface__msg__b_box2_d__convert_to_py(&ros_message->bbox2d);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox2d_rear
    PyObject * field = NULL;
    field = ros2_interface__msg__b_box2_d__convert_to_py(&ros_message->bbox2d_rear);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox2d_rear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sub_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sub_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sub_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_above_ground
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_above_ground);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_above_ground", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_abs_covariance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "position_abs_covariance");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->position_abs_covariance.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->position_abs_covariance.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->position_abs_covariance.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // velocity_abs_covariance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "velocity_abs_covariance");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->velocity_abs_covariance.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->velocity_abs_covariance.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->velocity_abs_covariance.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // acceleration_abs_covariance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "acceleration_abs_covariance");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->acceleration_abs_covariance.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->acceleration_abs_covariance.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->acceleration_abs_covariance.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // theta_abs_covariance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_abs_covariance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_abs_covariance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_vehicle_covariance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "position_vehicle_covariance");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->position_vehicle_covariance.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->position_vehicle_covariance.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->position_vehicle_covariance.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // velocity_vehicle_covariance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "velocity_vehicle_covariance");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->velocity_vehicle_covariance.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->velocity_vehicle_covariance.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->velocity_vehicle_covariance.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // acceleration_vehicle_covariance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "acceleration_vehicle_covariance");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->acceleration_vehicle_covariance.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->acceleration_vehicle_covariance.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->acceleration_vehicle_covariance.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // theta_vehicle_covariance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_vehicle_covariance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_vehicle_covariance", field);
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
  {  // cipv_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cipv_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cipv_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pihp_percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pihp_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pihp_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blinker_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->blinker_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blinker_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusion_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fusion_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusion_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

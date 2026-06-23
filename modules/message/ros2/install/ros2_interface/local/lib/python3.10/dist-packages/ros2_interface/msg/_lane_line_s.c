// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/LaneLine.idl
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
#include "ros2_interface/msg/detail/lane_line__struct.h"
#include "ros2_interface/msg/detail/lane_line__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/point2_d__functions.h"
#include "ros2_interface/msg/detail/point3_d__functions.h"
// end nested array functions include
bool ros2_interface__msg__lane_line_cubic_curve__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__lane_line_cubic_curve__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__lane_line_cubic_curve__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__lane_line_cubic_curve__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__lane_line_cubic_curve__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__lane_line_cubic_curve__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__end_points__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__end_points__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point2_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__lane_line__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ros2_interface.msg._lane_line.LaneLine", full_classname_dest, 38) == 0);
  }
  ros2_interface__msg__LaneLine * ros_message = _ros_message;
  {  // lane_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lane_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_color = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pos_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // curve_vehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "curve_vehicle");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__lane_line_cubic_curve__convert_from_py(field, &ros_message->curve_vehicle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // curve_image
    PyObject * field = PyObject_GetAttrString(_pymsg, "curve_image");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__lane_line_cubic_curve__convert_from_py(field, &ros_message->curve_image)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // curve_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "curve_abs");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__lane_line_cubic_curve__convert_from_py(field, &ros_message->curve_abs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pts_vehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "pts_vehicle");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pts_vehicle'");
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
    if (!ros2_interface__msg__Point3D__Sequence__init(&(ros_message->pts_vehicle), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Point3D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Point3D * dest = ros_message->pts_vehicle.data;
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
  {  // pts_image
    PyObject * field = PyObject_GetAttrString(_pymsg, "pts_image");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pts_image'");
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
    if (!ros2_interface__msg__Point2D__Sequence__init(&(ros_message->pts_image), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Point2D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Point2D * dest = ros_message->pts_image.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__point2_d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // pts_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "pts_abs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pts_abs'");
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
    if (!ros2_interface__msg__Point3D__Sequence__init(&(ros_message->pts_abs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Point3D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Point3D * dest = ros_message->pts_abs.data;
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
  {  // image_end_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "image_end_point");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__end_points__convert_from_py(field, &ros_message->image_end_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pts_key
    PyObject * field = PyObject_GetAttrString(_pymsg, "pts_key");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pts_key'");
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
    if (!ros2_interface__msg__Point2D__Sequence__init(&(ros_message->pts_key), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Point2D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Point2D * dest = ros_message->pts_key.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ros2_interface__msg__point2_d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // hd_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "hd_lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hd_lane_id = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // lane_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_quality = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fused_lane_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "fused_lane_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fused_lane_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // homography_mat
    PyObject * field = PyObject_GetAttrString(_pymsg, "homography_mat");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->homography_mat), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->homography_mat.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'homography_mat'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->homography_mat), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->homography_mat.data;
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
  {  // homography_mat_inv
    PyObject * field = PyObject_GetAttrString(_pymsg, "homography_mat_inv");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->homography_mat_inv), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->homography_mat_inv.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'homography_mat_inv'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->homography_mat_inv), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->homography_mat_inv.data;
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
  {  // lane_coordinate_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_coordinate_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_coordinate_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // use_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_type = (int32_t)PyLong_AsLong(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__lane_line__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneLine */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._lane_line");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneLine");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__LaneLine * ros_message = (ros2_interface__msg__LaneLine *)raw_ros_message;
  {  // lane_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_color
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pos_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curve_vehicle
    PyObject * field = NULL;
    field = ros2_interface__msg__lane_line_cubic_curve__convert_to_py(&ros_message->curve_vehicle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "curve_vehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curve_image
    PyObject * field = NULL;
    field = ros2_interface__msg__lane_line_cubic_curve__convert_to_py(&ros_message->curve_image);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "curve_image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curve_abs
    PyObject * field = NULL;
    field = ros2_interface__msg__lane_line_cubic_curve__convert_to_py(&ros_message->curve_abs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "curve_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pts_vehicle
    PyObject * field = NULL;
    size_t size = ros_message->pts_vehicle.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Point3D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pts_vehicle.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "pts_vehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pts_image
    PyObject * field = NULL;
    size_t size = ros_message->pts_image.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Point2D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pts_image.data[i]);
      PyObject * pyitem = ros2_interface__msg__point2_d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "pts_image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pts_abs
    PyObject * field = NULL;
    size_t size = ros_message->pts_abs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Point3D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pts_abs.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "pts_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // image_end_point
    PyObject * field = NULL;
    field = ros2_interface__msg__end_points__convert_to_py(&ros_message->image_end_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "image_end_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pts_key
    PyObject * field = NULL;
    size_t size = ros_message->pts_key.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Point2D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pts_key.data[i]);
      PyObject * pyitem = ros2_interface__msg__point2_d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "pts_key", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hd_lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hd_lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hd_lane_id", field);
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
  {  // lane_quality
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fused_lane_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fused_lane_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fused_lane_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // homography_mat
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "homography_mat");
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
    if (ros_message->homography_mat.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->homography_mat.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->homography_mat.size * sizeof(double));
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
  {  // homography_mat_inv
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "homography_mat_inv");
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
    if (ros_message->homography_mat_inv.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->homography_mat_inv.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->homography_mat_inv.size * sizeof(double));
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
  {  // lane_coordinate_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_coordinate_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_coordinate_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->use_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_type", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

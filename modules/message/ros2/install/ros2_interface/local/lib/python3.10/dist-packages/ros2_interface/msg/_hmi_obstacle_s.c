// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/HMIObstacle.idl
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
#include "ros2_interface/msg/detail/hmi_obstacle__struct.h"
#include "ros2_interface/msg/detail/hmi_obstacle__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/point3_d__functions.h"
// end nested array functions include
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__hmi_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("ros2_interface.msg._hmi_obstacle.HMIObstacle", full_classname_dest, 44) == 0);
  }
  ros2_interface__msg__HMIObstacle * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
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
  {  // sub_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "sub_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sub_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // points
    PyObject * field = PyObject_GetAttrString(_pymsg, "points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'points'");
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
    if (!ros2_interface__msg__Point3D__Sequence__init(&(ros_message->points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__Point3D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__Point3D * dest = ros_message->points.data;
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
  {  // cipv_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "cipv_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cipv_flag = (uint8_t)PyLong_AsUnsignedLong(field);
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
PyObject * ros2_interface__msg__hmi_obstacle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HMIObstacle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._hmi_obstacle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HMIObstacle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__HMIObstacle * ros_message = (ros2_interface__msg__HMIObstacle *)raw_ros_message;
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
  {  // points
    PyObject * field = NULL;
    size_t size = ros_message->points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__Point3D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->points.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "points", field);
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

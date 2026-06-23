// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/CameraParkingInfo.idl
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
#include "ros2_interface/msg/detail/camera_parking_info__struct.h"
#include "ros2_interface/msg/detail/camera_parking_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ros2_interface/msg/detail/image_key_point__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__image_key_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__image_key_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__camera_parking_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ros2_interface.msg._camera_parking_info.CameraParkingInfo", full_classname_dest, 57) == 0);
  }
  ros2_interface__msg__CameraParkingInfo * ros_message = _ros_message;
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
  {  // parking_space_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_space_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parking_space_id = (int32_t)PyLong_AsLong(field);
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
  {  // is_parking_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_parking_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_parking_enable = (Py_True == field);
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
  {  // center_point_of_parking
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_point_of_parking");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->center_point_of_parking)) {
      Py_DECREF(field);
      return false;
    }
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
  {  // yaw_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // parking_points_in_image
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_points_in_image");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'parking_points_in_image'");
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
    if (!ros2_interface__msg__ImageKeyPoint__Sequence__init(&(ros_message->parking_points_in_image), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ros2_interface__msg__ImageKeyPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ros2_interface__msg__ImageKeyPoint * dest = ros_message->parking_points_in_image.data;
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__camera_parking_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CameraParkingInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._camera_parking_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CameraParkingInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__CameraParkingInfo * ros_message = (ros2_interface__msg__CameraParkingInfo *)raw_ros_message;
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
  {  // parking_space_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->parking_space_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_space_id", field);
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
  {  // is_parking_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_parking_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_parking_enable", field);
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
  {  // center_point_of_parking
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->center_point_of_parking);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_point_of_parking", field);
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
  {  // yaw_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parking_points_in_image
    PyObject * field = NULL;
    size_t size = ros_message->parking_points_in_image.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ros2_interface__msg__ImageKeyPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->parking_points_in_image.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "parking_points_in_image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

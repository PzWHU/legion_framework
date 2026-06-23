// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/Ins.idl
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
#include "ros2_interface/msg/detail/ins__struct.h"
#include "ros2_interface/msg/detail/ins__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
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
bool ros2_interface__msg__point3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point3_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__ins__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[28];
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
    assert(strncmp("ros2_interface.msg._ins.Ins", full_classname_dest, 27) == 0);
  }
  ros2_interface__msg__Ins * ros_message = _ros_message;
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
  {  // is_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // elevation
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elevation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // utm_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "utm_position");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->utm_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // utm_zone_mumber
    PyObject * field = PyObject_GetAttrString(_pymsg, "utm_zone_mumber");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utm_zone_mumber = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // utm_zone_char
    PyObject * field = PyObject_GetAttrString(_pymsg, "utm_zone_char");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utm_zone_char = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "attitude");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->attitude)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // linear_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_velocity");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->linear_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sd_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_position");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->sd_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sd_attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_attitude");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->sd_attitude)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sd_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_velocity");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->sd_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cep68
    PyObject * field = PyObject_GetAttrString(_pymsg, "cep68");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cep68 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cep95
    PyObject * field = PyObject_GetAttrString(_pymsg, "cep95");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cep95 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // second
    PyObject * field = PyObject_GetAttrString(_pymsg, "second");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->second = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sat_use_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "sat_use_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sat_use_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sat_in_view_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "sat_in_view_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sat_in_view_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // solution_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->solution_status = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position_type = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // p_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_dop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_dop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // h_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_dop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->h_dop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_dop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_dop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // attitude_dual
    PyObject * field = PyObject_GetAttrString(_pymsg, "attitude_dual");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->attitude_dual)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sd_angle_dual
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_angle_dual");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->sd_angle_dual)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // base_line_length_dual
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_line_length_dual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base_line_length_dual = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // solution_status_dual
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_status_dual");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->solution_status_dual = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // position_type_dual
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_type_dual");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position_type_dual = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // solution_source_dual
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_source_dual");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->solution_source_dual = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // aoc
    PyObject * field = PyObject_GetAttrString(_pymsg, "aoc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aoc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rtk_baseline
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtk_baseline");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rtk_baseline = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point3_d__convert_from_py(field, &ros_message->angular_velocity)) {
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__ins__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ins */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._ins");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ins");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__Ins * ros_message = (ros2_interface__msg__Ins *)raw_ros_message;
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
  {  // is_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elevation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utm_position
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->utm_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "utm_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utm_zone_mumber
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->utm_zone_mumber);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utm_zone_mumber", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utm_zone_char
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utm_zone_char);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utm_zone_char", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attitude
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->attitude);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linear_velocity
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->linear_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_position
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->sd_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_attitude
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->sd_attitude);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_velocity
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->sd_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cep68
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cep68);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cep68", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cep95
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cep95);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cep95", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // second
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->second);
    {
      int rc = PyObject_SetAttrString(_pymessage, "second", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sat_use_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sat_use_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sat_use_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sat_in_view_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sat_in_view_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sat_in_view_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // solution_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->solution_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->position_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_dop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h_dop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->h_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_dop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attitude_dual
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->attitude_dual);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "attitude_dual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_angle_dual
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->sd_angle_dual);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_angle_dual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_line_length_dual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base_line_length_dual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_line_length_dual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // solution_status_dual
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->solution_status_dual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_status_dual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_type_dual
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->position_type_dual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_type_dual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // solution_source_dual
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->solution_source_dual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_source_dual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aoc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aoc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aoc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtk_baseline
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rtk_baseline);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtk_baseline", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_velocity
    PyObject * field = NULL;
    field = ros2_interface__msg__point3_d__convert_to_py(&ros_message->angular_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

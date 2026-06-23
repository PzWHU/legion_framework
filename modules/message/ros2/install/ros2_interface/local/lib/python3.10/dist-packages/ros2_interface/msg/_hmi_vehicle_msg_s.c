// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/HMIVehicleMsg.idl
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
#include "ros2_interface/msg/detail/hmi_vehicle_msg__struct.h"
#include "ros2_interface/msg/detail/hmi_vehicle_msg__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point_llh__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point_llh__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point_enu__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point_enu__convert_to_py(void * raw_ros_message);
bool ros2_interface__msg__point_enu__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2_interface__msg__point_enu__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__hmi_vehicle_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("ros2_interface.msg._hmi_vehicle_msg.HMIVehicleMsg", full_classname_dest, 49) == 0);
  }
  ros2_interface__msg__HMIVehicleMsg * ros_message = _ros_message;
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
  {  // gear_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_location");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_location = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // steering_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_value = PyFloat_AS_DOUBLE(field);
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
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point_llh__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // utm_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "utm_position");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point_enu__convert_from_py(field, &ros_message->utm_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rtk_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtk_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rtk_flag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // origin_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // origin_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->origin_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_ins_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_ins_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_ins_yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // auto_safe
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_safe");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auto_safe = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // battery_power_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_power_percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_power_percentage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charging_gun_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_gun_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->charging_gun_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // chassis_error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_error_code");
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
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->chassis_error_code), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->chassis_error_code.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'chassis_error_code'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->chassis_error_code), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->chassis_error_code.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // brake_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // turn_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mercator_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mercator_position");
    if (!field) {
      return false;
    }
    if (!ros2_interface__msg__point_enu__convert_from_py(field, &ros_message->mercator_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__hmi_vehicle_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HMIVehicleMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._hmi_vehicle_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HMIVehicleMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__HMIVehicleMsg * ros_message = (ros2_interface__msg__HMIVehicleMsg *)raw_ros_message;
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
  {  // gear_location
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_location);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_value", field);
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
  {  // position
    PyObject * field = NULL;
    field = ros2_interface__msg__point_llh__convert_to_py(&ros_message->position);
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
  {  // utm_position
    PyObject * field = NULL;
    field = ros2_interface__msg__point_enu__convert_to_py(&ros_message->utm_position);
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
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtk_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rtk_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtk_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->origin_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_ins_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_ins_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_ins_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_safe
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->auto_safe);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_safe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_power_percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_power_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_power_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_gun_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->charging_gun_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_gun_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chassis_error_code
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "chassis_error_code");
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
    if (itemsize != sizeof(int32_t)) {
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
    if (ros_message->chassis_error_code.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->chassis_error_code.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->chassis_error_code.size * sizeof(int32_t));
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
  {  // brake_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->brake_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->turn_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mercator_position
    PyObject * field = NULL;
    field = ros2_interface__msg__point_enu__convert_to_py(&ros_message->mercator_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mercator_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

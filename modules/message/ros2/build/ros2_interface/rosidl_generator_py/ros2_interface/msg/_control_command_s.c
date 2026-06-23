// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/ControlCommand.idl
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
#include "ros2_interface/msg/detail/control_command__struct.h"
#include "ros2_interface/msg/detail/control_command__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__control_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("ros2_interface.msg._control_command.ControlCommand", full_classname_dest, 50) == 0);
  }
  ros2_interface__msg__ControlCommand * ros_message = _ros_message;
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
  {  // steer_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_driving_mode = (int32_t)PyLong_AsLong(field);
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
  {  // rear_steering_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steering_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steering_target = PyFloat_AS_DOUBLE(field);
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
  {  // rear_steering_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_steering_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_steering_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accel_driving_mode = (int32_t)PyLong_AsLong(field);
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
  {  // brake_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_driving_mode = (int32_t)PyLong_AsLong(field);
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
  {  // backup_brake_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "backup_brake_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->backup_brake_driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // backup_brake_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "backup_brake_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->backup_brake_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // epb_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epb_driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // epb_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epb_level = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gear_driving_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_driving_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_driving_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // emergency_brake_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_brake_enable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emergency_brake_enable = (int8_t)PyLong_AsLong(field);
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
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turn_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_lamp_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // high_beam_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "high_beam_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->high_beam_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // low_beam_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_beam_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->low_beam_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // horn_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "horn_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->horn_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // front_wiper_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_wiper_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_wiper_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rear_wiper_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_wiper_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rear_wiper_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // position_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position_lamp_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // front_fog_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_fog_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_fog_lamp_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rear_fog_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_fog_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rear_fog_lamp_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // brake_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_lamp_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // alarm_lamp_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "alarm_lamp_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alarm_lamp_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lf_door_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "lf_door_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lf_door_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rf_door_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "rf_door_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rf_door_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lr_door_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "lr_door_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lr_door_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rr_door_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_door_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rr_door_ctrl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__control_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._control_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__ControlCommand * ros_message = (ros2_interface__msg__ControlCommand *)raw_ros_message;
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
  {  // steer_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->steer_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_driving_mode", field);
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
  {  // accel_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->accel_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_driving_mode", field);
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
  {  // brake_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->brake_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_driving_mode", field);
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
  {  // backup_brake_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->backup_brake_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "backup_brake_driving_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // backup_brake_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->backup_brake_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "backup_brake_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->epb_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_driving_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_level
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->epb_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_driving_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_driving_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_driving_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_brake_enable
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->emergency_brake_enable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_brake_enable", field);
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
  {  // acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_lamp_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->turn_lamp_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // high_beam_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->high_beam_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "high_beam_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_beam_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->low_beam_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_beam_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horn_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->horn_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horn_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_wiper_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->front_wiper_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_wiper_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_wiper_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rear_wiper_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_wiper_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_lamp_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->position_lamp_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_fog_lamp_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->front_fog_lamp_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_fog_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_fog_lamp_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rear_fog_lamp_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_fog_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_lamp_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->brake_lamp_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alarm_lamp_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->alarm_lamp_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alarm_lamp_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lf_door_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lf_door_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lf_door_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rf_door_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rf_door_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rf_door_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lr_door_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lr_door_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lr_door_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_door_ctrl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rr_door_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_door_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

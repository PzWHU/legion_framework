// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_interface:msg/Vehicle.idl
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
#include "ros2_interface/msg/detail/vehicle__struct.h"
#include "ros2_interface/msg/detail/vehicle__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2_interface__msg__vehicle__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("ros2_interface.msg._vehicle.Vehicle", full_classname_dest, 35) == 0);
  }
  ros2_interface__msg__Vehicle * ros_message = _ros_message;
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
  {  // vehicle_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vid
    PyObject * field = PyObject_GetAttrString(_pymsg, "vid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vehicle_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_num");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vehicle_num, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // oid
    PyObject * field = PyObject_GetAttrString(_pymsg, "oid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->oid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // operation
    PyObject * field = PyObject_GetAttrString(_pymsg, "operation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operation = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // totalcurrent
    PyObject * field = PyObject_GetAttrString(_pymsg, "totalcurrent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->totalcurrent = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // batterysoc
    PyObject * field = PyObject_GetAttrString(_pymsg, "batterysoc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->batterysoc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // totalvoltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "totalvoltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->totalvoltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // recharge
    PyObject * field = PyObject_GetAttrString(_pymsg, "recharge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->recharge = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dcdc
    PyObject * field = PyObject_GetAttrString(_pymsg, "dcdc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dcdc = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // resistance
    PyObject * field = PyObject_GetAttrString(_pymsg, "resistance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->resistance = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seats
    PyObject * field = PyObject_GetAttrString(_pymsg, "seats");
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
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->seats), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->seats.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'seats'");
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
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->seats), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->seats.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // servicemode
    PyObject * field = PyObject_GetAttrString(_pymsg, "servicemode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servicemode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // seat_belt
    PyObject * field = PyObject_GetAttrString(_pymsg, "seat_belt");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->seat_belt), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->seat_belt.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'seat_belt'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->seat_belt), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->seat_belt.data;
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
  {  // engine_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engine_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_ammeter
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_ammeter");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_ammeter = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_consumption
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_consumption");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_consumption = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_probe
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_probe");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_probe = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_temperatures
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_temperatures");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->battery_temperatures), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->battery_temperatures.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'battery_temperatures'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->battery_temperatures), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->battery_temperatures.data;
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
  {  // battery_h_tepemperatures
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_h_tepemperatures");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_h_tepemperatures = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_ltepemperatures
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_ltepemperatures");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_ltepemperatures = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_probe_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_probe_code");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_probe_code = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_h_concentration
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_h_concentration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_h_concentration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_c_sensor_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_c_sensor_code");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_c_sensor_code = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_stress
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_stress");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_stress = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_s_sensor_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_s_sensor_code");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_s_sensor_code = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_h_dc_dc
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_h_dc_dc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_h_dc_dc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_capacity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_capacity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // airconditioning_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "airconditioning_idx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->airconditioning_idx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // airconditioning_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "airconditioning_status");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->airconditioning_status = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // airconditioning_model
    PyObject * field = PyObject_GetAttrString(_pymsg, "airconditioning_model");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->airconditioning_model = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // airconditioning_volume
    PyObject * field = PyObject_GetAttrString(_pymsg, "airconditioning_volume");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->airconditioning_volume = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // airconditioning_defrost
    PyObject * field = PyObject_GetAttrString(_pymsg, "airconditioning_defrost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->airconditioning_defrost = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // door_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_status");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->door_status), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->door_status.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'door_status'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->door_status), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->door_status.data;
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
  {  // rsrp
    PyObject * field = PyObject_GetAttrString(_pymsg, "rsrp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rsrp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sinr
    PyObject * field = PyObject_GetAttrString(_pymsg, "sinr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sinr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "uspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uspeed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "dspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dspeed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loss
    PyObject * field = PyObject_GetAttrString(_pymsg, "loss");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loss = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delay
    PyObject * field = PyObject_GetAttrString(_pymsg, "delay");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->delay = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // refrigeration_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "refrigeration_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->refrigeration_idx = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // refrigeration_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "refrigeration_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->refrigeration_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // refrigeration_stemp
    PyObject * field = PyObject_GetAttrString(_pymsg, "refrigeration_stemp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->refrigeration_stemp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // refrigeration_ctemp
    PyObject * field = PyObject_GetAttrString(_pymsg, "refrigeration_ctemp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->refrigeration_ctemp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // driving_motor_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_motor_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driving_motor_idx = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // driving_motor_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_motor_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driving_motor_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // driving_motor_ctemp
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_motor_ctemp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->driving_motor_ctemp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // driving_motor_rspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_motor_rspeed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driving_motor_rspeed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // driving_motor_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_motor_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->driving_motor_torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // driving_motor_etemp
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_motor_etemp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->driving_motor_etemp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // driving_motor_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_motor_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->driving_motor_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // driving_motor_ammeter
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving_motor_ammeter");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->driving_motor_ammeter = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outline_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "outline_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->outline_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // warning_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->warning_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // backlight_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "backlight_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->backlight_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // brakelamp_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "brakelamp_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brakelamp_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_lamp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_lamp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_lamp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // front_touch_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_touch_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_touch_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rear_touch_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_touch_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rear_touch_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // horn_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "horn_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->horn_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->length = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->width = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cleanup_switch_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "cleanup_switch_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cleanup_switch_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // watering_switch_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "watering_switch_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->watering_switch_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trash_can_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "trash_can_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trash_can_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // water_tank_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "water_tank_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->water_tank_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // water_add_switch_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "water_add_switch_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->water_add_switch_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // hatch_unlock_switch_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "hatch_unlock_switch_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hatch_unlock_switch_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // water_tank_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "water_tank_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->water_tank_level = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hmi_highbeam
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_highbeam");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_highbeam = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // hmi_cleanup
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_cleanup");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_cleanup = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // hmi_watering
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_watering");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_watering = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bms_charge_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_charge_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_charge_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // emergency_button_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_button_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emergency_button_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // traction
    PyObject * field = PyObject_GetAttrString(_pymsg, "traction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->traction = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->abs = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // scs
    PyObject * field = PyObject_GetAttrString(_pymsg, "scs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scs = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // brake_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_boost = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // aux_brakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux_brakes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aux_brakes = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_interface__msg__vehicle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Vehicle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_interface.msg._vehicle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Vehicle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_interface__msg__Vehicle * ros_message = (ros2_interface__msg__Vehicle *)raw_ros_message;
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
  {  // vehicle_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vehicle_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vid.data,
      strlen(ros_message->vid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_num
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vehicle_num.data,
      strlen(ros_message->vehicle_num.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->oid.data,
      strlen(ros_message->oid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "oid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operation
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->operation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // totalcurrent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->totalcurrent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "totalcurrent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // batterysoc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->batterysoc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "batterysoc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // totalvoltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->totalvoltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "totalvoltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // recharge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->recharge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "recharge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dcdc
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->dcdc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dcdc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // resistance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->resistance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "resistance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seats
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "seats");
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
    if (itemsize != sizeof(uint8_t)) {
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
    if (ros_message->seats.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->seats.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->seats.size * sizeof(uint8_t));
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
  {  // servicemode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servicemode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servicemode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seat_belt
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "seat_belt");
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
    if (ros_message->seat_belt.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->seat_belt.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->seat_belt.size * sizeof(int32_t));
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
  {  // engine_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->engine_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_ammeter
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_ammeter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_ammeter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_consumption
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_consumption);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_consumption", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_probe
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_probe);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_probe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_temperatures
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "battery_temperatures");
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
    if (ros_message->battery_temperatures.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->battery_temperatures.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->battery_temperatures.size * sizeof(double));
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
  {  // battery_h_tepemperatures
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_h_tepemperatures);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_h_tepemperatures", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_ltepemperatures
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_ltepemperatures);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_ltepemperatures", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_probe_code
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_probe_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_probe_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_h_concentration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_h_concentration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_h_concentration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_c_sensor_code
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_c_sensor_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_c_sensor_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_stress
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_stress);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_stress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_s_sensor_code
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_s_sensor_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_s_sensor_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_h_dc_dc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_h_dc_dc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_h_dc_dc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_capacity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airconditioning_idx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->airconditioning_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airconditioning_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airconditioning_status
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->airconditioning_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airconditioning_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airconditioning_model
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->airconditioning_model);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airconditioning_model", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airconditioning_volume
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->airconditioning_volume);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airconditioning_volume", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airconditioning_defrost
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->airconditioning_defrost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airconditioning_defrost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_status
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "door_status");
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
    if (ros_message->door_status.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->door_status.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->door_status.size * sizeof(int32_t));
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
  {  // rsrp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rsrp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rsrp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sinr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sinr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sinr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loss
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loss);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loss", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delay
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->delay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // refrigeration_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->refrigeration_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "refrigeration_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // refrigeration_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->refrigeration_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "refrigeration_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // refrigeration_stemp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->refrigeration_stemp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "refrigeration_stemp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // refrigeration_ctemp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->refrigeration_ctemp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "refrigeration_ctemp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driving_motor_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->driving_motor_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving_motor_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driving_motor_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->driving_motor_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving_motor_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driving_motor_ctemp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->driving_motor_ctemp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving_motor_ctemp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driving_motor_rspeed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->driving_motor_rspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving_motor_rspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driving_motor_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->driving_motor_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving_motor_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driving_motor_etemp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->driving_motor_etemp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving_motor_etemp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driving_motor_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->driving_motor_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving_motor_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driving_motor_ammeter
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->driving_motor_ammeter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving_motor_ammeter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outline_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->outline_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outline_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->warning_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // backlight_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->backlight_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "backlight_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brakelamp_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->brakelamp_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brakelamp_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_lamp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_lamp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_lamp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_touch_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->front_touch_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_touch_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_touch_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rear_touch_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_touch_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horn_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->horn_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horn_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->length);
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
    field = PyLong_FromLong(ros_message->width);
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
    field = PyLong_FromLong(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cleanup_switch_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cleanup_switch_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cleanup_switch_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // watering_switch_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->watering_switch_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "watering_switch_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trash_can_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trash_can_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trash_can_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // water_tank_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->water_tank_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "water_tank_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // water_add_switch_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->water_add_switch_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "water_add_switch_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hatch_unlock_switch_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hatch_unlock_switch_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hatch_unlock_switch_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // water_tank_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->water_tank_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "water_tank_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_highbeam
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hmi_highbeam);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_highbeam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_cleanup
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hmi_cleanup);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_cleanup", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_watering
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hmi_watering);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_watering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_charge_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bms_charge_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_charge_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_button_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->emergency_button_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_button_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traction
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->traction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->abs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scs
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->scs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_boost
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->brake_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux_brakes
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->aux_brakes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux_brakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

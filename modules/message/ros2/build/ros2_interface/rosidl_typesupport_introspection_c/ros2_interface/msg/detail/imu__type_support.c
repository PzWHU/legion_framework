// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/Imu.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/imu__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/imu__functions.h"
#include "ros2_interface/msg/detail/imu__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "ros2_interface/msg/quaternion.h"
// Member `orientation`
#include "ros2_interface/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `orientation_covariance`
// Member `angular_velocity_covariance`
// Member `linear_acceleration_covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "ros2_interface/msg/point3_d.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "ros2_interface/msg/detail/point3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__Imu__init(message_memory);
}

void ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_fini_function(void * message_memory)
{
  ros2_interface__msg__Imu__fini(message_memory);
}

size_t ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__size_function__Imu__orientation_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__orientation_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__orientation_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__fetch_function__Imu__orientation_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__orientation_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__assign_function__Imu__orientation_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__orientation_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__resize_function__Imu__orientation_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__size_function__Imu__angular_velocity_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__angular_velocity_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__angular_velocity_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__fetch_function__Imu__angular_velocity_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__angular_velocity_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__assign_function__Imu__angular_velocity_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__angular_velocity_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__resize_function__Imu__angular_velocity_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__size_function__Imu__linear_acceleration_covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__linear_acceleration_covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__linear_acceleration_covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__fetch_function__Imu__linear_acceleration_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__linear_acceleration_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__assign_function__Imu__linear_acceleration_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__linear_acceleration_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__resize_function__Imu__linear_acceleration_covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Imu, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Imu, is_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Imu, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Imu, orientation_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__size_function__Imu__orientation_covariance,  // size() function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__orientation_covariance,  // get_const(index) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__orientation_covariance,  // get(index) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__fetch_function__Imu__orientation_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__assign_function__Imu__orientation_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__resize_function__Imu__orientation_covariance  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Imu, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Imu, angular_velocity_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__size_function__Imu__angular_velocity_covariance,  // size() function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__angular_velocity_covariance,  // get_const(index) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__angular_velocity_covariance,  // get(index) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__fetch_function__Imu__angular_velocity_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__assign_function__Imu__angular_velocity_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__resize_function__Imu__angular_velocity_covariance  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Imu, linear_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Imu, linear_acceleration_covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__size_function__Imu__linear_acceleration_covariance,  // size() function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__linear_acceleration_covariance,  // get_const(index) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__linear_acceleration_covariance,  // get(index) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__fetch_function__Imu__linear_acceleration_covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__assign_function__Imu__linear_acceleration_covariance,  // assign(index, value) function pointer
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__resize_function__Imu__linear_acceleration_covariance  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_members = {
  "ros2_interface__msg",  // message namespace
  "Imu",  // message name
  8,  // number of fields
  sizeof(ros2_interface__msg__Imu),
  ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_member_array,  // message members
  ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle = {
  0,
  &ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Imu)() {
  ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Quaternion)();
  ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Point3D)();
  if (!ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

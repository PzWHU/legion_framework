// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/Odometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/odometry__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/odometry__functions.h"
#include "ros2_interface/msg/detail/odometry__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "ros2_interface/msg/point_enu.h"
// Member `position`
#include "ros2_interface/msg/detail/point_enu__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "ros2_interface/msg/quaternion.h"
// Member `orientation`
#include "ros2_interface/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__Odometry__init(message_memory);
}

void ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_fini_function(void * message_memory)
{
  ros2_interface__msg__Odometry__fini(message_memory);
}

size_t ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__size_function__Odometry__covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__get_const_function__Odometry__covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__get_function__Odometry__covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__fetch_function__Odometry__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__get_const_function__Odometry__covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__assign_function__Odometry__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__get_function__Odometry__covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__resize_function__Odometry__covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Odometry, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Odometry, position),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__Odometry, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__Odometry, covariance),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__size_function__Odometry__covariance,  // size() function pointer
    ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__get_const_function__Odometry__covariance,  // get_const(index) function pointer
    ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__get_function__Odometry__covariance,  // get(index) function pointer
    ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__fetch_function__Odometry__covariance,  // fetch(index, &value) function pointer
    ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__assign_function__Odometry__covariance,  // assign(index, value) function pointer
    ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__resize_function__Odometry__covariance  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_message_members = {
  "ros2_interface__msg",  // message namespace
  "Odometry",  // message name
  4,  // number of fields
  sizeof(ros2_interface__msg__Odometry),
  ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_message_member_array,  // message members
  ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_message_type_support_handle = {
  0,
  &ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Odometry)() {
  ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, PointENU)();
  ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, Quaternion)();
  if (!ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__Odometry__rosidl_typesupport_introspection_c__Odometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

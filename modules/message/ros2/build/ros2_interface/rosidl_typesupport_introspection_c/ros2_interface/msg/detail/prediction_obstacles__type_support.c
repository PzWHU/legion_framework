// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/PredictionObstacles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/prediction_obstacles__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/prediction_obstacles__functions.h"
#include "ros2_interface/msg/detail/prediction_obstacles__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `prediction_obstacles`
#include "ros2_interface/msg/prediction_obstacle.h"
// Member `prediction_obstacles`
#include "ros2_interface/msg/detail/prediction_obstacle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__PredictionObstacles__init(message_memory);
}

void ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_fini_function(void * message_memory)
{
  ros2_interface__msg__PredictionObstacles__fini(message_memory);
}

size_t ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__size_function__PredictionObstacles__prediction_obstacles(
  const void * untyped_member)
{
  const ros2_interface__msg__PredictionObstacle__Sequence * member =
    (const ros2_interface__msg__PredictionObstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__get_const_function__PredictionObstacles__prediction_obstacles(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__PredictionObstacle__Sequence * member =
    (const ros2_interface__msg__PredictionObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__get_function__PredictionObstacles__prediction_obstacles(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__PredictionObstacle__Sequence * member =
    (ros2_interface__msg__PredictionObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__fetch_function__PredictionObstacles__prediction_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__PredictionObstacle * item =
    ((const ros2_interface__msg__PredictionObstacle *)
    ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__get_const_function__PredictionObstacles__prediction_obstacles(untyped_member, index));
  ros2_interface__msg__PredictionObstacle * value =
    (ros2_interface__msg__PredictionObstacle *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__assign_function__PredictionObstacles__prediction_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__PredictionObstacle * item =
    ((ros2_interface__msg__PredictionObstacle *)
    ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__get_function__PredictionObstacles__prediction_obstacles(untyped_member, index));
  const ros2_interface__msg__PredictionObstacle * value =
    (const ros2_interface__msg__PredictionObstacle *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__resize_function__PredictionObstacles__prediction_obstacles(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__PredictionObstacle__Sequence * member =
    (ros2_interface__msg__PredictionObstacle__Sequence *)(untyped_member);
  ros2_interface__msg__PredictionObstacle__Sequence__fini(member);
  return ros2_interface__msg__PredictionObstacle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacles, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prediction_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacles, prediction_obstacles),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__size_function__PredictionObstacles__prediction_obstacles,  // size() function pointer
    ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__get_const_function__PredictionObstacles__prediction_obstacles,  // get_const(index) function pointer
    ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__get_function__PredictionObstacles__prediction_obstacles,  // get(index) function pointer
    ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__fetch_function__PredictionObstacles__prediction_obstacles,  // fetch(index, &value) function pointer
    ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__assign_function__PredictionObstacles__prediction_obstacles,  // assign(index, value) function pointer
    ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__resize_function__PredictionObstacles__prediction_obstacles  // resize(index) function pointer
  },
  {
    "change_origin_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacles, change_origin_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacles, start_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacles, end_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "self_intent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacles, self_intent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scenario",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacles, scenario),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_message_members = {
  "ros2_interface__msg",  // message namespace
  "PredictionObstacles",  // message name
  7,  // number of fields
  sizeof(ros2_interface__msg__PredictionObstacles),
  ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_message_member_array,  // message members
  ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_message_type_support_handle = {
  0,
  &ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, PredictionObstacles)() {
  ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, PredictionObstacle)();
  if (!ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__PredictionObstacles__rosidl_typesupport_introspection_c__PredictionObstacles_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

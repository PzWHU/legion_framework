// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/PredictionObstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/prediction_obstacle__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/prediction_obstacle__functions.h"
#include "ros2_interface/msg/detail/prediction_obstacle__struct.h"


// Include directives for member types
// Member `perception_obstacle`
#include "ros2_interface/msg/perception_obstacle.h"
// Member `perception_obstacle`
#include "ros2_interface/msg/detail/perception_obstacle__rosidl_typesupport_introspection_c.h"
// Member `trajectory`
#include "ros2_interface/msg/trajectory_in_prediction.h"
// Member `trajectory`
#include "ros2_interface/msg/detail/trajectory_in_prediction__rosidl_typesupport_introspection_c.h"
// Member `intent`
#include "ros2_interface/msg/obstacle_intent.h"
// Member `intent`
#include "ros2_interface/msg/detail/obstacle_intent__rosidl_typesupport_introspection_c.h"
// Member `priority`
#include "ros2_interface/msg/obstacle_priority.h"
// Member `priority`
#include "ros2_interface/msg/detail/obstacle_priority__rosidl_typesupport_introspection_c.h"
// Member `interactive_tag`
#include "ros2_interface/msg/obstacle_interactive_tag.h"
// Member `interactive_tag`
#include "ros2_interface/msg/detail/obstacle_interactive_tag__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__PredictionObstacle__init(message_memory);
}

void ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_fini_function(void * message_memory)
{
  ros2_interface__msg__PredictionObstacle__fini(message_memory);
}

size_t ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__size_function__PredictionObstacle__trajectory(
  const void * untyped_member)
{
  const ros2_interface__msg__TrajectoryInPrediction__Sequence * member =
    (const ros2_interface__msg__TrajectoryInPrediction__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__PredictionObstacle__trajectory(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__TrajectoryInPrediction__Sequence * member =
    (const ros2_interface__msg__TrajectoryInPrediction__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__get_function__PredictionObstacle__trajectory(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__TrajectoryInPrediction__Sequence * member =
    (ros2_interface__msg__TrajectoryInPrediction__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__PredictionObstacle__trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__TrajectoryInPrediction * item =
    ((const ros2_interface__msg__TrajectoryInPrediction *)
    ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__PredictionObstacle__trajectory(untyped_member, index));
  ros2_interface__msg__TrajectoryInPrediction * value =
    (ros2_interface__msg__TrajectoryInPrediction *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__assign_function__PredictionObstacle__trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__TrajectoryInPrediction * item =
    ((ros2_interface__msg__TrajectoryInPrediction *)
    ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__get_function__PredictionObstacle__trajectory(untyped_member, index));
  const ros2_interface__msg__TrajectoryInPrediction * value =
    (const ros2_interface__msg__TrajectoryInPrediction *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__resize_function__PredictionObstacle__trajectory(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__TrajectoryInPrediction__Sequence * member =
    (ros2_interface__msg__TrajectoryInPrediction__Sequence *)(untyped_member);
  ros2_interface__msg__TrajectoryInPrediction__Sequence__fini(member);
  return ros2_interface__msg__TrajectoryInPrediction__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_member_array[8] = {
  {
    "perception_obstacle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacle, perception_obstacle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacle, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_period",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacle, predicted_period),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacle, trajectory),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__size_function__PredictionObstacle__trajectory,  // size() function pointer
    ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__PredictionObstacle__trajectory,  // get_const(index) function pointer
    ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__get_function__PredictionObstacle__trajectory,  // get(index) function pointer
    ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__PredictionObstacle__trajectory,  // fetch(index, &value) function pointer
    ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__assign_function__PredictionObstacle__trajectory,  // assign(index, value) function pointer
    ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__resize_function__PredictionObstacle__trajectory  // resize(index) function pointer
  },
  {
    "intent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacle, intent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacle, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interactive_tag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacle, interactive_tag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_static",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__PredictionObstacle, is_static),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_members = {
  "ros2_interface__msg",  // message namespace
  "PredictionObstacle",  // message name
  8,  // number of fields
  sizeof(ros2_interface__msg__PredictionObstacle),
  ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_member_array,  // message members
  ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_type_support_handle = {
  0,
  &ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, PredictionObstacle)() {
  ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, PerceptionObstacle)();
  ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, TrajectoryInPrediction)();
  ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, ObstacleIntent)();
  ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, ObstaclePriority)();
  ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, ObstacleInteractiveTag)();
  if (!ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__PredictionObstacle__rosidl_typesupport_introspection_c__PredictionObstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

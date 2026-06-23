// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_interface:msg/LaneList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_interface/msg/detail/lane_list__rosidl_typesupport_introspection_c.h"
#include "ros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_interface/msg/detail/lane_list__functions.h"
#include "ros2_interface/msg/detail/lane_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sensor_calibrator`
#include "ros2_interface/msg/sensor_calibrator.h"
// Member `sensor_calibrator`
#include "ros2_interface/msg/detail/sensor_calibrator__rosidl_typesupport_introspection_c.h"
// Member `camera_laneline`
#include "ros2_interface/msg/lane_line.h"
// Member `camera_laneline`
#include "ros2_interface/msg/detail/lane_line__rosidl_typesupport_introspection_c.h"
// Member `hpp`
#include "ros2_interface/msg/holistic_path_prediction.h"
// Member `hpp`
#include "ros2_interface/msg/detail/holistic_path_prediction__rosidl_typesupport_introspection_c.h"
// Member `road_marks`
#include "ros2_interface/msg/road_mark.h"
// Member `road_marks`
#include "ros2_interface/msg/detail/road_mark__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_interface__msg__LaneList__init(message_memory);
}

void ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_fini_function(void * message_memory)
{
  ros2_interface__msg__LaneList__fini(message_memory);
}

size_t ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__size_function__LaneList__camera_laneline(
  const void * untyped_member)
{
  const ros2_interface__msg__LaneLine__Sequence * member =
    (const ros2_interface__msg__LaneLine__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_const_function__LaneList__camera_laneline(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__LaneLine__Sequence * member =
    (const ros2_interface__msg__LaneLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_function__LaneList__camera_laneline(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__LaneLine__Sequence * member =
    (ros2_interface__msg__LaneLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__fetch_function__LaneList__camera_laneline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__LaneLine * item =
    ((const ros2_interface__msg__LaneLine *)
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_const_function__LaneList__camera_laneline(untyped_member, index));
  ros2_interface__msg__LaneLine * value =
    (ros2_interface__msg__LaneLine *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__assign_function__LaneList__camera_laneline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__LaneLine * item =
    ((ros2_interface__msg__LaneLine *)
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_function__LaneList__camera_laneline(untyped_member, index));
  const ros2_interface__msg__LaneLine * value =
    (const ros2_interface__msg__LaneLine *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__resize_function__LaneList__camera_laneline(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__LaneLine__Sequence * member =
    (ros2_interface__msg__LaneLine__Sequence *)(untyped_member);
  ros2_interface__msg__LaneLine__Sequence__fini(member);
  return ros2_interface__msg__LaneLine__Sequence__init(member, size);
}

size_t ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__size_function__LaneList__road_marks(
  const void * untyped_member)
{
  const ros2_interface__msg__RoadMark__Sequence * member =
    (const ros2_interface__msg__RoadMark__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_const_function__LaneList__road_marks(
  const void * untyped_member, size_t index)
{
  const ros2_interface__msg__RoadMark__Sequence * member =
    (const ros2_interface__msg__RoadMark__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_function__LaneList__road_marks(
  void * untyped_member, size_t index)
{
  ros2_interface__msg__RoadMark__Sequence * member =
    (ros2_interface__msg__RoadMark__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__fetch_function__LaneList__road_marks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_interface__msg__RoadMark * item =
    ((const ros2_interface__msg__RoadMark *)
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_const_function__LaneList__road_marks(untyped_member, index));
  ros2_interface__msg__RoadMark * value =
    (ros2_interface__msg__RoadMark *)(untyped_value);
  *value = *item;
}

void ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__assign_function__LaneList__road_marks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_interface__msg__RoadMark * item =
    ((ros2_interface__msg__RoadMark *)
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_function__LaneList__road_marks(untyped_member, index));
  const ros2_interface__msg__RoadMark * value =
    (const ros2_interface__msg__RoadMark *)(untyped_value);
  *item = *value;
}

bool ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__resize_function__LaneList__road_marks(
  void * untyped_member, size_t size)
{
  ros2_interface__msg__RoadMark__Sequence * member =
    (ros2_interface__msg__RoadMark__Sequence *)(untyped_member);
  ros2_interface__msg__RoadMark__Sequence__fini(member);
  return ros2_interface__msg__RoadMark__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneList, sensor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneList, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneList, sensor_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_origin_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneList, change_origin_flag),  // bytes offset in struct
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
    offsetof(ros2_interface__msg__LaneList, is_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_calibrator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneList, sensor_calibrator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_laneline",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneList, camera_laneline),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__size_function__LaneList__camera_laneline,  // size() function pointer
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_const_function__LaneList__camera_laneline,  // get_const(index) function pointer
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_function__LaneList__camera_laneline,  // get(index) function pointer
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__fetch_function__LaneList__camera_laneline,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__assign_function__LaneList__camera_laneline,  // assign(index, value) function pointer
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__resize_function__LaneList__camera_laneline  // resize(index) function pointer
  },
  {
    "hpp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneList, hpp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_marks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface__msg__LaneList, road_marks),  // bytes offset in struct
    NULL,  // default value
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__size_function__LaneList__road_marks,  // size() function pointer
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_const_function__LaneList__road_marks,  // get_const(index) function pointer
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__get_function__LaneList__road_marks,  // get(index) function pointer
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__fetch_function__LaneList__road_marks,  // fetch(index, &value) function pointer
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__assign_function__LaneList__road_marks,  // assign(index, value) function pointer
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__resize_function__LaneList__road_marks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_members = {
  "ros2_interface__msg",  // message namespace
  "LaneList",  // message name
  10,  // number of fields
  sizeof(ros2_interface__msg__LaneList),
  ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array,  // message members
  ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle = {
  0,
  &ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, LaneList)() {
  ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, SensorCalibrator)();
  ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, LaneLine)();
  ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, HolisticPathPrediction)();
  ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_interface, msg, RoadMark)();
  if (!ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle.typesupport_identifier) {
    ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_interface__msg__LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

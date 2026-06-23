// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/LaneInfoExtend.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_interface/msg/detail/lane_info_extend__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros2_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LaneInfoExtend_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_interface::msg::LaneInfoExtend(_init);
}

void LaneInfoExtend_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_interface::msg::LaneInfoExtend *>(message_memory);
  typed_message->~LaneInfoExtend();
}

size_t size_function__LaneInfoExtend__predecessor_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneInfoExtend__predecessor_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneInfoExtend__predecessor_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneInfoExtend__predecessor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__LaneInfoExtend__predecessor_ids(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__LaneInfoExtend__predecessor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__LaneInfoExtend__predecessor_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__LaneInfoExtend__predecessor_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneInfoExtend__successor_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneInfoExtend__successor_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneInfoExtend__successor_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneInfoExtend__successor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__LaneInfoExtend__successor_ids(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__LaneInfoExtend__successor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__LaneInfoExtend__successor_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__LaneInfoExtend__successor_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneInfoExtend__lane_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::LanePoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneInfoExtend__lane_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::LanePoint> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneInfoExtend__lane_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::LanePoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneInfoExtend__lane_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::LanePoint *>(
    get_const_function__LaneInfoExtend__lane_points(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::LanePoint *>(untyped_value);
  value = item;
}

void assign_function__LaneInfoExtend__lane_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::LanePoint *>(
    get_function__LaneInfoExtend__lane_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::LanePoint *>(untyped_value);
  item = value;
}

void resize_function__LaneInfoExtend__lane_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::LanePoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneInfoExtend_message_member_array[8] = {
  {
    "priority",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneInfoExtend, priority),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "global_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneInfoExtend, global_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "predecessor_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneInfoExtend, predecessor_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneInfoExtend__predecessor_ids,  // size() function pointer
    get_const_function__LaneInfoExtend__predecessor_ids,  // get_const(index) function pointer
    get_function__LaneInfoExtend__predecessor_ids,  // get(index) function pointer
    fetch_function__LaneInfoExtend__predecessor_ids,  // fetch(index, &value) function pointer
    assign_function__LaneInfoExtend__predecessor_ids,  // assign(index, value) function pointer
    resize_function__LaneInfoExtend__predecessor_ids  // resize(index) function pointer
  },
  {
    "successor_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneInfoExtend, successor_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneInfoExtend__successor_ids,  // size() function pointer
    get_const_function__LaneInfoExtend__successor_ids,  // get_const(index) function pointer
    get_function__LaneInfoExtend__successor_ids,  // get(index) function pointer
    fetch_function__LaneInfoExtend__successor_ids,  // fetch(index, &value) function pointer
    assign_function__LaneInfoExtend__successor_ids,  // assign(index, value) function pointer
    resize_function__LaneInfoExtend__successor_ids  // resize(index) function pointer
  },
  {
    "left_neighbor_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneInfoExtend, left_neighbor_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_neighbor_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneInfoExtend, right_neighbor_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneInfoExtend, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::LanePoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneInfoExtend, lane_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneInfoExtend__lane_points,  // size() function pointer
    get_const_function__LaneInfoExtend__lane_points,  // get_const(index) function pointer
    get_function__LaneInfoExtend__lane_points,  // get(index) function pointer
    fetch_function__LaneInfoExtend__lane_points,  // fetch(index, &value) function pointer
    assign_function__LaneInfoExtend__lane_points,  // assign(index, value) function pointer
    resize_function__LaneInfoExtend__lane_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneInfoExtend_message_members = {
  "ros2_interface::msg",  // message namespace
  "LaneInfoExtend",  // message name
  8,  // number of fields
  sizeof(ros2_interface::msg::LaneInfoExtend),
  LaneInfoExtend_message_member_array,  // message members
  LaneInfoExtend_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneInfoExtend_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneInfoExtend_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneInfoExtend_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros2_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_interface::msg::LaneInfoExtend>()
{
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::LaneInfoExtend_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_interface, msg, LaneInfoExtend)() {
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::LaneInfoExtend_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_interface/msg/detail/trajectory_array__struct.hpp"
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

void TrajectoryArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_interface::msg::TrajectoryArray(_init);
}

void TrajectoryArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_interface::msg::TrajectoryArray *>(message_memory);
  typed_message->~TrajectoryArray();
}

size_t size_function__TrajectoryArray__spline_s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Path> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryArray__spline_s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Path> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryArray__spline_s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Path> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryArray__spline_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Path *>(
    get_const_function__TrajectoryArray__spline_s(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Path *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryArray__spline_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Path *>(
    get_function__TrajectoryArray__spline_s(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Path *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryArray__spline_s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Path> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryArray__qp_smooth(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Path> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryArray__qp_smooth(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Path> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryArray__qp_smooth(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Path> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryArray__qp_smooth(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Path *>(
    get_const_function__TrajectoryArray__qp_smooth(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Path *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryArray__qp_smooth(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Path *>(
    get_function__TrajectoryArray__qp_smooth(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Path *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryArray__qp_smooth(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Path> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryArray__trajectory_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Trajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryArray__trajectory_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Trajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryArray__trajectory_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Trajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryArray__trajectory_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Trajectory *>(
    get_const_function__TrajectoryArray__trajectory_list(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Trajectory *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryArray__trajectory_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Trajectory *>(
    get_function__TrajectoryArray__trajectory_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Trajectory *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryArray__trajectory_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Trajectory> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryArray_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::TrajectoryArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "spline_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Path>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::TrajectoryArray, spline_s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryArray__spline_s,  // size() function pointer
    get_const_function__TrajectoryArray__spline_s,  // get_const(index) function pointer
    get_function__TrajectoryArray__spline_s,  // get(index) function pointer
    fetch_function__TrajectoryArray__spline_s,  // fetch(index, &value) function pointer
    assign_function__TrajectoryArray__spline_s,  // assign(index, value) function pointer
    resize_function__TrajectoryArray__spline_s  // resize(index) function pointer
  },
  {
    "qp_smooth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Path>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::TrajectoryArray, qp_smooth),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryArray__qp_smooth,  // size() function pointer
    get_const_function__TrajectoryArray__qp_smooth,  // get_const(index) function pointer
    get_function__TrajectoryArray__qp_smooth,  // get(index) function pointer
    fetch_function__TrajectoryArray__qp_smooth,  // fetch(index, &value) function pointer
    assign_function__TrajectoryArray__qp_smooth,  // assign(index, value) function pointer
    resize_function__TrajectoryArray__qp_smooth  // resize(index) function pointer
  },
  {
    "trajectory_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Trajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::TrajectoryArray, trajectory_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryArray__trajectory_list,  // size() function pointer
    get_const_function__TrajectoryArray__trajectory_list,  // get_const(index) function pointer
    get_function__TrajectoryArray__trajectory_list,  // get(index) function pointer
    fetch_function__TrajectoryArray__trajectory_list,  // fetch(index, &value) function pointer
    assign_function__TrajectoryArray__trajectory_list,  // assign(index, value) function pointer
    resize_function__TrajectoryArray__trajectory_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryArray_message_members = {
  "ros2_interface::msg",  // message namespace
  "TrajectoryArray",  // message name
  4,  // number of fields
  sizeof(ros2_interface::msg::TrajectoryArray),
  TrajectoryArray_message_member_array,  // message members
  TrajectoryArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryArray_message_members,
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
get_message_type_support_handle<ros2_interface::msg::TrajectoryArray>()
{
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::TrajectoryArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_interface, msg, TrajectoryArray)() {
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::TrajectoryArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

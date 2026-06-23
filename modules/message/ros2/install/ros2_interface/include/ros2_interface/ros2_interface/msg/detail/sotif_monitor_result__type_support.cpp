// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/SotifMonitorResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_interface/msg/detail/sotif_monitor_result__struct.hpp"
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

void SotifMonitorResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_interface::msg::SotifMonitorResult(_init);
}

void SotifMonitorResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_interface::msg::SotifMonitorResult *>(message_memory);
  typed_message->~SotifMonitorResult();
}

size_t size_function__SotifMonitorResult__region_value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Region> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SotifMonitorResult__region_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Region> *>(untyped_member);
  return &member[index];
}

void * get_function__SotifMonitorResult__region_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Region> *>(untyped_member);
  return &member[index];
}

void fetch_function__SotifMonitorResult__region_value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Region *>(
    get_const_function__SotifMonitorResult__region_value(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Region *>(untyped_value);
  value = item;
}

void assign_function__SotifMonitorResult__region_value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Region *>(
    get_function__SotifMonitorResult__region_value(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Region *>(untyped_value);
  item = value;
}

void resize_function__SotifMonitorResult__region_value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Region> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SotifMonitorResult__grid_map(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Grid> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SotifMonitorResult__grid_map(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Grid> *>(untyped_member);
  return &member[index];
}

void * get_function__SotifMonitorResult__grid_map(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Grid> *>(untyped_member);
  return &member[index];
}

void fetch_function__SotifMonitorResult__grid_map(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Grid *>(
    get_const_function__SotifMonitorResult__grid_map(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Grid *>(untyped_value);
  value = item;
}

void assign_function__SotifMonitorResult__grid_map(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Grid *>(
    get_function__SotifMonitorResult__grid_map(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Grid *>(untyped_value);
  item = value;
}

void resize_function__SotifMonitorResult__grid_map(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Grid> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SotifMonitorResult_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::SotifMonitorResult, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "region_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Region>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::SotifMonitorResult, region_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__SotifMonitorResult__region_value,  // size() function pointer
    get_const_function__SotifMonitorResult__region_value,  // get_const(index) function pointer
    get_function__SotifMonitorResult__region_value,  // get(index) function pointer
    fetch_function__SotifMonitorResult__region_value,  // fetch(index, &value) function pointer
    assign_function__SotifMonitorResult__region_value,  // assign(index, value) function pointer
    resize_function__SotifMonitorResult__region_value  // resize(index) function pointer
  },
  {
    "grid_map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Grid>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::SotifMonitorResult, grid_map),  // bytes offset in struct
    nullptr,  // default value
    size_function__SotifMonitorResult__grid_map,  // size() function pointer
    get_const_function__SotifMonitorResult__grid_map,  // get_const(index) function pointer
    get_function__SotifMonitorResult__grid_map,  // get(index) function pointer
    fetch_function__SotifMonitorResult__grid_map,  // fetch(index, &value) function pointer
    assign_function__SotifMonitorResult__grid_map,  // assign(index, value) function pointer
    resize_function__SotifMonitorResult__grid_map  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SotifMonitorResult_message_members = {
  "ros2_interface::msg",  // message namespace
  "SotifMonitorResult",  // message name
  3,  // number of fields
  sizeof(ros2_interface::msg::SotifMonitorResult),
  SotifMonitorResult_message_member_array,  // message members
  SotifMonitorResult_init_function,  // function to initialize message memory (memory has to be allocated)
  SotifMonitorResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SotifMonitorResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SotifMonitorResult_message_members,
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
get_message_type_support_handle<ros2_interface::msg::SotifMonitorResult>()
{
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::SotifMonitorResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_interface, msg, SotifMonitorResult)() {
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::SotifMonitorResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/GlobalRouteMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_interface/msg/detail/global_route_msg__struct.hpp"
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

void GlobalRouteMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_interface::msg::GlobalRouteMsg(_init);
}

void GlobalRouteMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_interface::msg::GlobalRouteMsg *>(message_memory);
  typed_message->~GlobalRouteMsg();
}

size_t size_function__GlobalRouteMsg__route(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::LaneletInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GlobalRouteMsg__route(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::LaneletInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__GlobalRouteMsg__route(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::LaneletInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__GlobalRouteMsg__route(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::LaneletInfo *>(
    get_const_function__GlobalRouteMsg__route(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::LaneletInfo *>(untyped_value);
  value = item;
}

void assign_function__GlobalRouteMsg__route(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::LaneletInfo *>(
    get_function__GlobalRouteMsg__route(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::LaneletInfo *>(untyped_value);
  item = value;
}

void resize_function__GlobalRouteMsg__route(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::LaneletInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GlobalRouteMsg__cur_slice(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::LaneletInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GlobalRouteMsg__cur_slice(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::LaneletInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__GlobalRouteMsg__cur_slice(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::LaneletInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__GlobalRouteMsg__cur_slice(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::LaneletInfo *>(
    get_const_function__GlobalRouteMsg__cur_slice(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::LaneletInfo *>(untyped_value);
  value = item;
}

void assign_function__GlobalRouteMsg__cur_slice(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::LaneletInfo *>(
    get_function__GlobalRouteMsg__cur_slice(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::LaneletInfo *>(untyped_value);
  item = value;
}

void resize_function__GlobalRouteMsg__cur_slice(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::LaneletInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GlobalRouteMsg_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::GlobalRouteMsg, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "route",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::LaneletInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::GlobalRouteMsg, route),  // bytes offset in struct
    nullptr,  // default value
    size_function__GlobalRouteMsg__route,  // size() function pointer
    get_const_function__GlobalRouteMsg__route,  // get_const(index) function pointer
    get_function__GlobalRouteMsg__route,  // get(index) function pointer
    fetch_function__GlobalRouteMsg__route,  // fetch(index, &value) function pointer
    assign_function__GlobalRouteMsg__route,  // assign(index, value) function pointer
    resize_function__GlobalRouteMsg__route  // resize(index) function pointer
  },
  {
    "current_lanelet",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::LaneletInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::GlobalRouteMsg, current_lanelet),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "total_mileage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::GlobalRouteMsg, total_mileage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cur_mileage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::GlobalRouteMsg, cur_mileage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cur_slice",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::LaneletInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::GlobalRouteMsg, cur_slice),  // bytes offset in struct
    nullptr,  // default value
    size_function__GlobalRouteMsg__cur_slice,  // size() function pointer
    get_const_function__GlobalRouteMsg__cur_slice,  // get_const(index) function pointer
    get_function__GlobalRouteMsg__cur_slice,  // get(index) function pointer
    fetch_function__GlobalRouteMsg__cur_slice,  // fetch(index, &value) function pointer
    assign_function__GlobalRouteMsg__cur_slice,  // assign(index, value) function pointer
    resize_function__GlobalRouteMsg__cur_slice  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GlobalRouteMsg_message_members = {
  "ros2_interface::msg",  // message namespace
  "GlobalRouteMsg",  // message name
  6,  // number of fields
  sizeof(ros2_interface::msg::GlobalRouteMsg),
  GlobalRouteMsg_message_member_array,  // message members
  GlobalRouteMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  GlobalRouteMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GlobalRouteMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GlobalRouteMsg_message_members,
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
get_message_type_support_handle<ros2_interface::msg::GlobalRouteMsg>()
{
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::GlobalRouteMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_interface, msg, GlobalRouteMsg)() {
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::GlobalRouteMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

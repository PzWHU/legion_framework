// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/RoutingRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_interface/msg/detail/routing_request__struct.hpp"
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

void RoutingRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_interface::msg::RoutingRequest(_init);
}

void RoutingRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_interface::msg::RoutingRequest *>(message_memory);
  typed_message->~RoutingRequest();
}

size_t size_function__RoutingRequest__key_point_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::KeyPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RoutingRequest__key_point_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::KeyPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__RoutingRequest__key_point_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::KeyPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__RoutingRequest__key_point_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::KeyPoint *>(
    get_const_function__RoutingRequest__key_point_list(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::KeyPoint *>(untyped_value);
  value = item;
}

void assign_function__RoutingRequest__key_point_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::KeyPoint *>(
    get_function__RoutingRequest__key_point_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::KeyPoint *>(untyped_value);
  item = value;
}

void resize_function__RoutingRequest__key_point_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::KeyPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RoutingRequest_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::RoutingRequest, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request_source",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::RoutingRequest, request_source),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::RoutingRequest, request_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_of_kp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::RoutingRequest, num_of_kp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "key_point_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::KeyPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::RoutingRequest, key_point_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__RoutingRequest__key_point_list,  // size() function pointer
    get_const_function__RoutingRequest__key_point_list,  // get_const(index) function pointer
    get_function__RoutingRequest__key_point_list,  // get(index) function pointer
    fetch_function__RoutingRequest__key_point_list,  // fetch(index, &value) function pointer
    assign_function__RoutingRequest__key_point_list,  // assign(index, value) function pointer
    resize_function__RoutingRequest__key_point_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RoutingRequest_message_members = {
  "ros2_interface::msg",  // message namespace
  "RoutingRequest",  // message name
  5,  // number of fields
  sizeof(ros2_interface::msg::RoutingRequest),
  RoutingRequest_message_member_array,  // message members
  RoutingRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  RoutingRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RoutingRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RoutingRequest_message_members,
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
get_message_type_support_handle<ros2_interface::msg::RoutingRequest>()
{
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::RoutingRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_interface, msg, RoutingRequest)() {
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::RoutingRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

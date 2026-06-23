// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/ParkingInfoList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_interface/msg/detail/parking_info_list__struct.hpp"
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

void ParkingInfoList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_interface::msg::ParkingInfoList(_init);
}

void ParkingInfoList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_interface::msg::ParkingInfoList *>(message_memory);
  typed_message->~ParkingInfoList();
}

size_t size_function__ParkingInfoList__parking_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::ParkingInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ParkingInfoList__parking_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::ParkingInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__ParkingInfoList__parking_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::ParkingInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__ParkingInfoList__parking_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::ParkingInfo *>(
    get_const_function__ParkingInfoList__parking_info(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::ParkingInfo *>(untyped_value);
  value = item;
}

void assign_function__ParkingInfoList__parking_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::ParkingInfo *>(
    get_function__ParkingInfoList__parking_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::ParkingInfo *>(untyped_value);
  item = value;
}

void resize_function__ParkingInfoList__parking_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::ParkingInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ParkingInfoList_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::ParkingInfoList, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parking_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::ParkingInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::ParkingInfoList, parking_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__ParkingInfoList__parking_info,  // size() function pointer
    get_const_function__ParkingInfoList__parking_info,  // get_const(index) function pointer
    get_function__ParkingInfoList__parking_info,  // get(index) function pointer
    fetch_function__ParkingInfoList__parking_info,  // fetch(index, &value) function pointer
    assign_function__ParkingInfoList__parking_info,  // assign(index, value) function pointer
    resize_function__ParkingInfoList__parking_info  // resize(index) function pointer
  },
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::ParkingInfoList, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::ParkingInfoList, is_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parking_out_enable",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::ParkingInfoList, parking_out_enable),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parking_out_direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::ParkingInfoList, parking_out_direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parking_out_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::ParkingInfoList, parking_out_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ParkingInfoList_message_members = {
  "ros2_interface::msg",  // message namespace
  "ParkingInfoList",  // message name
  7,  // number of fields
  sizeof(ros2_interface::msg::ParkingInfoList),
  ParkingInfoList_message_member_array,  // message members
  ParkingInfoList_init_function,  // function to initialize message memory (memory has to be allocated)
  ParkingInfoList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ParkingInfoList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ParkingInfoList_message_members,
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
get_message_type_support_handle<ros2_interface::msg::ParkingInfoList>()
{
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::ParkingInfoList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_interface, msg, ParkingInfoList)() {
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::ParkingInfoList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/Polygon.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_interface/msg/detail/polygon__struct.hpp"
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

void Polygon_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_interface::msg::Polygon(_init);
}

void Polygon_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_interface::msg::Polygon *>(message_memory);
  typed_message->~Polygon();
}

size_t size_function__Polygon__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Polygon__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  return &member[index];
}

void * get_function__Polygon__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  return &member[index];
}

void fetch_function__Polygon__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Point3D *>(
    get_const_function__Polygon__points(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Point3D *>(untyped_value);
  value = item;
}

void assign_function__Polygon__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Point3D *>(
    get_function__Polygon__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Point3D *>(untyped_value);
  item = value;
}

void resize_function__Polygon__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Polygon_message_member_array[1] = {
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Point3D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::Polygon, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Polygon__points,  // size() function pointer
    get_const_function__Polygon__points,  // get_const(index) function pointer
    get_function__Polygon__points,  // get(index) function pointer
    fetch_function__Polygon__points,  // fetch(index, &value) function pointer
    assign_function__Polygon__points,  // assign(index, value) function pointer
    resize_function__Polygon__points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Polygon_message_members = {
  "ros2_interface::msg",  // message namespace
  "Polygon",  // message name
  1,  // number of fields
  sizeof(ros2_interface::msg::Polygon),
  Polygon_message_member_array,  // message members
  Polygon_init_function,  // function to initialize message memory (memory has to be allocated)
  Polygon_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Polygon_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Polygon_message_members,
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
get_message_type_support_handle<ros2_interface::msg::Polygon>()
{
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::Polygon_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_interface, msg, Polygon)() {
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::Polygon_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

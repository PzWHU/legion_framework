// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/LaneLine.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_interface/msg/detail/lane_line__struct.hpp"
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

void LaneLine_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_interface::msg::LaneLine(_init);
}

void LaneLine_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_interface::msg::LaneLine *>(message_memory);
  typed_message->~LaneLine();
}

size_t size_function__LaneLine__pts_vehicle(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneLine__pts_vehicle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneLine__pts_vehicle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneLine__pts_vehicle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Point3D *>(
    get_const_function__LaneLine__pts_vehicle(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Point3D *>(untyped_value);
  value = item;
}

void assign_function__LaneLine__pts_vehicle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Point3D *>(
    get_function__LaneLine__pts_vehicle(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Point3D *>(untyped_value);
  item = value;
}

void resize_function__LaneLine__pts_vehicle(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneLine__pts_image(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Point2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneLine__pts_image(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Point2D> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneLine__pts_image(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Point2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneLine__pts_image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Point2D *>(
    get_const_function__LaneLine__pts_image(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Point2D *>(untyped_value);
  value = item;
}

void assign_function__LaneLine__pts_image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Point2D *>(
    get_function__LaneLine__pts_image(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Point2D *>(untyped_value);
  item = value;
}

void resize_function__LaneLine__pts_image(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Point2D> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneLine__pts_abs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneLine__pts_abs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneLine__pts_abs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneLine__pts_abs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Point3D *>(
    get_const_function__LaneLine__pts_abs(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Point3D *>(untyped_value);
  value = item;
}

void assign_function__LaneLine__pts_abs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Point3D *>(
    get_function__LaneLine__pts_abs(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Point3D *>(untyped_value);
  item = value;
}

void resize_function__LaneLine__pts_abs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Point3D> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneLine__pts_key(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Point2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneLine__pts_key(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Point2D> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneLine__pts_key(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Point2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneLine__pts_key(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Point2D *>(
    get_const_function__LaneLine__pts_key(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Point2D *>(untyped_value);
  value = item;
}

void assign_function__LaneLine__pts_key(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Point2D *>(
    get_function__LaneLine__pts_key(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Point2D *>(untyped_value);
  item = value;
}

void resize_function__LaneLine__pts_key(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Point2D> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneLine__homography_mat(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneLine__homography_mat(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneLine__homography_mat(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneLine__homography_mat(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__LaneLine__homography_mat(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__LaneLine__homography_mat(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__LaneLine__homography_mat(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__LaneLine__homography_mat(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneLine__homography_mat_inv(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneLine__homography_mat_inv(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneLine__homography_mat_inv(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneLine__homography_mat_inv(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__LaneLine__homography_mat_inv(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__LaneLine__homography_mat_inv(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__LaneLine__homography_mat_inv(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__LaneLine__homography_mat_inv(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneLine_message_member_array[20] = {
  {
    "lane_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, lane_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, lane_color),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pos_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, pos_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "curve_vehicle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::LaneLineCubicCurve>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, curve_vehicle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "curve_image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::LaneLineCubicCurve>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, curve_image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "curve_abs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::LaneLineCubicCurve>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, curve_abs),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pts_vehicle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Point3D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, pts_vehicle),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneLine__pts_vehicle,  // size() function pointer
    get_const_function__LaneLine__pts_vehicle,  // get_const(index) function pointer
    get_function__LaneLine__pts_vehicle,  // get(index) function pointer
    fetch_function__LaneLine__pts_vehicle,  // fetch(index, &value) function pointer
    assign_function__LaneLine__pts_vehicle,  // assign(index, value) function pointer
    resize_function__LaneLine__pts_vehicle  // resize(index) function pointer
  },
  {
    "pts_image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Point2D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, pts_image),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneLine__pts_image,  // size() function pointer
    get_const_function__LaneLine__pts_image,  // get_const(index) function pointer
    get_function__LaneLine__pts_image,  // get(index) function pointer
    fetch_function__LaneLine__pts_image,  // fetch(index, &value) function pointer
    assign_function__LaneLine__pts_image,  // assign(index, value) function pointer
    resize_function__LaneLine__pts_image  // resize(index) function pointer
  },
  {
    "pts_abs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Point3D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, pts_abs),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneLine__pts_abs,  // size() function pointer
    get_const_function__LaneLine__pts_abs,  // get_const(index) function pointer
    get_function__LaneLine__pts_abs,  // get(index) function pointer
    fetch_function__LaneLine__pts_abs,  // fetch(index, &value) function pointer
    assign_function__LaneLine__pts_abs,  // assign(index, value) function pointer
    resize_function__LaneLine__pts_abs  // resize(index) function pointer
  },
  {
    "image_end_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::EndPoints>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, image_end_point),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pts_key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Point2D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, pts_key),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneLine__pts_key,  // size() function pointer
    get_const_function__LaneLine__pts_key,  // get_const(index) function pointer
    get_function__LaneLine__pts_key,  // get(index) function pointer
    fetch_function__LaneLine__pts_key,  // fetch(index, &value) function pointer
    assign_function__LaneLine__pts_key,  // assign(index, value) function pointer
    resize_function__LaneLine__pts_key  // resize(index) function pointer
  },
  {
    "hd_lane_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, hd_lane_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_quality",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, lane_quality),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fused_lane_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, fused_lane_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "homography_mat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, homography_mat),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneLine__homography_mat,  // size() function pointer
    get_const_function__LaneLine__homography_mat,  // get_const(index) function pointer
    get_function__LaneLine__homography_mat,  // get(index) function pointer
    fetch_function__LaneLine__homography_mat,  // fetch(index, &value) function pointer
    assign_function__LaneLine__homography_mat,  // assign(index, value) function pointer
    resize_function__LaneLine__homography_mat  // resize(index) function pointer
  },
  {
    "homography_mat_inv",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, homography_mat_inv),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneLine__homography_mat_inv,  // size() function pointer
    get_const_function__LaneLine__homography_mat_inv,  // get_const(index) function pointer
    get_function__LaneLine__homography_mat_inv,  // get(index) function pointer
    fetch_function__LaneLine__homography_mat_inv,  // fetch(index, &value) function pointer
    assign_function__LaneLine__homography_mat_inv,  // assign(index, value) function pointer
    resize_function__LaneLine__homography_mat_inv  // resize(index) function pointer
  },
  {
    "lane_coordinate_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, lane_coordinate_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "use_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, use_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "create_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::LaneLine, create_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneLine_message_members = {
  "ros2_interface::msg",  // message namespace
  "LaneLine",  // message name
  20,  // number of fields
  sizeof(ros2_interface::msg::LaneLine),
  LaneLine_message_member_array,  // message members
  LaneLine_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneLine_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneLine_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneLine_message_members,
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
get_message_type_support_handle<ros2_interface::msg::LaneLine>()
{
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::LaneLine_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_interface, msg, LaneLine)() {
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::LaneLine_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

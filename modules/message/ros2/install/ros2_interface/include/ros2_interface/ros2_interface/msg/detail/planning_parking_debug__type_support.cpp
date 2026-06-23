// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_interface:msg/PlanningParkingDebug.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_interface/msg/detail/planning_parking_debug__struct.hpp"
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

void PlanningParkingDebug_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_interface::msg::PlanningParkingDebug(_init);
}

void PlanningParkingDebug_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_interface::msg::PlanningParkingDebug *>(message_memory);
  typed_message->~PlanningParkingDebug();
}

size_t size_function__PlanningParkingDebug__vehicle_preiew_polygon(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Polygon2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningParkingDebug__vehicle_preiew_polygon(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Polygon2D> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningParkingDebug__vehicle_preiew_polygon(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Polygon2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningParkingDebug__vehicle_preiew_polygon(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Polygon2D *>(
    get_const_function__PlanningParkingDebug__vehicle_preiew_polygon(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Polygon2D *>(untyped_value);
  value = item;
}

void assign_function__PlanningParkingDebug__vehicle_preiew_polygon(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Polygon2D *>(
    get_function__PlanningParkingDebug__vehicle_preiew_polygon(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Polygon2D *>(untyped_value);
  item = value;
}

void resize_function__PlanningParkingDebug__vehicle_preiew_polygon(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Polygon2D> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningParkingDebug__obstacles_polygon(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Polygon2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningParkingDebug__obstacles_polygon(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Polygon2D> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningParkingDebug__obstacles_polygon(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Polygon2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningParkingDebug__obstacles_polygon(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Polygon2D *>(
    get_const_function__PlanningParkingDebug__obstacles_polygon(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Polygon2D *>(untyped_value);
  value = item;
}

void assign_function__PlanningParkingDebug__obstacles_polygon(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Polygon2D *>(
    get_function__PlanningParkingDebug__obstacles_polygon(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Polygon2D *>(untyped_value);
  item = value;
}

void resize_function__PlanningParkingDebug__obstacles_polygon(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Polygon2D> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningParkingDebug__path_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::PathPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningParkingDebug__path_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::PathPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningParkingDebug__path_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::PathPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningParkingDebug__path_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::PathPoint *>(
    get_const_function__PlanningParkingDebug__path_points(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::PathPoint *>(untyped_value);
  value = item;
}

void assign_function__PlanningParkingDebug__path_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::PathPoint *>(
    get_function__PlanningParkingDebug__path_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::PathPoint *>(untyped_value);
  item = value;
}

void resize_function__PlanningParkingDebug__path_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::PathPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningParkingDebug__obstacles_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Point2dList> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningParkingDebug__obstacles_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Point2dList> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningParkingDebug__obstacles_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Point2dList> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningParkingDebug__obstacles_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Point2dList *>(
    get_const_function__PlanningParkingDebug__obstacles_vec(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Point2dList *>(untyped_value);
  value = item;
}

void assign_function__PlanningParkingDebug__obstacles_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Point2dList *>(
    get_function__PlanningParkingDebug__obstacles_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Point2dList *>(untyped_value);
  item = value;
}

void resize_function__PlanningParkingDebug__obstacles_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Point2dList> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningParkingDebug__warm_start_traj(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningParkingDebug__warm_start_traj(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningParkingDebug__warm_start_traj(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningParkingDebug__warm_start_traj(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::TrajectoryPoint *>(
    get_const_function__PlanningParkingDebug__warm_start_traj(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::TrajectoryPoint *>(untyped_value);
  value = item;
}

void assign_function__PlanningParkingDebug__warm_start_traj(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::TrajectoryPoint *>(
    get_function__PlanningParkingDebug__warm_start_traj(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::TrajectoryPoint *>(untyped_value);
  item = value;
}

void resize_function__PlanningParkingDebug__warm_start_traj(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningParkingDebug__smoothed_traj_stage1(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningParkingDebug__smoothed_traj_stage1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningParkingDebug__smoothed_traj_stage1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningParkingDebug__smoothed_traj_stage1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::TrajectoryPoint *>(
    get_const_function__PlanningParkingDebug__smoothed_traj_stage1(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::TrajectoryPoint *>(untyped_value);
  value = item;
}

void assign_function__PlanningParkingDebug__smoothed_traj_stage1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::TrajectoryPoint *>(
    get_function__PlanningParkingDebug__smoothed_traj_stage1(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::TrajectoryPoint *>(untyped_value);
  item = value;
}

void resize_function__PlanningParkingDebug__smoothed_traj_stage1(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningParkingDebug__smoothed_traj_stage2(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningParkingDebug__smoothed_traj_stage2(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningParkingDebug__smoothed_traj_stage2(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningParkingDebug__smoothed_traj_stage2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::TrajectoryPoint *>(
    get_const_function__PlanningParkingDebug__smoothed_traj_stage2(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::TrajectoryPoint *>(untyped_value);
  value = item;
}

void assign_function__PlanningParkingDebug__smoothed_traj_stage2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::TrajectoryPoint *>(
    get_function__PlanningParkingDebug__smoothed_traj_stage2(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::TrajectoryPoint *>(untyped_value);
  item = value;
}

void resize_function__PlanningParkingDebug__smoothed_traj_stage2(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::TrajectoryPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningParkingDebug__trajectory_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_interface::msg::Trajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningParkingDebug__trajectory_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_interface::msg::Trajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningParkingDebug__trajectory_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_interface::msg::Trajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningParkingDebug__trajectory_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_interface::msg::Trajectory *>(
    get_const_function__PlanningParkingDebug__trajectory_array(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_interface::msg::Trajectory *>(untyped_value);
  value = item;
}

void assign_function__PlanningParkingDebug__trajectory_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_interface::msg::Trajectory *>(
    get_function__PlanningParkingDebug__trajectory_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_interface::msg::Trajectory *>(untyped_value);
  item = value;
}

void resize_function__PlanningParkingDebug__trajectory_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_interface::msg::Trajectory> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanningParkingDebug_message_member_array[35] = {
  {
    "vehicle_preiew_polygon",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Polygon2D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, vehicle_preiew_polygon),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningParkingDebug__vehicle_preiew_polygon,  // size() function pointer
    get_const_function__PlanningParkingDebug__vehicle_preiew_polygon,  // get_const(index) function pointer
    get_function__PlanningParkingDebug__vehicle_preiew_polygon,  // get(index) function pointer
    fetch_function__PlanningParkingDebug__vehicle_preiew_polygon,  // fetch(index, &value) function pointer
    assign_function__PlanningParkingDebug__vehicle_preiew_polygon,  // assign(index, value) function pointer
    resize_function__PlanningParkingDebug__vehicle_preiew_polygon  // resize(index) function pointer
  },
  {
    "obstacles_polygon",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Polygon2D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, obstacles_polygon),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningParkingDebug__obstacles_polygon,  // size() function pointer
    get_const_function__PlanningParkingDebug__obstacles_polygon,  // get_const(index) function pointer
    get_function__PlanningParkingDebug__obstacles_polygon,  // get(index) function pointer
    fetch_function__PlanningParkingDebug__obstacles_polygon,  // fetch(index, &value) function pointer
    assign_function__PlanningParkingDebug__obstacles_polygon,  // assign(index, value) function pointer
    resize_function__PlanningParkingDebug__obstacles_polygon  // resize(index) function pointer
  },
  {
    "path_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::PathPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, path_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningParkingDebug__path_points,  // size() function pointer
    get_const_function__PlanningParkingDebug__path_points,  // get_const(index) function pointer
    get_function__PlanningParkingDebug__path_points,  // get(index) function pointer
    fetch_function__PlanningParkingDebug__path_points,  // fetch(index, &value) function pointer
    assign_function__PlanningParkingDebug__path_points,  // assign(index, value) function pointer
    resize_function__PlanningParkingDebug__path_points  // resize(index) function pointer
  },
  {
    "lat_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, lat_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lon_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, lon_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yaw_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, yaw_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "obstacles_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Point2dList>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, obstacles_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningParkingDebug__obstacles_vec,  // size() function pointer
    get_const_function__PlanningParkingDebug__obstacles_vec,  // get_const(index) function pointer
    get_function__PlanningParkingDebug__obstacles_vec,  // get(index) function pointer
    fetch_function__PlanningParkingDebug__obstacles_vec,  // fetch(index, &value) function pointer
    assign_function__PlanningParkingDebug__obstacles_vec,  // assign(index, value) function pointer
    resize_function__PlanningParkingDebug__obstacles_vec  // resize(index) function pointer
  },
  {
    "warm_start_traj",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::TrajectoryPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, warm_start_traj),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningParkingDebug__warm_start_traj,  // size() function pointer
    get_const_function__PlanningParkingDebug__warm_start_traj,  // get_const(index) function pointer
    get_function__PlanningParkingDebug__warm_start_traj,  // get(index) function pointer
    fetch_function__PlanningParkingDebug__warm_start_traj,  // fetch(index, &value) function pointer
    assign_function__PlanningParkingDebug__warm_start_traj,  // assign(index, value) function pointer
    resize_function__PlanningParkingDebug__warm_start_traj  // resize(index) function pointer
  },
  {
    "smoothed_traj_stage1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::TrajectoryPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, smoothed_traj_stage1),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningParkingDebug__smoothed_traj_stage1,  // size() function pointer
    get_const_function__PlanningParkingDebug__smoothed_traj_stage1,  // get_const(index) function pointer
    get_function__PlanningParkingDebug__smoothed_traj_stage1,  // get(index) function pointer
    fetch_function__PlanningParkingDebug__smoothed_traj_stage1,  // fetch(index, &value) function pointer
    assign_function__PlanningParkingDebug__smoothed_traj_stage1,  // assign(index, value) function pointer
    resize_function__PlanningParkingDebug__smoothed_traj_stage1  // resize(index) function pointer
  },
  {
    "smoothed_traj_stage2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::TrajectoryPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, smoothed_traj_stage2),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningParkingDebug__smoothed_traj_stage2,  // size() function pointer
    get_const_function__PlanningParkingDebug__smoothed_traj_stage2,  // get_const(index) function pointer
    get_function__PlanningParkingDebug__smoothed_traj_stage2,  // get(index) function pointer
    fetch_function__PlanningParkingDebug__smoothed_traj_stage2,  // fetch(index, &value) function pointer
    assign_function__PlanningParkingDebug__smoothed_traj_stage2,  // assign(index, value) function pointer
    resize_function__PlanningParkingDebug__smoothed_traj_stage2  // resize(index) function pointer
  },
  {
    "reference_line",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Trajectory>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, reference_line),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Trajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, trajectory_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningParkingDebug__trajectory_array,  // size() function pointer
    get_const_function__PlanningParkingDebug__trajectory_array,  // get_const(index) function pointer
    get_function__PlanningParkingDebug__trajectory_array,  // get(index) function pointer
    fetch_function__PlanningParkingDebug__trajectory_array,  // fetch(index, &value) function pointer
    assign_function__PlanningParkingDebug__trajectory_array,  // assign(index, value) function pointer
    resize_function__PlanningParkingDebug__trajectory_array  // resize(index) function pointer
  },
  {
    "optimal_coarse_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Trajectory>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, optimal_coarse_trajectory),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "optimal_smooth_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_interface::msg::Trajectory>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, optimal_smooth_trajectory),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hybrid_a_star_map_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, hybrid_a_star_map_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hybrid_a_star_heuristic_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, hybrid_a_star_heuristic_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hybrid_a_star_rs_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, hybrid_a_star_rs_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hybrid_a_star_total_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, hybrid_a_star_total_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ias_collision_avoidance_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, ias_collision_avoidance_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ias_path_smooth_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, ias_path_smooth_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ias_speed_smooth_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, ias_speed_smooth_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ias_total_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, ias_total_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "samping_trajectory_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, samping_trajectory_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_replan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, is_replan),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "replan_reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, replan_reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "replan_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, replan_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "replan_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, replan_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "optimizer_thread_counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, optimizer_thread_counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "replan_by_context_update_counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, replan_by_context_update_counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "replan_by_large_error_counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, replan_by_large_error_counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parking_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, parking_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "moves_counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, moves_counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "remain_distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, remain_distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distance_to_leader_obj",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, distance_to_leader_obj),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_interface::msg::PlanningParkingDebug, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanningParkingDebug_message_members = {
  "ros2_interface::msg",  // message namespace
  "PlanningParkingDebug",  // message name
  35,  // number of fields
  sizeof(ros2_interface::msg::PlanningParkingDebug),
  PlanningParkingDebug_message_member_array,  // message members
  PlanningParkingDebug_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanningParkingDebug_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanningParkingDebug_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanningParkingDebug_message_members,
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
get_message_type_support_handle<ros2_interface::msg::PlanningParkingDebug>()
{
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::PlanningParkingDebug_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_interface, msg, PlanningParkingDebug)() {
  return &::ros2_interface::msg::rosidl_typesupport_introspection_cpp::PlanningParkingDebug_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

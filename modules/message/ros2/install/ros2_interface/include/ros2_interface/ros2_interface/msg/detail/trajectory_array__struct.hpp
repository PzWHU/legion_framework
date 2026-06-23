// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_interface:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_HPP_
#define ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'spline_s'
// Member 'qp_smooth'
#include "ros2_interface/msg/detail/path__struct.hpp"
// Member 'trajectory_list'
#include "ros2_interface/msg/detail/trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_interface__msg__TrajectoryArray __attribute__((deprecated))
#else
# define DEPRECATED__ros2_interface__msg__TrajectoryArray __declspec(deprecated)
#endif

namespace ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryArray_
{
  using Type = TrajectoryArray_<ContainerAllocator>;

  explicit TrajectoryArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TrajectoryArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _spline_s_type =
    std::vector<ros2_interface::msg::Path_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Path_<ContainerAllocator>>>;
  _spline_s_type spline_s;
  using _qp_smooth_type =
    std::vector<ros2_interface::msg::Path_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Path_<ContainerAllocator>>>;
  _qp_smooth_type qp_smooth;
  using _trajectory_list_type =
    std::vector<ros2_interface::msg::Trajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Trajectory_<ContainerAllocator>>>;
  _trajectory_list_type trajectory_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__spline_s(
    const std::vector<ros2_interface::msg::Path_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Path_<ContainerAllocator>>> & _arg)
  {
    this->spline_s = _arg;
    return *this;
  }
  Type & set__qp_smooth(
    const std::vector<ros2_interface::msg::Path_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Path_<ContainerAllocator>>> & _arg)
  {
    this->qp_smooth = _arg;
    return *this;
  }
  Type & set__trajectory_list(
    const std::vector<ros2_interface::msg::Trajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_interface::msg::Trajectory_<ContainerAllocator>>> & _arg)
  {
    this->trajectory_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_interface::msg::TrajectoryArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_interface::msg::TrajectoryArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_interface::msg::TrajectoryArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_interface::msg::TrajectoryArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrajectoryArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrajectoryArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_interface::msg::TrajectoryArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_interface::msg::TrajectoryArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_interface::msg::TrajectoryArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_interface::msg::TrajectoryArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_interface__msg__TrajectoryArray
    std::shared_ptr<ros2_interface::msg::TrajectoryArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_interface__msg__TrajectoryArray
    std::shared_ptr<ros2_interface::msg::TrajectoryArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->spline_s != other.spline_s) {
      return false;
    }
    if (this->qp_smooth != other.qp_smooth) {
      return false;
    }
    if (this->trajectory_list != other.trajectory_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryArray_

// alias to use template instance with default allocator
using TrajectoryArray =
  ros2_interface::msg::TrajectoryArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_interface

#endif  // ROS2_INTERFACE__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_HPP_

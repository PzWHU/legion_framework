// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros2_interface:msg/LimitSpeedInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__FUNCTIONS_H_
#define ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros2_interface/msg/rosidl_generator_c__visibility_control.h"

#include "ros2_interface/msg/detail/limit_speed_info__struct.h"

/// Initialize msg/LimitSpeedInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_interface__msg__LimitSpeedInfo
 * )) before or use
 * ros2_interface__msg__LimitSpeedInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
bool
ros2_interface__msg__LimitSpeedInfo__init(ros2_interface__msg__LimitSpeedInfo * msg);

/// Finalize msg/LimitSpeedInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
void
ros2_interface__msg__LimitSpeedInfo__fini(ros2_interface__msg__LimitSpeedInfo * msg);

/// Create msg/LimitSpeedInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_interface__msg__LimitSpeedInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
ros2_interface__msg__LimitSpeedInfo *
ros2_interface__msg__LimitSpeedInfo__create();

/// Destroy msg/LimitSpeedInfo message.
/**
 * It calls
 * ros2_interface__msg__LimitSpeedInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
void
ros2_interface__msg__LimitSpeedInfo__destroy(ros2_interface__msg__LimitSpeedInfo * msg);

/// Check for msg/LimitSpeedInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
bool
ros2_interface__msg__LimitSpeedInfo__are_equal(const ros2_interface__msg__LimitSpeedInfo * lhs, const ros2_interface__msg__LimitSpeedInfo * rhs);

/// Copy a msg/LimitSpeedInfo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
bool
ros2_interface__msg__LimitSpeedInfo__copy(
  const ros2_interface__msg__LimitSpeedInfo * input,
  ros2_interface__msg__LimitSpeedInfo * output);

/// Initialize array of msg/LimitSpeedInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_interface__msg__LimitSpeedInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
bool
ros2_interface__msg__LimitSpeedInfo__Sequence__init(ros2_interface__msg__LimitSpeedInfo__Sequence * array, size_t size);

/// Finalize array of msg/LimitSpeedInfo messages.
/**
 * It calls
 * ros2_interface__msg__LimitSpeedInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
void
ros2_interface__msg__LimitSpeedInfo__Sequence__fini(ros2_interface__msg__LimitSpeedInfo__Sequence * array);

/// Create array of msg/LimitSpeedInfo messages.
/**
 * It allocates the memory for the array and calls
 * ros2_interface__msg__LimitSpeedInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
ros2_interface__msg__LimitSpeedInfo__Sequence *
ros2_interface__msg__LimitSpeedInfo__Sequence__create(size_t size);

/// Destroy array of msg/LimitSpeedInfo messages.
/**
 * It calls
 * ros2_interface__msg__LimitSpeedInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
void
ros2_interface__msg__LimitSpeedInfo__Sequence__destroy(ros2_interface__msg__LimitSpeedInfo__Sequence * array);

/// Check for msg/LimitSpeedInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
bool
ros2_interface__msg__LimitSpeedInfo__Sequence__are_equal(const ros2_interface__msg__LimitSpeedInfo__Sequence * lhs, const ros2_interface__msg__LimitSpeedInfo__Sequence * rhs);

/// Copy an array of msg/LimitSpeedInfo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
bool
ros2_interface__msg__LimitSpeedInfo__Sequence__copy(
  const ros2_interface__msg__LimitSpeedInfo__Sequence * input,
  ros2_interface__msg__LimitSpeedInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__LIMIT_SPEED_INFO__FUNCTIONS_H_

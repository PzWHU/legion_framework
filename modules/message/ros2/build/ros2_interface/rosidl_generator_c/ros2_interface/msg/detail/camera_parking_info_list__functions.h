// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros2_interface:msg/CameraParkingInfoList.idl
// generated code does not contain a copyright notice

#ifndef ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO_LIST__FUNCTIONS_H_
#define ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros2_interface/msg/rosidl_generator_c__visibility_control.h"

#include "ros2_interface/msg/detail/camera_parking_info_list__struct.h"

/// Initialize msg/CameraParkingInfoList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_interface__msg__CameraParkingInfoList
 * )) before or use
 * ros2_interface__msg__CameraParkingInfoList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
bool
ros2_interface__msg__CameraParkingInfoList__init(ros2_interface__msg__CameraParkingInfoList * msg);

/// Finalize msg/CameraParkingInfoList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
void
ros2_interface__msg__CameraParkingInfoList__fini(ros2_interface__msg__CameraParkingInfoList * msg);

/// Create msg/CameraParkingInfoList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_interface__msg__CameraParkingInfoList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
ros2_interface__msg__CameraParkingInfoList *
ros2_interface__msg__CameraParkingInfoList__create();

/// Destroy msg/CameraParkingInfoList message.
/**
 * It calls
 * ros2_interface__msg__CameraParkingInfoList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
void
ros2_interface__msg__CameraParkingInfoList__destroy(ros2_interface__msg__CameraParkingInfoList * msg);

/// Check for msg/CameraParkingInfoList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
bool
ros2_interface__msg__CameraParkingInfoList__are_equal(const ros2_interface__msg__CameraParkingInfoList * lhs, const ros2_interface__msg__CameraParkingInfoList * rhs);

/// Copy a msg/CameraParkingInfoList message.
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
ros2_interface__msg__CameraParkingInfoList__copy(
  const ros2_interface__msg__CameraParkingInfoList * input,
  ros2_interface__msg__CameraParkingInfoList * output);

/// Initialize array of msg/CameraParkingInfoList messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_interface__msg__CameraParkingInfoList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
bool
ros2_interface__msg__CameraParkingInfoList__Sequence__init(ros2_interface__msg__CameraParkingInfoList__Sequence * array, size_t size);

/// Finalize array of msg/CameraParkingInfoList messages.
/**
 * It calls
 * ros2_interface__msg__CameraParkingInfoList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
void
ros2_interface__msg__CameraParkingInfoList__Sequence__fini(ros2_interface__msg__CameraParkingInfoList__Sequence * array);

/// Create array of msg/CameraParkingInfoList messages.
/**
 * It allocates the memory for the array and calls
 * ros2_interface__msg__CameraParkingInfoList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
ros2_interface__msg__CameraParkingInfoList__Sequence *
ros2_interface__msg__CameraParkingInfoList__Sequence__create(size_t size);

/// Destroy array of msg/CameraParkingInfoList messages.
/**
 * It calls
 * ros2_interface__msg__CameraParkingInfoList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
void
ros2_interface__msg__CameraParkingInfoList__Sequence__destroy(ros2_interface__msg__CameraParkingInfoList__Sequence * array);

/// Check for msg/CameraParkingInfoList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_interface
bool
ros2_interface__msg__CameraParkingInfoList__Sequence__are_equal(const ros2_interface__msg__CameraParkingInfoList__Sequence * lhs, const ros2_interface__msg__CameraParkingInfoList__Sequence * rhs);

/// Copy an array of msg/CameraParkingInfoList messages.
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
ros2_interface__msg__CameraParkingInfoList__Sequence__copy(
  const ros2_interface__msg__CameraParkingInfoList__Sequence * input,
  ros2_interface__msg__CameraParkingInfoList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS2_INTERFACE__MSG__DETAIL__CAMERA_PARKING_INFO_LIST__FUNCTIONS_H_

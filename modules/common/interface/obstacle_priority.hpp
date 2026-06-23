/**
 * @file    obstacle_priority.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <iostream>
#include <stdint.h>

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class ObstaclePriority {
 public:
  ObstaclePriority() {
    priority_ = legion::interface::ObstaclePriority::Priority::CAUTION;
  }
  ~ObstaclePriority() = default;

  enum Priority {
    CAUTION = 1,
    NORMAL = 2,
    IGNORE = 3,
  };

  inline void set_priority(
      const legion::interface::ObstaclePriority::Priority& priority) {
    priority_ = priority;
    priority_ptr_ = &priority_;
  }

  inline const legion::interface::ObstaclePriority::Priority& priority() const {
    return priority_;
  }

  inline legion::interface::ObstaclePriority::Priority* mutable_priority() {
    return &priority_;
  }

  inline bool has_priority() { return (priority_ptr_ != nullptr); }

  void operator=(const ObstaclePriority& obstacle_priority) {
    CopyFrom(obstacle_priority);
  }

  void CopyFrom(const ObstaclePriority& obstacle_priority) {
    priority_ = obstacle_priority.priority();
  }

 protected:
  // CAUTION = 1; NORMAL = 2; IGNORE = 3;
  legion::interface::ObstaclePriority::Priority priority_;
  legion::interface::ObstaclePriority::Priority* priority_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion

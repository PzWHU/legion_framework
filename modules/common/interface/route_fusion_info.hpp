/**
 * @file    route_fusion_info.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <string>
#include <iostream>
#include <stdint.h>

#include "modules/common/enum/enum.h"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class RouteFusionInfo {
 public:
  RouteFusionInfo() {
    fusion_flag_ = legion::common::IsValid::INVALID;
    fusion_reason_.clear();
  }
  ~RouteFusionInfo() = default;

  inline void set_fusion_flag(const legion::common::IsValid& fusion_flag) {
    fusion_flag_ = fusion_flag;
    fusion_flag_ptr_ = &fusion_flag_;
  }

  inline const legion::common::IsValid& fusion_flag() const {
    return fusion_flag_;
  }

  inline legion::common::IsValid* mutable_fusion_flag() {
    return &fusion_flag_;
  }

  inline bool has_fusion_flag() { return (fusion_flag_ptr_ != nullptr); }

  inline void set_fusion_reason(const std::string& fusion_reason) {
    fusion_reason_ = fusion_reason;
    fusion_reason_ptr_ = &fusion_reason_;
  }

  inline const std::string& fusion_reason() const { return fusion_reason_; }

  inline std::string* mutable_fusion_reason() { return &fusion_reason_; }

  inline bool has_fusion_reason() { return (fusion_reason_ptr_ != nullptr); }

  void operator=(const RouteFusionInfo& route_fusion_info) {
    CopyFrom(route_fusion_info);
  }

  void CopyFrom(const RouteFusionInfo& route_fusion_info) {
    fusion_flag_ = route_fusion_info.fusion_flag();
    fusion_reason_ = route_fusion_info.fusion_reason();
  }

 protected:
  //是否有效标志位
  legion::common::IsValid fusion_flag_;
  legion::common::IsValid* fusion_flag_ptr_ = nullptr;
  //融合原因
  std::string fusion_reason_;
  std::string* fusion_reason_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion

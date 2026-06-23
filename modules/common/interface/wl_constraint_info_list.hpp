/**
 * @file    wl_constraint_info_list.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <mutex>
#include <vector>
#include <memory>
#include <iostream>
#include <stdint.h>

#include "modules/common/enum/enum.h"
#include "modules/common/interface/header.hpp"
#include "modules/common/interface/wl_constraint_info.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class WLConstraintInfoList {
 public:
  WLConstraintInfoList() {
    wl_constraint_info_mutex_ = std::make_shared<std::mutex>();

    clear_wl_constraint_info();
    error_code_ = legion::common::ErrorCode::LOCALIZATION_ERROR;
    is_valid_ = false;
  }
  ~WLConstraintInfoList() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_wl_constraint_info(
      std::vector<legion::interface::WLConstraintInfo>* wl_constraint_info) {
    std::lock_guard<std::mutex> lock(*wl_constraint_info_mutex_);
    wl_constraint_info_.assign(wl_constraint_info->begin(),
                               wl_constraint_info->end());
  }

  inline void set_wl_constraint_info(
      const std::vector<legion::interface::WLConstraintInfo>&
          wl_constraint_info) {
    std::lock_guard<std::mutex> lock(*wl_constraint_info_mutex_);
    wl_constraint_info_ = wl_constraint_info;
  }

  inline void set_wl_constraint_info(
      const uint32_t index,
      legion::interface::WLConstraintInfo& wl_constraint_info) {
    std::lock_guard<std::mutex> lock(*wl_constraint_info_mutex_);
    wl_constraint_info_[index] = wl_constraint_info;
  }

  inline void add_wl_constraint_info(
      const legion::interface::WLConstraintInfo& wl_constraint_info) {
    std::lock_guard<std::mutex> lock(*wl_constraint_info_mutex_);
    wl_constraint_info_.emplace_back(wl_constraint_info);
  }

  inline const legion::interface::WLConstraintInfo& wl_constraint_info(
      uint32_t index) const {
    std::lock_guard<std::mutex> lock(*wl_constraint_info_mutex_);
    return wl_constraint_info_[index];
  }

  inline std::vector<legion::interface::WLConstraintInfo>*
  mutable_wl_constraint_info() {
    std::lock_guard<std::mutex> lock(*wl_constraint_info_mutex_);
    return &wl_constraint_info_;
  }

  inline void wl_constraint_info(
      std::vector<legion::interface::WLConstraintInfo>& wl_constraint_info)
      const {
    std::lock_guard<std::mutex> lock(*wl_constraint_info_mutex_);
    wl_constraint_info.assign(wl_constraint_info_.begin(),
                              wl_constraint_info_.end());
  }

  inline const std::vector<legion::interface::WLConstraintInfo>&
  wl_constraint_info() const {
    std::lock_guard<std::mutex> lock(*wl_constraint_info_mutex_);
    return wl_constraint_info_;
  }

  inline uint32_t wl_constraint_info_size() const {
    std::lock_guard<std::mutex> lock(*wl_constraint_info_mutex_);
    return wl_constraint_info_.size();
  }

  inline void clear_wl_constraint_info() {
    std::lock_guard<std::mutex> lock(*wl_constraint_info_mutex_);
    wl_constraint_info_.clear();
    wl_constraint_info_.shrink_to_fit();
  }

  inline bool has_wl_constraint_info() {
    return (wl_constraint_info_size() != 0);
  }

  inline void set_error_code(const legion::common::ErrorCode& error_code) {
    error_code_ = error_code;
    error_code_ptr_ = &error_code_;
  }

  inline const legion::common::ErrorCode& error_code() const {
    return error_code_;
  }

  inline legion::common::ErrorCode* mutable_error_code() {
    return &error_code_;
  }

  inline bool has_error_code() { return (error_code_ptr_ != nullptr); }

  inline void set_is_valid(const bool& is_valid) {
    is_valid_ = is_valid;
    is_valid_ptr_ = &is_valid_;
  }

  inline const bool& is_valid() const { return is_valid_; }

  inline bool* mutable_is_valid() { return &is_valid_; }

  inline bool has_is_valid() { return (is_valid_ptr_ != nullptr); }

  void operator=(const WLConstraintInfoList& wl_constraint_info_list) {
    CopyFrom(wl_constraint_info_list);
  }

  void CopyFrom(const WLConstraintInfoList& wl_constraint_info_list) {
    header_ = wl_constraint_info_list.header();
    wl_constraint_info_ = wl_constraint_info_list.wl_constraint_info();
    error_code_ = wl_constraint_info_list.error_code();
    is_valid_ = wl_constraint_info_list.is_valid();
  }

 protected:
  std::shared_ptr<std::mutex> wl_constraint_info_mutex_;
  //消息头
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //检测出的wheel_location所需约束信息队列
  std::vector<legion::interface::WLConstraintInfo> wl_constraint_info_;
  //错误码（default = OK）
  legion::common::ErrorCode error_code_;
  legion::common::ErrorCode* error_code_ptr_ = nullptr;
  //障碍物数据是否合法
  bool is_valid_;
  bool* is_valid_ptr_ = nullptr;
};
}  // namespace interface
}  // namespace legion

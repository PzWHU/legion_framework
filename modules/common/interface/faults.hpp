/**
 * @file    faults.hpp
 * @author  legion
 * @date    2026-03-23
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include <mutex>
#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <stdint.h>

#include "modules/common/enum/enum.h"
#include "modules/common/interface/fault.hpp"
#include "modules/common/interface/header.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class Faults {
 public:
  Faults() {
    faults_mutex_ = std::make_shared<std::mutex>();

    id_ = legion::common::ModulesID::DRIVERS_CANBUS;
    version_.clear();
    clear_faults();
  }
  ~Faults() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_id(const legion::common::ModulesID& id) {
    id_ = id;
    id_ptr_ = &id_;
  }

  inline const legion::common::ModulesID& id() const { return id_; }

  inline legion::common::ModulesID* mutable_id() { return &id_; }

  inline bool has_id() { return (id_ptr_ != nullptr); }

  inline void set_version(const std::string& version) {
    version_ = version;
    version_ptr_ = &version_;
  }

  inline const std::string& version() const { return version_; }

  inline std::string* mutable_version() { return &version_; }

  inline bool has_version() { return (version_ptr_ != nullptr); }

  inline void set_faults(std::vector<legion::interface::Fault>* faults) {
    std::lock_guard<std::mutex> lock(*faults_mutex_);
    faults_.assign(faults->begin(), faults->end());
  }

  inline void set_faults(const std::vector<legion::interface::Fault>& faults) {
    std::lock_guard<std::mutex> lock(*faults_mutex_);
    faults_ = faults;
  }

  inline void set_faults(const uint32_t index,
                         legion::interface::Fault& faults) {
    std::lock_guard<std::mutex> lock(*faults_mutex_);
    faults_[index] = faults;
  }

  inline void add_faults(const legion::interface::Fault& faults) {
    std::lock_guard<std::mutex> lock(*faults_mutex_);
    faults_.emplace_back(faults);
  }

  inline const legion::interface::Fault& faults(uint32_t index) const {
    std::lock_guard<std::mutex> lock(*faults_mutex_);
    return faults_[index];
  }

  inline std::vector<legion::interface::Fault>* mutable_faults() {
    std::lock_guard<std::mutex> lock(*faults_mutex_);
    return &faults_;
  }

  inline void faults(std::vector<legion::interface::Fault>& faults) const {
    std::lock_guard<std::mutex> lock(*faults_mutex_);
    faults.assign(faults_.begin(), faults_.end());
  }

  inline const std::vector<legion::interface::Fault>& faults() const {
    std::lock_guard<std::mutex> lock(*faults_mutex_);
    return faults_;
  }

  inline uint32_t faults_size() const {
    std::lock_guard<std::mutex> lock(*faults_mutex_);
    return faults_.size();
  }

  inline void clear_faults() {
    std::lock_guard<std::mutex> lock(*faults_mutex_);
    faults_.clear();
    faults_.shrink_to_fit();
  }

  inline bool has_faults() { return (faults_size() != 0); }

  void operator=(const Faults& faults) { CopyFrom(faults); }

  void CopyFrom(const Faults& faults) {
    header_ = faults.header();
    id_ = faults.id();
    version_ = faults.version();
    faults_ = faults.faults();
  }

 protected:
  std::shared_ptr<std::mutex> faults_mutex_;
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  // obu的id身份
  legion::common::ModulesID id_;
  legion::common::ModulesID* id_ptr_ = nullptr;
  //版本号
  std::string version_;
  std::string* version_ptr_ = nullptr;
  std::vector<legion::interface::Fault> faults_;
};
}  // namespace interface
}  // namespace legion

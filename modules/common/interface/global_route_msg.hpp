/**
 * @file    global_route_msg.hpp
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

#include "modules/common/interface/header.hpp"
#include "modules/common/interface/lanelet_info.hpp"

/**
 * @namespace legion::interface
 * @brief legion::interface
 */
namespace legion {
namespace interface {
class GlobalRouteMsg {
 public:
  GlobalRouteMsg() {
    route_mutex_ = std::make_shared<std::mutex>();
    cur_slice_mutex_ = std::make_shared<std::mutex>();

    clear_route();
    total_mileage_ = 0.0;
    cur_mileage_ = 0.0;
    clear_cur_slice();
  }
  ~GlobalRouteMsg() = default;

  inline void set_header(const legion::interface::Header& header) {
    header_ = header;
    header_ptr_ = &header_;
  }

  inline const legion::interface::Header& header() const { return header_; }

  inline legion::interface::Header* mutable_header() { return &header_; }

  inline bool has_header() { return (header_ptr_ != nullptr); }

  inline void set_route(std::vector<legion::interface::LaneletInfo>* route) {
    std::lock_guard<std::mutex> lock(*route_mutex_);
    route_.assign(route->begin(), route->end());
  }

  inline void set_route(
      const std::vector<legion::interface::LaneletInfo>& route) {
    std::lock_guard<std::mutex> lock(*route_mutex_);
    route_ = route;
  }

  inline void set_route(const uint32_t index,
                        legion::interface::LaneletInfo& route) {
    std::lock_guard<std::mutex> lock(*route_mutex_);
    route_[index] = route;
  }

  inline void add_route(const legion::interface::LaneletInfo& route) {
    std::lock_guard<std::mutex> lock(*route_mutex_);
    route_.emplace_back(route);
  }

  inline const legion::interface::LaneletInfo& route(uint32_t index) const {
    std::lock_guard<std::mutex> lock(*route_mutex_);
    return route_[index];
  }

  inline std::vector<legion::interface::LaneletInfo>* mutable_route() {
    std::lock_guard<std::mutex> lock(*route_mutex_);
    return &route_;
  }

  inline void route(std::vector<legion::interface::LaneletInfo>& route) const {
    std::lock_guard<std::mutex> lock(*route_mutex_);
    route.assign(route_.begin(), route_.end());
  }

  inline const std::vector<legion::interface::LaneletInfo>& route() const {
    std::lock_guard<std::mutex> lock(*route_mutex_);
    return route_;
  }

  inline uint32_t route_size() const {
    std::lock_guard<std::mutex> lock(*route_mutex_);
    return route_.size();
  }

  inline void clear_route() {
    std::lock_guard<std::mutex> lock(*route_mutex_);
    route_.clear();
    route_.shrink_to_fit();
  }

  inline bool has_route() { return (route_size() != 0); }

  inline void set_current_lanelet(
      const legion::interface::LaneletInfo& current_lanelet) {
    current_lanelet_ = current_lanelet;
    current_lanelet_ptr_ = &current_lanelet_;
  }

  inline const legion::interface::LaneletInfo& current_lanelet() const {
    return current_lanelet_;
  }

  inline legion::interface::LaneletInfo* mutable_current_lanelet() {
    return &current_lanelet_;
  }

  inline bool has_current_lanelet() {
    return (current_lanelet_ptr_ != nullptr);
  }

  inline void set_total_mileage(const double& total_mileage) {
    total_mileage_ = total_mileage;
    total_mileage_ptr_ = &total_mileage_;
  }

  inline const double& total_mileage() const { return total_mileage_; }

  inline double* mutable_total_mileage() { return &total_mileage_; }

  inline bool has_total_mileage() { return (total_mileage_ptr_ != nullptr); }

  inline void set_cur_mileage(const double& cur_mileage) {
    cur_mileage_ = cur_mileage;
    cur_mileage_ptr_ = &cur_mileage_;
  }

  inline const double& cur_mileage() const { return cur_mileage_; }

  inline double* mutable_cur_mileage() { return &cur_mileage_; }

  inline bool has_cur_mileage() { return (cur_mileage_ptr_ != nullptr); }

  inline void set_cur_slice(
      std::vector<legion::interface::LaneletInfo>* cur_slice) {
    std::lock_guard<std::mutex> lock(*cur_slice_mutex_);
    cur_slice_.assign(cur_slice->begin(), cur_slice->end());
  }

  inline void set_cur_slice(
      const std::vector<legion::interface::LaneletInfo>& cur_slice) {
    std::lock_guard<std::mutex> lock(*cur_slice_mutex_);
    cur_slice_ = cur_slice;
  }

  inline void set_cur_slice(const uint32_t index,
                            legion::interface::LaneletInfo& cur_slice) {
    std::lock_guard<std::mutex> lock(*cur_slice_mutex_);
    cur_slice_[index] = cur_slice;
  }

  inline void add_cur_slice(const legion::interface::LaneletInfo& cur_slice) {
    std::lock_guard<std::mutex> lock(*cur_slice_mutex_);
    cur_slice_.emplace_back(cur_slice);
  }

  inline const legion::interface::LaneletInfo& cur_slice(uint32_t index) const {
    std::lock_guard<std::mutex> lock(*cur_slice_mutex_);
    return cur_slice_[index];
  }

  inline std::vector<legion::interface::LaneletInfo>* mutable_cur_slice() {
    std::lock_guard<std::mutex> lock(*cur_slice_mutex_);
    return &cur_slice_;
  }

  inline void cur_slice(
      std::vector<legion::interface::LaneletInfo>& cur_slice) const {
    std::lock_guard<std::mutex> lock(*cur_slice_mutex_);
    cur_slice.assign(cur_slice_.begin(), cur_slice_.end());
  }

  inline const std::vector<legion::interface::LaneletInfo>& cur_slice() const {
    std::lock_guard<std::mutex> lock(*cur_slice_mutex_);
    return cur_slice_;
  }

  inline uint32_t cur_slice_size() const {
    std::lock_guard<std::mutex> lock(*cur_slice_mutex_);
    return cur_slice_.size();
  }

  inline void clear_cur_slice() {
    std::lock_guard<std::mutex> lock(*cur_slice_mutex_);
    cur_slice_.clear();
    cur_slice_.shrink_to_fit();
  }

  inline bool has_cur_slice() { return (cur_slice_size() != 0); }

  void operator=(const GlobalRouteMsg& global_route_msg) {
    CopyFrom(global_route_msg);
  }

  void CopyFrom(const GlobalRouteMsg& global_route_msg) {
    header_ = global_route_msg.header();
    route_ = global_route_msg.route();
    current_lanelet_ = global_route_msg.current_lanelet();
    total_mileage_ = global_route_msg.total_mileage();
    cur_mileage_ = global_route_msg.cur_mileage();
    cur_slice_ = global_route_msg.cur_slice();
  }

 protected:
  std::shared_ptr<std::mutex> route_mutex_;
  std::shared_ptr<std::mutex> cur_slice_mutex_;
  //消息头
  legion::interface::Header header_;
  legion::interface::Header* header_ptr_ = nullptr;
  //一次导航的全程道路集合，从起点到终点排序
  std::vector<legion::interface::LaneletInfo> route_;
  //当前所在车道的信息
  legion::interface::LaneletInfo current_lanelet_;
  legion::interface::LaneletInfo* current_lanelet_ptr_ = nullptr;
  //总里程
  double total_mileage_;
  double* total_mileage_ptr_ = nullptr;
  //当前里程
  double cur_mileage_;
  double* cur_mileage_ptr_ = nullptr;
  //当前地图切片,用来绘制局部地图
  std::vector<legion::interface::LaneletInfo> cur_slice_;
};
}  // namespace interface
}  // namespace legion

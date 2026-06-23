/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/common/configs/vehicle_config_helper.h"

#include <algorithm>
#include <cmath>
#include <fstream>

#include "modules/common/configs/config_gflags.h"
#include "modules/common/file/file.h"
#include "modules/common/logging/logging.h"

namespace legion {
namespace common {
using namespace legion::common;

VehicleParam VehicleConfigHelper::vehicle_config_;
bool VehicleConfigHelper::is_init_ = false;

VehicleConfigHelper::VehicleConfigHelper() {}

void VehicleConfigHelper::Init() { Init(FLAGS_vehicle_config_path); }

void VehicleConfigHelper::Init(const std::string &config_file) {
  VehicleParam vehicle_param;

  if (GetProtoFromJsonFile(config_file, &vehicle_param) == false) {
    AERROR << "GetProtoFrom vehicle_param_file failed.";
    return;
  }
  Init(vehicle_param);
}

void VehicleConfigHelper::Init(const VehicleParam &vehicle_params) {
  vehicle_config_ = vehicle_params;
  is_init_ = true;
}

const VehicleParam &VehicleConfigHelper::GetConfig() {
  if (!is_init_) {
    Init();
  }
  return vehicle_config_;
}

double VehicleConfigHelper::MinSafeTurnRadius() {
  const auto &param = vehicle_config_;
  double lat_edge_to_center = std::max(param.width() / 2, param.width() / 2);
  double lon_edge_to_center =
      std::max(param.front_edge_to_center(), param.back_edge_to_center());
  return std::sqrt((lat_edge_to_center + param.min_turning_radius()) *
                       (lat_edge_to_center + param.min_turning_radius()) +
                   lon_edge_to_center * lon_edge_to_center);
}

Box2d VehicleConfigHelper::GetBoundingBox(
    const legion::interface::PathPoint &path_point) {
  const auto &vehicle_param = vehicle_config_;
  double diff_truecenter_and_pointX = (vehicle_param.front_edge_to_center() -
                                       vehicle_param.back_edge_to_center()) /
                                      2.0;
  Vec2d true_center(path_point.x() + diff_truecenter_and_pointX *
                                         std::cos(path_point.theta()),
                    path_point.y() + diff_truecenter_and_pointX *
                                         std::sin(path_point.theta()));

  return Box2d(true_center, path_point.theta(), vehicle_param.length(),
               vehicle_param.width());
}

Box2d VehicleConfigHelper::GetSafeBoundingBox(
    const legion::interface::PathPoint &path_point, double lon_protect,
    double lat_protect) {
  const auto &vehicle_param = vehicle_config_;
  double diff_truecenter_and_pointX = (vehicle_param.front_edge_to_center() -
                                       vehicle_param.back_edge_to_center()) /
                                      2.0;
  Vec2d true_center(path_point.x() + diff_truecenter_and_pointX *
                                         std::cos(path_point.theta()),
                    path_point.y() + diff_truecenter_and_pointX *
                                         std::sin(path_point.theta()));

  return Box2d(true_center, path_point.theta(),
               vehicle_param.length() + lon_protect,
               vehicle_param.width() + lat_protect);
}

Box2d VehicleConfigHelper::GetDirSafeBoundingBox(
    const legion::interface::PathPoint &path_point, double lon_protect,
    double lat_protect, double lat_err) {
  const auto &vehicle_param = vehicle_config_;
  double diff_truecenter_and_pointX = (vehicle_param.front_edge_to_center() -
                                       vehicle_param.back_edge_to_center()) /
                                      2.0;
  double theta = path_point.theta();
  Vec2d true_center(
      path_point.x() + diff_truecenter_and_pointX * std::cos(theta),
      path_point.y() + diff_truecenter_and_pointX * std::sin(theta));
  theta = lat_err > 0.0 ? theta - M_PI_2 : theta + M_PI_2;
  true_center =
      Vec2d(true_center.x() + 0.5 * std::abs(lat_err) * std::cos(theta),
            true_center.y() + 0.5 * std::abs(lat_err) * std::sin(theta));

  return Box2d(true_center, path_point.theta(),
               vehicle_param.length() + lon_protect,
               vehicle_param.width() + lat_protect + std::abs(lat_err));
}

Box2d VehicleConfigHelper::GetDirSafeBoundingBox(
    const legion::interface::PathPoint &path_point, double lon_protect,
    double lat_protect, double lon_err, double lat_err) {
  static constexpr double kEpsilon = 1e-6;
  const auto &vehicle_param = vehicle_config_;
  double diff_truecenter_and_pointX = (vehicle_param.front_edge_to_center() -
                                       vehicle_param.back_edge_to_center()) /
                                      2.0;
  double theta = path_point.theta();
  Vec2d true_center(
      path_point.x() + diff_truecenter_and_pointX * std::cos(theta),
      path_point.y() + diff_truecenter_and_pointX * std::sin(theta));

  if (std::abs(lat_err) > kEpsilon) {
    theta = lat_err > 0.0 ? theta - M_PI_2 : theta + M_PI_2;
    true_center =
        Vec2d(true_center.x() + 0.5 * std::abs(lat_err) * std::cos(theta),
              true_center.y() + 0.5 * std::abs(lat_err) * std::sin(theta));
  }

  if (std::abs(lon_err) > kEpsilon) {
    theta = path_point.theta();
    true_center = Vec2d(true_center.x() + 0.5 * lon_err * std::cos(theta),
                        true_center.y() + 0.5 * lon_err * std::sin(theta));
  }

  return Box2d(true_center, path_point.theta(),
               vehicle_param.length() + lon_protect + std::abs(lon_err),
               vehicle_param.width() + lat_protect + std::abs(lat_err));
}

}  // namespace common
}  // namespace legion

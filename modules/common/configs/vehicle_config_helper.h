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

/**
 * @file
 */

#pragma once

#include <string>

#include "modules/common/interface/path_point.hpp"
#include "modules/common/data/vehicle_param/proto/vehicle_param.pb.h"

#include "modules/common/macros/macros.h"
#include "modules/common/math/box2d.h"

/**
 * @namespace legion::common
 * @brief legion::common
 */
namespace legion {
namespace common {
using legion::common::math::Box2d;
using legion::common::math::Vec2d;
using legion::interface::VehicleParam;
/**
 * @class VehicleConfigHelper
 *
 * @Brief This is a helper class that can load vehicle configurations. The
 * vehicle configurations are
 * defined modules/common/configs/proto/vehicle_config.proto
 */
class VehicleConfigHelper {
 public:
  /**
   * @brief Initialize vehicle configurations with default configuration file
   * pointed by gflags FLAGS_vehicle_config_path. The code will crash if
   * FLAGS_vehicle_config_path does not exist or it points to a file with
   * invalid format.
   */
  static void Init();

  /**
   * @brief Initialize vehicle configurations with \p config
   * @param config A legion::interface::VehicleParam class instance. The
   * legion::interface::VehicleParam class is defined by
   * modules/common/configs/proto/vehicle_config.proto.
   */
  static void Init(const VehicleParam& config);

  /**
   * @brief Initialize vehicle configurations with \p config_file.
   * The code will crash if \p config_file does not exist or \p config_file has
   * invalid format.
   * @param config_file The configuration file path. The format of the file is
   * defined by protobuf file
   * modules/common/configs/proto/vehicle_config.proto.
   */
  static void Init(const std::string& config_file);

  /**
   * @brief Get the current vehicle configuration.
   * @return the current legion::interface::VehicleParam instance reference.
   */
  static const VehicleParam& GetConfig();

  /**
   * @brief Get the safe turning radius when the vehicle is turning with
   * maximum steering angle.
   *
   * The calculation is described by the following figure.
   *  <pre>
   *
   *
   *    front of car
   * A +----------+ B
   *   |          |
   *   /          / turn with maximum steering angle
   *   |          |
   *   |          |
   *   |          |
   *   |    X     |                                       O
   *   |<-->.<----|-------------------------------------->* (turn center)
   *   |          |   VehicleParam.min_turn_radius()
   *   |          |
   * D +----------+ C
   *    back of car
   *
   *  </pre>
   *
   *  In the above figure, The four corner points of the vehicle is A, B, C, and
   * D. XO is VehicleParam.min_turn_radius(), X to AD is left_edge_to_center,
   * X to AB is VehicleParam.front_edge_to_center(). Then
   *     AO = sqrt((XO +  left_edge_to_center) ^2 + front_edge_to_center^2).
   * @return AO in the above figure, which is the minimum turn radius when the
   * vehicle turns with maximum steering angle
   */

  static double MinSafeTurnRadius();

  /**
   * @brief Get the box (four corners: ABCD) of the vehicle.
   * @param path_point of a vehicle (which contains point X and heading).
   * @return a box2d which contains the ABCD points info.
   */
  static Box2d GetBoundingBox(const legion::interface::PathPoint& path_point);

  /**
   * @brief Get the safe box (four corners: ABCD) of the vehicle.
   * @param path_point of a vehicle (which contains point X and heading).
   * @param lon_protect Longitudinal protective distance.
   * @param lat_protect Lateral protection distance.
   * @return a box2d which contains the ABCD points info.
   */
  static Box2d GetSafeBoundingBox(
      const legion::interface::PathPoint& path_point, double lon_protect,
      double lat_protect);

  /**
   * @brief Get the safe box (four corners: ABCD) of the vehicle.
   * @param path_point of a vehicle (which contains point X and heading).
   * @param lon_protect Longitudinal protective distance.
   * @param lat_protect Lateral protection distance.
   * @param lat_err Lateral error(positive or negative).
   * @return a box2d which contains the ABCD points info.
   */
  static Box2d GetDirSafeBoundingBox(
      const legion::interface::PathPoint& path_point, double lon_protect,
      double lat_protect, double lat_err);

  /**
   * @brief Get the safe box (four corners: ABCD) of the vehicle.
   * @param path_point of a vehicle (which contains point X and heading).
   * @param lon_protect Longitudinal protective distance.
   * @param lat_protect Lateral protection distance.
   * @param lon_err Longitudinal error(positive or negative).
   * @param lat_err Lateral error(positive or negative).
   * @return a box2d which contains the ABCD points info.
   */
  static Box2d GetDirSafeBoundingBox(
      const legion::interface::PathPoint& path_point, double lon_protect,
      double lat_protect, double lon_err, double lat_err);

 private:
  // 车辆配置文件
  static VehicleParam vehicle_config_;
  static bool is_init_;
  DECLARE_SINGLETON(VehicleConfigHelper)
};

}  // namespace common
}  // namespace legion

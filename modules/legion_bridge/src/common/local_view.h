/**
 * @file    local_view.h
 * @author  dfyx-legion
 * @date    2024-01-04
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include "modules/common/interface/events.hpp"
#include "modules/common/interface/chassis.hpp"
#include "modules/common/interface/vehicle.hpp"

/**
 * @namespace legion::legion_bridge
 * @brief legion::legion_bridge
 */

namespace legion {
namespace legion_bridge {
struct LocalView {
  legion::interface::Chassis chassis_;
  legion::interface::Events events_;
  legion::interface::Vehicle vehicle_;
  legion::interface::ControlCommand control_cmd_;
};
}  // namespace legion_bridge
}  // namespace legion

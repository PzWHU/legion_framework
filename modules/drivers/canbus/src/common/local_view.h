/**
 * @file    local_view.h
 * @author  dfyx-legion
 * @date    2024-01-04
 * @version 1.0.0
 * @par     Copyright(c)
 * @license GNU General Public License (GPL)
 */

#pragma once

#include "modules/common/interface/vehicle_task.hpp"
#include "modules/common/interface/control_command.hpp"

/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */

namespace legion 
{
  namespace drivers 
  {
    struct LocalView 
    {
      legion::interface::ControlCommand control_command_;
      legion::interface::ControlCommand teleop_control_command_;
      legion::interface::VehicleTask vehicle_task_;
    };
  }  // namespace drivers
}  // namespace legion

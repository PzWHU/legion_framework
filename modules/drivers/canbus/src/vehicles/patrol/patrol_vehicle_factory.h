/******************************************************************************
 * Copyright 2018 The legion Authors. All Rights Reserved.
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
 * @file patrol_vehicle_factory.h
 */

#pragma once


#include <memory>

#include "../vehicle_parameter.h"
#include "../abstract_vehicle_factory.h"
#include "../vehicle_controller.h"
#include "canbus/can_comm/can_message_manager.h"

/**
 * @namespace legion::drivers
 * @brief legion::drivers
 */
namespace legion 
{
  namespace drivers 
  {

    /**
     * @class PatrolVehicleFactory
     *
     * @brief this class is inherited from AbstractVehicleFactory. It can be used to
     * create controller and message manager for patrol vehicle.
     */
    class PatrolVehicleFactory : public AbstractVehicleFactory
    {
    public:
      /**
      * @brief destructor
      */
      virtual ~PatrolVehicleFactory() = default;

      /**
       * @brief create patrol vehicle controller
       * @returns a unique_ptr that points to the created controller
       */
      std::unique_ptr<VehicleController> CreateVehicleController() override;

      /**
       * @brief create patrol message manager
       * @returns a unique_ptr that points to the created message manager
       */
      std::unique_ptr<CanMessageManager<::legion::drivers::ChassisDetail>>CreateMessageManager() override;
    };

  }  // namespace drivers
}  // namespace legion



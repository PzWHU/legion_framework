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

#include "patrol_vehicle_factory.h"

#include "patrol_controller.h"
#include "patrol_message_manager.h"

namespace legion 
{
  namespace drivers 
  {

    std::unique_ptr<VehicleController>PatrolVehicleFactory::CreateVehicleController() 
    {
      return std::unique_ptr<VehicleController>(new patrol::PatrolController());
    }

    std::unique_ptr<CanMessageManager<::legion::drivers::ChassisDetail>>PatrolVehicleFactory::CreateMessageManager() 
    {
      return std::unique_ptr<CanMessageManager<::legion::drivers::ChassisDetail>>(new patrol::PatrolMessageManager());
    }

  }  // namespace drivers
}  // namespace legion

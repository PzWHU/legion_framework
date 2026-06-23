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

#pragma once


#include "canbus/can_comm/protocol_data.h"
#include "../../chassis_detail/chassis_detail.h"

namespace legion {
namespace drivers {
namespace patrol {

class Vcuvehiclestatus2304report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Vcuvehiclestatus2304report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 60, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'Vehicle_Status_2_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vehicle_status_2_msgcntr(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 32, 'description': 'wheel angle', 'is_signed_var': False, 'len': 10, 'name': 'Vehicle_Steering_Angle', 'offset': -35.0, 'order': 'intel', 'physical_range': '[-35|67.3]', 'physical_unit': 'deg', 'precision': 0.1, 'type': 'double'}
  double vehicle_steering_angle(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 16, 'description': 'Vehicle brake line pressure', 'is_signed_var': False, 'len': 16, 'name': 'Vehicle_Brake_Pressure', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|8]', 'physical_unit': 'Mpa', 'precision': 0.01, 'type': 'double'}
  double vehicle_brake_pressure(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': 'speed(km/h)', 'is_signed_var': False, 'len': 16, 'name': 'Vehicle_Speed', 'offset': -80.0, 'order': 'intel', 'physical_range': '[-80|80]', 'physical_unit': 'km/h', 'precision': 0.1, 'type': 'double'}
  double vehicle_speed(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



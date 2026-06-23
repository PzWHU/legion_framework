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

class Vcuvehiclestatus1303report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Vcuvehiclestatus1303report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 60, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'Vehicle_Status_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vehicle_status_msgcntr(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 4, 'name': 'Drive_Mode_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long drive_mode_state(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 48, 'description': 'Vehicle remaining power(%)', 'is_signed_var': False, 'len': 8, 'name': 'Vehicle_Soc', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
  long long vehicle_soc(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 16, 'description': 'VCU speed request(km/h)', 'is_signed_var': False, 'len': 16, 'name': 'VCU_Speed_Req', 'offset': -80.0, 'order': 'intel', 'physical_range': '[-80|80]', 'physical_unit': 'km/h', 'precision': 0.1, 'type': 'double'}
  double vcu_speed_req(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 3, 'description': 'Locked status:0off,1on', 'is_signed_var': False, 'len': 1, 'name': 'Clamping_Brake_Status', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool clamping_brake_status(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': 'gear status:0:P,1:D,2:N,3:R', 'is_signed_var': False, 'len': 2, 'name': 'Vehicle_Gear', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
  long long vehicle_gear(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



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

class Vcumeterreq712report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Vcumeterreq712report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 0, 'description': 'VCU meter request voltage', 'is_signed_var': False, 'len': 10, 'name': 'VCU_Meter_Req_Voltage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1023]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_meter_req_voltage(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 20, 'description': 'VCU request SOC', 'is_signed_var': False, 'len': 8, 'name': 'VCU_Meter_Req_SOC', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_meter_req_soc(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 62, 'description': '0:Not Ready 1:Ready', 'is_signed_var': False, 'len': 1, 'name': 'VCU_Meter_Req_Ready', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcu_meter_req_ready(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 28, 'description': 'VCU request odometer', 'is_signed_var': False, 'len': 20, 'name': 'VCU_Meter_Req_Mileage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1048575]', 'physical_unit': 'km', 'precision': 1.0, 'type': 'long long'}
  long long vcu_meter_req_mileage(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 52, 'description': 'VCU request fault', 'is_signed_var': False, 'len': 10, 'name': 'VCU_Meter_Req_ErrorCode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1023]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_meter_req_errorcode(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 10, 'description': 'VCU request current', 'is_signed_var': False, 'len': 10, 'name': 'VCU_Meter_Req_Current', 'offset': -500.0, 'order': 'intel', 'physical_range': '[-500|500]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_meter_req_current(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 63, 'description': '0:no charge;1:charging', 'is_signed_var': False, 'len': 1, 'name': 'VCU_Meter_Req_Charge_State', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool vcu_meter_req_charge_state(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



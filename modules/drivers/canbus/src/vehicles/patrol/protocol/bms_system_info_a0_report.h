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

class Bmssysteminfoa0report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Bmssysteminfoa0report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 48, 'description': 'BMS system status.0x0:Normal;0x1:Level 1 Fault;0x2:Level 2 Fault;0x3:Level 3 Fault', 'is_signed_var': False, 'len': 3, 'name': 'BMS_Sys_Status', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'bit', 'precision': 1.0, 'type': 'long long'}
  long long bms_sys_status(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 32, 'description': 'Capacity of the powertrain battery.0x0:No power;0x64:Full charge;0xFB-0xFF: Invalid', 'is_signed_var': False, 'len': 8, 'name': 'BMS_Sys_SOC', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
  long long bms_sys_soc(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 53, 'description': 'BMS Precharge Signal Status.0x0:init;0x1:Precharging;0x2:Precharge success;0x3:Precharge failure', 'is_signed_var': False, 'len': 2, 'name': 'BMS_Precharge_Signal_Status', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'bit', 'precision': 1.0, 'type': 'long long'}
  long long bms_precharge_signal_status(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 51, 'description': 'BMS charge status.0x0:Uncharge;0x1:AC slow charging;0x2-0x3:Not Used', 'is_signed_var': False, 'len': 2, 'name': 'BMS_Charge_Status', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'bit', 'precision': 1.0, 'type': 'long long'}
  long long bms_charge_status(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': 'Output voltage of the powertrain battery:0x0-0x1388:output voltage;0x1389-0xFFFF:Invalid', 'is_signed_var': False, 'len': 16, 'name': 'BMS_Battery_Out_Voltage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|500]', 'physical_unit': 'V', 'precision': 0.1, 'type': 'double'}
  double bms_battery_out_voltage(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 16, 'description': 'Output current of the powertrain battery:0x0-0x1770: Output current (negative value for charge, positive value for discharge);0x1771-0xFFFF:Invalid', 'is_signed_var': False, 'len': 16, 'name': 'BMS_Battery_Out_Current', 'offset': -300.0, 'order': 'intel', 'physical_range': '[-300|300]', 'physical_unit': 'A', 'precision': 0.1, 'type': 'double'}
  double bms_battery_out_current(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 40, 'description': 'Max Temperature of the powertrain battery:0x0-0xC8:temperature;0xC8-FF:invalid', 'is_signed_var': False, 'len': 8, 'name': 'BMS_Battery_Max_Temperature', 'offset': -100.0, 'order': 'intel', 'physical_range': '[-100|100]', 'physical_unit': 'degree', 'precision': 1.0, 'type': 'long long'}
  long long bms_battery_max_temperature(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



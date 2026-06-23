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

class Bmsmaxmincellvoltagea1report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Bmsmaxmincellvoltagea1report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 24, 'description': 'Number of min cell voltage', 'is_signed_var': False, 'len': 8, 'name': 'BMS_Min_Cell_Voltage_Num', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long bms_min_cell_voltage_num(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 16, 'description': 'Number of max cell voltage', 'is_signed_var': False, 'len': 8, 'name': 'BMS_Max_Cell_Voltage_Num', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long bms_max_cell_voltage_num(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 8, 'description': 'Min Cell voltage:0x0-0x64:output voltage;0x64-0xFF:Invalid', 'is_signed_var': False, 'len': 8, 'name': 'BMS_Min_Cell_Voltage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|25.5]', 'physical_unit': 'V', 'precision': 0.1, 'type': 'double'}
  double bms_min_cell_voltage(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': 'Max Cell  voltage :0x0-0x64:output voltage;0x64-0xFF: Invalid', 'is_signed_var': False, 'len': 8, 'name': 'BMS_Max_Cell_Voltage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|25.5]', 'physical_unit': 'V', 'precision': 0.1, 'type': 'double'}
  double bms_max_cell_voltage(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



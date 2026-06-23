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

#include "bms_max_min_cell_voltage_a1_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Bmsmaxmincellvoltagea1report::Bmsmaxmincellvoltagea1report() {}
const int32_t Bmsmaxmincellvoltagea1report::ID = 0xA1;

void Bmsmaxmincellvoltagea1report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->bms_max_min_cell_voltage_a1_report_.bms_max_cell_voltage_= bms_max_cell_voltage(bytes, length);
  chassis->bms_max_min_cell_voltage_a1_report_.bms_min_cell_voltage_= bms_min_cell_voltage(bytes, length);
  chassis->bms_max_min_cell_voltage_a1_report_.bms_max_cell_voltage_num_= bms_max_cell_voltage_num(bytes, length);
  chassis->bms_max_min_cell_voltage_a1_report_.bms_min_cell_voltage_num_= bms_min_cell_voltage_num(bytes, length);
}

// config detail: {'bit': 0, 'description': 'Max Cell  voltage :0x0-0x64:output voltage;0x64-0xFF: Invalid', 'is_signed_var': False, 'len': 8, 'name': 'bms_max_cell_voltage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|25.5]', 'physical_unit': 'V', 'precision': 0.1, 'type': 'double'}
double Bmsmaxmincellvoltagea1report::bms_max_cell_voltage(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 8);

  double ret = x * 0.100000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 8, 'description': 'Min Cell voltage:0x0-0x64:output voltage;0x64-0xFF:Invalid', 'is_signed_var': False, 'len': 8, 'name': 'bms_min_cell_voltage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|25.5]', 'physical_unit': 'V', 'precision': 0.1, 'type': 'double'}
double Bmsmaxmincellvoltagea1report::bms_min_cell_voltage(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 8);

  double ret = x * 0.100000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 16, 'description': 'Number of max cell voltage', 'is_signed_var': False, 'len': 8, 'name': 'bms_max_cell_voltage_num', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Bmsmaxmincellvoltagea1report::bms_max_cell_voltage_num(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 24, 'description': 'Number of min cell voltage', 'is_signed_var': False, 'len': 8, 'name': 'bms_min_cell_voltage_num', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Bmsmaxmincellvoltagea1report::bms_min_cell_voltage_num(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion

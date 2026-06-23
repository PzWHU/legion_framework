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

#include "bms_system_info_a0_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Bmssysteminfoa0report::Bmssysteminfoa0report() {}
const int32_t Bmssysteminfoa0report::ID = 0xA0;

void Bmssysteminfoa0report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->bms_system_info_a0_report_.bms_battery_max_temperature_= bms_battery_max_temperature(bytes, length);
  chassis->bms_system_info_a0_report_.bms_battery_out_current_= bms_battery_out_current(bytes, length);
  chassis->bms_system_info_a0_report_.bms_battery_out_voltage_= bms_battery_out_voltage(bytes, length);
  chassis->bms_system_info_a0_report_.bms_charge_status_= bms_charge_status(bytes, length);
  chassis->bms_system_info_a0_report_.bms_precharge_signal_status_= bms_precharge_signal_status(bytes, length);
  chassis->bms_system_info_a0_report_.bms_sys_soc_= bms_sys_soc(bytes, length);
  chassis->bms_system_info_a0_report_.bms_sys_status_= bms_sys_status(bytes, length);
}

// config detail: {'bit': 40, 'description': 'Max Temperature of the powertrain battery:0x0-0xC8:temperature;0xC8-FF:invalid', 'is_signed_var': False, 'len': 8, 'name': 'bms_battery_max_temperature', 'offset': -100.0, 'order': 'intel', 'physical_range': '[-100|100]', 'physical_unit': 'degree', 'precision': 1.0, 'type': 'long long'}
long long Bmssysteminfoa0report::bms_battery_max_temperature(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x + -100.000000;
  return ret;
}

// config detail: {'bit': 16, 'description': 'Output current of the powertrain battery:0x0-0x1770: Output current (negative value for charge, positive value for discharge);0x1771-0xFFFF:Invalid', 'is_signed_var': False, 'len': 16, 'name': 'bms_battery_out_current', 'offset': -300.0, 'order': 'intel', 'physical_range': '[-300|300]', 'physical_unit': 'A', 'precision': 0.1, 'type': 'double'}
double Bmssysteminfoa0report::bms_battery_out_current(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 2);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  double ret = x * 0.100000 + -300.000000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 0, 'description': 'Output voltage of the powertrain battery:0x0-0x1388:output voltage;0x1389-0xFFFF:Invalid', 'is_signed_var': False, 'len': 16, 'name': 'bms_battery_out_voltage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|500]', 'physical_unit': 'V', 'precision': 0.1, 'type': 'double'}
double Bmssysteminfoa0report::bms_battery_out_voltage(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 0);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  double ret = x * 0.100000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 51, 'description': 'BMS charge status.0x0:Uncharge;0x1:AC slow charging;0x2-0x3:Not Used', 'is_signed_var': False, 'len': 2, 'name': 'bms_charge_status', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'bit', 'precision': 1.0, 'type': 'long long'}
long long Bmssysteminfoa0report::bms_charge_status(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int64_t x = t0.get_byte(3, 2);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 53, 'description': 'BMS Precharge Signal Status.0x0:init;0x1:Precharging;0x2:Precharge success;0x3:Precharge failure', 'is_signed_var': False, 'len': 2, 'name': 'bms_precharge_signal_status', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'bit', 'precision': 1.0, 'type': 'long long'}
long long Bmssysteminfoa0report::bms_precharge_signal_status(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int64_t x = t0.get_byte(5, 2);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 32, 'description': 'Capacity of the powertrain battery.0x0:No power;0x64:Full charge;0xFB-0xFF: Invalid', 'is_signed_var': False, 'len': 8, 'name': 'bms_sys_soc', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
long long Bmssysteminfoa0report::bms_sys_soc(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 4);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 48, 'description': 'BMS system status.0x0:Normal;0x1:Level 1 Fault;0x2:Level 2 Fault;0x3:Level 3 Fault', 'is_signed_var': False, 'len': 3, 'name': 'bms_sys_status', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'bit', 'precision': 1.0, 'type': 'long long'}
long long Bmssysteminfoa0report::bms_sys_status(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int64_t x = t0.get_byte(0, 3);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion

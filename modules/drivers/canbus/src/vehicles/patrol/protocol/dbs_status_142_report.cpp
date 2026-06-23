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

#include "dbs_status_142_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Dbsstatus142report::Dbsstatus142report() {}
const int32_t Dbsstatus142report::ID = 0x142;

void Dbsstatus142report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->dbs_status_142_report_.dbs_system_status_= dbs_system_status(bytes, length);
  chassis->dbs_status_142_report_.dbs_hp_pressure_= dbs_hp_pressure(bytes, length);
  chassis->dbs_status_142_report_.dbs_checksum_= dbs_checksum(bytes, length);
  chassis->dbs_status_142_report_.dbs_peadalopening_= dbs_peadalopening(bytes, length);
  chassis->dbs_status_142_report_.dbs_park_warning_= dbs_park_warning(bytes, length);
  chassis->dbs_status_142_report_.dbs_rollingcounter_= dbs_rollingcounter(bytes, length);
  chassis->dbs_status_142_report_.brakepressurereqack_= brakepressurereqack(bytes, length);
  chassis->dbs_status_142_report_.dbs_work_mode_= dbs_work_mode(bytes, length);
  chassis->dbs_status_142_report_.dbs_ref_iq_= dbs_ref_iq(bytes, length);
  chassis->dbs_status_142_report_.dbs_pedaiflag_= dbs_pedaiflag(bytes, length);
  chassis->dbs_status_142_report_.dbs_estopflag_= dbs_estopflag(bytes, length);
}

// config detail: {'bit': 0, 'description': '0:System No Fault 1:System Waring;2:System Fault', 'is_signed_var': False, 'len': 2, 'name': 'dbs_system_status', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Dbsstatus142report::dbs_system_status(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 2);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 24, 'description': 'Front brake system pressure feedback', 'is_signed_var': False, 'len': 8, 'name': 'dbs_hp_pressure', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|8]', 'physical_unit': 'Mpa', 'precision': 0.1, 'type': 'double'}
double Dbsstatus142report::dbs_hp_pressure(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  double ret = x * 0.100000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 56, 'description': 'Checksum', 'is_signed_var': False, 'len': 8, 'name': 'dbs_checksum', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Dbsstatus142report::dbs_checksum(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 32, 'description': 'Accelerator pedal(0%~100%)', 'is_signed_var': False, 'len': 8, 'name': 'dbs_peadalopening', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
long long Dbsstatus142report::dbs_peadalopening(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 4);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 6, 'description': 'Parking time warning signal', 'is_signed_var': False, 'len': 2, 'name': 'dbs_park_warning', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Dbsstatus142report::dbs_park_warning(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(6, 2);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 48, 'is_signed_var': False, 'len': 4, 'name': 'dbs_rollingcounter', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Dbsstatus142report::dbs_rollingcounter(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int64_t x = t0.get_byte(0, 4);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 16, 'description': 'Brake pressure request response, DBS execution completed response is valid 0x0:Not ACK 0x1: ACK', 'is_signed_var': False, 'len': 8, 'name': 'brakepressurereqack', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Dbsstatus142report::brakepressurereqack(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'dbs_work_mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Dbsstatus142report::dbs_work_mode(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 40, 'description': 'current', 'is_signed_var': False, 'len': 8, 'name': 'dbs_ref_iq', 'offset': -20.0, 'order': 'intel', 'physical_range': '[-20|107.5]', 'physical_unit': '', 'precision': 0.5, 'type': 'double'}
double Dbsstatus142report::dbs_ref_iq(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(0, 8);

  double ret = x * 0.500000 + -20.000000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 55, 'description': 'Accelerator pedal Insert flag bit:0: The pedal is not inserted;1: The pedal is inserted', 'is_signed_var': False, 'len': 1, 'name': 'dbs_pedaiflag', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Dbsstatus142report::dbs_pedaiflag(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int64_t x = t0.get_byte(7, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 54, 'description': 'Estop', 'is_signed_var': False, 'len': 1, 'name': 'dbs_estopflag', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Dbsstatus142report::dbs_estopflag(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int64_t x = t0.get_byte(6, 1);

  bool ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion

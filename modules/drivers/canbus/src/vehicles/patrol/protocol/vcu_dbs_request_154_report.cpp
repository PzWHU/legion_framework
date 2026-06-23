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

#include "vcu_dbs_request_154_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Vcudbsrequest154report::Vcudbsrequest154report() {}
const int32_t Vcudbsrequest154report::ID = 0x154;

void Vcudbsrequest154report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->vcu_dbs_request_154_report_.vcu_dbs_work_mode_= vcu_dbs_work_mode(bytes, length);
  chassis->vcu_dbs_request_154_report_.vcu_dbs_pressure_request_= vcu_dbs_pressure_request(bytes, length);
  chassis->vcu_dbs_request_154_report_.vcu_dbs_request_flag_= vcu_dbs_request_flag(bytes, length);
  chassis->vcu_dbs_request_154_report_.vcu_abs_active_= vcu_abs_active(bytes, length);
}

// config detail: {'bit': 8, 'description': 'Exhaust mode (0: wire mode, 1: exhaust mode)', 'is_signed_var': False, 'len': 8, 'name': 'vcu_dbs_work_mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|0]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcudbsrequest154report::vcu_dbs_work_mode(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 16, 'description': 'Sending target pressure', 'is_signed_var': False, 'len': 8, 'name': 'vcu_dbs_pressure_request', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|8]', 'physical_unit': 'Mpa', 'precision': 0.1, 'type': 'double'}
double Vcudbsrequest154report::vcu_dbs_pressure_request(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int64_t x = t0.get_byte(0, 8);

  double ret = x * 0.100000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 0, 'description': 'VCU brake request Enable bit 0: power assist mode; 1 On-line mode', 'is_signed_var': False, 'len': 8, 'name': 'vcu_dbs_request_flag', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcudbsrequest154report::vcu_dbs_request_flag(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 24, 'description': 'ABS working flag bit0: off; 1: on', 'is_signed_var': False, 'len': 8, 'name': 'vcu_abs_active', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcudbsrequest154report::vcu_abs_active(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion

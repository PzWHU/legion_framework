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

#include "vcu_meter_req_712_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Vcumeterreq712report::Vcumeterreq712report() {}
const int32_t Vcumeterreq712report::ID = 0x712;

void Vcumeterreq712report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->vcu_meter_req_712_report_.vcu_meter_req_charge_state_= vcu_meter_req_charge_state(bytes, length);
  chassis->vcu_meter_req_712_report_.vcu_meter_req_current_= vcu_meter_req_current(bytes, length);
  chassis->vcu_meter_req_712_report_.vcu_meter_req_errorcode_= vcu_meter_req_errorcode(bytes, length);
  chassis->vcu_meter_req_712_report_.vcu_meter_req_mileage_= vcu_meter_req_mileage(bytes, length);
  chassis->vcu_meter_req_712_report_.vcu_meter_req_ready_= vcu_meter_req_ready(bytes, length);
  chassis->vcu_meter_req_712_report_.vcu_meter_req_soc_= vcu_meter_req_soc(bytes, length);
  chassis->vcu_meter_req_712_report_.vcu_meter_req_voltage_= vcu_meter_req_voltage(bytes, length);
}

// config detail: {'bit': 63, 'description': '0:no charge;1:charging', 'is_signed_var': False, 'len': 1, 'name': 'vcu_meter_req_charge_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcumeterreq712report::vcu_meter_req_charge_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int64_t x = t0.get_byte(7, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 10, 'description': 'VCU request current', 'is_signed_var': False, 'len': 10, 'name': 'vcu_meter_req_current', 'offset': -500.0, 'order': 'intel', 'physical_range': '[-500|500]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcumeterreq712report::vcu_meter_req_current(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int64_t x = t0.get_byte(0, 4);

  Byte t1(bytes + 1);
  int64_t t = t1.get_byte(2, 6);
  x <<= 6;
  x |= t;

  long long ret = x + -500.000000;
  return ret;
}

// config detail: {'bit': 52, 'description': 'VCU request fault', 'is_signed_var': False, 'len': 10, 'name': 'vcu_meter_req_errorcode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1023]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcumeterreq712report::vcu_meter_req_errorcode(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int64_t x = t0.get_byte(0, 6);

  Byte t1(bytes + 6);
  int64_t t = t1.get_byte(4, 4);
  x <<= 4;
  x |= t;

  long long ret = x;
  return ret;
}

// config detail: {'bit': 28, 'description': 'VCU request odometer', 'is_signed_var': False, 'len': 20, 'name': 'vcu_meter_req_mileage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1048575]', 'physical_unit': 'km', 'precision': 1.0, 'type': 'long long'}
long long Vcumeterreq712report::vcu_meter_req_mileage(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 4);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  Byte t2(bytes + 3);
  t = t2.get_byte(4, 4);
  x <<= 4;
  x |= t;

  long long ret = x;
  return ret;
}

// config detail: {'bit': 62, 'description': '0:Not Ready 1:Ready', 'is_signed_var': False, 'len': 1, 'name': 'vcu_meter_req_ready', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcumeterreq712report::vcu_meter_req_ready(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int64_t x = t0.get_byte(6, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 20, 'description': 'VCU request SOC', 'is_signed_var': False, 'len': 8, 'name': 'vcu_meter_req_soc', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcumeterreq712report::vcu_meter_req_soc(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 4);

  Byte t1(bytes + 2);
  int64_t t = t1.get_byte(4, 4);
  x <<= 4;
  x |= t;

  long long ret = x;
  return ret;
}

// config detail: {'bit': 0, 'description': 'VCU meter request voltage', 'is_signed_var': False, 'len': 10, 'name': 'vcu_meter_req_voltage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1023]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcumeterreq712report::vcu_meter_req_voltage(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 2);

  Byte t1(bytes + 0);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion

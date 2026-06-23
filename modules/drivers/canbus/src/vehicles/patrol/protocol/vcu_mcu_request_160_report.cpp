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

#include "vcu_mcu_request_160_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Vcumcurequest160report::Vcumcurequest160report() {}
const int32_t Vcumcurequest160report::ID = 0x160;

void Vcumcurequest160report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->vcu_mcu_request_160_report_.mcu_vcu_motor_request_valid_= mcu_vcu_motor_request_valid(bytes, length);
  chassis->vcu_mcu_request_160_report_.mcu_drivemode_= mcu_drivemode(bytes, length);
  chassis->vcu_mcu_request_160_report_.mcu_torque_req_= mcu_torque_req(bytes, length);
  chassis->vcu_mcu_request_160_report_.mcu_speed_req_= mcu_speed_req(bytes, length);
  chassis->vcu_mcu_request_160_report_.mcu_clamping_brake_req_= mcu_clamping_brake_req(bytes, length);
}

// config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'mcu_vcu_motor_request_valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcumcurequest160report::mcu_vcu_motor_request_valid(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 1, 'is_signed_var': False, 'len': 2, 'name': 'mcu_drivemode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcumcurequest160report::mcu_drivemode(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(1, 2);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 8, 'is_signed_var': False, 'len': 16, 'name': 'mcu_torque_req', 'offset': -1000.0, 'order': 'intel', 'physical_range': '[-1000|1000]', 'physical_unit': 'Nm', 'precision': 0.1, 'type': 'double'}
double Vcumcurequest160report::mcu_torque_req(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 1);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  double ret = x * 0.100000 + -1000.000000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 24, 'is_signed_var': False, 'len': 16, 'name': 'mcu_speed_req', 'offset': -7000.0, 'order': 'intel', 'physical_range': '[-7000|7000]', 'physical_unit': 'RPM', 'precision': 1.0, 'type': 'long long'}
long long Vcumcurequest160report::mcu_speed_req(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 4);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 3);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  long long ret = x + -7000.000000;
  return ret;
}

// config detail: {'bit': 3, 'is_signed_var': False, 'len': 1, 'name': 'mcu_clamping_brake_req', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcumcurequest160report::mcu_clamping_brake_req(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(3, 1);

  bool ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion

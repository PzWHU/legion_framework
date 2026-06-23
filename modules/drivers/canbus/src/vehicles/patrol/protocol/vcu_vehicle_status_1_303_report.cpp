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

#include "vcu_vehicle_status_1_303_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Vcuvehiclestatus1303report::Vcuvehiclestatus1303report() {}
const int32_t Vcuvehiclestatus1303report::ID = 0x303;

void Vcuvehiclestatus1303report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->vcu_vehicle_status_1_303_report_.vehicle_gear_= vehicle_gear(bytes, length);
  chassis->vcu_vehicle_status_1_303_report_.clamping_brake_status_= clamping_brake_status(bytes, length);
  chassis->vcu_vehicle_status_1_303_report_.vcu_speed_req_= vcu_speed_req(bytes, length);
  chassis->vcu_vehicle_status_1_303_report_.vehicle_soc_= vehicle_soc(bytes, length);
  chassis->vcu_vehicle_status_1_303_report_.drive_mode_state_= drive_mode_state(bytes, length);
  chassis->vcu_vehicle_status_1_303_report_.vehicle_status_msgcntr_= vehicle_status_msgcntr(bytes, length);
}

// config detail: {'bit': 0, 'description': 'gear status:0:P,1:D,2:N,3:R', 'is_signed_var': False, 'len': 2, 'name': 'vehicle_gear', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
long long Vcuvehiclestatus1303report::vehicle_gear(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 2);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 3, 'description': 'Locked status:0off,1on', 'is_signed_var': False, 'len': 1, 'name': 'clamping_brake_status', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclestatus1303report::clamping_brake_status(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(3, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 16, 'description': 'VCU speed request(km/h)', 'is_signed_var': False, 'len': 16, 'name': 'vcu_speed_req', 'offset': -80.0, 'order': 'intel', 'physical_range': '[-80|80]', 'physical_unit': 'km/h', 'precision': 0.1, 'type': 'double'}
double Vcuvehiclestatus1303report::vcu_speed_req(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 2);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  double ret = x * 0.100000 + -80.000000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 48, 'description': 'Vehicle remaining power(%)', 'is_signed_var': False, 'len': 8, 'name': 'vehicle_soc', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
long long Vcuvehiclestatus1303report::vehicle_soc(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int64_t x = t0.get_byte(0, 8);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 8, 'is_signed_var': False, 'len': 4, 'name': 'drive_mode_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcuvehiclestatus1303report::drive_mode_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 4);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 60, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'vehicle_status_msgcntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcuvehiclestatus1303report::vehicle_status_msgcntr(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int64_t x = t0.get_byte(4, 4);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion

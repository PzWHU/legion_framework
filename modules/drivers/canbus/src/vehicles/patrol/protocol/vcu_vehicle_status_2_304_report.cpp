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

#include "vcu_vehicle_status_2_304_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Vcuvehiclestatus2304report::Vcuvehiclestatus2304report() {}
const int32_t Vcuvehiclestatus2304report::ID = 0x304;

void Vcuvehiclestatus2304report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->vcu_vehicle_status_2_304_report_.vehicle_speed_= vehicle_speed(bytes, length);
  chassis->vcu_vehicle_status_2_304_report_.vehicle_brake_pressure_= vehicle_brake_pressure(bytes, length);
  chassis->vcu_vehicle_status_2_304_report_.vehicle_steering_angle_= vehicle_steering_angle(bytes, length);
  chassis->vcu_vehicle_status_2_304_report_.vehicle_status_2_msgcntr_= vehicle_status_2_msgcntr(bytes, length);
}

// config detail: {'bit': 0, 'description': 'speed(km/h)', 'is_signed_var': False, 'len': 16, 'name': 'vehicle_speed', 'offset': -80.0, 'order': 'intel', 'physical_range': '[-80|80]', 'physical_unit': 'km/h', 'precision': 0.1, 'type': 'double'}
double Vcuvehiclestatus2304report::vehicle_speed(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 0);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  double ret = x * 0.100000 + -80.000000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 16, 'description': 'Vehicle brake line pressure', 'is_signed_var': False, 'len': 16, 'name': 'vehicle_brake_pressure', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|8]', 'physical_unit': 'Mpa', 'precision': 0.01, 'type': 'double'}
double Vcuvehiclestatus2304report::vehicle_brake_pressure(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 2);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  double ret = x * 0.010000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 32, 'description': 'wheel angle', 'is_signed_var': False, 'len': 10, 'name': 'vehicle_steering_angle', 'offset': -35.0, 'order': 'intel', 'physical_range': '[-35|67.3]', 'physical_unit': 'deg', 'precision': 0.1, 'type': 'double'}
double Vcuvehiclestatus2304report::vehicle_steering_angle(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(0, 2);

  Byte t1(bytes + 4);
  int64_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  double ret = x * 0.100000 + -35.000000;
  ret = Byte::equal_zero(ret);
  return ret;
}

// config detail: {'bit': 60, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'vehicle_status_2_msgcntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcuvehiclestatus2304report::vehicle_status_2_msgcntr(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int64_t x = t0.get_byte(4, 4);

  long long ret = x;
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion

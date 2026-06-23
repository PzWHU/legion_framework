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

#include "vcu_vehicle_diagnosis_301_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Vcuvehiclediagnosis301report::Vcuvehiclediagnosis301report() {}
const int32_t Vcuvehiclediagnosis301report::ID = 0x301;

void Vcuvehiclediagnosis301report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->vcu_vehicle_diagnosis_301_report_.motor_state_= motor_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.remote_state_= remote_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.ad_state_= ad_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.dbs_state_= dbs_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.parallel_state_= parallel_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.emergency_button_state_= emergency_button_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.bms_state_= bms_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.f_touch_switch_state_= f_touch_switch_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.r_touch_switch_state_= r_touch_switch_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.left_turn_light_state_= left_turn_light_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.right_turn_light_state_= right_turn_light_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.headlight_state_= headlight_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.horn_state_= horn_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.vehicle_diagnosis_msgcntr_= vehicle_diagnosis_msgcntr(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.oil_pot_state_= oil_pot_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.eps_state_= eps_state(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.light_states_brake_= light_states_brake(bytes, length);
  chassis->vcu_vehicle_diagnosis_301_report_.vehicle_voltage_= vehicle_voltage(bytes, length);
}

// config detail: {'bit': 1, 'is_signed_var': False, 'len': 1, 'name': 'motor_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::motor_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(1, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 5, 'is_signed_var': False, 'len': 1, 'name': 'remote_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::remote_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(5, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 6, 'description': '0recieve,1norecieve', 'is_signed_var': False, 'len': 1, 'name': 'ad_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::ad_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(6, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 7, 'is_signed_var': False, 'len': 1, 'name': 'dbs_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::dbs_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(7, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 8, 'description': '0 indicates parallel driving, 1 indicates not parallel driving', 'is_signed_var': False, 'len': 1, 'name': 'parallel_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::parallel_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 0, 'is_signed_var': False, 'len': 1, 'name': 'emergency_button_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::emergency_button_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 9, 'description': '0normal,1faulty', 'is_signed_var': False, 'len': 1, 'name': 'bms_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::bms_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(1, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 12, 'is_signed_var': False, 'len': 1, 'name': 'f_touch_switch_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::f_touch_switch_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(4, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 13, 'is_signed_var': False, 'len': 1, 'name': 'r_touch_switch_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::r_touch_switch_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(5, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 32, 'is_signed_var': False, 'len': 1, 'name': 'left_turn_light_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::left_turn_light_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 4);
  int64_t x = t0.get_byte(0, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 48, 'description': '0off    1on', 'is_signed_var': False, 'len': 1, 'name': 'right_turn_light_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::right_turn_light_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int64_t x = t0.get_byte(0, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 15, 'is_signed_var': False, 'len': 1, 'name': 'headlight_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::headlight_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(7, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 43, 'is_signed_var': False, 'len': 1, 'name': 'horn_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::horn_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(3, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 60, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'vehicle_diagnosis_msgcntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Vcuvehiclediagnosis301report::vehicle_diagnosis_msgcntr(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int64_t x = t0.get_byte(4, 4);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 41, 'description': '0normal,1abnormal', 'is_signed_var': False, 'len': 1, 'name': 'oil_pot_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::oil_pot_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(1, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 10, 'is_signed_var': False, 'len': 1, 'name': 'eps_state', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::eps_state(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(2, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 40, 'is_signed_var': False, 'len': 1, 'name': 'light_states_brake', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
bool Vcuvehiclediagnosis301report::light_states_brake(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int64_t x = t0.get_byte(0, 1);

  bool ret = x;
  return ret;
}

// config detail: {'bit': 22, 'description': 'battery voltage', 'is_signed_var': False, 'len': 10, 'name': 'vehicle_voltage', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|90]', 'physical_unit': 'V', 'precision': 0.1, 'type': 'double'}
double Vcuvehiclediagnosis301report::vehicle_voltage(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int64_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 2);
  int64_t t = t1.get_byte(6, 2);
  x <<= 2;
  x |= t;

  double ret = x * 0.100000;
  ret = Byte::equal_zero(ret);
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion

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

#include "parallel_control_body_516_report.h"

#include "canbus/common/byte.h"
#include "canbus/common/canbus_consts.h"

namespace legion {
namespace drivers {
namespace patrol {

using ::legion::driver::drivers::Byte;

Parallelcontrolbody516report::Parallelcontrolbody516report() {}
const int32_t Parallelcontrolbody516report::ID = 0x516;

void Parallelcontrolbody516report::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->parallel_control_body_516_report_.parallel_left_light_switch_= parallel_left_light_switch(bytes, length);
  chassis->parallel_control_body_516_report_.parallel_right_light_switch_= parallel_right_light_switch(bytes, length);
  chassis->parallel_control_body_516_report_.parallel_headlight_switch_= parallel_headlight_switch(bytes, length);
  chassis->parallel_control_body_516_report_.parallel_hom_switch_= parallel_hom_switch(bytes, length);
  chassis->parallel_control_body_516_report_.parallel_body_msgcntr_= parallel_body_msgcntr(bytes, length);
  chassis->parallel_control_body_516_report_.parallel_brakelight_switch_= parallel_brakelight_switch(bytes, length);
}

// config detail: {'bit': 0, 'description': '0off,1on', 'enum': {0: 'PARALLEL_LEFT_LIGHT_SWITCH_TURN_OFF', 1: 'PARALLEL_LEFT_LIGHT_SWITCH_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'parallel_left_light_switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
Parallel_control_body_516_report::Parallel_left_light_switchType Parallelcontrolbody516report::parallel_left_light_switch(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(0, 1);

  Parallel_control_body_516_report::Parallel_left_light_switchType ret =  static_cast<Parallel_control_body_516_report::Parallel_left_light_switchType>(x);
  return ret;
}

// config detail: {'bit': 1, 'description': '0off,1on', 'enum': {0: 'PARALLEL_RIGHT_LIGHT_SWITCH_TURN_OFF', 1: 'PARALLEL_RIGHT_LIGHT_SWITCH_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'parallel_right_light_switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
Parallel_control_body_516_report::Parallel_right_light_switchType Parallelcontrolbody516report::parallel_right_light_switch(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(1, 1);

  Parallel_control_body_516_report::Parallel_right_light_switchType ret =  static_cast<Parallel_control_body_516_report::Parallel_right_light_switchType>(x);
  return ret;
}

// config detail: {'bit': 3, 'description': '0off,1on', 'enum': {0: 'PARALLEL_HEADLIGHT_SWITCH_TURN_OFF', 1: 'PARALLEL_HEADLIGHT_SWITCH_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'parallel_headlight_switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
Parallel_control_body_516_report::Parallel_headlight_switchType Parallelcontrolbody516report::parallel_headlight_switch(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(3, 1);

  Parallel_control_body_516_report::Parallel_headlight_switchType ret =  static_cast<Parallel_control_body_516_report::Parallel_headlight_switchType>(x);
  return ret;
}

// config detail: {'bit': 2, 'description': '0off,1on', 'enum': {0: 'PARALLEL_HOM_SWITCH_TURN_OFF', 1: 'PARALLEL_HOM_SWITCH_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'parallel_hom_switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
Parallel_control_body_516_report::Parallel_hom_switchType Parallelcontrolbody516report::parallel_hom_switch(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(2, 1);

  Parallel_control_body_516_report::Parallel_hom_switchType ret =  static_cast<Parallel_control_body_516_report::Parallel_hom_switchType>(x);
  return ret;
}

// config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'parallel_body_msgcntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
long long Parallelcontrolbody516report::parallel_body_msgcntr(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int64_t x = t0.get_byte(4, 4);

  long long ret = x;
  return ret;
}

// config detail: {'bit': 8, 'description': '0off,1on', 'enum': {0: 'PARALLEL_BRAKELIGHT_SWITCH_TURN_OFF', 1: 'PARALLEL_BRAKELIGHT_SWITCH_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'parallel_brakelight_switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
Parallel_control_body_516_report::Parallel_brakelight_switchType Parallelcontrolbody516report::parallel_brakelight_switch(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int64_t x = t0.get_byte(0, 1);

  Parallel_control_body_516_report::Parallel_brakelight_switchType ret =  static_cast<Parallel_control_body_516_report::Parallel_brakelight_switchType>(x);
  return ret;
}
}  // namespace patrol
}  // namespace drivers
}  // namespace legion

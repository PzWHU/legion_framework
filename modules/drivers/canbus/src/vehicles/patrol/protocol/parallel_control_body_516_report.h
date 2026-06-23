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

#pragma once


#include "canbus/can_comm/protocol_data.h"
#include "../../chassis_detail/chassis_detail.h"

namespace legion {
namespace drivers {
namespace patrol {

class Parallelcontrolbody516report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Parallelcontrolbody516report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 8, 'description': '0off,1on', 'enum': {0: 'PARALLEL_BRAKELIGHT_SWITCH_TURN_OFF', 1: 'PARALLEL_BRAKELIGHT_SWITCH_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'Parallel_BrakeLight_Switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Parallel_control_body_516_report::Parallel_brakelight_switchType parallel_brakelight_switch(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'Parallel_Body_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long parallel_body_msgcntr(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 2, 'description': '0off,1on', 'enum': {0: 'PARALLEL_HOM_SWITCH_TURN_OFF', 1: 'PARALLEL_HOM_SWITCH_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'Parallel_Hom_Switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Parallel_control_body_516_report::Parallel_hom_switchType parallel_hom_switch(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 3, 'description': '0off,1on', 'enum': {0: 'PARALLEL_HEADLIGHT_SWITCH_TURN_OFF', 1: 'PARALLEL_HEADLIGHT_SWITCH_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'Parallel_Headlight_Switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Parallel_control_body_516_report::Parallel_headlight_switchType parallel_headlight_switch(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 1, 'description': '0off,1on', 'enum': {0: 'PARALLEL_RIGHT_LIGHT_SWITCH_TURN_OFF', 1: 'PARALLEL_RIGHT_LIGHT_SWITCH_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'Parallel_Right_Light_Switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Parallel_control_body_516_report::Parallel_right_light_switchType parallel_right_light_switch(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': '0off,1on', 'enum': {0: 'PARALLEL_LEFT_LIGHT_SWITCH_TURN_OFF', 1: 'PARALLEL_LEFT_LIGHT_SWITCH_TURN_ON'}, 'is_signed_var': False, 'len': 1, 'name': 'Parallel_Left_Light_Switch', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'enum'}
  Parallel_control_body_516_report::Parallel_left_light_switchType parallel_left_light_switch(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



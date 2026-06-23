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

class Parallelcontrolbrake513report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Parallelcontrolbrake513report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 4, 'description': 'T(0-15)', 'is_signed_var': False, 'len': 4, 'name': 'Parallel_DBS_MsgCntr', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long parallel_dbs_msgcntr(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 8, 'description': 'brake pedal(0~100%)', 'is_signed_var': False, 'len': 8, 'name': 'Parallel_BrakePressure_Cmd', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
  long long parallel_brakepressure_cmd(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': '0invalid,1valid', 'enum': {0: 'PARALLEL_DBS_VALID_INVALID', 1: 'PARALLEL_DBS_VALID_VALID'}, 'is_signed_var': False, 'len': 4, 'name': 'Parallel_DBS_Valid', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'enum'}
  Parallel_control_brake_513_report::Parallel_dbs_validType parallel_dbs_valid(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



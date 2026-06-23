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

class Dbsstatus142report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Dbsstatus142report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 54, 'description': 'Estop', 'is_signed_var': False, 'len': 1, 'name': 'DBS_EstopFlag', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool dbs_estopflag(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 55, 'description': 'Accelerator pedal Insert flag bit:0: The pedal is not inserted;1: The pedal is inserted', 'is_signed_var': False, 'len': 1, 'name': 'DBS_PedaiFlag', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'bool'}
  bool dbs_pedaiflag(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 40, 'description': 'current', 'is_signed_var': False, 'len': 8, 'name': 'DBS_Ref_Iq', 'offset': -20.0, 'order': 'intel', 'physical_range': '[-20|107.5]', 'physical_unit': '', 'precision': 0.5, 'type': 'double'}
  double dbs_ref_iq(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 8, 'is_signed_var': False, 'len': 8, 'name': 'DBS_Work_Mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|2]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long dbs_work_mode(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 16, 'description': 'Brake pressure request response, DBS execution completed response is valid 0x0:Not ACK 0x1: ACK', 'is_signed_var': False, 'len': 8, 'name': 'BrakePressureReqACK', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long brakepressurereqack(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 48, 'is_signed_var': False, 'len': 4, 'name': 'DBS_RollingCounter', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|15]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long dbs_rollingcounter(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 6, 'description': 'Parking time warning signal', 'is_signed_var': False, 'len': 2, 'name': 'DBS_Park_Warning', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long dbs_park_warning(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 32, 'description': 'Accelerator pedal(0%~100%)', 'is_signed_var': False, 'len': 8, 'name': 'DBS_PeadalOpening', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|100]', 'physical_unit': '%', 'precision': 1.0, 'type': 'long long'}
  long long dbs_peadalopening(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 56, 'description': 'Checksum', 'is_signed_var': False, 'len': 8, 'name': 'DBS_CheckSum', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|255]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long dbs_checksum(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 24, 'description': 'Front brake system pressure feedback', 'is_signed_var': False, 'len': 8, 'name': 'DBS_HP_pressure', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|8]', 'physical_unit': 'Mpa', 'precision': 0.1, 'type': 'double'}
  double dbs_hp_pressure(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': '0:System No Fault 1:System Waring;2:System Fault', 'is_signed_var': False, 'len': 2, 'name': 'DBS_System_Status', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|3]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
  long long dbs_system_status(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



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

class Vcudbsrequest154report : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Vcudbsrequest154report();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 24, 'description': 'ABS working flag bit0: off; 1: on', 'is_signed_var': False, 'len': 8, 'name': 'VCU_ABS_Active', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_abs_active(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'description': 'VCU brake request Enable bit 0: power assist mode; 1 On-line mode', 'is_signed_var': False, 'len': 8, 'name': 'VCU_DBS_Request_Flag', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|1]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_dbs_request_flag(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 16, 'description': 'Sending target pressure', 'is_signed_var': False, 'len': 8, 'name': 'VCU_DBS_Pressure_Request', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|8]', 'physical_unit': 'Mpa', 'precision': 0.1, 'type': 'double'}
  double vcu_dbs_pressure_request(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 8, 'description': 'Exhaust mode (0: wire mode, 1: exhaust mode)', 'is_signed_var': False, 'len': 8, 'name': 'VCU_DBS_Work_Mode', 'offset': 0.0, 'order': 'intel', 'physical_range': '[0|0]', 'physical_unit': '', 'precision': 1.0, 'type': 'long long'}
  long long vcu_dbs_work_mode(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



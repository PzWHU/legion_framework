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

class Remotet10controlshake210breport : public ::legion::driver::drivers::ProtocolData<
                    ::legion::drivers::ChassisDetail> {
 public:
  static const int32_t ID;
  Remotet10controlshake210breport();
  void Parse(const std::uint8_t* bytes, int32_t length,
                     ChassisDetail* chassis) const override;

 private:

  // config detail: {'bit': 32, 'is_signed_var': True, 'len': 16, 'name': 'Remote_Y1_Longitudinal_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-450|450]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
  long long remote_y1_longitudinal_control(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'bit': 0, 'is_signed_var': True, 'len': 16, 'name': 'Remote_X2_Lateral_Control', 'offset': 0.0, 'order': 'intel', 'physical_range': '[-450|450]', 'physical_unit': 'N/A', 'precision': 1.0, 'type': 'long long'}
  long long remote_x2_lateral_control(const std::uint8_t* bytes, const int32_t length) const;
};

}  // namespace patrol
}  // namespace drivers
}  // namespace legion



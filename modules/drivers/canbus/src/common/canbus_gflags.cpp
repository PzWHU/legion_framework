#include <limits>
#include "canbus_gflags.h"

DEFINE_string(control_config_file, "./conf/drivers/canbus/canbus.json",
              "canbus module config file");

DEFINE_int32(state_mahine_spin_duration, 10,"Loop rate for  state machine spin");

DEFINE_string(state_machine_log_dir, "./log/state_machine/","state_machine_log_dir");

DEFINE_bool(state_machine_debug, true, "state_machine_debug");

DEFINE_bool(had_remote_state_machine_log_enable, true,"had_remote_state_machine_log_enable");

DEFINE_string(had_remote_state_machine_file,"./conf/state_machine/had_remote_state_machine.json","had_remote_state_machine_file");

DEFINE_string(had_remote_state_machine_name, "had_remote_state_machine","had_remote_state_machine_name");

DEFINE_string(socket_can_gateway_conf_file,"./conf/can_gateway/can_gateway.json","socket_can_gateway_conf_file");
#pragma once

#include <gflags/gflags.h>

DECLARE_string(control_config_file);
DECLARE_int32(state_mahine_spin_duration);

DECLARE_string(state_machine_log_dir);
DECLARE_bool(state_machine_debug);

DECLARE_bool(had_remote_state_machine_log_enable);
DECLARE_string(had_remote_state_machine_file);
DECLARE_string(had_remote_state_machine_name);
DECLARE_string(socket_can_gateway_conf_file);
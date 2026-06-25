#!/usr/bin/env bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../../.." && pwd)"

cd "${PROJECT_ROOT}"

source /opt/ros/humble/setup.bash
source "${PROJECT_ROOT}/modules/message/ros2/install/setup.bash"

exec /usr/bin/python3.10 "${SCRIPT_DIR}/publish_fake_vla_inputs.py"

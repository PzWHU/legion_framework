#!/usr/bin/env bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../../.." && pwd)"

cd "${PROJECT_ROOT}"

source /opt/ros/humble/setup.bash
source "${PROJECT_ROOT}/modules/message/ros2/install/setup.bash"

BIN="${SCRIPT_DIR}/../bin/vla_gateway"
CONF="${SCRIPT_DIR}/../bin/conf/vla_gateway.json"
if [[ -n "$1" ]]; then
    # 支持相对路径或绝对路径传入配置文件
    CONF="$(cd "${SCRIPT_DIR}/.." && realpath -m "$1")"
fi

if [[ ! -x "${BIN}" ]]; then
    echo "Error: ${BIN} not found or not executable. Please build first." >&2
    exit 1
fi

if [[ ! -f "${CONF}" ]]; then
    echo "Error: config file ${CONF} not found." >&2
    exit 1
fi

echo "Starting VLA_Gateway..."
echo "  binary: ${BIN}"
echo "  config: ${CONF}"
exec "${BIN}" "${CONF}"

#!/bin/bash

# ======================================
# Legion Framework ROS2 环境变量配置
# 用于设置 ROS2 通信所需的环境变量
# ======================================

# 加载 DDS 配置
_SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
source "${_SCRIPT_DIR}/load_dds_config.sh"

# 基础 ROS2 环境
source /opt/ros/galactic/setup.bash

# 工作空间
source /home/beacon/legion_framework/modules/message/ros2/install/setup.bash

echo "========================================"
echo "ROS2 环境变量已配置"
echo "========================================"
echo "DDS_TYPE: $DDS_TYPE"
echo "RMW_IMPLEMENTATION: $RMW_IMPLEMENTATION"
echo "ROS_DOMAIN_ID: $ROS_DOMAIN_ID"
if [ "$DDS_TYPE" = "cyclonedds" ]; then
    echo "CYCLONEDDS_URI: $CYCLONEDDS_URI"
else
    echo "FASTRTPS_DEFAULT_PROFILES_FILE: $FASTRTPS_DEFAULT_PROFILES_FILE"
fi
echo "========================================"

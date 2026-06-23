#!/bin/bash

# ================================================
# Legion Framework DDS 配置加载库
# 所有 scripts 目录下的脚本应通过以下方式加载：
#   source "$(dirname "$0")/load_dds_config.sh"
#
# 加载后将设置以下环境变量：
#   DDS_TYPE              - DDS 类型 (cyclonedds / fastdds)
#   RMW_IMPLEMENTATION    - RMW 实现
#   CYCLONEDDS_URI        - CycloneDDS 配置文件路径 (仅 cyclonedds)
#   CYCLONEDDS_TRANSPORT   - 传输模式 (shm/udp/auto)
#   FASTRTPS_DEFAULT_PROFILES_FILE - FastDDS 配置文件路径 (仅 fastdds)
#   ROS_DOMAIN_ID         - ROS 域 ID
#   MY_IP                 - 本机 IP 地址
#   MY_INTERFACE          - 本机网卡名称
#   TRANSPORT_MODE        - 传输模式 (auto/udp/shm)
#   DISCOVERY_SERVER_PRIMARY - Discovery Server 主地址
#   DISCOVERY_SERVER_BACKUP  - Discovery Server 备地址
# ================================================

# 获取配置脚本所在目录
_SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# 默认配置文件路径
_DDS_CONFIG_FILE="${_SCRIPT_DIR}/dds_config.conf"

# 如果环境变量指向了外部配置文件，也支持
if [ -n "${DDS_CONFIG_FILE:-}" ] && [ -f "$DDS_CONFIG_FILE" ]; then
    _DDS_CONFIG_FILE="$DDS_CONFIG_FILE"
fi

# ================================================
# 应用配置
# ================================================

# 清理可能残留的环境变量，避免继承旧值
unset CYCLONEDDS_TRANSPORT

# 保存原始环境变量（用于紧急回退：环境变量优先于配置文件）
_ORIG_TRANSPORT_MODE="$TRANSPORT_MODE"
_ORIG_DDS_TYPE="$DDS_TYPE"

# 加载配置文件（如果存在）
if [ -f "$_DDS_CONFIG_FILE" ]; then
    # shellcheck source=/dev/null
    source "$_DDS_CONFIG_FILE"
else
    echo "[WARN] DDS 配置文件不存在: $_DDS_CONFIG_FILE，使用默认值"
fi

# DDS 实现选择：环境变量优先，配置文件兜底
DDS_TYPE="${_ORIG_DDS_TYPE:-${DDS_TYPE:-cyclonedds}}"

# 传输模式：环境变量优先，配置文件兜底
TRANSPORT_MODE="${_ORIG_TRANSPORT_MODE:-${TRANSPORT_MODE:-auto}}"

# ROS_DOMAIN_ID（支持环境变量覆盖）
ROS_DOMAIN_ID="${ROS_DOMAIN_ID:-0}"

# 获取工程根目录
if [ -z "$PROJECT_ROOT" ]; then
    PROJECT_ROOT="$(cd "${_SCRIPT_DIR}/.." && pwd)"
fi

# ================================================
# 网络信息检测
# ================================================

# 检测本机 IP（支持手动覆盖）
if [ -z "$MY_IP" ]; then
    _detected_ip=$(ip -4 addr show scope global 2>/dev/null | grep -oP 'inet \K[\d.]+' | head -1)
    if [ -n "$_detected_ip" ]; then
        MY_IP="$_detected_ip"
    fi
fi

# 检测本机网卡名（支持手动覆盖）
if [ -z "$MY_INTERFACE" ]; then
    _detected_iface=$(ip -4 route | grep default | head -1 | awk '{print $5}')
    if [ -n "$_detected_iface" ]; then
        MY_INTERFACE="$_detected_iface"
    fi
fi

# ================================================
# 选择机器专用的 CycloneDDS 配置文件
# ================================================

# 支持环境变量 DDS_CONFIG_IP 强制指定（如 supervisord 中），否则根据本机 IP 自动选择
_DDS_TARGET_IP="${DDS_CONFIG_IP:-${MY_IP}}"
if [ -n "$_DDS_TARGET_IP" ]; then
    _MACHINE_XML="${PROJECT_ROOT}/config/ros_cyclonedds_${_DDS_TARGET_IP}.xml"
    if [ -f "$_MACHINE_XML" ]; then
        _CYCLONEDDS_CONFIG="$_MACHINE_XML"
    else
        _CYCLONEDDS_CONFIG="${PROJECT_ROOT}/config/ros_cyclonedds.xml"
    fi
else
    _CYCLONEDDS_CONFIG="${PROJECT_ROOT}/config/ros_cyclonedds.xml"
fi

# ================================================
# 根据 DDS 类型设置 RMW 环境变量
# ================================================
case "$DDS_TYPE" in
    fastdds|fastrtps)
        export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
        export RCL_ASSERT_RMW_ID_MATCHES=rmw_fastrtps_cpp
        export FASTRTPS_DEFAULT_PROFILES_FILE="$PROJECT_ROOT/config/ros_fastdds.xml"
        unset CYCLONEDDS_URI
        unset CYCLONEDDS_TRANSPORT

        # 根据 TRANSPORT_MODE 控制共享内存
        # auto: 启用 SHM，FastDDS 内部自动选择（本机 SHM，跨机 UDP）
        case "$TRANSPORT_MODE" in
            on|shm|auto)
                unset ROSTOPICS_DISABLE_SHMEM
                ;;
            off|udp|*)
                export ROSTOPICS_DISABLE_SHMEM=1
                ;;
        esac
        ;;
    cyclonedds)
        export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
        export RCL_ASSERT_RMW_ID_MATCHES=rmw_cyclonedds_cpp
        export CYCLONEDDS_URI="file://${_CYCLONEDDS_CONFIG}"
        unset FASTRTPS_DEFAULT_PROFILES_FILE

        # 根据 TRANSPORT_MODE 设置传输层
        # auto: 同时启用 SHM + UDP，CycloneDDS 内部自动选择（本机 SHM，跨机 UDP）
        case "$TRANSPORT_MODE" in
            off|udp)
                export CYCLONEDDS_TRANSPORT=udp
                ;;
            on|shm)
                export CYCLONEDDS_TRANSPORT=shm
                ;;
            auto|*)
                export CYCLONEDDS_TRANSPORT=auto
                ;;
        esac
        ;;
    *)
        echo "[WARN] 未知的 DDS_TYPE=$DDS_TYPE，使用默认 cyclonedds"
        export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
        export RCL_ASSERT_RMW_ID_MATCHES=rmw_cyclonedds_cpp
        export CYCLONEDDS_URI="file://${_CYCLONEDDS_CONFIG}"
        unset FASTRTPS_DEFAULT_PROFILES_FILE
        export CYCLONEDDS_TRANSPORT=auto
        ;;
esac

# 导出所有配置变量（使调用脚本可以直接使用）
export PROJECT_ROOT
export DDS_TYPE
export ROS_DOMAIN_ID
export MY_IP
export MY_INTERFACE
export TRANSPORT_MODE
export DISCOVERY_SERVER_PRIMARY
export DISCOVERY_SERVER_BACKUP

# 清理临时变量
unset _SCRIPT_DIR
unset _DDS_CONFIG_FILE
unset _DDS_TARGET_IP
unset _MACHINE_XML
unset _CYCLONEDDS_CONFIG
unset _detected_ip
unset _detected_iface

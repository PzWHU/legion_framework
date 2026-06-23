#!/bin/bash

# ======================================
# ROS 2 环境配置
# ======================================

source /opt/ros/galactic/setup.bash

# ==============================================
# DDS 配置加载
# ==============================================
source "$(dirname "$0")/load_dds_config.sh"

# Discovery Server 配置（可选，仅 FastDDS 使用）
if [ -n "${DISCOVERY_SERVER_PRIMARY:-}" ] && [ -z "${ROS_DISCOVERY_SERVER:-}" ]; then
    export ROS_DISCOVERY_SERVER="${DISCOVERY_SERVER_PRIMARY}"
fi

# ======================================
# 函数定义
# ======================================

setting(){
    echo "正在优化系统参数..."
    
    # ========== sudo 权限自动配置 ==========
    SUDO_PASSWORD="zaiwu7788"
    
    apply_sysctl() {
        local cmd="sysctl -w $1=$2"
        if [ "$EUID" -ne 0 ]; then
            echo "$SUDO_PASSWORD" | sudo -S $cmd > /dev/null 2>&1
        else
            $cmd > /dev/null 2>&1
        fi
    }
    
    # ========== 网络缓冲区优化 ==========
    apply_sysctl net.core.rmem_max 268435456
    apply_sysctl net.core.wmem_max 268435456
    apply_sysctl net.core.rmem_default 1048576
    apply_sysctl net.core.wmem_default 1048576
    
    # ========== 共享内存优化 ==========
    apply_sysctl kernel.shmmax 8589934592
    apply_sysctl kernel.shmall 2097152
    apply_sysctl kernel.shmmni 4096
    
    # ========== 实时性优化 ==========
    apply_sysctl kernel.sched_rt_runtime_us -1
    apply_sysctl vm.swappiness 0
    apply_sysctl vm.overcommit_memory 1
    
    # ========== 消息队列优化 ==========
    apply_sysctl kernel.msgmax 65536
    apply_sysctl kernel.msgmnb 65536
    
    # ========== 文件系统优化 ==========
    apply_sysctl fs.file-max 1000000
    apply_sysctl fs.inotify.max_user_instances 1024
    apply_sysctl fs.aio-max-nr 1048576
    
    # ========== 网络拥塞控制优化 ==========
    if [ "$EUID" -ne 0 ]; then
        echo "$SUDO_PASSWORD" | sudo -S sysctl -w net.core.default_qdisc=fq > /dev/null 2>&1
        echo "$SUDO_PASSWORD" | sudo -S sysctl -w net.ipv4.tcp_congestion_control=htcp > /dev/null 2>&1
    else
        sysctl -w net.core.default_qdisc=fq > /dev/null 2>&1
        sysctl -w net.ipv4.tcp_congestion_control=htcp > /dev/null 2>&1
    fi
    
    # ========== 进程限制优化 ==========
    ulimit -n 65536 2>/dev/null || true
    ulimit -l unlimited 2>/dev/null || true
    
    echo "系统优化已完成"
    echo "- 网络缓冲区: 256MB"
    echo "- 共享内存: 8GB"
    echo "- 文件句柄: 65536"
    echo "- 实时调度: 已启用"
}

canbus()
{
    cd $PROJECT_ROOT/modules/message/ros2
    source install/setup.bash
    cd $PROJECT_ROOT/modules/drivers/canbus/bin
    ./canbus
}

start_all()
{
    echo "=========================================="
    echo "一键启动 Legion Framework 系统"
    echo "=========================================="
    
    # 1. 启动 Discovery Server
    echo ""
    echo "[1/3] 启动 Discovery Server..."
    discovery_server
    
    # 2. 打印配置信息
    echo ""
    echo "[2/3] 当前配置:"
    echo "  - DDS_TYPE: $DDS_TYPE"
    echo "  - RMW_IMPLEMENTATION: $RMW_IMPLEMENTATION"
    echo "  - ROS_DOMAIN_ID: $ROS_DOMAIN_ID"
    echo "  - ROS_DISCOVERY_SERVER: ${ROS_DISCOVERY_SERVER:-未设置}"
    if [ "$DDS_TYPE" = "cyclonedds" ]; then
        echo "  - CYCLONEDDS_URI: $CYCLONEDDS_URI"
        echo "  - CYCLONEDDS_TRANSPORT: $CYCLONEDDS_TRANSPORT"
    else
        echo "  - FASTRTPS_DEFAULT_PROFILES_FILE: $FASTRTPS_DEFAULT_PROFILES_FILE"
    fi
    
    # 3. 启动各模块
    echo ""
    echo "[3/3] 启动各模块..."
    echo "  使用以下命令启动各模块:"
    echo "    ./handle_autostart.sh canbus"
    echo "    ./handle_autostart.sh routing"
    echo "    ./handle_autostart.sh prediction"
    echo "    ./handle_autostart.sh planning"
    echo "    ./handle_autostart.sh control"
    echo "    ./handle_autostart.sh legion_bridge"
    echo ""
    echo "=========================================="
}

routing()
{
    cd $PROJECT_ROOT/modules/message/ros2
    source install/setup.bash
    cd $PROJECT_ROOT/modules/routing/bin
    ./routing
}

prediction()
{
    cd $PROJECT_ROOT/modules/message/ros2
    source install/setup.bash
    cd $PROJECT_ROOT/modules/prediction/bin
    ./prediction
}

planning()
{
    cd $PROJECT_ROOT/modules/message/ros2
    source install/setup.bash
    cd $PROJECT_ROOT/modules/planning/bin
    ./planning
}

control()
{
    cd $PROJECT_ROOT/modules/message/ros2
    source install/setup.bash
    cd $PROJECT_ROOT/modules/control/bin
    ./control
}

legion_bridge()
{
    cd $PROJECT_ROOT/modules/message/ros2
    source install/setup.bash
    cd $PROJECT_ROOT/modules/legion_bridge/bin
    ./legion_bridge
}

zenoh_bridge()
{
    echo "启动 Zenoh Bridge ROS2DDS..."

    # 检查是否已运行
    if pgrep -f "zenoh-bridge-ros2dds" > /dev/null; then
        echo "Zenoh Bridge 已在运行"
        return 0
    fi

    ZENOH_BRIDGE_BIN="/usr/local/zenoh-bridge-ros2dds"

    # 根据本机 IP 选择配置：优先使用 .yaml 格式（完整配置），兜底 .json5
    if [ -n "${MY_IP}" ] && [ -f "${PROJECT_ROOT}/config/zenoh_bridge_${MY_IP}.yaml" ]; then
        ZENOH_CONFIG="${PROJECT_ROOT}/config/zenoh_bridge_${MY_IP}.yaml"
    elif [ -n "${MY_IP}" ] && [ -f "${PROJECT_ROOT}/config/zenoh_bridge_${MY_IP}.json5" ]; then
        ZENOH_CONFIG="${PROJECT_ROOT}/config/zenoh_bridge_${MY_IP}.json5"
    elif [ -f "${PROJECT_ROOT}/config/zenoh_bridge.yaml" ]; then
        ZENOH_CONFIG="${PROJECT_ROOT}/config/zenoh_bridge.yaml"
    else
        ZENOH_CONFIG="${PROJECT_ROOT}/config/zenoh_bridge.json5"
    fi

    if [ ! -x "$ZENOH_BRIDGE_BIN" ]; then
        echo "错误: $ZENOH_BRIDGE_BIN 不存在或无执行权限"
        return 1
    fi

    if [ ! -f "$ZENOH_CONFIG" ]; then
        echo "错误: 配置文件不存在: $ZENOH_CONFIG"
        return 1
    fi

    echo "  - 二进制: $ZENOH_BRIDGE_BIN"
    echo "  - 配置: $ZENOH_CONFIG"
    echo "  - DDS Domain: ${ROS_DOMAIN_ID:-0}"
    echo "  - 本机 IP: ${MY_IP:-192.168.1.101}"
    echo "  - 对端 IP: 192.168.1.102"
    echo "  - 模式: peer"

    exec "$ZENOH_BRIDGE_BIN" \
        -c "$ZENOH_CONFIG" \
        --domain "${ROS_DOMAIN_ID:-0}" \
        2>&1
}

zenoh_bridge_stop()
{
    echo "停止 Zenoh Bridge..."
    pkill -f "zenoh-bridge-ros2dds"
    if [ $? -eq 0 ]; then
        echo "Zenoh Bridge 已停止"
    else
        echo "Zenoh Bridge 未运行"
    fi
}

zenoh_bridge_status()
{
    if pgrep -f "zenoh-bridge-ros2dds" > /dev/null; then
        echo "Zenoh Bridge 状态: 运行中"
        echo "PID: $(pgrep -f zenoh-bridge-ros2dds)"
        echo ""
        echo "最近日志:"
        tail -n 20 /home/beacon/legion_framework/supervisor_logs/zenoh_bridge.log 2>/dev/null || echo "日志文件不存在"
    else
        echo "Zenoh Bridge 状态: 未运行"
    fi
}

wxapp_server()
{
    cd $PROJECT_ROOT/modules/message/ros2
    source install/setup.bash
    cd $PROJECT_ROOT/modules/drivers/wxapp
    python3 server.py
}

$1

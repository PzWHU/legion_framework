#!/bin/bash

# ======================================
# ROS2 通信诊断脚本
# 用于诊断 A、B、C 三台机器之间的通信问题
# ======================================

set -e

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# 加载 DDS 配置
source "$(dirname "$0")/load_dds_config.sh"

echo "========================================"
echo "ROS2 通信诊断脚本"
echo "========================================"

# 1. 检查环境变量
echo ""
echo -e "${GREEN}[1/6] 检查环境变量${NC}"
echo "-----------------------------------"
echo "DDS_TYPE: ${DDS_TYPE:-未设置}"
echo "ROS_DOMAIN_ID: ${ROS_DOMAIN_ID:-未设置}"
echo "RMW_IMPLEMENTATION: ${RMW_IMPLEMENTATION:-未设置}"
echo "CYCLONEDDS_URI: ${CYCLONEDDS_URI:-未设置}"
echo "CYCLONEDDS_TRANSPORT: ${CYCLONEDDS_TRANSPORT:-未设置}"
echo "FASTRTPS_DEFAULT_PROFILES_FILE: ${FASTRTPS_DEFAULT_PROFILES_FILE:-未设置}"
echo "ROS_DISCOVERY_SERVER: ${ROS_DISCOVERY_SERVER:-未设置}"

# 2. 检查 Discovery Server
echo ""
echo -e "${GREEN}[2/6] 检查 Discovery Server 状态${NC}"
echo "-----------------------------------"
if pgrep -f "fast-discovery-server" > /dev/null; then
    echo -e "${GREEN}✓ Discovery Server 正在运行${NC}"
    ps aux | grep fast-discovery-server | grep -v grep
    NETSTAT_RESULT=$(netstat -tlnp 2>/dev/null | grep 11811 || ss -tlnp | grep 11811)
    if [ -n "$NETSTAT_RESULT" ]; then
        echo "端口 11811 监听状态:"
        echo "$NETSTAT_RESULT"
    else
        echo -e "${YELLOW}⚠ 警告: 端口 11811 可能未正常监听${NC}"
    fi
else
    echo -e "${RED}✗ Discovery Server 未运行${NC}"
fi

# 3. 检查本机 IP
echo ""
echo -e "${GREEN}[3/6] 检查网络配置${NC}"
echo "-----------------------------------"
MY_IP=$(hostname -I | awk '{print $1}')
echo "本机 IP: ${MY_IP}"
echo "所有 IP:"
hostname -I

# 4. 检查防火墙
echo ""
echo -e "${GREEN}[4/6] 检查防火墙状态${NC}"
echo "-----------------------------------"
if command -v ufw &> /dev/null; then
    UFW_STATUS=$(sudo ufw status 2>/dev/null | head -1)
    echo "UFW 状态: $UFW_STATUS"
    if echo "$UFW_STATUS" | grep -q "active"; then
        echo -e "${YELLOW}⚠ 警告: UFW 防火墙已启用${NC}"
        echo "允许的端口:"
        sudo ufw status | grep -E "^[^#]" | grep ALLOW || true
    fi
else
    echo "UFW 未安装"
fi

# 5. 检查 ROS2 话题
echo ""
echo -e "${GREEN}[5/6] 检查 ROS2 话题（需要 source 环境）${NC}"
echo "-----------------------------------"
if command -v ros2 &> /dev/null; then
    echo "尝试获取话题列表..."
    # 不使用 source，因为脚本本身应该已经处理了环境
    timeout 5 ros2 topic list 2>/dev/null || echo -e "${YELLOW}无法获取话题列表（ros2 命令可能未配置）${NC}"
else
    echo -e "${YELLOW}ros2 命令未找到${NC}"
fi

# 6. 检查 DDS 配置文件
echo ""
echo -e "${GREEN}[6/6] 检查 DDS 配置文件${NC}"
echo "-----------------------------------"
if [ "$DDS_TYPE" = "cyclonedds" ]; then
    CYCLONEDDS_CONFIG="/home/beacon/legion_framework/config/ros_cyclonedds.xml"
    if [ -f "$CYCLONEDDS_CONFIG" ]; then
        echo "配置文件存在: $CYCLONEDDS_CONFIG"
        echo ""
        echo "网络接口配置:"
        grep -A 2 "NetworkInterfaceAddress" "$CYCLONEDDS_CONFIG" | head -5 || echo "未找到网络接口配置"
        echo ""
        echo "对等节点配置 (Peers):"
        grep -A 10 "<Peers>" "$CYCLONEDDS_CONFIG" | grep "Peer" || echo "未找到对等节点配置"
        echo ""
        echo "多播配置:"
        grep "AllowMulticast" "$CYCLONEDDS_CONFIG" || echo "未找到多播配置"
    else
        echo -e "${RED}✗ 配置文件不存在: $CYCLONEDDS_CONFIG${NC}"
    fi
else
    FASTDDS_CONFIG="/home/beacon/legion_framework/config/ros_fastdds.xml"
    if [ -f "$FASTDDS_CONFIG" ]; then
        echo "配置文件存在: $FASTDDS_CONFIG"
        echo ""
        echo "IP 白名单配置:"
        grep -A 10 "interfaceWhiteList" "$FASTDDS_CONFIG" || echo "未找到白名单配置"
        if grep -q "<transport_id>shm_transport</transport_id>" "$FASTDDS_CONFIG"; then
            SHM_LINE=$(grep -n "<transport_id>shm_transport</transport_id>" "$FASTDDS_CONFIG" | cut -d: -f1)
            COMMENTED=$(sed -n "${SHM_LINE},$((SHM_LINE-5))p" "$FASTDDS_CONFIG" | grep -c "<!--")
            UNCOMMENTED=$(sed -n "${SHM_LINE},$((SHM_LINE+5))p" "$FASTDDS_CONFIG" | grep -c "-->")
            if [ "$COMMENTED" -eq "$UNCOMMENTED" ]; then
                echo -e "${YELLOW}⚠ 警告: 共享内存传输已启用，跨机器通信建议禁用${NC}"
            else
                echo -e "${GREEN}✓ 共享内存传输已禁用${NC}"
            fi
        fi
    else
        echo -e "${RED}✗ 配置文件不存在: $FASTDDS_CONFIG${NC}"
    fi
fi

# 7. 生成诊断报告
echo ""
echo -e "${GREEN}========================================${NC}"
echo "诊断完成"
echo "========================================"
echo ""
echo "当前 DDS 类型: $DDS_TYPE"
echo "RMW 实现: $RMW_IMPLEMENTATION"
echo ""
echo "如果问题仍然存在，请检查："
if [ "$DDS_TYPE" = "cyclonedds" ]; then
    echo "1. CYCLONEDDS_URI 是否正确配置（应指向 ros_cyclonedds_<本机IP>.xml）"
    echo "2. config/ros_cyclonedds_*.xml 中的 NetworkInterfaceAddress 和 Peers 是否正确"
    echo "3. config/scripts/dds_config.conf 中 TRANSPORT_MODE 是否正确 (auto/udp/shm)"
    echo "3. 网络防火墙是否允许 UDP 多播 (239.255.0.1:7401) 和单播通信"
else
    echo "1. Fast-DDS 相关配置是否正确"
    echo "2. config/ros_fastdds.xml 中的 interfaceWhiteList 是否包含所有机器 IP"
    echo "3. 网络防火墙是否允许 UDP 通信"
fi
echo "4. 多机器环境下，所有机器使用相同的 DDS 类型"
echo "5. 确保执行 'source ros2_env.sh' 以加载正确的环境变量"
echo ""
echo "切换 DDS 类型：编辑 scripts/dds_config.conf 中的 DDS_TYPE"
echo ""
echo "完整诊断命令（保存到文件）:"
echo "  ./ros2_diagnosis.sh 2>&1 | tee diagnosis_$(date +%Y%m%d_%H%M%S).log"

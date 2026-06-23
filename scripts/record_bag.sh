#!/bin/bash
# ROS2 录包脚本 - 自动排除包含 point_cloud 的 topic

# 启用作业控制，确保SIGINT能传递给前台进程组
set -m

# 信号处理 - 确保Ctrl+C能正常中断录制
cleanup() {
    echo ""
    echo "录制被中断"
    # 杀死所有子进程
    kill $(jobs -p) 2>/dev/null
    exit 130
}
trap cleanup INT TERM

# ==================== 用户配置区域 ====================
# 加载 DDS 配置（设置 PROJECT_ROOT 和 RMW 变量）
source "$(dirname "$0")/load_dds_config.sh"

DEFAULT_BAG_PATH="$PROJECT_ROOT/bag"
# ===================================================

BAG_NAME=${1:-"rosbag_$(date +%Y%m%d_%H%M%S)"}
BAG_PATH=${2:-"$DEFAULT_BAG_PATH"}
MAX_BAG_SIZE=${3:-"0"}
MAX_DURATION=${4:-"0"}

echo "=========================================="
echo "  ROS2 智能录包工具 (排除 point_cloud)"
echo "=========================================="
echo "包名: $BAG_NAME"
echo "路径: $BAG_PATH"
echo "DDS后端: $RMW_IMPLEMENTATION"
echo ""

# ==================== 环境初始化 ====================
echo "[0/4] 初始化ROS2环境..."

if [ -f "/opt/ros/foxy/setup.bash" ]; then
    source /opt/ros/foxy/setup.bash
elif [ -f "/opt/ros/galactic/setup.bash" ]; then
    source /opt/ros/galactic/setup.bash
elif [ -f "/opt/ros/humble/setup.bash" ]; then
    source /opt/ros/humble/setup.bash
elif [ -f "/opt/ros/rolling/setup.bash" ]; then
    source /opt/ros/rolling/setup.bash
fi

for ws in "$PROJECT_ROOT/modules/message/ros2/install/setup.bash"; do
    [ -f "$ws" ] && source "$ws"
done

if [ -z "$ROS_DISTRO" ]; then
    echo "错误: 未检测到ROS2环境"
    exit 1
fi

echo "      ✓ ROS2 $ROS_DISTRO"
echo "      ✓ DDS: $RMW_IMPLEMENTATION"

# ==================== 创建目录 ====================
echo "[1/4] 检查保存目录..."
BAG_PATH="${BAG_PATH/#\~/$HOME}"

if [ ! -d "$BAG_PATH" ]; then
    mkdir -p "$BAG_PATH"
    echo "      ✓ 创建目录: $BAG_PATH"
else
    echo "      ✓ 目录存在: $BAG_PATH"
fi

AVAILABLE_SPACE=$(df -h "$BAG_PATH" | awk 'NR==2 {print $4}')
echo "      可用空间: $AVAILABLE_SPACE"

# ==================== Topic扫描（批量优化版） ====================
echo "[2/4] 扫描活跃topics..."
ALL_TOPICS=$(ros2 topic list 2>/dev/null)

if [ -z "$ALL_TOPICS" ]; then
    echo "警告: 未检测到任何活跃topic"
    exit 1
fi

TOPIC_COUNT=$(echo "$ALL_TOPICS" | wc -l)
echo "      发现 $TOPIC_COUNT 个活跃topic"

# ==================== 批量检测类型（关键优化） ====================
echo "[3/4] 分析topic类型..."

# 使用 ros2 topic list -t 一次性获取所有类型（最快）
TOPIC_WITH_TYPES=$(ros2 topic list -t 2>/dev/null)

EXCLUDED_TOPICS=()
INCLUDED_TOPICS=()

# 逐行解析 topic list -t 的输出
while IFS= read -r line; do
    # 格式: /topic_name [package/msg/Type]
    if [[ "$line" =~ \[.*\] ]]; then
        topic=$(echo "$line" | awk '{print $1}')
        msg_type=$(echo "$line" | grep -oP '\[\K[^\]]+')
        
        # 检查是否包含 point_cloud 相关类型
        if echo "$msg_type" | grep -qi "pointcloud\|point_cloud\|PointCloud\|PointCloud2"; then
            EXCLUDED_TOPICS+=("$topic")
            echo "      ❌ 排除: $topic [$msg_type]"
        else
            INCLUDED_TOPICS+=("$topic")
        fi
    fi
done <<< "$TOPIC_WITH_TYPES"

# ==================== 执行录制 ====================
echo "[4/4] 准备录制..."

if [ ${#INCLUDED_TOPICS[@]} -eq 0 ]; then
    echo "错误: 所有topic都被排除了"
    exit 1
fi

echo ""
echo "------------------------------------------"
echo "保存位置: $BAG_PATH/$BAG_NAME"
echo "排除统计: ${#EXCLUDED_TOPICS[@]} 个point_cloud topic"
echo "录制统计: ${#INCLUDED_TOPICS[@]} 个topic"
echo "DDS后端: $RMW_IMPLEMENTATION"
echo "------------------------------------------"

# 显示前10个录制的topics
echo ""
echo "即将录制的topics (前10个):"
for i in "${!INCLUDED_TOPICS[@]}"; do
    if [ $i -lt 10 ]; then
        echo "  ✓ ${INCLUDED_TOPICS[$i]}"
    elif [ $i -eq 10 ]; then
        echo "  ... 还有 $((${#INCLUDED_TOPICS[@]} - 10)) 个"
        break
    fi
done

echo ""
read -p "按 Enter 开始录制，或 Ctrl+C 取消..."

# 构建并执行命令
echo ""
echo "🎬 开始录制..."

# 构建命令参数数组
RECORD_ARGS=("-o" "$BAG_PATH/$BAG_NAME" "--compression-mode" "file" "--compression-format" "zstd")

[ "$MAX_BAG_SIZE" -gt 0 ] && RECORD_ARGS+=("-b" "$MAX_BAG_SIZE")
[ "$MAX_DURATION" -gt 0 ] && RECORD_ARGS+=("-d" "$MAX_DURATION")

# 添加所有 topic 参数
for topic in "${INCLUDED_TOPICS[@]}"; do
    RECORD_ARGS+=("$topic")
done

# 使用 exec 直接执行，确保信号正常传递
exec ros2 bag record "${RECORD_ARGS[@]}"

echo ""
echo "✅ 录制完成: $BAG_PATH/$BAG_NAME"
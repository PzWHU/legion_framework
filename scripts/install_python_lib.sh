#!/bin/bash

# ============================================
# 自动驾驶WebSocket服务器依赖安装脚本
# ============================================

set -e  # 遇到错误立即退出

echo "=========================================="
echo "  开始安装 Python 依赖库"
echo "=========================================="

# 检查Python版本
PYTHON_VERSION=$(python3 --version 2>&1 | awk '{print $2}')
echo "检测到Python版本: $PYTHON_VERSION"

# 升级pip
echo "[1/4] 升级 pip..."
pip3 install --upgrade pip

# 安装第三方Python库
echo "[2/4] 安装第三方Python库..."

# websockets - WebSocket服务器库
pip3 install websockets

# Pillow - 图像处理库 (PIL的fork版本)
pip3 install Pillow

# utm - UTM坐标转换库
pip3 install utm

echo "[3/4] 依赖安装完成！"

# 验证安装
echo "[4/4] 验证安装结果..."
echo ""

check_module() {
    python3 -c "import $1" 2>/dev/null && echo "  ✓ $1 安装成功" || echo "  ✗ $1 安装失败"
}

echo "第三方库验证："
check_module "websockets"
check_module "PIL"
check_module "utm"

echo ""
echo "ROS相关库说明："
echo "  • rospy - 需要安装ROS系统 (ros-melodic-desktop-full 或类似版本)"
echo "  • geometry_msgs, std_msgs, ros_interface.msg - ROS消息包，随ROS安装"

echo ""
echo "=========================================="
echo "  安装完成！"
echo "=========================================="
echo ""
echo "注意：此脚本未安装ROS系统，请手动安装："
echo "  sudo apt-get install ros-melodic-desktop-full"
echo ""
echo "安装ROS后，记得source环境："
echo "  source /opt/ros/melodic/setup.bash"

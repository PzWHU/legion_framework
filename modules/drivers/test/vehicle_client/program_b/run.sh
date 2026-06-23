#!/bin/bash
# 启动程序B的脚本

# 设置工作目录
cd "$(dirname "$0")"

# 激活虚拟环境（如果有）
# source venv/bin/activate

# 运行程序
python3 communication_bridge.py --config config.json


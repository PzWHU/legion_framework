@echo off
REM 启动程序B的Windows批处理脚本

REM 设置工作目录
cd /d %~dp0

REM 激活虚拟环境（如果有）
REM call venv\Scripts\activate.bat

REM 运行程序
python communication_bridge.py --config config.json

pause


# 快速开始指南

## 修改完成情况

✅ 已按照架构迁移文档完成所有修改：
1. ✅ 修改ROS2Publisher类，添加状态订阅功能
2. ✅ 在CommunicationBridge类中添加状态转发方法
3. ✅ 完善指令映射配置
4. ✅ 完善指令处理逻辑
5. ✅ 修改主循环run方法
6. ✅ 编写测试代码

## 快速测试

### 1. 检查ROS2环境
```bash
# 检查ROS2是否安装
ros2 --help

# 如果未安装，需要先安装ROS2
# Ubuntu 20.04: sudo apt install ros-foxy-desktop
# Ubuntu 22.04: sudo apt install ros-humble-desktop
```

### 2. 运行测试脚本
```bash
cd /path/to/vehicle_client/program_b
python3 test_gateway_integration.py
```

测试脚本会自动测试：
- ROS2状态订阅
- 指令发布功能
- 指令映射
- 指令处理逻辑
- 状态转发功能

### 3. 运行主程序
```bash
# 确保ROS2环境已配置
source /opt/ros/foxy/setup.bash  # 或 humble

# 运行程序
python3 communication_bridge.py --config config.json --vehicle-id V001
```

## 验证功能

### 验证ROS2节点
在另一个终端运行：
```bash
# 查看ROS2节点
ros2 node list
# 应该看到: vehicle_V001 (communication_bridge)

# 查看Topic
ros2 topic list
# 应该看到: /vehicle/command 和 /vehicle/status

# 监听指令Topic（查看网关发送的指令）
ros2 topic echo /vehicle/command

# 监听状态Topic（查看车端程序发布的状态）
ros2 topic echo /vehicle/status
```

### 测试状态转发
1. 启动车端程序（server.py）
2. 启动车端网关（communication_bridge.py）
3. 车端程序会每秒发布一次状态
4. 网关应该能接收到状态并转发给MQTT和WebSocket

### 测试指令转发
1. 通过MQTT或WebSocket发送指令到网关
2. 网关应该将指令转发给车端程序
3. 使用 `ros2 topic echo /vehicle/command` 查看指令

## 常见问题

### Q: ROS2初始化失败
**A:** 检查ROS2环境是否正确配置，运行 `source /opt/ros/<ros2_distro>/setup.bash`

### Q: 无法接收状态
**A:** 
1. 检查车端程序是否正在运行
2. 检查Topic名称是否匹配
3. 使用 `ros2 topic list` 查看可用Topic

### Q: WebSocket转发失败
**A:** 
1. 检查是否有WebSocket客户端连接
2. 检查事件循环是否正确运行
3. 查看日志中的错误信息

### Q: 指令映射找不到
**A:** 
1. 检查 `command_mapping.json` 文件是否存在
2. 如果不存在，程序会自动创建默认映射文件
3. 检查指令类型是否正确

## 下一步

1. 启动车端程序
2. 测试完整的通信链路：小程序/云平台 → 车端网关 → 车端程序
3. 验证所有控制指令是否正常工作
4. 验证状态数据是否正确转发

## 需要帮助？

查看详细文档：
- `README_ROS2迁移说明.md` - 详细迁移说明
- `docs/架构迁移-车端网关修改项.md` - 架构迁移文档


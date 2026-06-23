# 车端网关ROS2迁移说明

## 概述

车端网关（communication_bridge.py）已按照架构迁移文档完成修改，添加了ROS2状态订阅和转发功能。

## 主要修改

### 1. ROS2Publisher类增强
- ✅ 添加了状态订阅者（`status_subscriber`）
- ✅ 添加了状态回调函数设置（`set_status_callback`）
- ✅ 添加了状态回调包装函数（`status_callback_wrapper`）

### 2. CommunicationBridge类增强
- ✅ 添加了状态处理函数（`handle_vehicle_status`）
- ✅ 添加了WebSocket转发函数（`forward_status_to_websocket`）
- ✅ 添加了MQTT转发函数（`forward_status_to_mqtt`）
- ✅ 添加了指令值构建函数（`build_command_value`）
- ✅ 完善了指令处理逻辑（`process_commands`）

### 3. 指令映射完善
- ✅ 更新了默认指令映射，包含所有车端程序支持的指令
- ✅ 添加了地图和轨迹相关指令映射

### 4. WebSocket消息处理增强
- ✅ 添加了数据请求消息处理（`request_map`, `get_map_pic`, `get_map_json`, `get_task_json`）

### 5. 主循环优化
- ✅ 减少了sleep时间（从1秒改为0.1秒），提高响应速度
- ✅ 在主循环中添加了ROS2 spin调用，确保状态订阅正常工作

## ROS2 Topic

- **指令发布**: `/vehicle/command` - 向车端程序发送控制指令
- **状态订阅**: `/vehicle/status` - 接收车端程序发布的车辆状态数据

## 运行要求

1. **ROS2环境**: 需要ROS2（Foxy/Humble等）环境
2. **Python依赖**: 
   - `rclpy` - ROS2 Python客户端库
   - `paho-mqtt` - MQTT客户端库
   - `websockets` - WebSocket服务器库
   - 其他原有依赖保持不变

## 配置说明

### config.json示例
```json
{
  "vehicle_id": "V001",
  "mqtt": {
    "broker": "your-mqtt-broker.com",
    "port": 1883,
    "username": "your_username",
    "password": "your_password"
  },
  "websocket": {
    "host": "0.0.0.0",
    "port": 8765
  },
  "ros2": {
    "command_topic": "/vehicle/command",
    "status_topic": "/vehicle/status"
  },
  "command_mapping_file": "command_mapping.json"
}
```

### command_mapping.json
程序会自动生成默认映射文件，包含所有支持的指令类型。

## 运行方式

### 正常运行
```bash
cd /path/to/vehicle_client/program_b
python3 communication_bridge.py --config config.json --vehicle-id V001
```

### 测试运行
```bash
# 运行ROS2集成测试
python3 test_gateway_integration.py
```

## 测试说明

测试脚本 `test_gateway_integration.py` 包含以下测试：

1. **ROS2状态订阅测试**: 测试能否接收车端程序状态
2. **指令发布功能测试**: 测试能否向车端程序发布指令
3. **指令映射测试**: 测试所有指令类型的映射是否正确
4. **指令处理逻辑测试**: 测试指令值构建和处理逻辑
5. **状态转发功能测试**: 测试状态转发函数是否正常工作

## 功能说明

### 状态转发流程

1. **接收状态**: 通过ROS2订阅者接收车端程序发布的状态
2. **处理状态**: 根据状态类型进行分类处理
3. **转发状态**:
   - 车辆状态数据 → 转发给WebSocket客户端和MQTT
   - 地图/轨迹数据 → 只转发给WebSocket客户端

### 指令处理流程

1. **接收指令**: 从MQTT或WebSocket接收指令
2. **优先级处理**: 根据指令来源确定优先级
3. **指令映射**: 将指令类型映射为对应的code
4. **值构建**: 构建符合车端程序要求的消息格式
5. **发布指令**: 通过ROS2发布者发送给车端程序

## 注意事项

1. **ROS2可用性**: 如果ROS2不可用，程序会继续运行但无法与车端程序通信
2. **WebSocket转发**: WebSocket消息转发需要在异步上下文中，当前实现使用线程安全的方式
3. **性能**: 状态转发频率建议保持每秒一次，避免过高频率
4. **错误处理**: 所有ROS2操作都包含异常处理，不会导致程序崩溃

## 故障排查

### ROS2初始化失败
- 检查ROS2环境是否正确配置
- 运行 `source /opt/ros/<ros2_distro>/setup.bash`
- 检查 `rclpy` 是否已安装

### 无法接收状态
- 检查车端程序是否正在运行
- 检查Topic名称是否匹配：`/vehicle/status`
- 使用 `ros2 topic list` 查看可用Topic
- 使用 `ros2 topic echo /vehicle/status` 查看消息

### 无法发布指令
- 检查Topic名称是否匹配：`/vehicle/command`
- 使用 `ros2 topic echo /vehicle/command` 查看是否发送成功
- 检查车端程序是否订阅了该Topic

### WebSocket转发失败
- 检查是否有WebSocket客户端连接
- 检查事件循环是否正确运行
- 查看日志中的错误信息

## 回滚方案

如果需要回滚到旧版本：

1. 移除状态订阅相关代码
2. 移除状态转发函数
3. 恢复原有的指令处理逻辑
4. 恢复原有的主循环sleep时间

建议使用Git版本控制，方便快速回滚。

## 联系支持

如有问题，请查看：
- 架构迁移文档：`docs/架构迁移-车端网关修改项.md`
- 测试日志：运行测试脚本查看详细输出


# 程序B：通信桥接程序

## 功能概述

程序B是车端通信桥接程序，负责处理不同渠道的通信，并将指令转换为ROS2消息发送给程序A。

## 主要功能

1. **MQTT通信**
   - 连接云平台MQTT Broker
   - 接收云平台控制指令
   - 接收小程序在线模式指令
   - 发布车辆信息到云平台

2. **WebSocket通信**
   - 提供WebSocket服务器
   - 接收小程序离线模式指令
   - 支持多客户端连接

3. **ROS2消息发布**
   - 将指令转换为ROS2消息格式
   - 发布到 `/vehicle/command` 主题
   - 消息格式：`{"time": timestamp, "code": code, "value": value}`

4. **指令映射管理**
   - 维护指令类型与code的映射关系
   - 支持动态添加/删除映射
   - 配置文件：`command_mapping.json`

5. **优先级处理**
   - 小程序离线：优先级1（最高）
   - 云平台：优先级2（中等）
   - 小程序在线：优先级3（最低）
   - 使用优先级队列确保高优先级指令优先处理

## 安装依赖

```bash
pip install -r requirements.txt
```

## 配置文件

### config.json

```json
{
  "vehicle_id": "V001",
  "mqtt": {
    "broker": "localhost",
    "port": 1883,
    "username": null,
    "password": null
  },
  "websocket": {
    "host": "0.0.0.0",
    "port": 8765
  },
  "command_mapping_file": "command_mapping.json"
}
```

### command_mapping.json

指令类型与code的映射关系，例如：

```json
{
  "movement_start": 1001,
  "movement_stop": 1002,
  "power_on": 3001,
  "power_off": 3002
}
```

## 使用方法

### 基本运行

```bash
python communication_bridge.py
```

### 指定配置文件

```bash
python communication_bridge.py --config my_config.json
```

### 指定车辆ID

```bash
python communication_bridge.py --vehicle-id V002
```

## 消息格式

### MQTT指令格式（云平台）

```json
{
  "type": "movement_start",
  "params": {
    "speed": 30,
    "angle": 0
  },
  "requestId": "REQ_1234567890",
  "timestamp": "2024-01-01T12:00:00Z"
}
```

### MQTT指令格式（小程序在线）

```json
{
  "type": "control",
  "command_type": "power_on",
  "data": {},
  "requestId": "REQ_1234567890"
}
```

### WebSocket指令格式（小程序离线）

```json
{
  "type": "control",
  "command_type": "movement_forward",
  "params": {
    "speed": 20
  },
  "requestId": "REQ_1234567890"
}
```

### ROS2消息格式（发送给程序A）

```json
{
  "time": 1704110400.123,
  "code": 1001,
  "value": {
    "command_type": "movement_start",
    "data": {
      "speed": 30,
      "angle": 0
    },
    "source": "CLOUD_PLATFORM",
    "request_id": "REQ_1234567890"
  }
}
```

## 优先级说明

指令优先级从高到低：

1. **小程序离线** (MINIPROGRAM_OFFLINE)
   - 通过WebSocket接收
   - 优先级值：1

2. **云平台** (CLOUD_PLATFORM)
   - 通过MQTT接收
   - 主题：`/cloud2vehicle/{vehicleId}/cmd`
   - 优先级值：2

3. **小程序在线** (MINIPROGRAM_ONLINE)
   - 通过MQTT接收
   - 主题：`/wx2cloud/{vehicleId}/cmd`
   - 优先级值：3

## 日志

程序会输出详细的日志信息，包括：
- 连接状态
- 接收到的指令
- 指令处理结果
- 错误信息

日志级别可以通过修改代码中的 `logging.basicConfig` 进行调整。

## 注意事项

1. **ROS2依赖**：如果未安装ROS2，程序会运行在模拟模式，只打印消息而不实际发布。

2. **网络配置**：确保MQTT Broker和WebSocket端口可访问。

3. **权限**：WebSocket服务器默认监听所有网络接口（0.0.0.0），请根据实际需求调整。

4. **线程安全**：优先级队列是线程安全的，可以安全地在多个线程中使用。

## 扩展开发

### 添加新的指令类型

1. 在 `command_mapping.json` 中添加新的映射：
```json
{
  "new_command": 6001
}
```

2. 程序会自动加载新的映射关系。

### 自定义指令处理

可以在 `process_commands` 方法中添加自定义的指令处理逻辑。

## 故障排查

1. **MQTT连接失败**
   - 检查Broker地址和端口
   - 检查用户名和密码
   - 检查网络连接

2. **WebSocket连接失败**
   - 检查端口是否被占用
   - 检查防火墙设置

3. **ROS2消息未发布**
   - 检查ROS2环境是否正确安装
   - 检查程序A是否在运行
   - 查看日志中的错误信息


# 消息流测试文档

## 概述

本文档描述了端到端消息流测试用例，用于验证整个系统的消息流转是否正确。

## 消息流路径

```
前端 → 后端API → MQTT Broker → 车端网关 → ROS2 → 车端程序
                                                      ↓
前端 ← 后端API ← MQTT Broker ← 车端网关 ← ROS2 ← 车端程序
```

### 详细流程

1. **控制指令流（下行）**
   - 前端发送HTTP请求到后端API (`POST /api/vehicles/control`)
   - 后端API构建MQTT消息并发布到 `/cloud2vehicle/{vehicle_id}/cmd`
   - 车端网关订阅MQTT消息，解析指令类型
   - 车端网关根据指令映射转换为ROS2消息，发布到 `/vehicle/command`
   - 车端程序订阅ROS2消息，执行相应操作

2. **状态数据流（上行）**
   - 车端程序发布状态到ROS2 (`/vehicle/status`)
   - 车端网关订阅ROS2状态，接收状态数据
   - 车端网关转发状态到MQTT (`/vehicle2cloud/{vehicle_id}/vehicleinfo`)
   - 后端订阅MQTT状态，更新数据库
   - 前端通过WebSocket或轮询获取最新状态

## 测试用例

### 测试1: 指令映射

**目的**: 验证所有指令类型都能正确映射到对应的代码

**测试内容**:
- 自动驾驶控制: `auto_drive_start` (41), `auto_drive_stop` (40)
- 清扫控制: `clean_start` (11), `clean_stop` (10)
- 洒水控制: `water_start` (21), `water_stop` (20)
- 车辆控制: `call_back` (5001), `set_speed` (1007)
- 功能灯控制: `light1_on` (2101), `light1_off` (2102), 等
- 运动控制: `movement_forward` (1003), `movement_left` (1005), 等

**预期结果**: 所有指令都能正确映射到对应的代码

### 测试2: 指令解析

**目的**: 验证特殊指令类型（movement和light）的解析逻辑

**测试内容**:
- `movement` 指令: 根据 `direction` 生成 `movement_{direction}`
- `light` 指令: 根据 `lightId` 和 `state` 生成 `{lightId}_{state}`
- 普通 `control` 指令: 直接使用 `command_type`

**测试用例**:
```python
# movement指令
{'type': 'movement', 'direction': 'forward'} → 'movement_forward'
{'type': 'movement', 'direction': 'left'} → 'movement_left'

# light指令
{'type': 'control', 'command_type': 'light', 'params': {'lightId': 'light1', 'state': 'on'}} → 'light1_on'

# 普通control指令
{'type': 'control', 'command_type': 'auto_drive_start'} → 'auto_drive_start'
```

**预期结果**: 所有指令都能正确解析为对应的指令类型

### 测试3: 消息去重

**目的**: 验证MQTT QoS=1导致的重复消息能被正确去重

**测试内容**:
- 发送相同 `requestId` 的消息两次
- 验证只有第一条消息被处理

**预期结果**: 重复消息被正确去重，不会重复处理

### 测试4: 指令流 (MQTT → ROS2)

**目的**: 验证控制指令能从MQTT正确流转到ROS2

**测试步骤**:
1. 创建模拟车端程序（订阅 `/vehicle/command`）
2. 启动车端网关
3. 通过MQTT发送控制指令
4. 验证指令是否到达ROS2

**测试指令**:
- `auto_drive_start`
- `clean_start`
- `set_speed` (带参数)

**预期结果**: 所有指令都能正确流转到ROS2，车端程序能收到指令

### 测试5: 状态流 (ROS2 → MQTT)

**目的**: 验证状态数据能从ROS2正确流转到MQTT

**测试步骤**:
1. 创建模拟后端（订阅MQTT状态）
2. 启动车端网关
3. 通过ROS2发布车辆状态
4. 验证状态是否到达MQTT

**测试状态**:
```json
{
  "type": "vehicle",
  "data": {
    "cur_x": 100.5,
    "cur_y": 200.3,
    "battery": 85.5,
    "v": 2.5
  }
}
```

**预期结果**: 状态数据能正确流转到MQTT，后端能收到状态

## 运行测试

### 前置条件

1. **MQTT Broker运行**
   ```bash
   # 使用Mosquitto
   mosquitto -p 1883
   ```

2. **ROS2环境配置**
   ```bash
   source /opt/ros/foxy/setup.bash  # 或 humble
   ```

3. **依赖安装**
   ```bash
   pip install paho-mqtt
   # ROS2需要系统安装
   ```

### 运行测试

```bash
cd vehicle_client/program_b
python3 test_message_flow.py
```

### 测试输出示例

```
============================================================
端到端消息流测试
============================================================
✓ 车端网关模块导入成功

============================================================
测试3: 指令映射
============================================================

测试指令映射...
  ✓ auto_drive_start -> 41
  ✓ auto_drive_stop -> 40
  ✓ clean_start -> 11
  ✓ clean_stop -> 10
  ...

============================================================
测试结果汇总
============================================================
指令映射: ✓ 通过
指令解析: ✓ 通过
消息去重: ✓ 通过
指令流 (MQTT→ROS2): ✓ 通过
状态流 (ROS2→MQTT): ✓ 通过

总计: 5 通过, 0 失败

🎉 所有测试通过！
```

## 测试场景覆盖

### 控制指令场景

| 场景 | 指令类型 | 测试用例 |
|------|---------|---------|
| 自动驾驶 | `auto_drive_start/stop` | ✓ |
| 清扫控制 | `clean_start/stop` | ✓ |
| 洒水控制 | `water_start/stop` | ✓ |
| 召回车辆 | `call_back` | ✓ |
| 速度设置 | `set_speed` | ✓ |
| 功能灯 | `light1_on/off` 等 | ✓ |
| 运动控制 | `movement_forward/left/right` | ✓ |
| 任务控制 | `task_start/end` | ✓ |

### 状态数据场景

| 场景 | 数据类型 | 测试用例 |
|------|---------|---------|
| 车辆状态 | `vehicle` | ✓ |
| 地图数据 | `map_json` | - |
| 轨迹数据 | `traj_json` | - |
| 任务数据 | `task_json` | - |

## 故障排查

### 问题1: MQTT连接失败

**症状**: 测试显示 "MQTT连接失败"

**解决方案**:
1. 检查MQTT Broker是否运行: `mosquitto -p 1883`
2. 检查端口是否正确（默认1883）
3. 检查防火墙设置

### 问题2: ROS2初始化失败

**症状**: 测试显示 "ROS2初始化失败"

**解决方案**:
1. 检查ROS2环境: `ros2 --help`
2. 确保已source ROS2环境: `source /opt/ros/foxy/setup.bash`
3. 检查ROS2版本兼容性

### 问题3: 消息未到达

**症状**: 指令或状态未流转到下一阶段

**解决方案**:
1. 检查日志输出，确认消息在哪个阶段丢失
2. 验证Topic名称是否正确
3. 检查消息格式是否符合预期
4. 验证指令映射配置是否正确

### 问题4: 消息重复处理

**症状**: 同一条消息被处理多次

**解决方案**:
1. 检查 `requestId` 是否正确生成
2. 验证消息去重逻辑是否正常工作
3. 检查MQTT QoS设置（应为QoS=1）

## 扩展测试

### 性能测试

可以扩展测试以验证：
- 高频消息处理能力
- 消息延迟
- 并发处理能力

### 压力测试

可以扩展测试以验证：
- 大量消息的处理
- 长时间运行的稳定性
- 资源使用情况

## 相关文件

- `test_message_flow.py`: 主测试文件
- `communication_bridge.py`: 车端网关实现
- `command_mapping.json`: 指令映射配置
- `test_gateway_integration.py`: 车端网关集成测试（ROS2功能）
- `backend/test_gateway_integration.py`: 后端集成测试

## 注意事项

1. **测试环境隔离**: 建议在独立的测试环境中运行，避免影响生产环境
2. **数据清理**: 测试完成后清理测试数据
3. **资源释放**: 确保测试结束后正确关闭所有连接和资源
4. **日志级别**: 测试时建议使用DEBUG级别日志，便于排查问题

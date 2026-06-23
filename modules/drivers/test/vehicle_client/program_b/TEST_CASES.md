# 消息流测试用例清单

## 测试用例分类

### 1. 单元测试

#### 1.1 指令映射测试

| 用例ID | 测试项 | 输入 | 预期输出 | 状态 |
|--------|--------|------|----------|------|
| TC-001 | auto_drive_start映射 | `auto_drive_start` | 41 | ✓ |
| TC-002 | auto_drive_stop映射 | `auto_drive_stop` | 40 | ✓ |
| TC-003 | clean_start映射 | `clean_start` | 11 | ✓ |
| TC-004 | clean_stop映射 | `clean_stop` | 10 | ✓ |
| TC-005 | water_start映射 | `water_start` | 21 | ✓ |
| TC-006 | water_stop映射 | `water_stop` | 20 | ✓ |
| TC-007 | call_back映射 | `call_back` | 5001 | ✓ |
| TC-008 | set_speed映射 | `set_speed` | 1007 | ✓ |
| TC-009 | light1_on映射 | `light1_on` | 2101 | ✓ |
| TC-010 | light1_off映射 | `light1_off` | 2102 | ✓ |
| TC-011 | light2_on映射 | `light2_on` | 2103 | ✓ |
| TC-012 | light2_off映射 | `light2_off` | 2104 | ✓ |
| TC-013 | light3_on映射 | `light3_on` | 2105 | ✓ |
| TC-014 | light3_off映射 | `light3_off` | 2106 | ✓ |
| TC-015 | light4_on映射 | `light4_on` | 2107 | ✓ |
| TC-016 | light4_off映射 | `light4_off` | 2108 | ✓ |
| TC-017 | movement_forward映射 | `movement_forward` | 1003 | ✓ |
| TC-018 | movement_left映射 | `movement_left` | 1005 | ✓ |
| TC-019 | movement_right映射 | `movement_right` | 1006 | ✓ |
| TC-020 | 未知指令映射 | `unknown_command` | -1 | ✓ |

#### 1.2 指令解析测试

| 用例ID | 测试项 | 输入 | 预期输出 | 状态 |
|--------|--------|------|----------|------|
| TC-021 | movement指令解析(forward) | `{'type': 'movement', 'direction': 'forward'}` | `movement_forward` | ✓ |
| TC-022 | movement指令解析(left) | `{'type': 'movement', 'direction': 'left'}` | `movement_left` | ✓ |
| TC-023 | movement指令解析(right) | `{'type': 'movement', 'direction': 'right'}` | `movement_right` | ✓ |
| TC-024 | movement指令解析(backward) | `{'type': 'movement', 'direction': 'backward'}` | `movement_backward` | ✓ |
| TC-025 | light指令解析(light1_on) | `{'type': 'control', 'command_type': 'light', 'params': {'lightId': 'light1', 'state': 'on'}}` | `light1_on` | ✓ |
| TC-026 | light指令解析(light2_off) | `{'type': 'control', 'command_type': 'light', 'params': {'lightId': 'light2', 'state': 'off'}}` | `light2_off` | ✓ |
| TC-027 | control指令解析 | `{'type': 'control', 'command_type': 'auto_drive_start'}` | `auto_drive_start` | ✓ |

#### 1.3 消息去重测试

| 用例ID | 测试项 | 输入 | 预期输出 | 状态 |
|--------|--------|------|----------|------|
| TC-028 | 相同requestId去重 | 发送两次相同requestId的消息 | 只处理一次 | ✓ |
| TC-029 | 不同requestId处理 | 发送两次不同requestId的消息 | 处理两次 | ✓ |
| TC-030 | 无requestId去重 | 发送两次无requestId的相同消息 | 只处理一次 | ✓ |

### 2. 集成测试

#### 2.1 指令流测试 (MQTT → ROS2)

| 用例ID | 测试项 | 测试步骤 | 预期结果 | 状态 |
|--------|--------|----------|----------|------|
| TC-031 | 自动驾驶启动指令流 | 1. 发送auto_drive_start到MQTT<br>2. 验证ROS2收到指令 | ROS2收到code=41的指令 | ✓ |
| TC-032 | 清扫启动指令流 | 1. 发送clean_start到MQTT<br>2. 验证ROS2收到指令 | ROS2收到code=11的指令 | ✓ |
| TC-033 | 速度设置指令流 | 1. 发送set_speed到MQTT<br>2. 验证ROS2收到指令 | ROS2收到code=1007，包含speed参数 | ✓ |
| TC-034 | 功能灯控制指令流 | 1. 发送light指令到MQTT<br>2. 验证ROS2收到指令 | ROS2收到对应的light指令 | ✓ |
| TC-035 | 运动控制指令流 | 1. 发送movement指令到MQTT<br>2. 验证ROS2收到指令 | ROS2收到对应的movement指令 | ✓ |

#### 2.2 状态流测试 (ROS2 → MQTT)

| 用例ID | 测试项 | 测试步骤 | 预期结果 | 状态 |
|--------|--------|----------|----------|------|
| TC-036 | 车辆状态流转 | 1. 发布车辆状态到ROS2<br>2. 验证MQTT收到状态 | MQTT收到车辆状态数据 | ✓ |
| TC-037 | 状态数据完整性 | 1. 发布完整状态数据<br>2. 验证数据字段 | 所有字段都正确转发 | ✓ |

### 3. 端到端测试

#### 3.1 完整控制流程

| 用例ID | 测试项 | 测试步骤 | 预期结果 | 状态 |
|--------|--------|----------|----------|------|
| TC-038 | 前端→后端→MQTT→网关→ROS2 | 1. 前端发送控制指令<br>2. 后端接收并转发<br>3. MQTT接收<br>4. 网关接收并转发<br>5. ROS2接收 | 指令完整流转 | - |
| TC-039 | ROS2→网关→MQTT→后端→前端 | 1. 车端发布状态<br>2. 网关接收并转发<br>3. MQTT接收<br>4. 后端接收并更新<br>5. 前端获取状态 | 状态完整流转 | - |

#### 3.2 并发测试

| 用例ID | 测试项 | 测试步骤 | 预期结果 | 状态 |
|--------|--------|----------|----------|------|
| TC-040 | 并发指令处理 | 同时发送多条指令 | 所有指令都被正确处理 | - |
| TC-041 | 高频状态更新 | 高频发布状态数据 | 状态数据正确流转，无丢失 | - |

### 4. 异常测试

#### 4.1 错误处理

| 用例ID | 测试项 | 测试步骤 | 预期结果 | 状态 |
|--------|--------|----------|----------|------|
| TC-042 | 无效指令处理 | 发送未知指令类型 | 记录警告，不处理 | - |
| TC-043 | MQTT连接断开 | 模拟MQTT连接断开 | 自动重连或记录错误 | - |
| TC-044 | ROS2节点异常 | 模拟ROS2节点异常 | 优雅降级或记录错误 | - |
| TC-045 | 消息格式错误 | 发送格式错误的消息 | 记录错误，不处理 | - |

#### 4.2 边界条件

| 用例ID | 测试项 | 测试步骤 | 预期结果 | 状态 |
|--------|--------|----------|----------|------|
| TC-046 | 空消息处理 | 发送空消息 | 记录错误，不处理 | - |
| TC-047 | 超大消息处理 | 发送超大消息 | 正确处理或拒绝 | - |
| TC-048 | 特殊字符处理 | 消息包含特殊字符 | 正确处理 | - |

## 测试执行计划

### 阶段1: 单元测试（已完成）
- [x] TC-001 ~ TC-020: 指令映射测试
- [x] TC-021 ~ TC-027: 指令解析测试
- [x] TC-028 ~ TC-030: 消息去重测试

### 阶段2: 集成测试（部分完成）
- [x] TC-031 ~ TC-035: 指令流测试（MQTT → ROS2）
- [x] TC-036 ~ TC-037: 状态流测试（ROS2 → MQTT）

### 阶段3: 端到端测试（待完成）
- [ ] TC-038 ~ TC-039: 完整控制流程
- [ ] TC-040 ~ TC-041: 并发测试

### 阶段4: 异常测试（待完成）
- [ ] TC-042 ~ TC-045: 错误处理
- [ ] TC-046 ~ TC-048: 边界条件

## 测试覆盖率

| 模块 | 覆盖率 | 说明 |
|------|--------|------|
| 指令映射 | 100% | 所有指令类型都已测试 |
| 指令解析 | 100% | 所有解析逻辑都已测试 |
| 消息去重 | 100% | 去重逻辑已测试 |
| 指令流转 | 80% | 主要指令类型已测试 |
| 状态流转 | 60% | 基本状态流转已测试 |
| 异常处理 | 0% | 待测试 |

## 测试环境要求

### 硬件要求
- CPU: 2核心以上
- 内存: 4GB以上
- 网络: 本地网络连接

### 软件要求
- Python 3.6+
- MQTT Broker (Mosquitto)
- ROS2 (Foxy/Humble)
- paho-mqtt库

### 环境配置
```bash
# 安装依赖
pip install paho-mqtt

# 配置ROS2
source /opt/ros/foxy/setup.bash  # 或 humble

# 启动MQTT Broker
mosquitto -p 1883
```

## 测试数据

### 测试车辆ID
- `V10000005` (默认测试车辆)

### 测试指令示例
```json
{
  "type": "control",
  "command_type": "auto_drive_start",
  "params": {},
  "requestId": "test_12345",
  "timestamp": "2024-01-01T12:00:00"
}
```

### 测试状态示例
```json
{
  "type": "vehicle",
  "data": {
    "cur_x": 100.5,
    "cur_y": 200.3,
    "battery": 85.5,
    "v": 2.5
  },
  "timestamp": "2024-01-01T12:00:00"
}
```

## 测试报告模板

### 测试执行报告

**测试日期**: YYYY-MM-DD
**测试人员**: XXX
**测试环境**: 
- MQTT Broker: localhost:1883
- ROS2版本: Foxy/Humble
- Python版本: 3.x

**测试结果**:
- 通过: X
- 失败: Y
- 跳过: Z

**问题列表**:
1. [问题描述]
2. [问题描述]

**建议**:
- [改进建议]

## 维护说明

### 更新测试用例
当添加新功能时，需要：
1. 添加对应的测试用例
2. 更新测试用例清单
3. 执行测试验证

### 测试用例编号规则
- TC-XXX: 测试用例编号
- 按模块分类编号
- 新增用例使用下一个可用编号

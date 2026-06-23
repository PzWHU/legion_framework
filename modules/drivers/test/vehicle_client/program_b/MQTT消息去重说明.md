# MQTT消息去重机制说明

## 问题描述

前端网页上只点击了一次前进按钮，但在日志中却打印了两次相同的指令：

```
2026-01-17 20:11:17,569 - __main__ - INFO - 收到CLOUD_PLATFORM指令: movement, request_id=None
2026-01-17 20:11:17,878 - __main__ - INFO - 收到CLOUD_PLATFORM指令: movement, request_id=None
```

两次打印的时间戳非常接近（只有约300毫秒），说明是同一个消息被重复处理了。

## 问题原因

1. **MQTT QoS=1 特性**：
   - QoS=1 保证"至少一次送达"（At least once delivery）
   - 在网络不稳定或broker重传时，可能导致消息重复接收

2. **缺少消息去重机制**：
   - 原代码没有对重复消息进行过滤
   - 导致同一个消息被处理多次

3. **Client ID 问题**：
   - 原代码使用时间戳生成client_id：`f"vehicle_{vehicle_id}_{int(time.time())}"`
   - 如果程序重启，会创建新的client_id，可能导致会话状态问题

## 修复方案

### 1. 修改Client ID生成策略

**修改前：**
```python
self.client = mqtt.Client(client_id=f"vehicle_{vehicle_id}_{int(time.time())}")
```

**修改后：**
```python
# 使用固定的client_id，避免重复连接导致的问题
# clean_session=True确保断开连接后清除会话状态
self.client = mqtt.Client(
    client_id=f"vehicle_{vehicle_id}",
    clean_session=True
)
```

**优势：**
- 固定的client_id确保连接稳定性
- `clean_session=True` 确保断开连接后清除会话状态，避免旧消息重传

### 2. 添加消息去重机制

**新增代码：**
```python
# 消息去重：记录最近处理的消息（request_id + timestamp）
# 用于防止MQTT QoS=1导致的重复消息
self.processed_messages = set()
self.message_ttl = 5.0  # 消息去重时间窗口（秒）
```

**去重逻辑：**
```python
# 消息去重：基于request_id和timestamp生成唯一标识
if request_id:
    message_key = f"{request_id}_{msg_timestamp}"
else:
    # 对于没有request_id的消息，使用payload的hash作为去重标识
    payload_str = json.dumps(payload, sort_keys=True)
    payload_hash = hashlib.md5(payload_str.encode()).hexdigest()[:8]
    message_key = f"{command_type}_{msg_timestamp}_{payload_hash}"

# 检查是否是重复消息
if message_key in self.processed_messages:
    logger.debug(f"检测到重复消息，已忽略: {command_type}, key={message_key}")
    return

# 记录已处理的消息
self.processed_messages.add(message_key)
```

**去重策略：**
1. **有request_id的消息**：使用 `request_id + timestamp` 作为唯一标识
2. **没有request_id的消息**：使用 `command_type + timestamp + payload_hash` 作为唯一标识
3. **缓存清理**：当记录数超过1000时，清空所有记录（防止内存泄漏）

## 工作原理

### 消息去重流程

1. **接收MQTT消息**
   - 解析payload，提取 `request_id`、`timestamp`、`command_type` 等信息

2. **生成消息唯一标识**
   - 如果有 `request_id`：使用 `{request_id}_{timestamp}`
   - 如果没有 `request_id`：使用 `{command_type}_{timestamp}_{payload_hash}`

3. **检查是否重复**
   - 查询 `processed_messages` 集合
   - 如果已存在，记录DEBUG日志并直接返回（不处理）

4. **处理新消息**
   - 将消息标识添加到 `processed_messages`
   - 继续正常的指令处理流程

### 缓存管理

- **容量限制**：最多保存1000条消息记录
- **清理策略**：当超过1000条时，清空所有记录
- **时间窗口**：理论上可以永久保存，但通过容量限制自动清理

## 验证方法

### 1. 测试重复消息过滤

1. **启动程序**：
   ```bash
   python3 communication_bridge.py
   ```

2. **发送控制指令**：
   - 在前端点击一次前进按钮
   - 观察日志输出

3. **预期结果**：
   - 应该只看到一次 "收到CLOUD_PLATFORM指令" 的日志
   - 如果出现重复消息，会看到 "检测到重复消息，已忽略" 的DEBUG日志

### 2. 检查日志

**正常情况（无重复）：**
```
2026-01-17 20:11:17,569 - __main__ - INFO - 收到CLOUD_PLATFORM指令: movement, request_id=None
```

**有重复消息时（会被过滤）：**
```
2026-01-17 20:11:17,569 - __main__ - INFO - 收到CLOUD_PLATFORM指令: movement, request_id=None
2026-01-17 20:11:17,878 - __main__ - DEBUG - 检测到重复消息，已忽略: movement, key=movement_2026-01-17T20:11:17.569_abc12345
```

## 注意事项

1. **request_id的重要性**：
   - 建议后端在发送MQTT消息时，为每条消息生成唯一的 `request_id`
   - 这样可以更准确地识别重复消息

2. **时间戳格式**：
   - 消息去重依赖于payload中的 `timestamp` 字段
   - 确保后端发送的消息包含 `timestamp` 字段

3. **内存使用**：
   - 消息去重缓存最多保存1000条记录
   - 在高频消息场景下，可能需要调整清理策略

4. **调试模式**：
   - 如果需要查看去重日志，将日志级别设置为DEBUG
   - 正常运行时，重复消息会被静默忽略

## 相关文件

- `communication_bridge.py`: 主要修改文件
- `MQTTClient.__init__()`: 添加消息去重缓存
- `MQTTClient._on_message()`: 添加消息去重逻辑

## 后续优化建议

1. **基于时间的清理**：
   - 可以添加基于时间的清理策略，定期清理过期的消息记录
   - 例如：每5分钟清理一次超过5秒的记录

2. **更精确的去重**：
   - 对于没有request_id的消息，可以考虑使用更精确的标识
   - 例如：结合消息的完整内容hash

3. **统计信息**：
   - 可以添加统计信息，记录去重的消息数量
   - 用于监控MQTT消息重复情况

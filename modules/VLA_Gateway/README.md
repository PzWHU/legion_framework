# VLA_Gateway

参考 `modules/planning` 架构实现的 ROS2 网关模块。

## 功能

- 订阅定位、障碍物以及 `/planning/TrajectoryArray`。
- 使用 `TrajectoryArray.qp_smooth` 作为参考线，将自车历史轨迹及距离自车最近的 8 个障碍物转换到 Frenet 坐标系下。
- 按照 `DIRLPlanning/dpo_grid/bad_trajectories/frame_data.json` 的格式生成 prompt 字符串，默认交通灯字段为：

  ```
  ###Traffic Light:
  - There is no traffic light.
  ```

- 通过 MQTT（QoS0）将字符串发布到指定 topic。

## 目录结构

```
modules/VLA_Gateway/
├── CMakeLists.txt
├── README.md
├── bin/
│   └── conf/
│       └── vla_gateway.json     # 配置文件
└── src/
    ├── apps/
    │   ├── main.cpp
    │   ├── vla_gateway.h
    │   └── vla_gateway.cpp
    ├── message_manager/
    │   ├── message_manager.h
    │   └── ros2/
    │       ├── ros2_message_manager.h
    │       └── ros2_message_manager.hpp
    └── mqtt/
        ├── mqtt_client.h
        └── mqtt_client.cpp
```

## 输入 / 输出

### 输入 ROS2 Topic

| Topic | 消息类型 | 说明 |
|---|---|---|
| `/localization/global_fusion/Location` | `ros2_interface::msg::Location` | 自车定位 |
| `/prediction/PredictionObstacles` | `ros2_interface::msg::PredictionObstacles` | 障碍物预测 |
| `/planning/TrajectoryArray` | `ros2_interface::msg::TrajectoryArray` | 参考线（取 `qp_smooth`） |
| `/routing/RoutingResponse` | `ros2_interface::msg::RoutingResponse` | 参考线兜底（取最近车道重采样） |
| `/drivers/canbus/Chassis` | `ros2_interface::msg::Chassis` | 自车速度（`speed_mps`） |

### 输出 MQTT

| 配置项 | 默认值 | 说明 |
|---|---|---|
| `mqtt_broker` | `127.0.0.1` | MQTT broker 地址 |
| `mqtt_port` | `1883` | MQTT broker 端口 |
| `mqtt_topic` | `vla/gateway/frame_data` | 发布 topic |

## 编译

```bash
cd /home/lenovo/zp/legion_framework/modules/VLA_Gateway
mkdir -p build && cd build
source /opt/ros/humble/setup.bash
cmake .. -DROS2_ENABLE=ON -DCMAKE_BUILD_TYPE=Release
make -j$(nproc)
```

可执行文件会生成在 `modules/VLA_Gateway/bin/vla_gateway`。

## 运行

```bash
cd /home/lenovo/zp/legion_framework/modules/VLA_Gateway
source /opt/ros/humble/setup.bash
source /home/lenovo/zp/legion_framework/modules/message/ros2/install/setup.bash
./bin/vla_gateway ./bin/conf/vla_gateway.json
```

## 配置说明

`bin/conf/vla_gateway.json` 主要字段：

> 自车长宽不再由配置文件指定，而是从 `modules/common/data/vehicle_param/vehicle_param.json` 读取。

| 字段 | 默认值 | 说明 |
|---|---|---|
| `process_period_ms` | 100 | 处理/发送周期 |
| `history_duration_s` | 2.0 | 自车历史轨迹时长 |
| `history_interval_s` | 0.5 | 历史轨迹采样间隔 |
| `prediction_horizon_s` | 3.0 | 障碍物预测未来时间 |
| `max_obstacles` | 8 | 输出最近障碍物的数量 |
| `mqtt_broker` | `127.0.0.1` | MQTT broker |
| `mqtt_port` | 1883 | MQTT 端口 |
| `mqtt_topic` | `vla/gateway/frame_data` | MQTT topic |
| `mqtt_client_id` | `vla_gateway_001` | MQTT client id |
| `debug_prompt_log` | `false` | 是否把 prompt、推理结果和端到端时延写入 `/tmp/vla_prompt_debug.txt` |

### 坐标系说明

- 所有位置量（Ego、障碍物当前/未来位置）均输出到 Frenet 坐标系，并按 **`(d, s)`** 顺序输出（横向 d 在前，纵向 s 在后）。Ego 的 `s` 始终为 0，障碍物的 `s` 为相对 ego 的纵向距离。
- `Yaw` 是相对于参考线的局部 ENU 航向角：参考线切向（右）为 0，逆时针为正，范围 `-π~π`，与训练数据 `frame_data.json` 一致。
- 障碍物仅保留 `s > 0` 且 `|d| < 3m` 的，再取最近最多 8 个。

### 速度来源

- 自车速度优先使用 `/drivers/canbus/Chassis.speed_mps`，按相对 Yaw 分解为 `(v_d, v_s)`；未收到 Chassis 时回退到 `Location.linear_velocity`。障碍物速度同样分解到 `(v_d, v_s)`。

### 时延统计与真值

当 `debug_prompt_log=true` 时，`/tmp/vla_prompt_debug.txt` 会记录：

- `[Prompt Build]`：prompt 构造耗时。
- `[Network RTT]`：MQTT 去程 + 返程网络耗时（远程推理已扣除）。
- `[Remote Infer]`：远程 4B vLLM 实际推理耗时（需远程 `vla_mqtt_server.py` 返回 `row,col,inference_ms`）。
- `[GuideInfo Parse/Publish]`：解析结果并发布 `/routing/GuideInfo` 的耗时。
- `[End-to-End Latency]`：从 `Process()` 开始到 `GuideInfo` 发布完成的总耗时。
- `[Ground Truth at t=...]`：自车 3 秒后的真实 Frenet 坐标 `(d, s)`，乘以 10 并四舍五入取整，用于离线对比模型输出。

### 调试文件后处理

由于真值在 prompt 生成 3 秒后才写入，`/tmp/vla_prompt_debug.txt` 里的 `[Ground Truth]` 行会和对应的 prompt 块分散在不同位置。运行结束后可执行后处理脚本，将真值按时间戳归并到对应 prompt 块后面：

```bash
cd /home/lenovo/zp/legion_framework/modules/VLA_Gateway/scripts
python3 merge_vla_debug_gt.py
# 默认输入 /tmp/vla_prompt_debug.txt，输出 /tmp/vla_prompt_debug.merged.txt
```

也可以指定输入/输出文件：

```bash
python3 merge_vla_debug_gt.py /tmp/vla_prompt_debug.txt /tmp/merged.txt
```

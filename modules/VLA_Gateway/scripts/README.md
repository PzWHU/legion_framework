# VLA_Gateway 测试脚本

本目录包含 VLA_Gateway 本地和远程联调的测试脚本。

## 本地脚本

| 脚本 | 用途 |
|------|------|
| `start_vla_gateway.sh` | 一键启动 VLA_Gateway（前台运行，Ctrl+C 停止） |
| `stop_vla_gateway.sh` | 停止本机 VLA_Gateway 进程 |
| `start_fake_vla_publisher.sh` | 发布假的 ROS2 输入（Location / PredictionObstacles / TrajectoryArray） |
| `publish_fake_vla_inputs.py` | 假数据发布器本体 |
| `test_mqtt_client.py` | 向远程 MQTT 推理服务发一条测试 prompt，等待并打印结果 |
| `sample_prompt.txt` | `test_mqtt_client.py` 默认使用的示例 prompt |

## 远程脚本（通过 SSH 操作 8.148.30.204）

| 脚本 | 用途 |
|------|------|
| `start_vla_mqtt_server_ssh.sh` | 在远程启动 4B 推理服务（后台，自动重连） |
| `stop_vla_mqtt_server_ssh.sh` | 停止远程 4B 推理服务 |
| `status_vla_mqtt_server_ssh.sh` | 查看远程服务进程、GPU 占用、最近日志 |

---

## 快速验证链路

### 1. 启动 / 查看远程推理服务

```bash
./start_vla_mqtt_server_ssh.sh
./status_vla_mqtt_server_ssh.sh
```

等待日志出现 `Engine ready.` 和 `Warmup done.`，大约 20~30 秒。

### 2. 测试 MQTT + 远程推理

```bash
cd /home/lenovo/zp/legion_framework
source .venv_mqtt/bin/activate
python modules/VLA_Gateway/scripts/test_mqtt_client.py
```

看到 `Received result: x,y` 即说明 MQTT 和推理服务正常。

### 3. 端到端 ROS2 验证

开三个终端：

```bash
# 终端 1：启动 VLA_Gateway
./start_vla_gateway.sh

# 终端 2：发布假 ROS2 输入
./start_fake_vla_publisher.sh

# 终端 3：查看 GuideInfo 输出
source /opt/ros/humble/setup.bash
source /home/lenovo/zp/legion_framework/modules/message/ros2/install/setup.bash
ros2 topic echo /routing/GuideInfo
```

如果终端 3 持续输出 `intersection_status` 和 `roads_status`，说明整条链路已打通。

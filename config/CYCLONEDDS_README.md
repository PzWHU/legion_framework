# CycloneDDS XML 配置说明

## 适配版本

本配置文件适用于 **CycloneDDS >= 0.8.0**（包括 6.1.13）。

已知版本兼容性：
- CycloneDDS 0.8.x / 0.9.x / 6.x — 使用 `NetworkInterfaceAddress` 元素（会产生 deprecated 警告，但正常工作）

## 文件说明

| 文件 | 用途 |
|------|------|
| `ros_cyclonedds.xml` | A 端 (192.168.1.101) 专用 |
| `ros_cyclonedds_192.168.1.102.xml` | B 端 (192.168.1.102) 专用 |
| `ros_cyclonedds_192.168.1.103.xml` | C 端 (192.168.1.103) 专用 |
| `ros_cyclonedds_192.168.1.136.xml` | D 端 (192.168.1.136) 专用 |

每台机器只需要修改 **Peers 列表**（列出除本机外的所有机器 IP），`NetworkInterfaceAddress` 和其他配置保持一致即可。

## 新机器部署步骤

### 第一步：选择或创建配置文件

如果新机器 IP 在已有配置中，直接复制对应文件；如果不在，需要基于任意一个现有文件修改。

### 第二步：修改 Peers 列表

在 `<Peers>` 中填入集群中 **除本机外的所有机器 IP**：

```xml
<Peers>
  <Peer address="192.168.1.101:7400"/>
  <Peer address="192.168.1.102:7400"/>
  <Peer address="192.168.1.136:7400"/>
  <!-- 不需要列出本机 -->
</Peers>
```

### 第三步：部署到目标机器

```bash
# 复制配置文件到目标机器的 config 目录
sudo cp ros_cyclonedds.xml /home/jiang/project/HUST/src/legion_framework/config/ros_cyclonedds.xml

# 或使用机器专属配置
sudo cp ros_cyclonedds_192.168.1.XXX.xml \
       /home/jiang/project/HUST/src/legion_framework/config/ros_cyclonedds.xml
```

### 第四步：验证

```bash
# 设置环境变量（如果 ros2_env.sh 未自动处理）
export CYCLONEDDS_URI=file:///home/jiang/project/HUST/src/legion_framework/config/ros_cyclonedds.xml

# 验证 DDS 发现
source ros2_env.sh
ros2 topic list
```

正常情况下应能看到话题列表，无报错。

## 配置项说明

### General

| 配置项 | 默认值 | 说明 |
|--------|--------|------|
| `NetworkInterfaceAddress` | 自动选择 | 绑定 UDP 到指定网卡或 IP（支持 eth0 或 IP） |
| `MaxMessageSize` | 4096 B | UDP 最大消息大小，推荐 65500 B |
| `AllowMulticast` | true | 多播控制：false=禁用，spdp=仅发现多播，true=全开 |

### Discovery

| 配置项 | 默认值 | 说明 |
|--------|--------|------|
| `SPDPMulticastAddress` | 239.255.0.1 | SPDP 多播地址 |
| `SPDPInterval` | 5 s | SPDP 广播间隔 |
| `Peers` | 空 | 静态对等节点列表（IP:端口） |
| `MaxAutoParticipantIndex` | 9 | 最大参与者索引 |

### Tracing

| 级别 | 说明 |
|------|------|
| `none` | 禁用日志 |
| `severe` | 仅致命错误 |
| `warning` | 警告+错误（默认） |
| `info` | 信息+警告 |
| `fine` | 发现日志 |
| `finest` | 最详细 |

## 常见问题

### Q: 启动时报 `Transport: unknown element`

原因：使用的 CycloneDDS 版本不支持 XML 中的 `Transport` 元素。
解决：本配置文件不包含 `Transport` 元素，使用 `NetworkInterfaceAddress` 代替。

### Q: 启动时报 `LeaseDuration: setting moved`

原因：`Internal/LeaseDuration` 在 CycloneDDS 6.x 中已移至 `Discovery/LeaseDuration`。
解决：本配置文件使用 `Internal/LeaseDuration`，如遇此错误需移除该行。

### Q: 启动时有 `deprecated` 警告

原因：`NetworkInterfaceAddress` 在 CycloneDDS >= 0.9.0 中已 deprecated。
解决：不影响功能，可忽略。如需消除警告，需参考 CycloneDDS 0.9+ 的新格式。

### Q: 跨机器通信不通

检查项：
1. 所有机器的 `Peers` 列表是否完整（不含本机）
2. 防火墙是否放行 UDP 7400 端口
3. `NetworkInterfaceAddress` 是否绑定到正确的网卡/IP
4. 机器间网络是否互通（`ping` 验证）

### Q: 如何开启调试日志

临时开启详细日志：

```bash
export CYCLONEDDS_URI="file:///home/jiang/project/HUST/src/legion_framework/config/ros_cyclonedds.xml?CycloneDDS.Config.Trace=finest"
```

### Q: 共享内存 (SHM) 相关

- 本配置文件不包含 SHM 的 XML 配置
- SHM 由 ROS 2 RMW 层自动管理（如已安装 iceoryx）
- 跨机器通信自动回退到 UDP，不需要额外配置
- 调试 SHM：`export CYCLONEDDS_SHM_TRACING=1`

## IP 地址速查表

| 机器 | IP | 配置文件 |
|------|----|----------|
| A 端 | 192.168.1.101 | `ros_cyclonedds.xml` |
| B 端 | 192.168.1.102 | `ros_cyclonedds_192.168.1.102.xml` |
| C 端 | 192.168.1.103 | `ros_cyclonedds_192.168.1.103.xml` |
| D 端 | 192.168.1.136 | `ros_cyclonedds_192.168.1.136.xml` |

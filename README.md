# Legion 6.0

Legion 6.0 是集成了感知（Perception）和规控（PNC - Planning and Control）功能的统一代码仓库。

## 项目结构

本仓库包含以下主要模块：

### 感知模块（Perception）
- **lidar_ground_segmentation**: 激光雷达地面分割
- **lidar_cluster_detect**: 激光雷达聚类检测

### 规控模块（PNC）
- **planning**: 路径规划模块
- **control**: 控制模块
- **prediction**: 预测模块
- **routing**: 路由规划模块

### 公共模块
- **common**: 通用工具库（数学、时间、状态机等）
- **message**: 消息接口定义（支持ROS、ROS2、DDS、LCM）

## 前置条件

1. **第三方库**: 确保所需的第三方库已经安装
2. **ROS2环境**: 确保ROS2环境已经配置（推荐使用ROS2 Galactic）

## 编译

### 1. 编译消息接口

首先需要编译ROS2消息接口，这是所有模块的基础依赖：

```bash
cd modules/message/ros2
source /opt/ros/galactic/setup.bash
colcon build
```

这一步会编译工程代码所需要的所有ROS2消息接口。

### 2. 编译感知模块

#### 2.1 编译 lidar_ground_segmentation

```bash
source modules/message/ros2/install/setup.bash
cd modules/perception/lidar/lidar_ground_segmentation
# 此编译脚本用于编译x64平台的可执行程序，默认编译debug，如需更改为Release，则修改脚本
# 如需编译arm64平台程序，脚本为build.arm64.sh
./scripts/build.x64.sh
```

#### 2.2 编译 lidar_cluster_detect

```bash
source modules/message/ros2/install/setup.bash
cd modules/perception/lidar/lidar_cluster_detect
# 此编译脚本用于编译x64平台的可执行程序，默认编译debug，如需更改为Release，则修改脚本
# 如需编译arm64平台程序，脚本为build.arm64.sh
./scripts/build.x64.sh
```

### 3. 编译规控模块

#### 3.1 编译 planning

```bash
source modules/message/ros2/install/setup.bash
cd modules/planning/
# 此编译脚本用于编译x64平台的可执行程序，默认编译debug，如需更改为Release，则修改脚本
# 如需编译arm64平台程序，脚本为build.arm64.sh
./scripts/build.x64.sh
```

#### 3.2 编译 control

```bash
source modules/message/ros2/install/setup.bash
cd modules/control/
# 此编译脚本用于编译x64平台的可执行程序，默认编译debug，如需更改为Release，则修改脚本
# 如需编译arm64平台程序，脚本为build.arm64.sh
./scripts/build.x64.sh
```

#### 3.3 编译 routing

```bash
source modules/message/ros2/install/setup.bash
cd modules/routing/
# 此编译脚本用于编译x64平台的可执行程序，默认编译debug，如需更改为Release，则修改脚本
# 如需编译arm64平台程序，脚本为build.arm64.sh
./scripts/build.x64.sh
```

#### 3.4 编译 prediction

```bash
source modules/message/ros2/install/setup.bash
cd modules/prediction/
# 此编译脚本用于编译x64平台的可执行程序，默认编译debug，如需更改为Release，则修改脚本
# 如需编译arm64平台程序，脚本为build.arm64.sh
./scripts/build.x64.sh
```

## 运行

### 感知模块运行

#### 运行 lidar_ground_segmentation

```bash
source modules/message/ros2/install/setup.bash
cd modules/perception/lidar/lidar_ground_segmentation/bin
./lidar_ground_segmentation
```

#### 运行 lidar_cluster_detect

```bash
source modules/message/ros2/install/setup.bash
cd modules/perception/lidar/lidar_cluster_detect/bin
./lidar_cluster_detect
```

### 规控模块运行

#### 运行 planning

```bash
source modules/message/ros2/install/setup.bash
cd modules/planning/bin
./planning
```

#### 运行 control

```bash
source modules/message/ros2/install/setup.bash
cd modules/control/bin
./control
```

#### 运行 routing

```bash
source modules/message/ros2/install/setup.bash
cd modules/routing/bin
./routing
```

#### 运行 prediction

```bash
source modules/message/ros2/install/setup.bash
cd modules/prediction/bin
./prediction
```

## 平台支持

所有模块都支持多种平台的编译：
- **x64**: 使用 `build.x64.sh` 脚本
- **arm64**: 使用 `build.arm64.sh` 脚本
- **mdc**: 使用 `build.mdc.sh` 脚本（部分模块）
- **pallas**: 使用 `build.pallas.sh` 脚本（部分模块）
- **x9u**: 使用 `build.x9u.sh` 脚本（部分模块）

## 接口说明

详细的接口说明文档请参考：`docs/legion_interface.xlsx`

## 注意事项

1. 编译前请确保已正确设置ROS2环境变量
2. 所有模块的编译都依赖于消息接口的编译，请先完成消息接口的编译
3. 默认编译为Debug模式，如需Release模式，请修改对应的编译脚本
4. 不同平台的编译脚本可能略有不同，请根据目标平台选择合适的脚本

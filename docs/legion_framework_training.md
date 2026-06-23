## Legion 软件框架新人培训文档（Legion 6.0）

### 适用范围
- **适用对象**：新入职/新接触 Legion 框架的研发同学（感知、规划、控制、预测、定位、系统工程）
- **培训目标**：在 \(0.5\sim 2\) 天内让新人做到：
  - 能在目标平台完成 **编译、运行、打包**；
  - 理解 **模块边界**（Perception / PNC / common / message）；
  - 理解 **消息通信抽象**（ROS2/ROS1/DDS/LCM 可切换）；
  - 能沿着一条典型链路完成“**从输入消息到输出控制/轨迹**”的读码；
  - 知道常见问题如何排障（环境、依赖、Domain ID、动态库等）。

### 一句话概览（把 Legion 当成什么）
Legion 是一个面向移动机器人/自动驾驶类系统的 **多模块自治软件框架**：以 `modules/*` 为主体，使用 **统一的接口定义**（ROS2 msg / DDS IDL / 等）和 **统一的配置加载模式**（protobuf + JSON + gflags），把感知与 PNC 的多个可执行程序串成一个可运行的系统。

---

## 1. 工程结构与模块职责

### 1.1 目录总览（从新人视角）
- **`modules/`**：核心代码（绝大多数你要看的都在这里）
  - **`modules/perception/`**：感知（当前主要是 lidar 相关）
  - **`modules/planning/`**：规划（生成轨迹/规划指令）
  - **`modules/control/`**：控制（把轨迹/控制目标转为底盘控制）
  - **`modules/prediction/`**：预测（对动态障碍/行为进行预测）
  - **`modules/routing/`**：全局/拓扑路径（给 planning 提供全局路线/引导）
  - **`modules/common/`**：公共能力（数学/时间/状态机/文件/集成服务等）
  - **`modules/message/`**：接口定义与消息生成（支持 ROS、ROS2、DDS、LCM）
- **`docs/`**：工程脚本与（本文件）培训资料
  - `build_service.sh`：一键编译与打包
  - `robot_start_legion.sh`：守护拉起（watchdog 风格）

### 1.2 “模块 = 一个可执行程序”的组织方式
在 Legion 中，`planning/control/prediction/routing/感知节点` 大多是 **独立可执行程序**：
- 可执行文件输出到各模块的 `modules/<module>/bin/`
- 运行时默认在 `bin/` 下寻找相对路径配置 `./conf/...`

这种组织方式的优点：
- 进程隔离，便于重启与定位问题
- 多通信后端可切换（同一业务逻辑，换消息栈）

需要注意的地方：
- 运行时“工作目录”很重要：很多配置使用 `./conf/...` 相对路径
- 模块间靠消息通信，不直接相互调用（除了 `common/` 被源码方式编入）

---

## 2. 运行架构：数据怎么流起来

### 2.1 典型 PNC 链路（概念图）
以下是最常见的“系统级读码主线”：

```mermaid
flowchart LR
  Perception[Perception 节点\n(lidar...)] -->|Obstacle/Map/Traffic| Prediction[Prediction]
  Routing[Routing\n全局路线/引导] -->|RoutingResponse/GuideInfo| Planning[Planning\n轨迹生成]
  Prediction -->|PredictionObstacles| Planning
  Localization[Localization/Location] -->|Location| Planning
  Chassis[Chassis/底盘状态] -->|Chassis| Planning
  Planning -->|ADCTrajectory + PlanningCmd| Control[Control\n执行/控制]
  Control -->|ControlCommand| Actuator[底盘执行]
```

你在代码里经常会看到的“输入集合”：
- **位置与姿态**：`Location`
- **底盘状态**：`Chassis`
- **预测障碍物**：`PredictionObstacles`
- **全局路线**：`RoutingResponse`
- **交通灯/事件**：`TrafficLightMsg` / `TrafficEvents`

以及“输出集合”：
- **规划轨迹**：`ADCTrajectory`
- **规划指令**：`PlanningCmd`
- **控制指令**：`ControlCommand`

### 2.2 多消息后端：ROS2/ROS1/DDS/LCM 的位置
Legion 不是把消息栈写死在代码里，而是采用“**消息管理器（MessageManager）抽象**”：
- 业务模块（如 `planning`）只关心：订阅输入、发布输出
- 具体用 ROS2 还是 DDS，由 **编译开关 + 配置** 决定

常见的编译开关（各模块 CMake 里能看到）：
- `-DROS2_ENABLE=ON/OFF`
- `-DDDS_ENABLE=ON/OFF`
- `-DLCM_ENABLE=ON/OFF`
- `-DROS_ENABLE=ON/OFF`

新人理解要点：
- **同一个模块**在不同项目/平台上可能选用不同消息栈
- 排障时，先确认“当前可执行程序是按哪个后端编译的”

---

## 3. 配置体系：protobuf + JSON + gflags

### 3.1 为什么用 protobuf + JSON
Legion 常用模式是：**配置结构用 protobuf 定义**，配置文件用 **JSON** 编写，运行时用工具函数把 JSON 解析到 protobuf 对象。

好处：
- 配置有强类型结构（字段可演进）
- JSON 便于人工编辑与 diff

### 3.2 gflags 的角色
很多模块会用 gflags 提供“配置文件路径”等运行参数：
- 默认值一般是 `./conf/<module>/<module>.json`
- 运行时可以通过命令行参数覆盖（如果模块支持/启用了 gflags 解析）

新人检查点：
- **确认你运行的工作目录**是否为 `modules/<module>/bin`
- **确认 `bin/conf/` 是否齐全**
- 需要从外部系统传入配置路径时，优先走 gflags，而不是硬改代码

常见模块的默认主配置路径（新人“找配置”用）：
- **planning**：`./conf/planning/planning.json`
- **control**：`./conf/control/control.json`
- **routing**：`./conf/routing/routing.json`

### 3.3 消息后端如何“由配置决定”（以 planning 为例）
`planning` 的配置文件 `modules/planning/bin/conf/planning/planning.json` 中有一段 `messages`：
- **`message_info`**：列出系统支持的消息后端（LCM/DDS/ROS/ADSFI/ROS2），每个后端有 `type/name/url`
- **`active_message`**：一个数组，表示“本次运行启用哪些后端”

新人最容易误解的一点：在 `planning` 代码里，`active_message` 的值被当作 **`message_info` 的下标** 来取元素（不是直接写 `type` 枚举值）。所以样例里 `active_message: [4]` 的含义是“启用 `message_info[4]`”，对应 ROS2。

你可以用下面这段配置快速判断当前模块跑在什么后端上：

```json
"messages": {
  "active_message": [4],
  "message_info": [
    {"type": 0, "name": "LCM",  "url": "udpm://239.255.76.21:7621?ttl=3"},
    {"type": 1, "name": "DDS",  "url": "null"},
    {"type": 2, "name": "ROS",  "url": "null"},
    {"type": 3, "name": "ADSFI","url": "null"},
    {"type": 4, "name": "ROS2", "url": "null"}
  ]
}
```

排障建议（非常实用）：
- **配置启用了 ROS2，但编译时 `ROS2_ENABLE=OFF`**：模块会出现“逻辑上想走 ROS2，但二进制里根本没有 ROS2 实现”的问题（表现为收不到/发不出消息，或初始化分支缺失）。
- 所以判断“当前消息后端”要同时看两件事：**编译开关**（二进制里有没有）+ **配置 active_message**（运行时启用哪个）。

---

## 4. 构建、运行与打包

### 4.1 总体构建顺序（必须先构建消息接口）
Legion 的关键依赖是消息接口包（尤其 ROS2）：

```bash
cd modules/message/ros2
source /opt/ros/<distro>/setup.bash
colcon build
source install/setup.bash
```

> 说明：仓库里既出现过 Galactic，也出现过 Humble/Eloquent 的脚本分支。新人建议遵循你们团队当前指定的 ROS2 发行版；如果不确定，以实际部署机上 `/opt/ros/` 存在的版本为准。

### 4.2 单模块构建（以 x64 为例）
每个模块通常有 `scripts/build.x64.sh`：

```bash
source modules/message/ros2/install/setup.bash
cd modules/planning
./scripts/build.x64.sh
```

常见脚本特征（新人需要知道）：
- 可能会 **拷贝/覆盖** 模块的 `CMakeLists.txt`（按平台选择）
- 默认 Debug，Release 往往通过脚本参数或脚本内替换实现

### 4.3 运行（从 bin 目录运行）
统一建议从 `bin/` 目录运行（保证相对路径配置生效）：

```bash
source modules/message/ros2/install/setup.bash
cd modules/planning/bin
./planning
```

### 4.4 运行节拍（produce/publish 定时参数从哪来）
以 `planning` 为例，配置里常见的两个周期参数：
- **`produce_planning_command_duration`**：规划计算周期（单位通常是 ms）
- **`publish_planning_command_duration`**：发布周期（单位通常是 ms）

它们会对应到模块内部的两个定时任务（“计算”和“发布”分离），新人调参时建议遵循：
- 先保证系统整体能跑通，再做周期压缩（提高频率）
- 频率提高后如果出现抖动/延迟，优先检查 CPU 负载、消息队列堆积、日志 IO

### 4.5 一键构建与打包
仓库提供 `docs/build_service.sh`，流程大致是：
- 编译 ROS2 interface（`colcon build`）
- 依次编译 `planning/control/routing/prediction`
- 打包 `docs/ + common/data + ros2/install + 各模块 bin`

这份脚本适合做：
- 发版包（tar.gz）
- 集成测试包

不适合直接做：
- 多人并行开发时的“日常增量构建”（脚本可能会改写构建脚本内容）

---

## 5. 启动与守护（Watchdog 脚本）

### 5.1 `robot_start_legion.sh` 做了什么
它的工作模式更像“最小可用 watchdog”：
- 设置 ROS 环境、`LD_LIBRARY_PATH`、`CMAKE_PREFIX_PATH`
- 设置 `ROS_DOMAIN_ID`
- 循环检查 `control/planning/routing` 是否存在，不在则拉起

新人注意事项：
- 脚本会修改 `~/.bashrc` 中的 `ROS_DOMAIN_ID`（对个人开发机/多项目环境可能有副作用）
- 如果你遇到“能运行但互相收不到消息”，优先检查：
  - `ROS_DOMAIN_ID` 是否一致
  - `RMW_IMPLEMENTATION` 是否一致（不同 DDS 实现可能不互通）

---

## 6. 新人读码指南：从哪里开始看

### 6.1 建议的“最短闭环”读码路线（推荐）
以 `planning` 为例走通一条闭环：
- **入口**：`modules/planning/src/apps/main.cpp`
- **骨架**：`modules/planning/src/apps/planning.cpp`
  - 配置加载（protobuf from JSON）
  - 日志初始化
  - IPC/消息初始化
  - 线程/定时器（计算与发布）
- **配置**：`modules/planning/bin/conf/planning/planning.json`
- **消息**：看 `modules/message/ros2/src/legion/ros2_interface/msg/*.msg` 了解输入输出字段

完成上述路线后，再扩展：
- `routing`：理解全局路线如何产生与发布
- `prediction`：理解障碍物预测如何组织
- `control`：理解控制如何消费轨迹/指令并输出底盘控制

### 6.2 看代码时的“抓手问题”
新人在任何模块里，都可以用下面这些问题快速定位主逻辑：
- 模块的 **配置对象**是什么 protobuf？
- 模块的 **定时主循环**在哪？（Timer/WheelTimer/线程）
- 模块的 **关键输入**有哪些？（订阅哪些 msg/topic）
- 模块的 **关键输出**有哪些？（发布哪些 msg/topic）
- 运行时是否存在 **激活/去激活**（Activate/DeActivate）机制？

---

## 7. 常见问题与排障清单（新手最容易卡的点）

### 7.1 编译相关
- **找不到 `ros2_interface`**：
  - 确认先 `colcon build` 了 `modules/message/ros2`
  - 确认 `source modules/message/ros2/install/setup.bash`
- **找不到第三方库（glog/gflags/protobuf/boost 等）**：
  - 仓库默认依赖 `/usr/local/legion/third_party/...`
  - 确认脚本是否已导出 `LD_LIBRARY_PATH`/`CMAKE_PREFIX_PATH`
- **Release/Debug 切换混乱**：
  - 注意部分脚本会 `sed -i` 改写构建脚本或覆盖 `CMakeLists.txt`
  - 建议：每次切换后清理对应模块的 `build/` 目录再编译

### 7.2 运行相关（能起进程但系统“没反应”）
- **消息收不到/收不全**：
  - 核对 `ROS_DOMAIN_ID`（所有进程必须一致）
  - 核对是否同一 ROS2 distro + 同一 RMW 实现
  - 核对编译时启用的是 ROS2 还是 DDS/LCM（宏/开关）
- **配置找不到**：
  - 确认从 `modules/<module>/bin/` 运行
  - 检查 `bin/conf/` 是否存在并且路径与默认相对路径一致
- **动态库加载失败**（`libxxx.so: cannot open shared object file`）：
  - 检查 `LD_LIBRARY_PATH` 是否包含 third_party 目录

---

## 8. 实操训练建议（可作为培训 Day1/Day2）

### 8.1 Day1：跑通构建与单模块运行
- **目标**：能成功编译 `ros2_interface`，并运行 `planning`（或任一模块）
- **练习**：
  - 运行 `modules/message/ros2` 的 `colcon build`
  - 编译 `modules/planning`（`./scripts/build.x64.sh`）
  - 从 `modules/planning/bin` 启动 `./planning`
  - 确认 `log/` 目录产生并能看到模块启动日志

### 8.2 Day2：理解一条完整链路（routing→planning→control）
- **目标**：在系统中定位输入输出消息与处理函数
- **练习**：
  - 分别启动 `routing/planning/control`
  - 在 `planning` 中找到“接收 routing response → 更新 reference line → 生成轨迹 → 发布”的主路径
  - 在 `control` 中找到“消费轨迹/指令 → 输出 ControlCommand”的主路径

---

## 9. 新增/修改需求时的落点指引（给新人“怎么改”的地图）

### 9.1 新增一个消息字段/新消息
- **ROS2**：在 `modules/message/ros2/.../msg/*.msg` 增加字段或新增 `.msg`
  - 重新 `colcon build`
  - 业务模块重新编译并适配字段
- **DDS**：关注 `modules/common/integration_service/integration_service.yaml`（IDL/映射可能需要同步）

### 9.2 新增一个模块
推荐最小模板结构：
- `modules/<new_module>/src/apps/main.cpp`：入口
- `modules/<new_module>/src/apps/<new_module>.cpp`：初始化骨架（配置/日志/消息/线程）
- `modules/<new_module>/bin/conf/<new_module>/...`：配置
- `modules/<new_module>/scripts/build.<platform>.sh`：构建脚本

---

## 10. 附录：关键文件索引（新人必读）
- `README.md`：项目结构、基本编译运行方式
- `docs/build_service.sh`：一键构建与打包
- `docs/robot_start_legion.sh`：守护启动与环境设置（尤其 ROS_DOMAIN_ID / LD_LIBRARY_PATH）
- `modules/message/ros2/src/legion/ros2_interface/CMakeLists.txt`：ROS2 接口生成入口
- `modules/planning/src/apps/planning.cpp`：典型模块骨架（配置/消息/定时器/发布）


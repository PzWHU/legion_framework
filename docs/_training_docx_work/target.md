# 基于Carla仿真器+Legion软件框架的PNC仿真介绍

## 姜成杰

### 课程概述：

了解Carla仿真仿真器

了解自动驾驶软件系统架构

了解Legion软件架构

了解自动驾驶规划模块设计原理

了解自动驾驶控制模块设计原理

> 熟悉基于Carla仿真器和Legion软件框架的PNC仿真

### 内容大纲:

|                                             |                                             |
|---------------------------------------------|---------------------------------------------|
| 目录                                        |知识点                                      |
| 引入自动驾驶仿真系统概念                    |破题/破冰：为什么需要自动驾驶仿真           |
| 一、Carla仿真平台介绍                       |Carla仿真器功能介绍                         |
| 二、自动驾驶软件系统                        |自动驾驶软件系统介绍                        |
|                                             |自动驾驶软件系统规划模块设计原理            |
|                                             |自动驾驶软件系统控制模块设计原理            |
| 三、Legion软件框架                          |代码组织、模块关系、通信接口与使用教程      |
| 四、基于Carla仿真器+Legion软件框架的PNC仿真 |基于Carla仿真器+Legion软件框架的PNC仿真架构 |
|                                             |仿真实训步骤介绍                            |
| 总结                                        |编译、启动、联调中的关键排障点              |

### 知识点1：自动驾驶软件仿真系统

本课程的"仿真系统"指：在没有真实车辆/道路风险的前提下，把**自动驾驶软件（PNC 等模块）**接入到一个可控、可回放、可评估的虚拟世界里，用于：

- **算法验证**：功能正确性、边界场景、回归测试
- **系统联调**：消息链路、时钟/坐标系、模块启停、数据一致性
- **效率提升**：并行跑场景、快速复现 bug、自动化评测
- **风险控制**：避免实车测试的安全与资源成本

仿真系统通常由四类组件构成：

1. **仿真世界/物理引擎**：道路、车辆动力学、传感器模型（Carla 提供）
2. **中间件/通信层**：ROS2/DDS/LCM 等，负责数据交换与时序（Legion 支持多后端）
3. **自动驾驶软件栈**：定位/感知/预测/规划/控制/系统管理（本课程聚焦 PNC + 接口）
4. **评测与可视化**：指标统计、日志、回放、debug UI（Carla 可视化 + Legion 日志）

新人在联调时最常踩的三个坑：
- **时间**：仿真 tick、系统时间、消息时间戳不一致导致控制/规划异常
- **坐标**：Carla 坐标系与车体坐标、地图坐标的转换不一致导致轨迹"看起来对但车不走"
- **频率**：规划/控制周期与仿真步长不匹配导致抖动或滞后

### 知识点2：自动驾驶软件系统

为了让新人快速建立心智模型，可以把自动驾驶软件系统抽象成三层：

- **接口层（Interfaces）**：统一消息定义、序列化、topic/通道命名、发布订阅机制
- **能力层（Modules）**：定位、感知、预测、规划、控制、路由等业务模块
- **运行层（Runtime）**：进程管理、配置管理、日志、监控、故障处理、部署与打包

#### 2.1 规划（Planning）模块设计原理（本课程的关注点）
规划模块的核心任务是：在给定约束下生成"可执行、平滑、安全"的未来轨迹。

典型输入：
- **全局路线/引导**：`RoutingResponse` / `GuideInfo`
- **车辆状态**：`Location` + `Chassis`
- **环境约束**：`PredictionObstacles`、交通灯/交通事件、可行驶区域等

典型输出：
- **轨迹**：`ADCTrajectory`（离散轨迹点序列）
- **规划指令/状态**：`PlanningCmd`、规划分析/调试数据等

常见的内部结构（与具体算法实现无关的"骨架"）：
- **Reference Line / Map Match**：把全局引导映射到局部参考线
- **行为决策**：跟车/换道/避障/停车/路口等状态机或策略
- **轨迹生成**：基于候选轨迹采样、优化或搜索
- **轨迹评估与约束**：碰撞、舒适性（加速度/加加速度）、动力学可行性

#### 2.2 控制（Control）模块设计原理（本课程的关注点）
控制模块的目标是：让车辆实际运动尽可能跟随规划轨迹，同时满足稳定性与舒适性。

典型输入：
- `ADCTrajectory`（期望轨迹）
- `Location` / `Chassis`（当前状态与反馈）

典型输出：
- `ControlCommand`（转向、加减速等控制量）

新人理解控制的关键切入点：
- **横向控制**：如 LQR/纯跟踪等（实际实现取决于配置与版本）
- **纵向控制**：速度/加速度跟踪、刹停策略、标定表（calibration）
- **坐标转换**：轨迹在不同参考点（后轴中心/质心）的转换会影响跟踪效果
- **控制周期**：周期不稳定会引入振荡与延迟

### 知识点3:Legion软件框架

Legion 是本课程的"被接入软件栈"。从工程视角，它有三个关键特征：

1. **模块化可执行程序**：`planning/control/prediction/routing/感知节点` 多为独立进程，产物在各自 `bin/` 目录
2. **统一配置模式**：protobuf 定义结构 + JSON 落地配置 + gflags 提供配置路径等运行参数
3. **通信后端可切换**：ROS2/ROS1/DDS/LCM 通过编译开关与配置共同决定

#### 3.1 代码组织（新人只看这几类目录即可上手）
- `modules/<module>/src/apps/`：应用入口与主流程（`main.cpp`、`<module>.cpp`）
- `modules/<module>/src/common/`：模块 gflags、通用工具、消息管理器封装
- `modules/<module>/bin/conf/`：运行配置（相对路径通常从 `bin/` 开始）
- `modules/message/`：消息接口（ROS2 msg、DDS 等）
- `modules/common/`：被多个模块复用的公共能力与配置数据

#### 3.2 消息通信接口（"怎么选 ROS2/DDS"）
新人必须牢记：**消息后端 = 编译开关 + 运行配置** 两者缺一不可。

- 编译开关示例：`-DROS2_ENABLE=ON -DDDS_ENABLE=OFF -DLCM_ENABLE=OFF`
- 运行配置示例（以 planning 为例）：
  - `messages.message_info` 定义可选后端
  - `messages.active_message` 选择启用的后端（在部分模块里按下标取 `message_info`）

#### 3.3 构建、启动与打包（与联调强相关）
- 先构建 ROS2 interface：`modules/message/ros2` 下 `colcon build`
- 再构建各模块：`modules/<module>/scripts/build.<platform>.sh`
- 建议从 `modules/<module>/bin` 目录运行，保证 `./conf/...` 相对路径生效
- 一键打包：`docs/build_service.sh`

### 知识点4:基于Carla仿真器+Legion软件框架的PNC仿真

本节回答两个问题：
- **Carla 端需要提供什么？**
- **Legion 端需要消费什么并输出什么？**

#### 4.1 PNC 仿真总体架构（推荐讲法：三段式）
1. **场景与传感器（Carla）**
   - 生成车辆真实运动（动力学/碰撞/交通参与者）
   - 产生"车辆状态、环境信息、（可选）传感器数据"
2. **接口桥接（Bridge）**
   - 把 Carla 数据转换为 Legion 接口（ROS2 msg / DDS 数据结构）
   - 做坐标、时间戳、频率对齐
3. **PNC（Legion）**
   - routing/prediction/planning/control 形成闭环
   - 输出控制指令回写给 Carla（控制仿真车）

#### 4.2 仿真联调的最小闭环（新人练习的"第一目标"）
最小闭环只需要把下面几类数据跑通：
- 输入：`Location` + `Chassis`（车辆状态）、`RoutingResponse`（全局路线）
- 输出：`ADCTrajectory`（规划轨迹）、`ControlCommand`（控制指令）

只要闭环跑通，车辆能沿路线稳定行驶，再逐步加入：
- `PredictionObstacles`（动态障碍）
- `TrafficLightMsg`/`TrafficEvents`（交通约束）
- `DrivableRegion`（可行驶区域）

#### 4.3 仿真实训步骤介绍（课堂可照此走）
以下是"先跑通、再变复杂"的推荐步骤（讲师可按现场环境替换具体脚本/命令）：

1. **准备环境**
   - 确认 ROS2 发行版与 RMW 实现（团队统一）
   - 确认 `ROS_DOMAIN_ID` 一致
   - 确认 third_party 动态库路径（`LD_LIBRARY_PATH`）
2. **构建接口与模块**
   - `modules/message/ros2`：`colcon build`
   - 编译 `routing/planning/control`（按平台脚本）
3. **启动 Carla 与桥接**
   - 启动 Carla 服务端与场景
   - 启动 bridge，把 Carla 世界输出映射到 Legion 接口 topic
4. **启动 Legion PNC**
   - 启动 `routing`（生成/发布路线）
   - 启动 `planning`（订阅输入并发布轨迹）
   - 启动 `control`（订阅轨迹并发布控制）
5. **验证闭环**
   - 车辆是否能起步并沿路线行驶
   - 轨迹是否连续、速度是否合理、控制是否抖动
6. **扩展训练**
   - 加入障碍物与交通灯
   - 修改规划/控制周期，观察系统稳定性变化
   - 引入异常（丢包/延迟/时间戳错），训练排障

#### 4.4 联调中的关键排障点（课堂总结可直接复用）
- **收不到消息**：先查 `ROS_DOMAIN_ID`、再查编译后端（`ROS2_ENABLE` 等）、再查 topic 是否一致
- **车辆抖动**：查控制周期、查规划发布频率、查 Carla tick 是否稳定
- **轨迹看起来正确但车辆偏离**：优先怀疑坐标系/参考点（后轴中心 vs 质心）转换
- **控制延迟明显**：查 CPU 占用、日志 IO、消息队列堆积、以及桥接频率是否过低

### 课前预习或课后自学知识点：

> **使用说明**：以下知识点供学员课前预习或课后加深理解，按顺序学习效果更佳。

#### 1. 自动驾驶仿真系统基础

- **仿真价值**：对比实车测试的成本、效率、安全性，了解四层架构（物理世界→通信中间件→自动驾驶软件→评测可视化）
- **常见平台**：Carla、Prescan、SCANeR、VTD、AirSim 的特点与对比维度
- **数据流**：理解 "Carla → Bridge → Legion PNC → 控制回写" 闭环及关键数据（Location、Chassis、ADCTrajectory、ControlCommand）

#### 2. Carla 仿真器核心概念

- **基础对象**：World、Actor、Vehicle、Sensor、Traffic Manager 的作用
- **时间机制**：Tick（同步/异步）、fixed_delta_seconds、仿真时间 vs 系统时间
- **坐标系**：UE4 左手坐标系、车辆坐标系、单位（米、弧度）、坐标转换链
- **控制接口**：throttle、brake、steering、gear 及开环/闭环控制方式

#### 3. 自动驾驶软件系统基础

- **三层架构**：接口层（消息定义）、能力层（定位/感知/预测/规划/控制/路由）、运行层（进程/配置/日志/部署）
- **规划核心**：参考线、行为决策（状态机）、轨迹生成（采样/优化/搜索）、轨迹评估（代价函数）
- **控制核心**：横向控制（LQR/纯跟踪）、纵向控制（PID/标定）、控制周期、坐标转换
- **预测作用**：障碍物预测、意图预测、时间 horizon、与规划的交互

#### 4. Legion 软件框架上手

- **模块化设计**：每个模块一个可执行程序（planning/control/prediction/routing）
- **消息后端**：ROS2/ROS1/DDS/LCM 通过编译开关 + 配置共同决定
- **配置体系**：protobuf 定义 + JSON 配置 + gflags 运行参数
- **代码结构**：`src/apps/` 入口、`bin/conf/` 配置、`message/` 接口
- **关键配置**：`active_message` 选择消息后端、`produce/publish_duration` 控制周期

#### 5. 扩展自学方向

- **桥接实现**：ROS2 bridge、DDS bridge、数据转换、频率对齐
- **场景评测**：OpenSCENARIO/OpenDRIVE、评测指标、自动化测试
- **性能优化**：实时性调试、通信延迟分析、时间戳/坐标系/频率问题排查

#### 6. 推荐练习

- **练习1**：搭建环境，跑通 routing→planning→control 最小闭环
- **练习2**：修改 `active_message` 切换消息后端，解释编译开关+配置的关系
- **练习3**：人为制造时间戳/频率问题，写出排查与修复过程
- **练习4**：加入障碍物预测、交通灯约束，观察系统变化

#### 7. 参考资源

- **官方文档**：Carla（https://carla.org/）、Legion README.md、ROS2 Galactic/Humble
- **关键代码**：`modules/planning/src/apps/planning.cpp`、`modules/control/src/apps/control.cpp`、`modules/message/ros2/.../msg/`
- **推荐阅读**：自动驾驶系统设计、Planning Algorithms、ROS2 通信最佳实践、车辆动力学与控制基础

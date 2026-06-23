#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
车端网关集成测试脚本
用于测试车端网关的ROS2功能：
1. 测试ROS2状态订阅功能
2. 测试状态数据转发功能
3. 测试指令发布功能
4. 测试指令映射
5. 测试完整通信流程

使用方法：
    python3 test_gateway_integration.py

注意：运行此测试需要：
1. ROS2环境已配置
2. 车端程序正在运行（可选，用于完整测试）
"""

import sys
import os
import time
import json
import traceback
import threading
from queue import Queue

# 添加当前目录到路径
current_dir = os.path.dirname(os.path.abspath(__file__))
if current_dir not in sys.path:
    sys.path.insert(0, current_dir)

# 尝试导入ROS2
try:
    import rclpy
    from rclpy.node import Node
    from std_msgs.msg import String as ROS2String
    ROS2_AVAILABLE = True
    print("✓ ROS2导入成功")
except ImportError as e:
    ROS2_AVAILABLE = False
    print(f"✗ ROS2导入失败: {e}")
    print("请确保已安装ROS2并配置好环境")
    sys.exit(1)

# 导入车端网关模块
try:
    from communication_bridge import (
        CommunicationBridge,
        CommandSource,
        Command,
        CommandMapper,
        ROS2Publisher
    )
    print("✓ 车端网关模块导入成功")
except ImportError as e:
    print(f"✗ 车端网关模块导入失败: {e}")
    traceback.print_exc()
    sys.exit(1)


class TestStatusPublisher(Node):
    """测试用的状态发布者，模拟车端程序发布状态"""
    
    def __init__(self):
        super().__init__('test_status_publisher')
        self.publisher = self.create_publisher(
            ROS2String,
            '/vehicle/status',
            10
        )
        self.get_logger().info('测试状态发布者已启动')
    
    def publish_status(self, status_data):
        """发布测试状态"""
        msg = ROS2String()
        msg.data = json.dumps(status_data, ensure_ascii=False)
        self.publisher.publish(msg)
        self.get_logger().info(f'发布测试状态: {status_data.get("type", "unknown")}')
        print(f"  → 发布状态: {status_data.get('type', 'unknown')}")


class TestCommandSubscriber(Node):
    """测试用的指令订阅者，接收车端网关发布的指令"""
    
    def __init__(self):
        super().__init__('test_command_subscriber')
        self.subscription = self.create_subscription(
            ROS2String,
            '/vehicle/command',
            self.command_callback,
            10
        )
        self.received_commands = []
        self.get_logger().info('测试指令订阅者已启动')
    
    def command_callback(self, msg):
        """接收指令数据"""
        try:
            command_data = json.loads(msg.data)
            self.received_commands.append(command_data)
            code = command_data.get('code', 'N/A')
            command_type = command_data.get('value', {}).get('command_type', 'unknown')
            print(f"  ← 收到指令: code={code}, type={command_type}")
        except Exception as e:
            self.get_logger().error(f'指令解析失败: {e}')


def test_ros2_status_subscription():
    """测试ROS2状态订阅功能"""
    print("\n" + "="*60)
    print("测试1: ROS2状态订阅功能")
    print("="*60)
    
    # 检查ROS2是否已初始化
    try:
        rclpy.init()
    except RuntimeError as e:
        if "already initialized" in str(e).lower():
            print("⚠️  ROS2已初始化，跳过初始化")
        else:
            raise
    
    try:
        # 创建executor用于处理消息
        executor = rclpy.executors.SingleThreadedExecutor()
        
        # 创建测试状态发布者（模拟车端程序）
        test_publisher = TestStatusPublisher()
        executor.add_node(test_publisher)
        
        # 创建车端网关的ROS2Publisher（注意：ROS2Publisher内部也会初始化ROS2）
        received_status = []
        
        def status_callback(status_data):
            """状态回调函数"""
            received_status.append(status_data)
            status_type = status_data.get('type', 'unknown')
            print(f"  ✓ 收到状态: {status_type}")
            if status_type == 'vehicle':
                data = status_data.get('data', {})
                print(f"     电池: {data.get('battery', 'N/A')}, "
                      f"速度: {data.get('v', 'N/A')}")
        
        # 由于ROS2Publisher会在__init__中初始化ROS2，我们需要先shutdown然后重新初始化
        # 或者使用一个不初始化的版本。这里我们采用另一种方式：
        # 先创建ROS2Publisher（它会初始化ROS2），然后添加节点到executor
        gateway_publisher = ROS2Publisher(node_name='test_gateway')
        gateway_publisher.set_status_callback(status_callback)
        
        # 将gateway节点添加到executor
        if gateway_publisher.node:
            executor.add_node(gateway_publisher.node)
        
        # 等待节点建立连接
        time.sleep(1)
        
        # 发布测试状态
        print("\n发布测试状态...")
        test_status = {
            "type": "vehicle",
            "data": {
                "cur_x": 100.5,
                "cur_y": 200.3,
                "rtk_flag": 1,
                "battery": 85.5,
                "v": 2.5,
                "driving_mode": 1,
                "clean_mode": 1,
                "water_mode": 0
            },
            "timestamp": time.strftime('%Y-%m-%dT%H:%M:%S')
        }
        
        test_publisher.publish_status(test_status)
        
        # 处理消息
        print("\n处理接收到的消息...")
        for _ in range(20):
            executor.spin_once(timeout_sec=0.1)
            if len(received_status) > 0:
                break
        
        # 验证结果
        if len(received_status) > 0:
            print("✓ 状态订阅功能正常")
            if received_status[0].get('type') == 'vehicle':
                print("✓ 状态类型正确")
            result = True
        else:
            print("✗ 未收到状态数据")
            result = False
        
        # 清理
        executor.remove_node(test_publisher)
        test_publisher.destroy_node()
        if gateway_publisher.node:
            executor.remove_node(gateway_publisher.node)
        gateway_publisher.shutdown()
        executor.shutdown()
        rclpy.shutdown()
        
        return result
        
    except Exception as e:
        print(f"✗ 测试失败: {e}")
        traceback.print_exc()
        try:
            rclpy.shutdown()
        except:
            pass
        return False


def test_command_publication():
    """测试指令发布功能"""
    print("\n" + "="*60)
    print("测试2: 指令发布功能")
    print("="*60)
    
    # 检查ROS2是否已初始化
    try:
        rclpy.init()
    except RuntimeError as e:
        if "already initialized" in str(e).lower():
            print("⚠️  ROS2已初始化，跳过初始化")
        else:
            raise
    
    try:
        # 创建executor用于处理消息
        executor = rclpy.executors.SingleThreadedExecutor()
        
        # 创建测试订阅者（模拟车端程序）
        test_subscriber = TestCommandSubscriber()
        executor.add_node(test_subscriber)
        
        # 创建车端网关的ROS2Publisher
        gateway_publisher = ROS2Publisher(node_name='test_gateway_2')
        
        # 将gateway节点添加到executor
        if gateway_publisher.node:
            executor.add_node(gateway_publisher.node)
        
        # 等待节点建立连接
        time.sleep(1)
        
        # 发布测试指令
        print("\n发布测试指令...")
        test_commands = [
            (41, 'auto_drive_start', {}, 'TEST'),
            (40, 'auto_drive_stop', {}, 'TEST'),
            (4001, 'task_start', {'task_name': '测试任务'}, 'TEST'),
        ]
        
        for code, cmd_type, params, source in test_commands:
            value = {
                "command_type": cmd_type,
                "data": params,
                "source": source
            }
            gateway_publisher.publish(code, value)
            time.sleep(0.5)
        
        # 处理消息
        print("\n处理接收到的消息...")
        for _ in range(20):
            executor.spin_once(timeout_sec=0.1)
            if len(test_subscriber.received_commands) >= len(test_commands):
                break
        
        # 验证结果
        print(f"\n收到 {len(test_subscriber.received_commands)} 条指令")
        if len(test_subscriber.received_commands) == len(test_commands):
            print("✓ 所有指令都已发布")
            result = True
        else:
            print(f"✗ 只收到 {len(test_subscriber.received_commands)}/{len(test_commands)} 条指令")
            result = False
        
        # 清理
        executor.remove_node(test_subscriber)
        test_subscriber.destroy_node()
        if gateway_publisher.node:
            executor.remove_node(gateway_publisher.node)
        gateway_publisher.shutdown()
        executor.shutdown()
        rclpy.shutdown()
        
        return result
        
    except Exception as e:
        print(f"✗ 测试失败: {e}")
        traceback.print_exc()
        try:
            rclpy.shutdown()
        except:
            pass
        return False


def test_command_mapping():
    """测试指令映射"""
    print("\n" + "="*60)
    print("测试3: 指令映射")
    print("="*60)
    
    try:
        mapper = CommandMapper('test_command_mapping.json')
        
        # 测试各种指令映射
        test_cases = [
            ('auto_drive_start', 41),
            ('auto_drive_stop', 40),
            ('clean_start', 11),
            ('clean_stop', 10),
            ('water_start', 21),
            ('water_stop', 20),
            ('task_start', 4001),
            ('task_end', 4002),
            ('call_back', 5001),
            ('set_speed', 1007),
        ]
        
        print("\n测试指令映射...")
        all_passed = True
        for command_type, expected_code in test_cases:
            code = mapper.get_code(command_type)
            if code == expected_code:
                print(f"  ✓ {command_type} -> {code}")
            else:
                print(f"  ✗ {command_type} -> {code} (期望: {expected_code})")
                all_passed = False
        
        # 清理测试文件
        if os.path.exists('test_command_mapping.json'):
            os.remove('test_command_mapping.json')
        
        return all_passed
        
    except Exception as e:
        print(f"✗ 测试失败: {e}")
        traceback.print_exc()
        return False


def test_command_processing():
    """测试指令处理逻辑"""
    print("\n" + "="*60)
    print("测试4: 指令处理逻辑")
    print("="*60)
    
    try:
        from communication_bridge import CommunicationBridge
        
        # 创建测试配置
        test_config = {
            'vehicle_id': 'V001',
            'mqtt': {
                'broker': 'localhost',
                'port': 1883
            },
            'websocket': {
                'host': '0.0.0.0',
                'port': 8765
            },
            'command_mapping_file': 'test_command_mapping.json'
        }
        
        # 创建通信桥接实例（不启动，只测试方法）
        bridge = CommunicationBridge(test_config)
        
        # 测试build_command_value方法
        print("\n测试指令值构建...")
        test_commands = [
            Command(CommandSource.MINIPROGRAM_OFFLINE, 'task_start', {'task_name': '测试任务'}, time.time()),
            Command(CommandSource.CLOUD_PLATFORM, 'task_end', {'task_name': '测试任务'}, time.time()),
            Command(CommandSource.MINIPROGRAM_ONLINE, 'set_speed', {'speed': 5}, time.time()),
            Command(CommandSource.MINIPROGRAM_OFFLINE, 'auto_drive_start', {}, time.time()),
        ]
        
        for cmd in test_commands:
            value = bridge.build_command_value(cmd)
            print(f"  ✓ {cmd.command_type}: {value.get('data')}")
        
        # 清理
        if os.path.exists('test_command_mapping.json'):
            os.remove('test_command_mapping.json')
        
        print("\n✓ 指令处理逻辑测试完成")
        return True
        
    except Exception as e:
        print(f"✗ 测试失败: {e}")
        traceback.print_exc()
        return False


def test_status_forwarding():
    """测试状态转发功能"""
    print("\n" + "="*60)
    print("测试5: 状态转发功能")
    print("="*60)
    
    try:
        from communication_bridge import CommunicationBridge
        
        # 创建测试配置
        test_config = {
            'vehicle_id': 'V001',
            'mqtt': {
                'broker': 'localhost',
                'port': 1883
            },
            'websocket': {
                'host': '0.0.0.0',
                'port': 8765
            },
            'command_mapping_file': 'test_command_mapping.json'
        }
        
        # 创建通信桥接实例
        bridge = CommunicationBridge(test_config)
        
        # 测试状态处理
        print("\n测试状态处理...")
        test_status = {
            "type": "vehicle",
            "data": {
                "cur_x": 100.5,
                "cur_y": 200.3,
                "battery": 85.5,
                "v": 2.5
            },
            "timestamp": time.strftime('%Y-%m-%dT%H:%M:%S')
        }
        
        # 调用状态处理函数（不会实际转发，因为没有连接的客户端）
        bridge.handle_vehicle_status(test_status)
        print("  ✓ 状态处理函数执行成功")
        
        # 清理
        if os.path.exists('test_command_mapping.json'):
            os.remove('test_command_mapping.json')
        
        return True
        
    except Exception as e:
        print(f"✗ 测试失败: {e}")
        traceback.print_exc()
        return False


def main():
    """主测试函数"""
    print("="*60)
    print("车端网关ROS2集成测试")
    print("="*60)
    
    if not ROS2_AVAILABLE:
        print("\n✗ ROS2不可用，无法运行测试")
        print("请确保已安装ROS2并配置好环境")
        return
    
    results = []
    
    # 运行所有测试
    results.append(("ROS2状态订阅", test_ros2_status_subscription()))
    results.append(("指令发布功能", test_command_publication()))
    results.append(("指令映射", test_command_mapping()))
    results.append(("指令处理逻辑", test_command_processing()))
    results.append(("状态转发功能", test_status_forwarding()))
    
    # 输出测试结果
    print("\n" + "="*60)
    print("测试结果汇总")
    print("="*60)
    
    passed = 0
    failed = 0
    
    for test_name, result in results:
        status = "✓ 通过" if result else "✗ 失败"
        print(f"{test_name}: {status}")
        if result:
            passed += 1
        else:
            failed += 1
    
    print(f"\n总计: {passed} 通过, {failed} 失败")
    
    if failed == 0:
        print("\n🎉 所有测试通过！")
        return 0
    else:
        print(f"\n⚠️  有 {failed} 个测试失败，请检查")
        return 1


if __name__ == '__main__':
    try:
        exit_code = main()
        sys.exit(exit_code)
    except KeyboardInterrupt:
        print("\n\n测试被用户中断")
        sys.exit(1)
    except Exception as e:
        print(f"\n\n测试过程中发生异常: {e}")
        traceback.print_exc()
        sys.exit(1)


import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from rclpy.qos import qos_profile_system_default
import time
import sys

def main(args=None):
    rclpy.init(args=args)
    node = Node('minimal_subscriber_test')

    def listener_callback(msg):
        print(f'I heard: "{msg.data[:50]}..."', flush=True)

    subscription = node.create_subscription(
        String,
        '/vehicle/status',
        listener_callback,
        qos_profile_system_default)
    
    print(f"Minimal subscriber started. Listening to /vehicle/status.", flush=True)
    
    # Check if publisher exists
    for _ in range(3):
        time.sleep(1)
        count = node.count_publishers('/vehicle/status')
        print(f"Detected publishers: {count}", flush=True)

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

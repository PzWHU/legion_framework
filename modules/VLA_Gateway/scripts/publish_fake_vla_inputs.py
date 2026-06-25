#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from ros2_interface.msg import Location, PredictionObstacles, TrajectoryArray, Path, PathPoint
import math
import time

class FakeVlaPublisher(Node):
    def __init__(self):
        super().__init__('fake_vla_publisher')
        self.loc_pub = self.create_publisher(Location, '/localization/global_fusion/Location', 10)
        self.obs_pub = self.create_publisher(PredictionObstacles, '/prediction/PredictionObstacles', 10)
        self.traj_pub = self.create_publisher(TrajectoryArray, '/planning/TrajectoryArray', 10)
        self.t = 0.0
        self.timer = self.create_timer(0.1, self.publish_all)

    def publish_all(self):
        now = self.get_clock().now().to_msg()
        loc = Location()
        loc.header.stamp = now
        loc.header.frame_id = 'world'
        loc.utm_position.x = 5.0
        loc.utm_position.y = 0.0
        loc.heading = 0.0
        loc.linear_velocity.x = 3.0
        loc.linear_velocity.y = 0.0
        self.loc_pub.publish(loc)

        traj = TrajectoryArray()
        traj.header.stamp = now
        traj.header.frame_id = 'world'
        path = Path()
        path.name = 'qp_smooth_0'
        for i in range(50):
            p = PathPoint()
            p.x = float(i)
            p.y = 0.0
            p.z = 0.0
            p.theta = 0.0
            p.kappa = 0.0
            p.s = float(i)
            p.dkappa = 0.0
            p.ddkappa = 0.0
            p.lane_id = 0.0
            p.x_derivative = 1.0
            p.y_derivative = 0.0
            path.path_points.append(p)
        traj.qp_smooth.append(path)
        self.traj_pub.publish(traj)

        obs = PredictionObstacles()
        obs.header.stamp = now
        obs.header.frame_id = 'world'
        self.obs_pub.publish(obs)

        self.t += 0.1

def main(args=None):
    rclpy.init(args=args)
    node = FakeVlaPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

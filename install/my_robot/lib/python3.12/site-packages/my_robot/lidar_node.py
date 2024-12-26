import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist

class LidarControlNode(Node):
    def __init__(self):
        super().__init__('lidar_control_node')
        
        # Subscriber untuk menerima data dari LIDAR
        self.lidar_subscriber = self.create_subscription(
            LaserScan,
            '/lidar',
            self.lidar_callback,
            10
        )
        
        # Publisher untuk mengirimkan perintah ke robot
        self.cmd_vel_publisher = self.create_publisher(Twist, '/cmd_vel', 10)

    def lidar_callback(self, msg):
        # Membaca data dari LIDAR
        twist_msg = Twist()
        all_more_than_one = all(range > 1 for range in msg.ranges)

        # Jika semua jarak lebih besar dari 1 meter, robot bergerak maju
        if all_more_than_one:
            twist_msg.linear.x = 0.5  # maju
            twist_msg.angular.z = 0.0  # tidak berputar
        else:
            twist_msg.linear.x = 0.0  # berhenti
            twist_msg.angular.z = 0.5  # berputar

        # Mengirimkan perintah ke robot
        self.cmd_vel_publisher.publish(twist_msg)

def main(args=None):
    rclpy.init(args=args)
    node = LidarControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

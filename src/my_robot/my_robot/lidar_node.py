import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist

class LidarControlNode(Node):
    def __init__(self):
        super().__init__('lidar_control_node')
        
        # Subscriber buat nerima data dari LIDAR
        self.lidar_subscriber = self.create_subscription(
            LaserScan,
            '/lidar',
            self.lidar_callback,
            10
        )
        
        # Publisher buat ngirim perintah ke robot
        self.cmd_vel_publisher = self.create_publisher(Twist, '/cmd_vel', 10)

    def lidar_callback(self, msg):
        # Membaca data dari LIDAR
        twist_msg = Twist()
        all_more_than_one = all(range > 1 for range in msg.ranges)

        if all_more_than_one:
            twist_msg.linear.x = 0.5  
            twist_msg.angular.z = 0.0  
        else:
            twist_msg.linear.x = 0.0  
            twist_msg.angular.z = 0.5  

        self.cmd_vel_publisher.publish(twist_msg)

def main(args=None):
    rclpy.init(args=args)
    node = LidarControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

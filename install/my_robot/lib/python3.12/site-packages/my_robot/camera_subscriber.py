import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class CameraSubscriber(Node):
    def __init__(self):
        super().__init__('camera_subscriber')
        self.bridge = CvBridge()

        # Berlangganan ke topik gambar yang diterbitkan oleh Gazebo
        self.image_sub = self.create_subscription(
            Image,
            '/camera/image_raw',  # Gantilah sesuai dengan topik kamera Anda
            self.listener_callback,
            10
        )
        self.get_logger().info('Camera Subscriber Node Initialized.')

    def listener_callback(self, msg):
        # Mengonversi pesan gambar ROS menjadi gambar OpenCV
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # Menampilkan gambar menggunakan OpenCV
        cv2.imshow("Camera Image", cv_image)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    node = CameraSubscriber()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

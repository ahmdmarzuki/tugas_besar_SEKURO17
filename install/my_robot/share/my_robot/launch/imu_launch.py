import launch
import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration
from launch.actions import ExecuteProcess

def generate_launch_description():
    # Menyediakan konfigurasi dunia untuk digunakan dalam proses eksekusi
    world_file = LaunchConfiguration('world')

    return LaunchDescription([
        DeclareLaunchArgument(
            'world',
            default_value=os.path.expanduser('~/tubes_sekuro_ws/src/my_robot/worlds/imu_world.sdf'),  # Tentukan dunia default
            description='Choose world file'
        ),
        ExecuteProcess(  # Eksekusi perintah untuk memulai gazebo dengan dunia yang diberikan
            cmd=['gz', 'sim', world_file],  # Perintah untuk menjalankan Gazebo
            output='screen'  # Menampilkan log di layar
        ),

        Node(
            package='ros_gz_bridge',
            executable='parameter_bridge',
            arguments=['/lidar@sensor_msgs/msg/LaserScan@gz.msgs.LaserScan'],
            output='screen',
        ),

        Node(
            package='ros_gz_bridge',
            executable='parameter_bridge',
            arguments=['/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist'],
            output='screen',
        ),

        Node(
            package='my_robot',  # Ganti dengan nama paket Anda
            executable='lidar_node',  # Nama executable yang sesuai
            name='lidar_node',  # Nama unik untuk node
            output='screen',  # Output log akan ditampilkan di terminal
            parameters=[]  # Tambahkan parameter jika diperlukan
        ),



    ])

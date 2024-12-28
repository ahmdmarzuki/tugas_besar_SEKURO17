import launch
import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration
from launch.actions import ExecuteProcess

def generate_launch_description():
    world_file = LaunchConfiguration('world')

    return LaunchDescription([
        DeclareLaunchArgument(
            'world',
            default_value=os.path.expanduser('~/tubes_sekuro_ws/src/my_robot/worlds/minibot_world.sdf'),  
            description='Choose world file'
        ),
        ExecuteProcess(  
            cmd=['gz', 'sim', world_file],  
            output='screen'  
        ),

    ])

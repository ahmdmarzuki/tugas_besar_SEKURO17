from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'my_robot'

setup(
    name=package_name,
    version='0.0.0',
    # packages=find_packages(exclude=['test']),
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ],
    install_requires=['setuptools', 'launch', 'launch_ros'],
    zip_safe=True,
    maintainer='ahmrrzz',
    maintainer_email='ahmadmarzuki303@gmail.com',
    description='TODO: Package description',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'launch = my_robot.launch:main',
            'lidar_node = my_robot.lidar_node:main',
        ],
    },
)

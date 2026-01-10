import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

os.environ["AUV"] = "AUV8"
def generate_launch_description():
    imu_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('imu_port_manager'), 'launch'),
            '/launch.py'])
        )

    dvl_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('dvl_port_manager'), 'launch'),
            '/launch.py'])
        )
    
    depth_launch = IncludeLaunchDescription(
       PythonLaunchDescriptionSource([os.path.join(
           get_package_share_directory('depth_port_manager'), 'launch'),
           '/launch.py'])
       )
    
    rs485_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('rs485_port_manager'), 'launch'),
            '/launch.py'])
        )

    proc_control_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('proc_control'), 'launch'),
            '/launch.py'])
        )
    
    proc_planner_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('proc_planner_ros2'), 'launch'),
            '/launch.py'])
        )

    cam_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('cam_port_manager'), 'launch'),
            '/launch.py'])
        )
    zed_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('zed_wrapper'), 'launch'),
            '/launch.py'])
        )
    sonia_bt_runner_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('sonia_bt_runner'), 'launch'),
            '/launch.py'])
        )
    proc_vision_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('proc_vision_ros2'), 'launch'),
            '/launch.py'])
        )
    sonia_deploy_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('sonia_deploy'), 'launch'),
            '/launch.py'])
        )
    
    return LaunchDescription([
        imu_launch,
        dvl_launch,
        depth_launch,
        rs485_launch,
        proc_control_launch,
        cam_launch,
        zed_launch,
        proc_planner_launch,
        sonia_bt_runner_launch,
        sonia_deploy_launch,
        proc_vision_launch
    ])

import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

os.environ["AUV"] = "LITE1"
def generate_launch_description():
    imu_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('imu_port_manager'), 'launch'),
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
    sonia_monitor_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('sonia_monitor'), 'launch'),
            '/launch.py'])
        )
    sonia_blackbox_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('sonia_blackbox'), 'launch'),
            '/launch.py'])
        )
    
    return LaunchDescription([
        imu_launch,
        depth_launch,
        rs485_launch,
        proc_control_launch,
        zed_launch,
        proc_planner_launch,
        sonia_monitor_launch,
        sonia_bt_runner_launch,
        sonia_blackbox_launch
    ])
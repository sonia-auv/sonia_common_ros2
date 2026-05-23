import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

os.environ["AUV"] = "AUV8"
def generate_launch_description():

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

    endpoint = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('ros_tcp_endpoint'), 'launch'),
            '/endpoint.py'])
        )
    sonia_monitor_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('sonia_monitor'), 'launch'),
            '/launch.py'])
        )
    
    return LaunchDescription([
        #proc_control_launch,
        proc_planner_launch,
        endpoint,
        sonia_monitor_launch
    ])
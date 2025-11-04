# sonia_common_ros2

The project regroups all of sonia's common dependencies. These include, dependencies for c++, python and **ROS2**

---

## sonia_common_cpp

This project contains all custom **C++** dependencies for sonia projects

---

## sonia_common_py

This project contains all custom **Python** dependencies for sonia projects

---

## sonia_common_ros2

This project contains all custom **ROS2** dependencies for sonia projects

### action

custom action files used in sonia projects

### msg

### srv

---

## Dependencies

### ROS 2 Distro

* Humble

### ROS 2 Packages

* `ament_cmake`
* `rclcpp`
* `builtin_interfaces`
* `geometry_msgs`
* `rosidl_default_generators`
* `std_msgs`

---
## Build Instructions
To build all the 3 projects in sonia_common_ros2, the following commands should be run directly from your ROS2 workspace.

```bash
colcon build --paths src/sonia_common_ros2/* --symlink-install
source install/setup.bash
```

---

## References

---
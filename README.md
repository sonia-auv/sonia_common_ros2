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

This directory contains all custom **ROS2** dependencies for sonia projects

### action

This directory contains all custom ROS 2 action files (**.action**) defining asynchronous tasks and goal/feedback/result structures used by the nodes in this package.

### msg

This directory contains all custom ROS 2 message files (**.msg**) that define the data structures exchanged between nodes in this project.

### srv

This directory contains all custom ROS 2 service files (**.srv**) that define request–response interactions used by the nodes in this package

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
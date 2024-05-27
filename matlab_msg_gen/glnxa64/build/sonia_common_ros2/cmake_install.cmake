# Install script for directory: /home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/sonia_common_ros2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/sonia_common_ros2/sonia_common_ros2" TYPE DIRECTORY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_generator_c/sonia_common_ros2/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/environment" TYPE FILE FILES "/usr/local/MATLAB/R2024a/sys/ros2/glnxa64/ros2/lib/python3.9/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/environment" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/libsonia_common_ros2__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_generator_c.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/sonia_common_ros2/sonia_common_ros2" TYPE DIRECTORY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_typesupport_fastrtps_c/sonia_common_ros2/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/libsonia_common_ros2__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_fastrtps_c.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/sonia_common_ros2/sonia_common_ros2" TYPE DIRECTORY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_typesupport_introspection_c/sonia_common_ros2/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/libsonia_common_ros2__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_introspection_c.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/libsonia_common_ros2__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_c.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/sonia_common_ros2/sonia_common_ros2" TYPE DIRECTORY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_generator_cpp/sonia_common_ros2/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/sonia_common_ros2/sonia_common_ros2" TYPE DIRECTORY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_typesupport_fastrtps_cpp/sonia_common_ros2/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/libsonia_common_ros2__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_fastrtps_cpp.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/sonia_common_ros2/sonia_common_ros2" TYPE DIRECTORY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_typesupport_introspection_cpp/sonia_common_ros2/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/libsonia_common_ros2__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_introspection_cpp.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/libsonia_common_ros2__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_cpp.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_adapter/sonia_common_ros2/msg/KillStatus.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_adapter/sonia_common_ros2/msg/MissionStatus.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_adapter/sonia_common_ros2/msg/ObstacleArray.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_adapter/sonia_common_ros2/msg/ObstacleInfo.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_adapter/sonia_common_ros2/msg/Pose.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_adapter/sonia_common_ros2/msg/PoseArray.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_adapter/sonia_common_ros2/msg/SerialMessage.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/srv" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_adapter/sonia_common_ros2/srv/DropperService.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/srv" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_adapter/sonia_common_ros2/srv/SerialService.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/msg/KillStatus.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/msg/MissionStatus.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/msg/ObstacleArray.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/msg/ObstacleInfo.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/msg/Pose.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/msg/PoseArray.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/msg" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/msg/SerialMessage.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/srv" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/srv/DropperService.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/srv" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_cmake/srv/DropperService_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/srv" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_cmake/srv/DropperService_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/srv" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/srv/SerialService.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/srv" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_cmake/srv/SerialService_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/srv" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_cmake/srv/SerialService_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/libsonia_common_ros2_matlab.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2_matlab.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2_matlab.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsonia_common_ros2_matlab.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/m/" TYPE DIRECTORY FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/m/" FILES_MATCHING REGEX "/[^/]*\\.m$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/sonia_common_ros2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/sonia_common_ros2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/environment" TYPE FILE FILES "/usr/local/MATLAB/R2024a/sys/ros2/glnxa64/ros2/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/environment" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/environment" TYPE FILE FILES "/usr/local/MATLAB/R2024a/sys/ros2/glnxa64/ros2/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/environment" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_index/share/ament_index/resource_index/packages/sonia_common_ros2")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_generator_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_generator_cExport.cmake"
         "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/export_sonia_common_ros2__rosidl_generator_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_generator_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/export_sonia_common_ros2__rosidl_generator_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/export_sonia_common_ros2__rosidl_generator_cExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_introspection_cExport.cmake"
         "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_introspection_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_introspection_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_introspection_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_introspection_cExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_cExport.cmake"
         "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_cExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_generator_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_generator_cppExport.cmake"
         "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/export_sonia_common_ros2__rosidl_generator_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_generator_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/export_sonia_common_ros2__rosidl_generator_cppExport.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/export_sonia_common_ros2__rosidl_typesupport_fastrtps_cppExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_introspection_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_introspection_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_introspection_cppExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_cppExport.cmake"
         "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake/sonia_common_ros2__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/CMakeFiles/Export/4d34dffc06cd506c11facb47c1f73f4e/sonia_common_ros2__rosidl_typesupport_cppExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2/cmake" TYPE FILE FILES
    "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_core/sonia_common_ros2Config.cmake"
    "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/ament_cmake_core/sonia_common_ros2Config-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sonia_common_ros2" TYPE FILE FILES "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/src/sonia_common_ros2/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/nimai/ros2_sonia_ws/src/sonia_common_ros2/matlab_msg_gen/glnxa64/build/sonia_common_ros2/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

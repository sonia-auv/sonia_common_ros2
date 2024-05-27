#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "sonia_common_ros2::sonia_common_ros2__rosidl_typesupport_cpp" for configuration "Release"
set_property(TARGET sonia_common_ros2::sonia_common_ros2__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sonia_common_ros2::sonia_common_ros2__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_cpp::rosidl_typesupport_cpp;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_RELEASE "libsonia_common_ros2__rosidl_typesupport_cpp.so"
  )

list(APPEND _cmake_import_check_targets sonia_common_ros2::sonia_common_ros2__rosidl_typesupport_cpp )
list(APPEND _cmake_import_check_files_for_sonia_common_ros2::sonia_common_ros2__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libsonia_common_ros2__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

#ifndef SONIA_COMMON_ROS2__VISIBILITY_CONTROL_H_
#define SONIA_COMMON_ROS2__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define SONIA_COMMON_ROS2_EXPORT __attribute__ ((dllexport))
    #define SONIA_COMMON_ROS2_IMPORT __attribute__ ((dllimport))
  #else
    #define SONIA_COMMON_ROS2_EXPORT __declspec(dllexport)
    #define SONIA_COMMON_ROS2_IMPORT __declspec(dllimport)
  #endif
  #ifdef SONIA_COMMON_ROS2_BUILDING_LIBRARY
    #define SONIA_COMMON_ROS2_PUBLIC SONIA_COMMON_ROS2_EXPORT
  #else
    #define SONIA_COMMON_ROS2_PUBLIC SONIA_COMMON_ROS2_IMPORT
  #endif
  #define SONIA_COMMON_ROS2_PUBLIC_TYPE SONIA_COMMON_ROS2_PUBLIC
  #define SONIA_COMMON_ROS2_LOCAL
#else
  #define SONIA_COMMON_ROS2_EXPORT __attribute__ ((visibility("default")))
  #define SONIA_COMMON_ROS2_IMPORT
  #if __GNUC__ >= 4
    #define SONIA_COMMON_ROS2_PUBLIC __attribute__ ((visibility("default")))
    #define SONIA_COMMON_ROS2_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define SONIA_COMMON_ROS2_PUBLIC
    #define SONIA_COMMON_ROS2_LOCAL
  #endif
  #define SONIA_COMMON_ROS2_PUBLIC_TYPE
#endif
#endif  // SONIA_COMMON_ROS2__VISIBILITY_CONTROL_H_
// Generated 27-Apr-2024 22:24:05
 
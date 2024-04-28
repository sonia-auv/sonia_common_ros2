// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sonia_common_ros2:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sonia_common_ros2__msg__ObstacleInfo __attribute__((deprecated))
#else
# define DEPRECATED__sonia_common_ros2__msg__ObstacleInfo __declspec(deprecated)
#endif

namespace sonia_common_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleInfo_
{
  using Type = ObstacleInfo_<ContainerAllocator>;

  explicit ObstacleInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->is_valid = false;
      this->confidence = 0.0f;
    }
  }

  explicit ObstacleInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->is_valid = false;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sonia_common_ros2__msg__ObstacleInfo
    std::shared_ptr<sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sonia_common_ros2__msg__ObstacleInfo
    std::shared_ptr<sonia_common_ros2::msg::ObstacleInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleInfo_

// alias to use template instance with default allocator
using ObstacleInfo =
  sonia_common_ros2::msg::ObstacleInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_

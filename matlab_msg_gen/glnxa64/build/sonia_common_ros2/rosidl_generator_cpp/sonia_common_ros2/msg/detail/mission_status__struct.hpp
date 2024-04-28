// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sonia_common_ros2:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sonia_common_ros2__msg__MissionStatus __attribute__((deprecated))
#else
# define DEPRECATED__sonia_common_ros2__msg__MissionStatus __declspec(deprecated)
#endif

namespace sonia_common_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionStatus_
{
  using Type = MissionStatus_<ContainerAllocator>;

  explicit MissionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit MissionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sonia_common_ros2::msg::MissionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sonia_common_ros2::msg::MissionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sonia_common_ros2::msg::MissionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sonia_common_ros2::msg::MissionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::msg::MissionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::msg::MissionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::msg::MissionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::msg::MissionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sonia_common_ros2::msg::MissionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sonia_common_ros2::msg::MissionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sonia_common_ros2__msg__MissionStatus
    std::shared_ptr<sonia_common_ros2::msg::MissionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sonia_common_ros2__msg__MissionStatus
    std::shared_ptr<sonia_common_ros2::msg::MissionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionStatus_

// alias to use template instance with default allocator
using MissionStatus =
  sonia_common_ros2::msg::MissionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_

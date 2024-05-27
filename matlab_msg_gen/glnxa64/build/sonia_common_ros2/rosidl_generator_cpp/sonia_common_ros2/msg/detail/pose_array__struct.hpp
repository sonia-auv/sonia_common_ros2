// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sonia_common_ros2:msg/PoseArray.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__STRUCT_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'poses'
#include "sonia_common_ros2/msg/detail/pose__struct.hpp"
// Member 'time_sent'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sonia_common_ros2__msg__PoseArray __attribute__((deprecated))
#else
# define DEPRECATED__sonia_common_ros2__msg__PoseArray __declspec(deprecated)
#endif

namespace sonia_common_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseArray_
{
  using Type = PoseArray_<ContainerAllocator>;

  explicit PoseArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_sent(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interpolation_method = 0;
    }
  }

  explicit PoseArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_sent(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interpolation_method = 0;
    }
  }

  // field types and members
  using _interpolation_method_type =
    uint8_t;
  _interpolation_method_type interpolation_method;
  using _poses_type =
    std::vector<sonia_common_ros2::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sonia_common_ros2::msg::Pose_<ContainerAllocator>>>;
  _poses_type poses;
  using _time_sent_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_sent_type time_sent;

  // setters for named parameter idiom
  Type & set__interpolation_method(
    const uint8_t & _arg)
  {
    this->interpolation_method = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<sonia_common_ros2::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sonia_common_ros2::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__time_sent(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_sent = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INTERPOLATION_HERMITE =
    0u;
  static constexpr uint8_t INTERPOLATION_V5CUBIC =
    1u;
  static constexpr uint8_t INTERPOLATION_SPLINE =
    2u;

  // pointer types
  using RawPtr =
    sonia_common_ros2::msg::PoseArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const sonia_common_ros2::msg::PoseArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sonia_common_ros2::msg::PoseArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sonia_common_ros2::msg::PoseArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::msg::PoseArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::msg::PoseArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::msg::PoseArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::msg::PoseArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sonia_common_ros2::msg::PoseArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sonia_common_ros2::msg::PoseArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sonia_common_ros2__msg__PoseArray
    std::shared_ptr<sonia_common_ros2::msg::PoseArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sonia_common_ros2__msg__PoseArray
    std::shared_ptr<sonia_common_ros2::msg::PoseArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseArray_ & other) const
  {
    if (this->interpolation_method != other.interpolation_method) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    if (this->time_sent != other.time_sent) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseArray_

// alias to use template instance with default allocator
using PoseArray =
  sonia_common_ros2::msg::PoseArray_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PoseArray_<ContainerAllocator>::INTERPOLATION_HERMITE;
template<typename ContainerAllocator>
constexpr uint8_t PoseArray_<ContainerAllocator>::INTERPOLATION_V5CUBIC;
template<typename ContainerAllocator>
constexpr uint8_t PoseArray_<ContainerAllocator>::INTERPOLATION_SPLINE;

}  // namespace msg

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__POSE_ARRAY__STRUCT_HPP_

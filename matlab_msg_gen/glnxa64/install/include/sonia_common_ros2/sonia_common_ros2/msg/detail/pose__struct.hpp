// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sonia_common_ros2:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__POSE__STRUCT_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sonia_common_ros2__msg__Pose __attribute__((deprecated))
#else
# define DEPRECATED__sonia_common_ros2__msg__Pose __declspec(deprecated)
#endif

namespace sonia_common_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose_
{
  using Type = Pose_<ContainerAllocator>;

  explicit Pose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = 0;
      this->speed = 0;
      this->fine = 0.0;
      this->rotation = false;
    }
  }

  explicit Pose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    orientation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = 0;
      this->speed = 0;
      this->fine = 0.0;
      this->rotation = false;
    }
  }

  // field types and members
  using _frame_type =
    uint8_t;
  _frame_type frame;
  using _speed_type =
    uint8_t;
  _speed_type speed;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _orientation_type orientation;
  using _fine_type =
    double;
  _fine_type fine;
  using _rotation_type =
    bool;
  _rotation_type rotation;

  // setters for named parameter idiom
  Type & set__frame(
    const uint8_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__speed(
    const uint8_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__fine(
    const double & _arg)
  {
    this->fine = _arg;
    return *this;
  }
  Type & set__rotation(
    const bool & _arg)
  {
    this->rotation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FRAME_ABS_POS_ABS_ANG =
    0u;
  static constexpr uint8_t FRAME_REL_POS_REL_ANG =
    1u;
  static constexpr uint8_t FRAME_REL_POS_ABS_ANG =
    2u;
  static constexpr uint8_t FRAME_ABS_POS_REL_ANG =
    3u;
  static constexpr uint8_t FRAME_ABS_DEPTH_REL_OTHER =
    4u;
  static constexpr uint8_t SPEED_NORMAL =
    0u;
  static constexpr uint8_t SPEED_FAST =
    1u;
  static constexpr uint8_t SPEED_SLOW =
    2u;

  // pointer types
  using RawPtr =
    sonia_common_ros2::msg::Pose_<ContainerAllocator> *;
  using ConstRawPtr =
    const sonia_common_ros2::msg::Pose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sonia_common_ros2::msg::Pose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sonia_common_ros2::msg::Pose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::msg::Pose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::msg::Pose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::msg::Pose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::msg::Pose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sonia_common_ros2::msg::Pose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sonia_common_ros2::msg::Pose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sonia_common_ros2__msg__Pose
    std::shared_ptr<sonia_common_ros2::msg::Pose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sonia_common_ros2__msg__Pose
    std::shared_ptr<sonia_common_ros2::msg::Pose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose_ & other) const
  {
    if (this->frame != other.frame) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->fine != other.fine) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose_

// alias to use template instance with default allocator
using Pose =
  sonia_common_ros2::msg::Pose_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Pose_<ContainerAllocator>::FRAME_ABS_POS_ABS_ANG;
template<typename ContainerAllocator>
constexpr uint8_t Pose_<ContainerAllocator>::FRAME_REL_POS_REL_ANG;
template<typename ContainerAllocator>
constexpr uint8_t Pose_<ContainerAllocator>::FRAME_REL_POS_ABS_ANG;
template<typename ContainerAllocator>
constexpr uint8_t Pose_<ContainerAllocator>::FRAME_ABS_POS_REL_ANG;
template<typename ContainerAllocator>
constexpr uint8_t Pose_<ContainerAllocator>::FRAME_ABS_DEPTH_REL_OTHER;
template<typename ContainerAllocator>
constexpr uint8_t Pose_<ContainerAllocator>::SPEED_NORMAL;
template<typename ContainerAllocator>
constexpr uint8_t Pose_<ContainerAllocator>::SPEED_FAST;
template<typename ContainerAllocator>
constexpr uint8_t Pose_<ContainerAllocator>::SPEED_SLOW;

}  // namespace msg

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__POSE__STRUCT_HPP_

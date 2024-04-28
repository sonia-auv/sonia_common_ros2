// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sonia_common_ros2:msg/SerialMessage.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__STRUCT_HPP_
#define SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sonia_common_ros2__msg__SerialMessage __attribute__((deprecated))
#else
# define DEPRECATED__sonia_common_ros2__msg__SerialMessage __declspec(deprecated)
#endif

namespace sonia_common_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SerialMessage_
{
  using Type = SerialMessage_<ContainerAllocator>;

  explicit SerialMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->size = 0l;
    }
  }

  explicit SerialMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->size = 0l;
    }
  }

  // field types and members
  using _id_type =
    int8_t;
  _id_type id;
  using _size_type =
    int32_t;
  _size_type size;
  using _msg_type =
    std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>>;
  _msg_type msg;

  // setters for named parameter idiom
  Type & set__id(
    const int8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__size(
    const int32_t & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__msg(
    const std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sonia_common_ros2::msg::SerialMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const sonia_common_ros2::msg::SerialMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sonia_common_ros2::msg::SerialMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sonia_common_ros2::msg::SerialMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::msg::SerialMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::msg::SerialMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::msg::SerialMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::msg::SerialMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sonia_common_ros2::msg::SerialMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sonia_common_ros2::msg::SerialMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sonia_common_ros2__msg__SerialMessage
    std::shared_ptr<sonia_common_ros2::msg::SerialMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sonia_common_ros2__msg__SerialMessage
    std::shared_ptr<sonia_common_ros2::msg::SerialMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerialMessage_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerialMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerialMessage_

// alias to use template instance with default allocator
using SerialMessage =
  sonia_common_ros2::msg::SerialMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__MSG__DETAIL__SERIAL_MESSAGE__STRUCT_HPP_

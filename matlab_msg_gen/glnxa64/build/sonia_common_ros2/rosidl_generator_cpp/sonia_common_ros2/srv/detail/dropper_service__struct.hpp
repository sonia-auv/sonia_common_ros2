// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sonia_common_ros2:srv/DropperService.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__STRUCT_HPP_
#define SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sonia_common_ros2__srv__DropperService_Request __attribute__((deprecated))
#else
# define DEPRECATED__sonia_common_ros2__srv__DropperService_Request __declspec(deprecated)
#endif

namespace sonia_common_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DropperService_Request_
{
  using Type = DropperService_Request_<ContainerAllocator>;

  explicit DropperService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->side = 0;
    }
  }

  explicit DropperService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->side = 0;
    }
  }

  // field types and members
  using _side_type =
    uint8_t;
  _side_type side;

  // setters for named parameter idiom
  Type & set__side(
    const uint8_t & _arg)
  {
    this->side = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PORT_SIDE =
    0u;
  static constexpr uint8_t STARBOARD =
    1u;

  // pointer types
  using RawPtr =
    sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sonia_common_ros2__srv__DropperService_Request
    std::shared_ptr<sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sonia_common_ros2__srv__DropperService_Request
    std::shared_ptr<sonia_common_ros2::srv::DropperService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DropperService_Request_ & other) const
  {
    if (this->side != other.side) {
      return false;
    }
    return true;
  }
  bool operator!=(const DropperService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DropperService_Request_

// alias to use template instance with default allocator
using DropperService_Request =
  sonia_common_ros2::srv::DropperService_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DropperService_Request_<ContainerAllocator>::PORT_SIDE;
template<typename ContainerAllocator>
constexpr uint8_t DropperService_Request_<ContainerAllocator>::STARBOARD;

}  // namespace srv

}  // namespace sonia_common_ros2


#ifndef _WIN32
# define DEPRECATED__sonia_common_ros2__srv__DropperService_Response __attribute__((deprecated))
#else
# define DEPRECATED__sonia_common_ros2__srv__DropperService_Response __declspec(deprecated)
#endif

namespace sonia_common_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DropperService_Response_
{
  using Type = DropperService_Response_<ContainerAllocator>;

  explicit DropperService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit DropperService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    uint8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sonia_common_ros2__srv__DropperService_Response
    std::shared_ptr<sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sonia_common_ros2__srv__DropperService_Response
    std::shared_ptr<sonia_common_ros2::srv::DropperService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DropperService_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DropperService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DropperService_Response_

// alias to use template instance with default allocator
using DropperService_Response =
  sonia_common_ros2::srv::DropperService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sonia_common_ros2

namespace sonia_common_ros2
{

namespace srv
{

struct DropperService
{
  using Request = sonia_common_ros2::srv::DropperService_Request;
  using Response = sonia_common_ros2::srv::DropperService_Response;
};

}  // namespace srv

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__SRV__DETAIL__DROPPER_SERVICE__STRUCT_HPP_

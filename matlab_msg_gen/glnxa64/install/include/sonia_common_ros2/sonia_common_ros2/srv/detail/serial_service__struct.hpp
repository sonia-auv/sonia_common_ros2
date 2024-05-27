// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sonia_common_ros2:srv/SerialService.idl
// generated code does not contain a copyright notice

#ifndef SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__STRUCT_HPP_
#define SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "sonia_common_ros2/msg/detail/serial_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sonia_common_ros2__srv__SerialService_Request __attribute__((deprecated))
#else
# define DEPRECATED__sonia_common_ros2__srv__SerialService_Request __declspec(deprecated)
#endif

namespace sonia_common_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SerialService_Request_
{
  using Type = SerialService_Request_<ContainerAllocator>;

  explicit SerialService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    (void)_init;
  }

  explicit SerialService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _data_type =
    sonia_common_ros2::msg::SerialMessage_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const sonia_common_ros2::msg::SerialMessage_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sonia_common_ros2__srv__SerialService_Request
    std::shared_ptr<sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sonia_common_ros2__srv__SerialService_Request
    std::shared_ptr<sonia_common_ros2::srv::SerialService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerialService_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerialService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerialService_Request_

// alias to use template instance with default allocator
using SerialService_Request =
  sonia_common_ros2::srv::SerialService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sonia_common_ros2


// Include directives for member types
// Member 'data'
// already included above
// #include "sonia_common_ros2/msg/detail/serial_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sonia_common_ros2__srv__SerialService_Response __attribute__((deprecated))
#else
# define DEPRECATED__sonia_common_ros2__srv__SerialService_Response __declspec(deprecated)
#endif

namespace sonia_common_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SerialService_Response_
{
  using Type = SerialService_Response_<ContainerAllocator>;

  explicit SerialService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit SerialService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;
  using _data_type =
    sonia_common_ros2::msg::SerialMessage_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__data(
    const sonia_common_ros2::msg::SerialMessage_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SUCCESS =
    0u;
  static constexpr uint8_t FAILED =
    1u;
  static constexpr uint8_t NO_RESPONSE =
    2u;
  static constexpr uint8_t CONNECTION_FAILED =
    3u;

  // pointer types
  using RawPtr =
    sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sonia_common_ros2__srv__SerialService_Response
    std::shared_ptr<sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sonia_common_ros2__srv__SerialService_Response
    std::shared_ptr<sonia_common_ros2::srv::SerialService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerialService_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerialService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerialService_Response_

// alias to use template instance with default allocator
using SerialService_Response =
  sonia_common_ros2::srv::SerialService_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SerialService_Response_<ContainerAllocator>::SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t SerialService_Response_<ContainerAllocator>::FAILED;
template<typename ContainerAllocator>
constexpr uint8_t SerialService_Response_<ContainerAllocator>::NO_RESPONSE;
template<typename ContainerAllocator>
constexpr uint8_t SerialService_Response_<ContainerAllocator>::CONNECTION_FAILED;

}  // namespace srv

}  // namespace sonia_common_ros2

namespace sonia_common_ros2
{

namespace srv
{

struct SerialService
{
  using Request = sonia_common_ros2::srv::SerialService_Request;
  using Response = sonia_common_ros2::srv::SerialService_Response;
};

}  // namespace srv

}  // namespace sonia_common_ros2

#endif  // SONIA_COMMON_ROS2__SRV__DETAIL__SERIAL_SERVICE__STRUCT_HPP_

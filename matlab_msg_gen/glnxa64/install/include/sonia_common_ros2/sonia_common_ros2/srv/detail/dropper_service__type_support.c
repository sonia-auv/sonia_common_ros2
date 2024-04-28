// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sonia_common_ros2:srv/DropperService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sonia_common_ros2/srv/detail/dropper_service__rosidl_typesupport_introspection_c.h"
#include "sonia_common_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sonia_common_ros2/srv/detail/dropper_service__functions.h"
#include "sonia_common_ros2/srv/detail/dropper_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sonia_common_ros2__srv__DropperService_Request__init(message_memory);
}

void sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_fini_function(void * message_memory)
{
  sonia_common_ros2__srv__DropperService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_message_member_array[1] = {
  {
    "side",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sonia_common_ros2__srv__DropperService_Request, side),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_message_members = {
  "sonia_common_ros2__srv",  // message namespace
  "DropperService_Request",  // message name
  1,  // number of fields
  sizeof(sonia_common_ros2__srv__DropperService_Request),
  sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_message_member_array,  // message members
  sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_message_type_support_handle = {
  0,
  &sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sonia_common_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sonia_common_ros2, srv, DropperService_Request)() {
  if (!sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_message_type_support_handle.typesupport_identifier) {
    sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sonia_common_ros2__srv__DropperService_Request__rosidl_typesupport_introspection_c__DropperService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sonia_common_ros2/srv/detail/dropper_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sonia_common_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sonia_common_ros2/srv/detail/dropper_service__functions.h"
// already included above
// #include "sonia_common_ros2/srv/detail/dropper_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sonia_common_ros2__srv__DropperService_Response__init(message_memory);
}

void sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_fini_function(void * message_memory)
{
  sonia_common_ros2__srv__DropperService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sonia_common_ros2__srv__DropperService_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_message_members = {
  "sonia_common_ros2__srv",  // message namespace
  "DropperService_Response",  // message name
  1,  // number of fields
  sizeof(sonia_common_ros2__srv__DropperService_Response),
  sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_message_member_array,  // message members
  sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_message_type_support_handle = {
  0,
  &sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sonia_common_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sonia_common_ros2, srv, DropperService_Response)() {
  if (!sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_message_type_support_handle.typesupport_identifier) {
    sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sonia_common_ros2__srv__DropperService_Response__rosidl_typesupport_introspection_c__DropperService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sonia_common_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sonia_common_ros2/srv/detail/dropper_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sonia_common_ros2__srv__detail__dropper_service__rosidl_typesupport_introspection_c__DropperService_service_members = {
  "sonia_common_ros2__srv",  // service namespace
  "DropperService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // sonia_common_ros2__srv__detail__dropper_service__rosidl_typesupport_introspection_c__DropperService_Request_message_type_support_handle,
  NULL  // response message
  // sonia_common_ros2__srv__detail__dropper_service__rosidl_typesupport_introspection_c__DropperService_Response_message_type_support_handle
};

static rosidl_service_type_support_t sonia_common_ros2__srv__detail__dropper_service__rosidl_typesupport_introspection_c__DropperService_service_type_support_handle = {
  0,
  &sonia_common_ros2__srv__detail__dropper_service__rosidl_typesupport_introspection_c__DropperService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sonia_common_ros2, srv, DropperService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sonia_common_ros2, srv, DropperService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sonia_common_ros2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sonia_common_ros2, srv, DropperService)() {
  if (!sonia_common_ros2__srv__detail__dropper_service__rosidl_typesupport_introspection_c__DropperService_service_type_support_handle.typesupport_identifier) {
    sonia_common_ros2__srv__detail__dropper_service__rosidl_typesupport_introspection_c__DropperService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sonia_common_ros2__srv__detail__dropper_service__rosidl_typesupport_introspection_c__DropperService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sonia_common_ros2, srv, DropperService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sonia_common_ros2, srv, DropperService_Response)()->data;
  }

  return &sonia_common_ros2__srv__detail__dropper_service__rosidl_typesupport_introspection_c__DropperService_service_type_support_handle;
}

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/DeleteEntity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gazebo_msgs/srv/delete_entity.h"


#ifndef GAZEBO_MSGS__SRV__DETAIL__DELETE_ENTITY__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__DELETE_ENTITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DeleteEntity in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__DeleteEntity_Request
{
  /// Name of the Gazebo entity to be deleted. This can be either
  /// a model or a light.
  rosidl_runtime_c__String name;
} gazebo_msgs__srv__DeleteEntity_Request;

// Struct for a sequence of gazebo_msgs__srv__DeleteEntity_Request.
typedef struct gazebo_msgs__srv__DeleteEntity_Request__Sequence
{
  gazebo_msgs__srv__DeleteEntity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__DeleteEntity_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DeleteEntity in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__DeleteEntity_Response
{
  /// Return true if deletion is successful.
  bool success;
  /// Comments if available.
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__DeleteEntity_Response;

// Struct for a sequence of gazebo_msgs__srv__DeleteEntity_Response.
typedef struct gazebo_msgs__srv__DeleteEntity_Response__Sequence
{
  gazebo_msgs__srv__DeleteEntity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__DeleteEntity_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  gazebo_msgs__srv__DeleteEntity_Event__request__MAX_SIZE = 1
};
// response
enum
{
  gazebo_msgs__srv__DeleteEntity_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DeleteEntity in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__DeleteEntity_Event
{
  service_msgs__msg__ServiceEventInfo info;
  gazebo_msgs__srv__DeleteEntity_Request__Sequence request;
  gazebo_msgs__srv__DeleteEntity_Response__Sequence response;
} gazebo_msgs__srv__DeleteEntity_Event;

// Struct for a sequence of gazebo_msgs__srv__DeleteEntity_Event.
typedef struct gazebo_msgs__srv__DeleteEntity_Event__Sequence
{
  gazebo_msgs__srv__DeleteEntity_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__DeleteEntity_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__DELETE_ENTITY__STRUCT_H_

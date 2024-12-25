// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/SetJointProperties.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gazebo_msgs/srv/set_joint_properties.h"


#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_PROPERTIES__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"
// Member 'ode_joint_config'
#include "gazebo_msgs/msg/detail/ode_joint_properties__struct.h"

/// Struct defined in srv/SetJointProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetJointProperties_Request
{
  /// name of joint
  rosidl_runtime_c__String joint_name;
  /// access to ODE joint dynamics properties
  gazebo_msgs__msg__ODEJointProperties ode_joint_config;
} gazebo_msgs__srv__SetJointProperties_Request;

// Struct for a sequence of gazebo_msgs__srv__SetJointProperties_Request.
typedef struct gazebo_msgs__srv__SetJointProperties_Request__Sequence
{
  gazebo_msgs__srv__SetJointProperties_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetJointProperties_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetJointProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetJointProperties_Response
{
  /// return true if get successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__SetJointProperties_Response;

// Struct for a sequence of gazebo_msgs__srv__SetJointProperties_Response.
typedef struct gazebo_msgs__srv__SetJointProperties_Response__Sequence
{
  gazebo_msgs__srv__SetJointProperties_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetJointProperties_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  gazebo_msgs__srv__SetJointProperties_Event__request__MAX_SIZE = 1
};
// response
enum
{
  gazebo_msgs__srv__SetJointProperties_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetJointProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetJointProperties_Event
{
  service_msgs__msg__ServiceEventInfo info;
  gazebo_msgs__srv__SetJointProperties_Request__Sequence request;
  gazebo_msgs__srv__SetJointProperties_Response__Sequence response;
} gazebo_msgs__srv__SetJointProperties_Event;

// Struct for a sequence of gazebo_msgs__srv__SetJointProperties_Event.
typedef struct gazebo_msgs__srv__SetJointProperties_Event__Sequence
{
  gazebo_msgs__srv__SetJointProperties_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetJointProperties_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_PROPERTIES__STRUCT_H_

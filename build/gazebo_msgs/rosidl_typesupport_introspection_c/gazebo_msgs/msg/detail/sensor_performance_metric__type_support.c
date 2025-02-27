// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/msg/detail/sensor_performance_metric__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/msg/detail/sensor_performance_metric__functions.h"
#include "gazebo_msgs/msg/detail/sensor_performance_metric__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__msg__SensorPerformanceMetric__init(message_memory);
}

void gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_fini_function(void * message_memory)
{
  gazebo_msgs__msg__SensorPerformanceMetric__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__SensorPerformanceMetric, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sim_update_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__SensorPerformanceMetric, sim_update_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "real_update_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__SensorPerformanceMetric, real_update_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__SensorPerformanceMetric, fps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_message_members = {
  "gazebo_msgs__msg",  // message namespace
  "SensorPerformanceMetric",  // message name
  4,  // number of fields
  sizeof(gazebo_msgs__msg__SensorPerformanceMetric),
  false,  // has_any_key_member_
  gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_message_member_array,  // message members
  gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_init_function,  // function to initialize message memory (memory has to be allocated)
  gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_message_type_support_handle = {
  0,
  &gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_message_members,
  get_message_typesupport_handle_function,
  &gazebo_msgs__msg__SensorPerformanceMetric__get_type_hash,
  &gazebo_msgs__msg__SensorPerformanceMetric__get_type_description,
  &gazebo_msgs__msg__SensorPerformanceMetric__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, msg, SensorPerformanceMetric)() {
  if (!gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_message_type_support_handle.typesupport_identifier) {
    gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gazebo_msgs__msg__SensorPerformanceMetric__rosidl_typesupport_introspection_c__SensorPerformanceMetric_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

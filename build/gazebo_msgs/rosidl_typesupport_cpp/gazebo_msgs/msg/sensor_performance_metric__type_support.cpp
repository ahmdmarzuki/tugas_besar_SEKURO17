// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gazebo_msgs/msg/detail/sensor_performance_metric__functions.h"
#include "gazebo_msgs/msg/detail/sensor_performance_metric__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _SensorPerformanceMetric_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SensorPerformanceMetric_type_support_ids_t;

static const _SensorPerformanceMetric_type_support_ids_t _SensorPerformanceMetric_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SensorPerformanceMetric_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SensorPerformanceMetric_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SensorPerformanceMetric_type_support_symbol_names_t _SensorPerformanceMetric_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, msg, SensorPerformanceMetric)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, msg, SensorPerformanceMetric)),
  }
};

typedef struct _SensorPerformanceMetric_type_support_data_t
{
  void * data[2];
} _SensorPerformanceMetric_type_support_data_t;

static _SensorPerformanceMetric_type_support_data_t _SensorPerformanceMetric_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SensorPerformanceMetric_message_typesupport_map = {
  2,
  "gazebo_msgs",
  &_SensorPerformanceMetric_message_typesupport_ids.typesupport_identifier[0],
  &_SensorPerformanceMetric_message_typesupport_symbol_names.symbol_name[0],
  &_SensorPerformanceMetric_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SensorPerformanceMetric_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SensorPerformanceMetric_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &gazebo_msgs__msg__SensorPerformanceMetric__get_type_hash,
  &gazebo_msgs__msg__SensorPerformanceMetric__get_type_description,
  &gazebo_msgs__msg__SensorPerformanceMetric__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace gazebo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::msg::SensorPerformanceMetric>()
{
  return &::gazebo_msgs::msg::rosidl_typesupport_cpp::SensorPerformanceMetric_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gazebo_msgs, msg, SensorPerformanceMetric)() {
  return get_message_type_support_handle<gazebo_msgs::msg::SensorPerformanceMetric>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/msg/detail/sensor_performance_metric__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__msg__SensorPerformanceMetric__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0xb0, 0x85, 0xa5, 0x3e, 0xc0, 0x51, 0x54,
      0xb7, 0x93, 0x41, 0x1c, 0xc8, 0x3d, 0x01, 0x20,
      0xda, 0x95, 0x29, 0x2c, 0x8f, 0x3b, 0x22, 0xee,
      0x1e, 0x40, 0x2a, 0xa4, 0x4d, 0x98, 0x46, 0xb6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char gazebo_msgs__msg__SensorPerformanceMetric__TYPE_NAME[] = "gazebo_msgs/msg/SensorPerformanceMetric";

// Define type names, field names, and default values
static char gazebo_msgs__msg__SensorPerformanceMetric__FIELD_NAME__name[] = "name";
static char gazebo_msgs__msg__SensorPerformanceMetric__FIELD_NAME__sim_update_rate[] = "sim_update_rate";
static char gazebo_msgs__msg__SensorPerformanceMetric__FIELD_NAME__real_update_rate[] = "real_update_rate";
static char gazebo_msgs__msg__SensorPerformanceMetric__FIELD_NAME__fps[] = "fps";

static rosidl_runtime_c__type_description__Field gazebo_msgs__msg__SensorPerformanceMetric__FIELDS[] = {
  {
    {gazebo_msgs__msg__SensorPerformanceMetric__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__SensorPerformanceMetric__FIELD_NAME__sim_update_rate, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__SensorPerformanceMetric__FIELD_NAME__real_update_rate, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__SensorPerformanceMetric__FIELD_NAME__fps, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__msg__SensorPerformanceMetric__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__msg__SensorPerformanceMetric__TYPE_NAME, 39, 39},
      {gazebo_msgs__msg__SensorPerformanceMetric__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "float64 sim_update_rate\n"
  "float64 real_update_rate\n"
  "float64 fps";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__msg__SensorPerformanceMetric__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__msg__SensorPerformanceMetric__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 73, 73},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__msg__SensorPerformanceMetric__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__msg__SensorPerformanceMetric__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

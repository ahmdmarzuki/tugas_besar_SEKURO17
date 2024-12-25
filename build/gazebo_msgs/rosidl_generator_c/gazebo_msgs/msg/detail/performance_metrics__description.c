// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:msg/PerformanceMetrics.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/msg/detail/performance_metrics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__msg__PerformanceMetrics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0xa2, 0x3a, 0x97, 0xca, 0x28, 0x32, 0x49,
      0x1a, 0x26, 0xa7, 0x3d, 0xa2, 0x39, 0x7f, 0xe2,
      0xa4, 0x70, 0x89, 0x27, 0x04, 0x57, 0x4f, 0x1f,
      0x93, 0x0c, 0x8a, 0x4a, 0x8b, 0x2c, 0xe4, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "gazebo_msgs/msg/detail/sensor_performance_metric__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t gazebo_msgs__msg__SensorPerformanceMetric__EXPECTED_HASH = {1, {
    0x2f, 0xb0, 0x85, 0xa5, 0x3e, 0xc0, 0x51, 0x54,
    0xb7, 0x93, 0x41, 0x1c, 0xc8, 0x3d, 0x01, 0x20,
    0xda, 0x95, 0x29, 0x2c, 0x8f, 0x3b, 0x22, 0xee,
    0x1e, 0x40, 0x2a, 0xa4, 0x4d, 0x98, 0x46, 0xb6,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char gazebo_msgs__msg__PerformanceMetrics__TYPE_NAME[] = "gazebo_msgs/msg/PerformanceMetrics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char gazebo_msgs__msg__SensorPerformanceMetric__TYPE_NAME[] = "gazebo_msgs/msg/SensorPerformanceMetric";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char gazebo_msgs__msg__PerformanceMetrics__FIELD_NAME__header[] = "header";
static char gazebo_msgs__msg__PerformanceMetrics__FIELD_NAME__real_time_factor[] = "real_time_factor";
static char gazebo_msgs__msg__PerformanceMetrics__FIELD_NAME__sensors[] = "sensors";

static rosidl_runtime_c__type_description__Field gazebo_msgs__msg__PerformanceMetrics__FIELDS[] = {
  {
    {gazebo_msgs__msg__PerformanceMetrics__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__PerformanceMetrics__FIELD_NAME__real_time_factor, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__PerformanceMetrics__FIELD_NAME__sensors, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {gazebo_msgs__msg__SensorPerformanceMetric__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__msg__PerformanceMetrics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__SensorPerformanceMetric__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__msg__PerformanceMetrics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__msg__PerformanceMetrics__TYPE_NAME, 34, 34},
      {gazebo_msgs__msg__PerformanceMetrics__FIELDS, 3, 3},
    },
    {gazebo_msgs__msg__PerformanceMetrics__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&gazebo_msgs__msg__SensorPerformanceMetric__EXPECTED_HASH, gazebo_msgs__msg__SensorPerformanceMetric__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = gazebo_msgs__msg__SensorPerformanceMetric__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "float64 real_time_factor\n"
  "gazebo_msgs/SensorPerformanceMetric[] sensors";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__msg__PerformanceMetrics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__msg__PerformanceMetrics__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 95, 95},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__msg__PerformanceMetrics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__msg__PerformanceMetrics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *gazebo_msgs__msg__SensorPerformanceMetric__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

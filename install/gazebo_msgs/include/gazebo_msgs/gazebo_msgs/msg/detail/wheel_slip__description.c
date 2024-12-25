// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:msg/WheelSlip.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/msg/detail/wheel_slip__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__msg__WheelSlip__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x87, 0x51, 0x11, 0xe6, 0xe1, 0x09, 0x37,
      0xba, 0x5c, 0xd6, 0xa6, 0x50, 0x9b, 0xbc, 0xb5,
      0xe2, 0xf8, 0xbc, 0x9c, 0x53, 0xb9, 0xae, 0xe9,
      0xad, 0xbd, 0x0e, 0x40, 0x7c, 0x94, 0x96, 0x3d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char gazebo_msgs__msg__WheelSlip__TYPE_NAME[] = "gazebo_msgs/msg/WheelSlip";

// Define type names, field names, and default values
static char gazebo_msgs__msg__WheelSlip__FIELD_NAME__name[] = "name";
static char gazebo_msgs__msg__WheelSlip__FIELD_NAME__lateral_slip[] = "lateral_slip";
static char gazebo_msgs__msg__WheelSlip__FIELD_NAME__longitudinal_slip[] = "longitudinal_slip";

static rosidl_runtime_c__type_description__Field gazebo_msgs__msg__WheelSlip__FIELDS[] = {
  {
    {gazebo_msgs__msg__WheelSlip__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__WheelSlip__FIELD_NAME__lateral_slip, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__WheelSlip__FIELD_NAME__longitudinal_slip, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__msg__WheelSlip__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__msg__WheelSlip__TYPE_NAME, 25, 25},
      {gazebo_msgs__msg__WheelSlip__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This is a message that holds data to describe the wheel slip for a set of wheels.\n"
  "#\n"
  "# The wheel slip is defined by\n"
  "#  * the lateral slip of the wheel, as an angle from the direction of travel (radians), and\n"
  "#  * the longitudinal slip of the wheel, as a percentage of the current wheel's speed\n"
  "#\n"
  "# Each wheel is uniquely identified by its name.\n"
  "#\n"
  "# This message consists of multiple arrays.\n"
  "# All arrays in this message should be the same size.\n"
  "# This is the only way to uniquely associate the wheel name with the correct slip values.\n"
  "\n"
  "string[] name\n"
  "float64[] lateral_slip\n"
  "float64[] longitudinal_slip";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__msg__WheelSlip__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__msg__WheelSlip__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 601, 601},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__msg__WheelSlip__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__msg__WheelSlip__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

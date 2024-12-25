// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:msg/ContactState.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/msg/detail/contact_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__msg__ContactState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe8, 0x43, 0x52, 0x00, 0x74, 0x1f, 0x6b, 0x7b,
      0x6f, 0x2d, 0x15, 0x6d, 0x4a, 0x1d, 0x5d, 0x97,
      0xd6, 0x86, 0x9f, 0x62, 0x37, 0xad, 0xe6, 0xfe,
      0x54, 0x0b, 0x2e, 0x7a, 0x85, 0x16, 0xc3, 0x58,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/wrench__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Wrench__EXPECTED_HASH = {1, {
    0x01, 0x8e, 0x85, 0x19, 0xd5, 0x7c, 0x16, 0xad,
    0xbe, 0x97, 0xc9, 0xfe, 0x14, 0x60, 0xef, 0x21,
    0xfe, 0xc7, 0xe3, 0x1b, 0xc5, 0x41, 0xde, 0x3d,
    0x65, 0x3a, 0x35, 0x89, 0x56, 0x77, 0xce, 0x52,
  }};
#endif

static char gazebo_msgs__msg__ContactState__TYPE_NAME[] = "gazebo_msgs/msg/ContactState";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char geometry_msgs__msg__Wrench__TYPE_NAME[] = "geometry_msgs/msg/Wrench";

// Define type names, field names, and default values
static char gazebo_msgs__msg__ContactState__FIELD_NAME__info[] = "info";
static char gazebo_msgs__msg__ContactState__FIELD_NAME__collision1_name[] = "collision1_name";
static char gazebo_msgs__msg__ContactState__FIELD_NAME__collision2_name[] = "collision2_name";
static char gazebo_msgs__msg__ContactState__FIELD_NAME__wrenches[] = "wrenches";
static char gazebo_msgs__msg__ContactState__FIELD_NAME__total_wrench[] = "total_wrench";
static char gazebo_msgs__msg__ContactState__FIELD_NAME__contact_positions[] = "contact_positions";
static char gazebo_msgs__msg__ContactState__FIELD_NAME__contact_normals[] = "contact_normals";
static char gazebo_msgs__msg__ContactState__FIELD_NAME__depths[] = "depths";

static rosidl_runtime_c__type_description__Field gazebo_msgs__msg__ContactState__FIELDS[] = {
  {
    {gazebo_msgs__msg__ContactState__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ContactState__FIELD_NAME__collision1_name, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ContactState__FIELD_NAME__collision2_name, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ContactState__FIELD_NAME__wrenches, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ContactState__FIELD_NAME__total_wrench, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ContactState__FIELD_NAME__contact_positions, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ContactState__FIELD_NAME__contact_normals, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ContactState__FIELD_NAME__depths, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__msg__ContactState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__msg__ContactState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__msg__ContactState__TYPE_NAME, 28, 28},
      {gazebo_msgs__msg__ContactState__FIELDS, 8, 8},
    },
    {gazebo_msgs__msg__ContactState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Wrench__EXPECTED_HASH, geometry_msgs__msg__Wrench__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Wrench__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string info                                   # text info on this contact\n"
  "string collision1_name                        # name of contact collision1\n"
  "string collision2_name                        # name of contact collision2\n"
  "geometry_msgs/Wrench[] wrenches               # list of forces/torques\n"
  "geometry_msgs/Wrench total_wrench             # sum of forces/torques in every DOF\n"
  "geometry_msgs/Vector3[] contact_positions     # list of contact position\n"
  "geometry_msgs/Vector3[] contact_normals       # list of contact normals\n"
  "float64[] depths                              # list of penetration depths";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__msg__ContactState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__msg__ContactState__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 598, 598},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__msg__ContactState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__msg__ContactState__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Wrench__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

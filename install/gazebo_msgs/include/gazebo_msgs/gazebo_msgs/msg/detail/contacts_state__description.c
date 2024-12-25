// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:msg/ContactsState.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/msg/detail/contacts_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__msg__ContactsState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0xc5, 0x85, 0xe6, 0x27, 0xc1, 0x65, 0x51,
      0xe5, 0x01, 0x02, 0xb9, 0x83, 0xec, 0x51, 0x32,
      0x12, 0xef, 0x81, 0xba, 0xd3, 0xb9, 0xe9, 0xf2,
      0x42, 0x3f, 0x54, 0x9d, 0xf1, 0x90, 0xa4, 0x0c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "gazebo_msgs/msg/detail/contact_state__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/wrench__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t gazebo_msgs__msg__ContactState__EXPECTED_HASH = {1, {
    0xe8, 0x43, 0x52, 0x00, 0x74, 0x1f, 0x6b, 0x7b,
    0x6f, 0x2d, 0x15, 0x6d, 0x4a, 0x1d, 0x5d, 0x97,
    0xd6, 0x86, 0x9f, 0x62, 0x37, 0xad, 0xe6, 0xfe,
    0x54, 0x0b, 0x2e, 0x7a, 0x85, 0x16, 0xc3, 0x58,
  }};
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char gazebo_msgs__msg__ContactsState__TYPE_NAME[] = "gazebo_msgs/msg/ContactsState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char gazebo_msgs__msg__ContactState__TYPE_NAME[] = "gazebo_msgs/msg/ContactState";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char geometry_msgs__msg__Wrench__TYPE_NAME[] = "geometry_msgs/msg/Wrench";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char gazebo_msgs__msg__ContactsState__FIELD_NAME__header[] = "header";
static char gazebo_msgs__msg__ContactsState__FIELD_NAME__states[] = "states";

static rosidl_runtime_c__type_description__Field gazebo_msgs__msg__ContactsState__FIELDS[] = {
  {
    {gazebo_msgs__msg__ContactsState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ContactsState__FIELD_NAME__states, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {gazebo_msgs__msg__ContactState__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__msg__ContactsState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ContactState__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__msg__ContactsState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__msg__ContactsState__TYPE_NAME, 29, 29},
      {gazebo_msgs__msg__ContactsState__FIELDS, 2, 2},
    },
    {gazebo_msgs__msg__ContactsState__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&gazebo_msgs__msg__ContactState__EXPECTED_HASH, gazebo_msgs__msg__ContactState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = gazebo_msgs__msg__ContactState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Wrench__EXPECTED_HASH, geometry_msgs__msg__Wrench__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Wrench__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header                                   # stamp\n"
  "gazebo_msgs/ContactState[] states            # array of geom pairs in contact";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__msg__ContactsState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__msg__ContactsState__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 143, 143},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__msg__ContactsState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__msg__ContactsState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *gazebo_msgs__msg__ContactState__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Wrench__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

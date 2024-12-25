// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:srv/SetPhysicsProperties.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/srv/detail/set_physics_properties__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__SetPhysicsProperties__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0x6e, 0xc8, 0x10, 0x0c, 0x5e, 0xa1, 0x1f,
      0xae, 0x2c, 0xf4, 0x35, 0x4a, 0xc9, 0xd3, 0x96,
      0xaf, 0xae, 0x54, 0x5c, 0xef, 0x9d, 0xcd, 0xd0,
      0x71, 0xb7, 0x68, 0x36, 0xe8, 0x78, 0xe5, 0xcf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__SetPhysicsProperties_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0x47, 0xd3, 0x08, 0xc8, 0x2f, 0x71, 0xd8,
      0xcf, 0xf8, 0xa9, 0xf5, 0xae, 0x67, 0xb7, 0xb6,
      0x5f, 0xbb, 0x78, 0x22, 0xad, 0xcc, 0x5f, 0xbf,
      0xe0, 0x55, 0x74, 0xa5, 0x61, 0x9c, 0xf4, 0xd7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__SetPhysicsProperties_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0x72, 0xbe, 0x9b, 0x11, 0xe2, 0xb8, 0x36,
      0x04, 0xa5, 0x1d, 0x45, 0x32, 0xec, 0x0e, 0xc1,
      0xa7, 0x9b, 0x89, 0xc6, 0x48, 0x1f, 0x87, 0x78,
      0xe0, 0xde, 0x08, 0x80, 0x67, 0x5b, 0x85, 0xab,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__SetPhysicsProperties_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0xb8, 0xa4, 0x13, 0xf9, 0xcb, 0x21, 0xc9,
      0xd8, 0x5a, 0x8a, 0xa8, 0xa8, 0x21, 0x35, 0x61,
      0x98, 0x75, 0x37, 0x62, 0xc7, 0x3f, 0x2e, 0x04,
      0xb6, 0x18, 0x4c, 0x07, 0xd8, 0x63, 0x79, 0x41,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "gazebo_msgs/msg/detail/ode_physics__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t gazebo_msgs__msg__ODEPhysics__EXPECTED_HASH = {1, {
    0xac, 0x82, 0xf8, 0x1d, 0xb1, 0x43, 0xd0, 0xea,
    0xae, 0x55, 0xdb, 0x4c, 0x44, 0x45, 0xa1, 0xe0,
    0x2a, 0x76, 0x8e, 0x47, 0x3f, 0x2e, 0x72, 0x10,
    0xa6, 0x5a, 0xb5, 0xba, 0x0a, 0x58, 0x17, 0x14,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char gazebo_msgs__srv__SetPhysicsProperties__TYPE_NAME[] = "gazebo_msgs/srv/SetPhysicsProperties";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char gazebo_msgs__msg__ODEPhysics__TYPE_NAME[] = "gazebo_msgs/msg/ODEPhysics";
static char gazebo_msgs__srv__SetPhysicsProperties_Event__TYPE_NAME[] = "gazebo_msgs/srv/SetPhysicsProperties_Event";
static char gazebo_msgs__srv__SetPhysicsProperties_Request__TYPE_NAME[] = "gazebo_msgs/srv/SetPhysicsProperties_Request";
static char gazebo_msgs__srv__SetPhysicsProperties_Response__TYPE_NAME[] = "gazebo_msgs/srv/SetPhysicsProperties_Response";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char gazebo_msgs__srv__SetPhysicsProperties__FIELD_NAME__request_message[] = "request_message";
static char gazebo_msgs__srv__SetPhysicsProperties__FIELD_NAME__response_message[] = "response_message";
static char gazebo_msgs__srv__SetPhysicsProperties__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__SetPhysicsProperties__FIELDS[] = {
  {
    {gazebo_msgs__srv__SetPhysicsProperties__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__SetPhysicsProperties_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__SetPhysicsProperties_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__SetPhysicsProperties_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__SetPhysicsProperties__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEPhysics__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__SetPhysicsProperties__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__SetPhysicsProperties__TYPE_NAME, 36, 36},
      {gazebo_msgs__srv__SetPhysicsProperties__FIELDS, 3, 3},
    },
    {gazebo_msgs__srv__SetPhysicsProperties__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&gazebo_msgs__msg__ODEPhysics__EXPECTED_HASH, gazebo_msgs__msg__ODEPhysics__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = gazebo_msgs__msg__ODEPhysics__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = gazebo_msgs__srv__SetPhysicsProperties_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = gazebo_msgs__srv__SetPhysicsProperties_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = gazebo_msgs__srv__SetPhysicsProperties_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__SetPhysicsProperties_Request__FIELD_NAME__time_step[] = "time_step";
static char gazebo_msgs__srv__SetPhysicsProperties_Request__FIELD_NAME__max_update_rate[] = "max_update_rate";
static char gazebo_msgs__srv__SetPhysicsProperties_Request__FIELD_NAME__gravity[] = "gravity";
static char gazebo_msgs__srv__SetPhysicsProperties_Request__FIELD_NAME__ode_config[] = "ode_config";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__SetPhysicsProperties_Request__FIELDS[] = {
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Request__FIELD_NAME__time_step, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Request__FIELD_NAME__max_update_rate, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Request__FIELD_NAME__gravity, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Request__FIELD_NAME__ode_config, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__msg__ODEPhysics__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__SetPhysicsProperties_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {gazebo_msgs__msg__ODEPhysics__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__SetPhysicsProperties_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__SetPhysicsProperties_Request__TYPE_NAME, 44, 44},
      {gazebo_msgs__srv__SetPhysicsProperties_Request__FIELDS, 4, 4},
    },
    {gazebo_msgs__srv__SetPhysicsProperties_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&gazebo_msgs__msg__ODEPhysics__EXPECTED_HASH, gazebo_msgs__msg__ODEPhysics__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = gazebo_msgs__msg__ODEPhysics__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__SetPhysicsProperties_Response__FIELD_NAME__success[] = "success";
static char gazebo_msgs__srv__SetPhysicsProperties_Response__FIELD_NAME__status_message[] = "status_message";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__SetPhysicsProperties_Response__FIELDS[] = {
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Response__FIELD_NAME__status_message, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__SetPhysicsProperties_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__SetPhysicsProperties_Response__TYPE_NAME, 45, 45},
      {gazebo_msgs__srv__SetPhysicsProperties_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__SetPhysicsProperties_Event__FIELD_NAME__info[] = "info";
static char gazebo_msgs__srv__SetPhysicsProperties_Event__FIELD_NAME__request[] = "request";
static char gazebo_msgs__srv__SetPhysicsProperties_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__SetPhysicsProperties_Event__FIELDS[] = {
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {gazebo_msgs__srv__SetPhysicsProperties_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {gazebo_msgs__srv__SetPhysicsProperties_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__SetPhysicsProperties_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEPhysics__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetPhysicsProperties_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__SetPhysicsProperties_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__SetPhysicsProperties_Event__TYPE_NAME, 42, 42},
      {gazebo_msgs__srv__SetPhysicsProperties_Event__FIELDS, 3, 3},
    },
    {gazebo_msgs__srv__SetPhysicsProperties_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&gazebo_msgs__msg__ODEPhysics__EXPECTED_HASH, gazebo_msgs__msg__ODEPhysics__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = gazebo_msgs__msg__ODEPhysics__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = gazebo_msgs__srv__SetPhysicsProperties_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = gazebo_msgs__srv__SetPhysicsProperties_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# sets pose and twist of a link.  All children link poses/twists of the URDF tree will be updated accordingly\n"
  "float64 time_step                  # dt in seconds\n"
  "float64 max_update_rate            # throttle maximum physics update rate\n"
  "geometry_msgs/Vector3 gravity      # gravity vector (e.g. earth ~[0,0,-9.81])\n"
  "gazebo_msgs/ODEPhysics ode_config  # configurations for ODE\n"
  "---\n"
  "bool success                       # return true if set wrench successful\n"
  "string status_message              # comments if available";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__SetPhysicsProperties__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__SetPhysicsProperties__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 510, 510},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__SetPhysicsProperties_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__SetPhysicsProperties_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__SetPhysicsProperties_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__SetPhysicsProperties_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__SetPhysicsProperties_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__SetPhysicsProperties_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__SetPhysicsProperties__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__SetPhysicsProperties__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *gazebo_msgs__msg__ODEPhysics__get_individual_type_description_source(NULL);
    sources[3] = *gazebo_msgs__srv__SetPhysicsProperties_Event__get_individual_type_description_source(NULL);
    sources[4] = *gazebo_msgs__srv__SetPhysicsProperties_Request__get_individual_type_description_source(NULL);
    sources[5] = *gazebo_msgs__srv__SetPhysicsProperties_Response__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__SetPhysicsProperties_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__SetPhysicsProperties_Request__get_individual_type_description_source(NULL),
    sources[1] = *gazebo_msgs__msg__ODEPhysics__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__SetPhysicsProperties_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__SetPhysicsProperties_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__SetPhysicsProperties_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__SetPhysicsProperties_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *gazebo_msgs__msg__ODEPhysics__get_individual_type_description_source(NULL);
    sources[3] = *gazebo_msgs__srv__SetPhysicsProperties_Request__get_individual_type_description_source(NULL);
    sources[4] = *gazebo_msgs__srv__SetPhysicsProperties_Response__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

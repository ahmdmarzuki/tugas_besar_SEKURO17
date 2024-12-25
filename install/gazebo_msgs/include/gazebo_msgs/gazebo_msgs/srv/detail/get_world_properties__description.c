// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:srv/GetWorldProperties.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/srv/detail/get_world_properties__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__GetWorldProperties__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0xf2, 0x54, 0xee, 0xd0, 0xcb, 0x03, 0x2c,
      0x48, 0xc4, 0x31, 0xd0, 0xb9, 0xfa, 0xab, 0xd2,
      0xe0, 0x40, 0x98, 0xda, 0x15, 0x21, 0x36, 0x38,
      0xca, 0x4e, 0x9f, 0xa1, 0xa7, 0xf2, 0x15, 0x69,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__GetWorldProperties_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0x6d, 0x51, 0xbf, 0xa0, 0xe7, 0xf7, 0x33,
      0x6f, 0x54, 0x95, 0x55, 0x50, 0x20, 0xd4, 0xfb,
      0xc5, 0xf5, 0x85, 0x50, 0xd1, 0xd6, 0x89, 0x8f,
      0xe6, 0xa5, 0x5f, 0x65, 0x8f, 0x99, 0x56, 0xac,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__GetWorldProperties_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0xe6, 0x2c, 0x69, 0x72, 0xcb, 0xf6, 0x34,
      0x89, 0x05, 0xa1, 0xd3, 0x02, 0xa5, 0x4b, 0xb0,
      0x8c, 0xcb, 0x20, 0x20, 0x75, 0x4d, 0x3d, 0x93,
      0xe8, 0xc9, 0x71, 0x78, 0x98, 0x14, 0x36, 0x2f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__GetWorldProperties_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb3, 0xfd, 0x69, 0xf0, 0x82, 0xd4, 0x1b, 0x72,
      0xd1, 0xd2, 0xb9, 0x17, 0x4a, 0xdf, 0x7d, 0x7d,
      0x61, 0xd1, 0x12, 0x7c, 0x97, 0xc0, 0xdc, 0xa5,
      0x9f, 0x0d, 0xa1, 0x8c, 0xe5, 0xde, 0xf1, 0x94,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char gazebo_msgs__srv__GetWorldProperties__TYPE_NAME[] = "gazebo_msgs/srv/GetWorldProperties";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char gazebo_msgs__srv__GetWorldProperties_Event__TYPE_NAME[] = "gazebo_msgs/srv/GetWorldProperties_Event";
static char gazebo_msgs__srv__GetWorldProperties_Request__TYPE_NAME[] = "gazebo_msgs/srv/GetWorldProperties_Request";
static char gazebo_msgs__srv__GetWorldProperties_Response__TYPE_NAME[] = "gazebo_msgs/srv/GetWorldProperties_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char gazebo_msgs__srv__GetWorldProperties__FIELD_NAME__request_message[] = "request_message";
static char gazebo_msgs__srv__GetWorldProperties__FIELD_NAME__response_message[] = "response_message";
static char gazebo_msgs__srv__GetWorldProperties__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__GetWorldProperties__FIELDS[] = {
  {
    {gazebo_msgs__srv__GetWorldProperties__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__GetWorldProperties_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__GetWorldProperties_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__GetWorldProperties_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__GetWorldProperties__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__GetWorldProperties__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__GetWorldProperties__TYPE_NAME, 34, 34},
      {gazebo_msgs__srv__GetWorldProperties__FIELDS, 3, 3},
    },
    {gazebo_msgs__srv__GetWorldProperties__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = gazebo_msgs__srv__GetWorldProperties_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = gazebo_msgs__srv__GetWorldProperties_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = gazebo_msgs__srv__GetWorldProperties_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__GetWorldProperties_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__GetWorldProperties_Request__FIELDS[] = {
  {
    {gazebo_msgs__srv__GetWorldProperties_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__GetWorldProperties_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__GetWorldProperties_Request__TYPE_NAME, 42, 42},
      {gazebo_msgs__srv__GetWorldProperties_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__GetWorldProperties_Response__FIELD_NAME__sim_time[] = "sim_time";
static char gazebo_msgs__srv__GetWorldProperties_Response__FIELD_NAME__model_names[] = "model_names";
static char gazebo_msgs__srv__GetWorldProperties_Response__FIELD_NAME__rendering_enabled[] = "rendering_enabled";
static char gazebo_msgs__srv__GetWorldProperties_Response__FIELD_NAME__success[] = "success";
static char gazebo_msgs__srv__GetWorldProperties_Response__FIELD_NAME__status_message[] = "status_message";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__GetWorldProperties_Response__FIELDS[] = {
  {
    {gazebo_msgs__srv__GetWorldProperties_Response__FIELD_NAME__sim_time, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties_Response__FIELD_NAME__model_names, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties_Response__FIELD_NAME__rendering_enabled, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties_Response__FIELD_NAME__status_message, 14, 14},
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
gazebo_msgs__srv__GetWorldProperties_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__GetWorldProperties_Response__TYPE_NAME, 43, 43},
      {gazebo_msgs__srv__GetWorldProperties_Response__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__GetWorldProperties_Event__FIELD_NAME__info[] = "info";
static char gazebo_msgs__srv__GetWorldProperties_Event__FIELD_NAME__request[] = "request";
static char gazebo_msgs__srv__GetWorldProperties_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__GetWorldProperties_Event__FIELDS[] = {
  {
    {gazebo_msgs__srv__GetWorldProperties_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {gazebo_msgs__srv__GetWorldProperties_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {gazebo_msgs__srv__GetWorldProperties_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__GetWorldProperties_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetWorldProperties_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__GetWorldProperties_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__GetWorldProperties_Event__TYPE_NAME, 40, 40},
      {gazebo_msgs__srv__GetWorldProperties_Event__FIELDS, 3, 3},
    },
    {gazebo_msgs__srv__GetWorldProperties_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = gazebo_msgs__srv__GetWorldProperties_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = gazebo_msgs__srv__GetWorldProperties_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Deprecated, kept for ROS 1 bridge.\n"
  "# Use GetModelList\n"
  "---\n"
  "float64 sim_time                     # current sim time\n"
  "string[] model_names                 # list of models in the world\n"
  "bool rendering_enabled               # if X is used\n"
  "bool success                         # return true if get successful\n"
  "string status_message                # comments if available";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__GetWorldProperties__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__GetWorldProperties__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 365, 365},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__GetWorldProperties_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__GetWorldProperties_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__GetWorldProperties_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__GetWorldProperties_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__GetWorldProperties_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__GetWorldProperties_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__GetWorldProperties__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__GetWorldProperties__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *gazebo_msgs__srv__GetWorldProperties_Event__get_individual_type_description_source(NULL);
    sources[3] = *gazebo_msgs__srv__GetWorldProperties_Request__get_individual_type_description_source(NULL);
    sources[4] = *gazebo_msgs__srv__GetWorldProperties_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__GetWorldProperties_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__GetWorldProperties_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__GetWorldProperties_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__GetWorldProperties_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__GetWorldProperties_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__GetWorldProperties_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *gazebo_msgs__srv__GetWorldProperties_Request__get_individual_type_description_source(NULL);
    sources[3] = *gazebo_msgs__srv__GetWorldProperties_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

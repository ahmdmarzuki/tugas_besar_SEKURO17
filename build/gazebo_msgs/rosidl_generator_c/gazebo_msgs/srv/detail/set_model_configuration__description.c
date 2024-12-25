// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:srv/SetModelConfiguration.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/srv/detail/set_model_configuration__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__SetModelConfiguration__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0xe0, 0x17, 0x36, 0x37, 0x3d, 0xa0, 0x6c,
      0xc4, 0x79, 0x5d, 0x51, 0x46, 0x13, 0x1d, 0x75,
      0xb6, 0x36, 0x51, 0xe0, 0x90, 0xd0, 0x1d, 0xb8,
      0x9f, 0x7b, 0xea, 0x6f, 0x5e, 0xc5, 0xea, 0xa7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__SetModelConfiguration_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0xa7, 0xdd, 0x7f, 0x9d, 0x7e, 0x22, 0x7e,
      0xbf, 0x15, 0x55, 0x9a, 0x5c, 0x76, 0x75, 0xf4,
      0x56, 0xe2, 0x3e, 0xcf, 0x33, 0x98, 0x78, 0xc7,
      0xa0, 0x94, 0xcf, 0x37, 0x0e, 0xbc, 0x49, 0xed,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__SetModelConfiguration_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfd, 0x45, 0x81, 0x45, 0x82, 0x56, 0x45, 0xc1,
      0x23, 0x0e, 0xba, 0xf7, 0xd1, 0x46, 0xcf, 0x76,
      0x27, 0xe9, 0x54, 0xcf, 0xe6, 0x2b, 0x20, 0x68,
      0xf9, 0x66, 0xe3, 0x6a, 0x4c, 0xab, 0x23, 0x9e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__SetModelConfiguration_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0x5a, 0x66, 0x8b, 0x07, 0x08, 0x7f, 0x24,
      0xe6, 0xf7, 0xd6, 0x17, 0x6a, 0x21, 0xb1, 0x28,
      0x03, 0x82, 0x86, 0x79, 0x54, 0x08, 0xec, 0xe5,
      0x72, 0xbb, 0xd9, 0xb1, 0x34, 0x4f, 0x70, 0xee,
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

static char gazebo_msgs__srv__SetModelConfiguration__TYPE_NAME[] = "gazebo_msgs/srv/SetModelConfiguration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char gazebo_msgs__srv__SetModelConfiguration_Event__TYPE_NAME[] = "gazebo_msgs/srv/SetModelConfiguration_Event";
static char gazebo_msgs__srv__SetModelConfiguration_Request__TYPE_NAME[] = "gazebo_msgs/srv/SetModelConfiguration_Request";
static char gazebo_msgs__srv__SetModelConfiguration_Response__TYPE_NAME[] = "gazebo_msgs/srv/SetModelConfiguration_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char gazebo_msgs__srv__SetModelConfiguration__FIELD_NAME__request_message[] = "request_message";
static char gazebo_msgs__srv__SetModelConfiguration__FIELD_NAME__response_message[] = "response_message";
static char gazebo_msgs__srv__SetModelConfiguration__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__SetModelConfiguration__FIELDS[] = {
  {
    {gazebo_msgs__srv__SetModelConfiguration__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__SetModelConfiguration_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__SetModelConfiguration_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__SetModelConfiguration_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__SetModelConfiguration__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__SetModelConfiguration__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__SetModelConfiguration__TYPE_NAME, 37, 37},
      {gazebo_msgs__srv__SetModelConfiguration__FIELDS, 3, 3},
    },
    {gazebo_msgs__srv__SetModelConfiguration__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = gazebo_msgs__srv__SetModelConfiguration_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = gazebo_msgs__srv__SetModelConfiguration_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = gazebo_msgs__srv__SetModelConfiguration_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__SetModelConfiguration_Request__FIELD_NAME__model_name[] = "model_name";
static char gazebo_msgs__srv__SetModelConfiguration_Request__FIELD_NAME__urdf_param_name[] = "urdf_param_name";
static char gazebo_msgs__srv__SetModelConfiguration_Request__FIELD_NAME__joint_names[] = "joint_names";
static char gazebo_msgs__srv__SetModelConfiguration_Request__FIELD_NAME__joint_positions[] = "joint_positions";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__SetModelConfiguration_Request__FIELDS[] = {
  {
    {gazebo_msgs__srv__SetModelConfiguration_Request__FIELD_NAME__model_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration_Request__FIELD_NAME__urdf_param_name, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration_Request__FIELD_NAME__joint_names, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration_Request__FIELD_NAME__joint_positions, 15, 15},
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
gazebo_msgs__srv__SetModelConfiguration_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__SetModelConfiguration_Request__TYPE_NAME, 45, 45},
      {gazebo_msgs__srv__SetModelConfiguration_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__SetModelConfiguration_Response__FIELD_NAME__success[] = "success";
static char gazebo_msgs__srv__SetModelConfiguration_Response__FIELD_NAME__status_message[] = "status_message";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__SetModelConfiguration_Response__FIELDS[] = {
  {
    {gazebo_msgs__srv__SetModelConfiguration_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration_Response__FIELD_NAME__status_message, 14, 14},
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
gazebo_msgs__srv__SetModelConfiguration_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__SetModelConfiguration_Response__TYPE_NAME, 46, 46},
      {gazebo_msgs__srv__SetModelConfiguration_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__SetModelConfiguration_Event__FIELD_NAME__info[] = "info";
static char gazebo_msgs__srv__SetModelConfiguration_Event__FIELD_NAME__request[] = "request";
static char gazebo_msgs__srv__SetModelConfiguration_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__SetModelConfiguration_Event__FIELDS[] = {
  {
    {gazebo_msgs__srv__SetModelConfiguration_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {gazebo_msgs__srv__SetModelConfiguration_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {gazebo_msgs__srv__SetModelConfiguration_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__SetModelConfiguration_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__SetModelConfiguration_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__SetModelConfiguration_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__SetModelConfiguration_Event__TYPE_NAME, 43, 43},
      {gazebo_msgs__srv__SetModelConfiguration_Event__FIELDS, 3, 3},
    },
    {gazebo_msgs__srv__SetModelConfiguration_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = gazebo_msgs__srv__SetModelConfiguration_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = gazebo_msgs__srv__SetModelConfiguration_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Set joint positions for a model\n"
  "string model_name           # model to set state\n"
  "string urdf_param_name      # UNUSED\n"
  "\n"
  "string[] joint_names        # list of joints to set positions.  if joint is not listed here, preserve current position.\n"
  "float64[] joint_positions   # set to this position.\n"
  "---\n"
  "bool success                # return true if setting state successful\n"
  "string status_message       # comments if available";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__SetModelConfiguration__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__SetModelConfiguration__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 419, 419},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__SetModelConfiguration_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__SetModelConfiguration_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__SetModelConfiguration_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__SetModelConfiguration_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__SetModelConfiguration_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__SetModelConfiguration_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__SetModelConfiguration__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__SetModelConfiguration__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *gazebo_msgs__srv__SetModelConfiguration_Event__get_individual_type_description_source(NULL);
    sources[3] = *gazebo_msgs__srv__SetModelConfiguration_Request__get_individual_type_description_source(NULL);
    sources[4] = *gazebo_msgs__srv__SetModelConfiguration_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__SetModelConfiguration_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__SetModelConfiguration_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__SetModelConfiguration_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__SetModelConfiguration_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__SetModelConfiguration_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__SetModelConfiguration_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *gazebo_msgs__srv__SetModelConfiguration_Request__get_individual_type_description_source(NULL);
    sources[3] = *gazebo_msgs__srv__SetModelConfiguration_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

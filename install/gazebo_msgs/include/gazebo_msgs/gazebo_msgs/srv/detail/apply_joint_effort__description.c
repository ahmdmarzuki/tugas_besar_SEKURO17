// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:srv/ApplyJointEffort.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/srv/detail/apply_joint_effort__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__ApplyJointEffort__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0x94, 0xed, 0xd0, 0xb2, 0x94, 0x27, 0x18,
      0xab, 0x07, 0xae, 0x1b, 0x6c, 0xa5, 0xca, 0xef,
      0xd2, 0xd2, 0x94, 0x8d, 0x75, 0x62, 0x65, 0xea,
      0x14, 0x2f, 0xe4, 0x24, 0x4e, 0x5e, 0x70, 0x6a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__ApplyJointEffort_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x2f, 0x53, 0x35, 0xde, 0x2d, 0xa2, 0x2e,
      0xfe, 0x06, 0xea, 0x7e, 0xca, 0x16, 0xdd, 0xd9,
      0x0a, 0xa4, 0x38, 0xa8, 0x5f, 0x14, 0xd1, 0xce,
      0x5e, 0x83, 0x98, 0xbe, 0xd0, 0x36, 0x18, 0xb8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__ApplyJointEffort_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0x6a, 0x05, 0x27, 0xbc, 0x6f, 0x8b, 0x1b,
      0xf5, 0xbf, 0x27, 0xe6, 0xb8, 0xa9, 0x57, 0x9d,
      0x05, 0x39, 0x24, 0x2e, 0x97, 0xb7, 0x37, 0x51,
      0xb5, 0xc0, 0xd1, 0xf5, 0x2c, 0x12, 0x52, 0x03,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__ApplyJointEffort_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0x48, 0xd2, 0xbe, 0x15, 0xdb, 0x04, 0x08,
      0xe7, 0x74, 0x6d, 0xfd, 0x91, 0x67, 0xef, 0x5d,
      0x62, 0xe7, 0x90, 0x55, 0x83, 0x0a, 0x7a, 0x46,
      0x37, 0xd9, 0xf0, 0x6f, 0xd3, 0x37, 0xd7, 0xe4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
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

static char gazebo_msgs__srv__ApplyJointEffort__TYPE_NAME[] = "gazebo_msgs/srv/ApplyJointEffort";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char gazebo_msgs__srv__ApplyJointEffort_Event__TYPE_NAME[] = "gazebo_msgs/srv/ApplyJointEffort_Event";
static char gazebo_msgs__srv__ApplyJointEffort_Request__TYPE_NAME[] = "gazebo_msgs/srv/ApplyJointEffort_Request";
static char gazebo_msgs__srv__ApplyJointEffort_Response__TYPE_NAME[] = "gazebo_msgs/srv/ApplyJointEffort_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char gazebo_msgs__srv__ApplyJointEffort__FIELD_NAME__request_message[] = "request_message";
static char gazebo_msgs__srv__ApplyJointEffort__FIELD_NAME__response_message[] = "response_message";
static char gazebo_msgs__srv__ApplyJointEffort__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__ApplyJointEffort__FIELDS[] = {
  {
    {gazebo_msgs__srv__ApplyJointEffort__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__ApplyJointEffort_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__ApplyJointEffort_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__ApplyJointEffort_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__ApplyJointEffort__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__ApplyJointEffort__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__ApplyJointEffort__TYPE_NAME, 32, 32},
      {gazebo_msgs__srv__ApplyJointEffort__FIELDS, 3, 3},
    },
    {gazebo_msgs__srv__ApplyJointEffort__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = gazebo_msgs__srv__ApplyJointEffort_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = gazebo_msgs__srv__ApplyJointEffort_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = gazebo_msgs__srv__ApplyJointEffort_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__ApplyJointEffort_Request__FIELD_NAME__joint_name[] = "joint_name";
static char gazebo_msgs__srv__ApplyJointEffort_Request__FIELD_NAME__effort[] = "effort";
static char gazebo_msgs__srv__ApplyJointEffort_Request__FIELD_NAME__start_time[] = "start_time";
static char gazebo_msgs__srv__ApplyJointEffort_Request__FIELD_NAME__duration[] = "duration";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__ApplyJointEffort_Request__FIELDS[] = {
  {
    {gazebo_msgs__srv__ApplyJointEffort_Request__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort_Request__FIELD_NAME__effort, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort_Request__FIELD_NAME__start_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort_Request__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__ApplyJointEffort_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__ApplyJointEffort_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__ApplyJointEffort_Request__TYPE_NAME, 40, 40},
      {gazebo_msgs__srv__ApplyJointEffort_Request__FIELDS, 4, 4},
    },
    {gazebo_msgs__srv__ApplyJointEffort_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__ApplyJointEffort_Response__FIELD_NAME__success[] = "success";
static char gazebo_msgs__srv__ApplyJointEffort_Response__FIELD_NAME__status_message[] = "status_message";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__ApplyJointEffort_Response__FIELDS[] = {
  {
    {gazebo_msgs__srv__ApplyJointEffort_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort_Response__FIELD_NAME__status_message, 14, 14},
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
gazebo_msgs__srv__ApplyJointEffort_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__ApplyJointEffort_Response__TYPE_NAME, 41, 41},
      {gazebo_msgs__srv__ApplyJointEffort_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__ApplyJointEffort_Event__FIELD_NAME__info[] = "info";
static char gazebo_msgs__srv__ApplyJointEffort_Event__FIELD_NAME__request[] = "request";
static char gazebo_msgs__srv__ApplyJointEffort_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__ApplyJointEffort_Event__FIELDS[] = {
  {
    {gazebo_msgs__srv__ApplyJointEffort_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {gazebo_msgs__srv__ApplyJointEffort_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {gazebo_msgs__srv__ApplyJointEffort_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__ApplyJointEffort_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__ApplyJointEffort_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__ApplyJointEffort_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__ApplyJointEffort_Event__TYPE_NAME, 38, 38},
      {gazebo_msgs__srv__ApplyJointEffort_Event__FIELDS, 3, 3},
    },
    {gazebo_msgs__srv__ApplyJointEffort_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = gazebo_msgs__srv__ApplyJointEffort_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = gazebo_msgs__srv__ApplyJointEffort_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# set urdf joint effort\n"
  "string joint_name                       # joint to apply wrench (linear force and torque)\n"
  "float64 effort                          # effort to apply\n"
  "builtin_interfaces/Time start_time      # optional wrench application start time (seconds)\n"
  "                                        # if start_time < current time, start as soon as possible\n"
  "builtin_interfaces/Duration  duration   # optional duration of wrench application time (seconds)\n"
  "                                        # if duration < 0, apply wrench continuously without end\n"
  "                                        # if duration = 0, do nothing\n"
  "                                        # if duration < step size, assume step size and\n"
  "                                        # display warning in status_message\n"
  "---\n"
  "bool success                            # return true if effort application is successful\n"
  "string status_message                   # comments if available";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__ApplyJointEffort__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__ApplyJointEffort__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 947, 947},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__ApplyJointEffort_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__ApplyJointEffort_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__ApplyJointEffort_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__ApplyJointEffort_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__ApplyJointEffort_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__ApplyJointEffort_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__ApplyJointEffort__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__ApplyJointEffort__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *gazebo_msgs__srv__ApplyJointEffort_Event__get_individual_type_description_source(NULL);
    sources[4] = *gazebo_msgs__srv__ApplyJointEffort_Request__get_individual_type_description_source(NULL);
    sources[5] = *gazebo_msgs__srv__ApplyJointEffort_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__ApplyJointEffort_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__ApplyJointEffort_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__ApplyJointEffort_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__ApplyJointEffort_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__ApplyJointEffort_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__ApplyJointEffort_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *gazebo_msgs__srv__ApplyJointEffort_Request__get_individual_type_description_source(NULL);
    sources[4] = *gazebo_msgs__srv__ApplyJointEffort_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

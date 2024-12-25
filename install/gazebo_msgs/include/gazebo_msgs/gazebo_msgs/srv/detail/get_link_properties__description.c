// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:srv/GetLinkProperties.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/srv/detail/get_link_properties__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__GetLinkProperties__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0x89, 0x9f, 0xfb, 0x78, 0xdd, 0xb2, 0x5e,
      0x21, 0x8c, 0xe0, 0x88, 0x61, 0x96, 0x2c, 0x17,
      0xa4, 0x63, 0x89, 0xef, 0xfc, 0x2e, 0xb4, 0x30,
      0x32, 0xab, 0x7e, 0xc1, 0x1b, 0x84, 0x8a, 0x21,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__GetLinkProperties_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0xd9, 0x3c, 0xa8, 0x19, 0xbe, 0xab, 0x8f,
      0x94, 0x22, 0x8a, 0xc4, 0x9e, 0x48, 0x9a, 0x72,
      0x8b, 0xa0, 0xdf, 0x0d, 0x0a, 0x46, 0xee, 0x53,
      0x63, 0xe8, 0x5b, 0xe8, 0x50, 0x80, 0x27, 0x3e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__GetLinkProperties_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x45, 0x5d, 0xaa, 0xbd, 0x19, 0x95, 0x95, 0x56,
      0x30, 0x71, 0xf1, 0xbb, 0x6b, 0xda, 0x7b, 0x60,
      0x69, 0x7c, 0xaa, 0x8c, 0x85, 0x29, 0x9c, 0xf9,
      0x17, 0xbd, 0x34, 0x52, 0x9a, 0xb6, 0xc1, 0x36,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__srv__GetLinkProperties_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1b, 0xdb, 0x36, 0x26, 0x2e, 0xeb, 0xbf, 0x41,
      0x06, 0x7e, 0x3f, 0x9c, 0x89, 0xcb, 0x18, 0xbc,
      0x2c, 0x43, 0xa2, 0x9b, 0x66, 0x95, 0xcb, 0xb9,
      0xaa, 0x79, 0xd6, 0xb5, 0x37, 0x22, 0x42, 0xea,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char gazebo_msgs__srv__GetLinkProperties__TYPE_NAME[] = "gazebo_msgs/srv/GetLinkProperties";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char gazebo_msgs__srv__GetLinkProperties_Event__TYPE_NAME[] = "gazebo_msgs/srv/GetLinkProperties_Event";
static char gazebo_msgs__srv__GetLinkProperties_Request__TYPE_NAME[] = "gazebo_msgs/srv/GetLinkProperties_Request";
static char gazebo_msgs__srv__GetLinkProperties_Response__TYPE_NAME[] = "gazebo_msgs/srv/GetLinkProperties_Response";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char gazebo_msgs__srv__GetLinkProperties__FIELD_NAME__request_message[] = "request_message";
static char gazebo_msgs__srv__GetLinkProperties__FIELD_NAME__response_message[] = "response_message";
static char gazebo_msgs__srv__GetLinkProperties__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__GetLinkProperties__FIELDS[] = {
  {
    {gazebo_msgs__srv__GetLinkProperties__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__GetLinkProperties_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__GetLinkProperties_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gazebo_msgs__srv__GetLinkProperties_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__GetLinkProperties__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__GetLinkProperties__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__GetLinkProperties__TYPE_NAME, 33, 33},
      {gazebo_msgs__srv__GetLinkProperties__FIELDS, 3, 3},
    },
    {gazebo_msgs__srv__GetLinkProperties__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = gazebo_msgs__srv__GetLinkProperties_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = gazebo_msgs__srv__GetLinkProperties_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = gazebo_msgs__srv__GetLinkProperties_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__GetLinkProperties_Request__FIELD_NAME__link_name[] = "link_name";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__GetLinkProperties_Request__FIELDS[] = {
  {
    {gazebo_msgs__srv__GetLinkProperties_Request__FIELD_NAME__link_name, 9, 9},
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
gazebo_msgs__srv__GetLinkProperties_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__GetLinkProperties_Request__TYPE_NAME, 41, 41},
      {gazebo_msgs__srv__GetLinkProperties_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__com[] = "com";
static char gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__gravity_mode[] = "gravity_mode";
static char gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__mass[] = "mass";
static char gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__ixx[] = "ixx";
static char gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__ixy[] = "ixy";
static char gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__ixz[] = "ixz";
static char gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__iyy[] = "iyy";
static char gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__iyz[] = "iyz";
static char gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__izz[] = "izz";
static char gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__success[] = "success";
static char gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__status_message[] = "status_message";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__GetLinkProperties_Response__FIELDS[] = {
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__com, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__gravity_mode, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__mass, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__ixx, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__ixy, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__ixz, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__iyy, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__iyz, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__izz, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__FIELD_NAME__status_message, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__GetLinkProperties_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__GetLinkProperties_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__GetLinkProperties_Response__TYPE_NAME, 42, 42},
      {gazebo_msgs__srv__GetLinkProperties_Response__FIELDS, 11, 11},
    },
    {gazebo_msgs__srv__GetLinkProperties_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char gazebo_msgs__srv__GetLinkProperties_Event__FIELD_NAME__info[] = "info";
static char gazebo_msgs__srv__GetLinkProperties_Event__FIELD_NAME__request[] = "request";
static char gazebo_msgs__srv__GetLinkProperties_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field gazebo_msgs__srv__GetLinkProperties_Event__FIELDS[] = {
  {
    {gazebo_msgs__srv__GetLinkProperties_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {gazebo_msgs__srv__GetLinkProperties_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {gazebo_msgs__srv__GetLinkProperties_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gazebo_msgs__srv__GetLinkProperties_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__srv__GetLinkProperties_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__srv__GetLinkProperties_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__srv__GetLinkProperties_Event__TYPE_NAME, 39, 39},
      {gazebo_msgs__srv__GetLinkProperties_Event__FIELDS, 3, 3},
    },
    {gazebo_msgs__srv__GetLinkProperties_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = gazebo_msgs__srv__GetLinkProperties_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = gazebo_msgs__srv__GetLinkProperties_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string link_name          # name of link\n"
  "                          # link names are prefixed by model name, e.g. pr2::base_link\n"
  "---\n"
  "geometry_msgs/Pose com    # center of mass location in link frame\n"
  "                          # and orientation of the moment of inertias\n"
  "                          # relative to the link frame\n"
  "bool gravity_mode         # set gravity mode on/off\n"
  "float64 mass              # linear mass of link\n"
  "float64 ixx               # moment of inertia\n"
  "float64 ixy               # moment of inertia\n"
  "float64 ixz               # moment of inertia\n"
  "float64 iyy               # moment of inertia\n"
  "float64 iyz               # moment of inertia\n"
  "float64 izz               # moment of inertia\n"
  "bool success              # return true if get info is successful\n"
  "string status_message     # comments if available";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__GetLinkProperties__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__GetLinkProperties__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 815, 815},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__GetLinkProperties_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__GetLinkProperties_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__GetLinkProperties_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__GetLinkProperties_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__srv__GetLinkProperties_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__srv__GetLinkProperties_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__GetLinkProperties__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__GetLinkProperties__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *gazebo_msgs__srv__GetLinkProperties_Event__get_individual_type_description_source(NULL);
    sources[3] = *gazebo_msgs__srv__GetLinkProperties_Request__get_individual_type_description_source(NULL);
    sources[4] = *gazebo_msgs__srv__GetLinkProperties_Response__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__GetLinkProperties_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__GetLinkProperties_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__GetLinkProperties_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__GetLinkProperties_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__srv__GetLinkProperties_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__srv__GetLinkProperties_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *gazebo_msgs__srv__GetLinkProperties_Request__get_individual_type_description_source(NULL);
    sources[3] = *gazebo_msgs__srv__GetLinkProperties_Response__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

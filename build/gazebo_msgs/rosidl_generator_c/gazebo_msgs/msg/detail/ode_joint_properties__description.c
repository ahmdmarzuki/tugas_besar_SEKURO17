// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/msg/detail/ode_joint_properties__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__msg__ODEJointProperties__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdf, 0xa2, 0x6a, 0x3a, 0x15, 0x3c, 0x0e, 0xc6,
      0xb2, 0x2b, 0x49, 0xd4, 0xbe, 0xf1, 0x7b, 0x49,
      0x2d, 0xd4, 0xc6, 0x56, 0x11, 0x32, 0x2c, 0x10,
      0xff, 0x10, 0xcf, 0x8b, 0x34, 0xff, 0x16, 0xf7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char gazebo_msgs__msg__ODEJointProperties__TYPE_NAME[] = "gazebo_msgs/msg/ODEJointProperties";

// Define type names, field names, and default values
static char gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__damping[] = "damping";
static char gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__hi_stop[] = "hi_stop";
static char gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__lo_stop[] = "lo_stop";
static char gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__erp[] = "erp";
static char gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__cfm[] = "cfm";
static char gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__stop_erp[] = "stop_erp";
static char gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__stop_cfm[] = "stop_cfm";
static char gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__fudge_factor[] = "fudge_factor";
static char gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__fmax[] = "fmax";
static char gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__vel[] = "vel";

static rosidl_runtime_c__type_description__Field gazebo_msgs__msg__ODEJointProperties__FIELDS[] = {
  {
    {gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__damping, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__hi_stop, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__lo_stop, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__erp, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__cfm, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__stop_erp, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__stop_cfm, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__fudge_factor, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__fmax, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEJointProperties__FIELD_NAME__vel, 3, 3},
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
gazebo_msgs__msg__ODEJointProperties__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__msg__ODEJointProperties__TYPE_NAME, 34, 34},
      {gazebo_msgs__msg__ODEJointProperties__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# access to low level joint properties, change these at your own risk\n"
  "float64[] damping             # joint damping\n"
  "float64[] hi_stop             # joint limit\n"
  "float64[] lo_stop             # joint limit\n"
  "float64[] erp                 # set joint erp\n"
  "float64[] cfm                 # set joint cfm\n"
  "float64[] stop_erp            # set joint erp for joint limit \"contact\" joint\n"
  "float64[] stop_cfm            # set joint cfm for joint limit \"contact\" joint\n"
  "float64[] fudge_factor        # joint fudge_factor applied at limits, see ODE manual for info.\n"
  "float64[] fmax                # ode joint param fmax\n"
  "float64[] vel                 # ode joint param vel";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__msg__ODEJointProperties__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__msg__ODEJointProperties__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 652, 652},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__msg__ODEJointProperties__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__msg__ODEJointProperties__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

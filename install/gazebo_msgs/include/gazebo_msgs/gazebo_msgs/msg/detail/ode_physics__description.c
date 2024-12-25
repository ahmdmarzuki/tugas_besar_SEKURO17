// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
// generated code does not contain a copyright notice

#include "gazebo_msgs/msg/detail/ode_physics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
const rosidl_type_hash_t *
gazebo_msgs__msg__ODEPhysics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0x82, 0xf8, 0x1d, 0xb1, 0x43, 0xd0, 0xea,
      0xae, 0x55, 0xdb, 0x4c, 0x44, 0x45, 0xa1, 0xe0,
      0x2a, 0x76, 0x8e, 0x47, 0x3f, 0x2e, 0x72, 0x10,
      0xa6, 0x5a, 0xb5, 0xba, 0x0a, 0x58, 0x17, 0x14,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char gazebo_msgs__msg__ODEPhysics__TYPE_NAME[] = "gazebo_msgs/msg/ODEPhysics";

// Define type names, field names, and default values
static char gazebo_msgs__msg__ODEPhysics__FIELD_NAME__auto_disable_bodies[] = "auto_disable_bodies";
static char gazebo_msgs__msg__ODEPhysics__FIELD_NAME__sor_pgs_precon_iters[] = "sor_pgs_precon_iters";
static char gazebo_msgs__msg__ODEPhysics__FIELD_NAME__sor_pgs_iters[] = "sor_pgs_iters";
static char gazebo_msgs__msg__ODEPhysics__FIELD_NAME__sor_pgs_w[] = "sor_pgs_w";
static char gazebo_msgs__msg__ODEPhysics__FIELD_NAME__sor_pgs_rms_error_tol[] = "sor_pgs_rms_error_tol";
static char gazebo_msgs__msg__ODEPhysics__FIELD_NAME__contact_surface_layer[] = "contact_surface_layer";
static char gazebo_msgs__msg__ODEPhysics__FIELD_NAME__contact_max_correcting_vel[] = "contact_max_correcting_vel";
static char gazebo_msgs__msg__ODEPhysics__FIELD_NAME__cfm[] = "cfm";
static char gazebo_msgs__msg__ODEPhysics__FIELD_NAME__erp[] = "erp";
static char gazebo_msgs__msg__ODEPhysics__FIELD_NAME__max_contacts[] = "max_contacts";

static rosidl_runtime_c__type_description__Field gazebo_msgs__msg__ODEPhysics__FIELDS[] = {
  {
    {gazebo_msgs__msg__ODEPhysics__FIELD_NAME__auto_disable_bodies, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEPhysics__FIELD_NAME__sor_pgs_precon_iters, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEPhysics__FIELD_NAME__sor_pgs_iters, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEPhysics__FIELD_NAME__sor_pgs_w, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEPhysics__FIELD_NAME__sor_pgs_rms_error_tol, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEPhysics__FIELD_NAME__contact_surface_layer, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEPhysics__FIELD_NAME__contact_max_correcting_vel, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEPhysics__FIELD_NAME__cfm, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEPhysics__FIELD_NAME__erp, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gazebo_msgs__msg__ODEPhysics__FIELD_NAME__max_contacts, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gazebo_msgs__msg__ODEPhysics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gazebo_msgs__msg__ODEPhysics__TYPE_NAME, 26, 26},
      {gazebo_msgs__msg__ODEPhysics__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool auto_disable_bodies           # enable auto disabling of bodies, default false\n"
  "uint32 sor_pgs_precon_iters        # preconditioning inner iterations when uisng projected Gauss Seidel\n"
  "uint32 sor_pgs_iters               # inner iterations when uisng projected Gauss Seidel\n"
  "float64 sor_pgs_w                  # relaxation parameter when using projected Gauss Seidel, 1 = no relaxation\n"
  "float64 sor_pgs_rms_error_tol      # rms error tolerance before stopping inner iterations\n"
  "float64 contact_surface_layer      # contact \"dead-band\" width\n"
  "float64 contact_max_correcting_vel # contact maximum correction velocity\n"
  "float64 cfm                        # global constraint force mixing\n"
  "float64 erp                        # global error reduction parameter\n"
  "uint32 max_contacts                # maximum contact joints between two geoms";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gazebo_msgs__msg__ODEPhysics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gazebo_msgs__msg__ODEPhysics__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 829, 829},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gazebo_msgs__msg__ODEPhysics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gazebo_msgs__msg__ODEPhysics__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

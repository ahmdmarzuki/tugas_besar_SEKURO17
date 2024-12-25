// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from gazebo_msgs:srv/DeleteEntity.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gazebo_msgs/srv/detail/delete_entity__functions.h"
#include "gazebo_msgs/srv/detail/delete_entity__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DeleteEntity_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeleteEntity_Request_type_support_ids_t;

static const _DeleteEntity_Request_type_support_ids_t _DeleteEntity_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DeleteEntity_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeleteEntity_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeleteEntity_Request_type_support_symbol_names_t _DeleteEntity_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, srv, DeleteEntity_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, srv, DeleteEntity_Request)),
  }
};

typedef struct _DeleteEntity_Request_type_support_data_t
{
  void * data[2];
} _DeleteEntity_Request_type_support_data_t;

static _DeleteEntity_Request_type_support_data_t _DeleteEntity_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeleteEntity_Request_message_typesupport_map = {
  2,
  "gazebo_msgs",
  &_DeleteEntity_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DeleteEntity_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DeleteEntity_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeleteEntity_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeleteEntity_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &gazebo_msgs__srv__DeleteEntity_Request__get_type_hash,
  &gazebo_msgs__srv__DeleteEntity_Request__get_type_description,
  &gazebo_msgs__srv__DeleteEntity_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::srv::DeleteEntity_Request>()
{
  return &::gazebo_msgs::srv::rosidl_typesupport_cpp::DeleteEntity_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gazebo_msgs, srv, DeleteEntity_Request)() {
  return get_message_type_support_handle<gazebo_msgs::srv::DeleteEntity_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/delete_entity__functions.h"
// already included above
// #include "gazebo_msgs/srv/detail/delete_entity__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DeleteEntity_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeleteEntity_Response_type_support_ids_t;

static const _DeleteEntity_Response_type_support_ids_t _DeleteEntity_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DeleteEntity_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeleteEntity_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeleteEntity_Response_type_support_symbol_names_t _DeleteEntity_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, srv, DeleteEntity_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, srv, DeleteEntity_Response)),
  }
};

typedef struct _DeleteEntity_Response_type_support_data_t
{
  void * data[2];
} _DeleteEntity_Response_type_support_data_t;

static _DeleteEntity_Response_type_support_data_t _DeleteEntity_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeleteEntity_Response_message_typesupport_map = {
  2,
  "gazebo_msgs",
  &_DeleteEntity_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DeleteEntity_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DeleteEntity_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeleteEntity_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeleteEntity_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &gazebo_msgs__srv__DeleteEntity_Response__get_type_hash,
  &gazebo_msgs__srv__DeleteEntity_Response__get_type_description,
  &gazebo_msgs__srv__DeleteEntity_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::srv::DeleteEntity_Response>()
{
  return &::gazebo_msgs::srv::rosidl_typesupport_cpp::DeleteEntity_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gazebo_msgs, srv, DeleteEntity_Response)() {
  return get_message_type_support_handle<gazebo_msgs::srv::DeleteEntity_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/delete_entity__functions.h"
// already included above
// #include "gazebo_msgs/srv/detail/delete_entity__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DeleteEntity_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeleteEntity_Event_type_support_ids_t;

static const _DeleteEntity_Event_type_support_ids_t _DeleteEntity_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DeleteEntity_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeleteEntity_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeleteEntity_Event_type_support_symbol_names_t _DeleteEntity_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, srv, DeleteEntity_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, srv, DeleteEntity_Event)),
  }
};

typedef struct _DeleteEntity_Event_type_support_data_t
{
  void * data[2];
} _DeleteEntity_Event_type_support_data_t;

static _DeleteEntity_Event_type_support_data_t _DeleteEntity_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeleteEntity_Event_message_typesupport_map = {
  2,
  "gazebo_msgs",
  &_DeleteEntity_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DeleteEntity_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DeleteEntity_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeleteEntity_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeleteEntity_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &gazebo_msgs__srv__DeleteEntity_Event__get_type_hash,
  &gazebo_msgs__srv__DeleteEntity_Event__get_type_description,
  &gazebo_msgs__srv__DeleteEntity_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::srv::DeleteEntity_Event>()
{
  return &::gazebo_msgs::srv::rosidl_typesupport_cpp::DeleteEntity_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gazebo_msgs, srv, DeleteEntity_Event)() {
  return get_message_type_support_handle<gazebo_msgs::srv::DeleteEntity_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "gazebo_msgs/srv/detail/delete_entity__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DeleteEntity_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeleteEntity_type_support_ids_t;

static const _DeleteEntity_type_support_ids_t _DeleteEntity_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DeleteEntity_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeleteEntity_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeleteEntity_type_support_symbol_names_t _DeleteEntity_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, srv, DeleteEntity)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, srv, DeleteEntity)),
  }
};

typedef struct _DeleteEntity_type_support_data_t
{
  void * data[2];
} _DeleteEntity_type_support_data_t;

static _DeleteEntity_type_support_data_t _DeleteEntity_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeleteEntity_service_typesupport_map = {
  2,
  "gazebo_msgs",
  &_DeleteEntity_service_typesupport_ids.typesupport_identifier[0],
  &_DeleteEntity_service_typesupport_symbol_names.symbol_name[0],
  &_DeleteEntity_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DeleteEntity_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeleteEntity_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<gazebo_msgs::srv::DeleteEntity_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<gazebo_msgs::srv::DeleteEntity_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<gazebo_msgs::srv::DeleteEntity_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<gazebo_msgs::srv::DeleteEntity>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<gazebo_msgs::srv::DeleteEntity>,
  &gazebo_msgs__srv__DeleteEntity__get_type_hash,
  &gazebo_msgs__srv__DeleteEntity__get_type_description,
  &gazebo_msgs__srv__DeleteEntity__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gazebo_msgs::srv::DeleteEntity>()
{
  return &::gazebo_msgs::srv::rosidl_typesupport_cpp::DeleteEntity_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, gazebo_msgs, srv, DeleteEntity)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<gazebo_msgs::srv::DeleteEntity>();
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gazebo_msgs:msg/PerformanceMetrics.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/performance_metrics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gazebo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gazebo_msgs/msg/detail/performance_metrics__struct.h"
#include "gazebo_msgs/msg/detail/performance_metrics__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "gazebo_msgs/msg/detail/sensor_performance_metric__functions.h"  // sensors
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_gazebo_msgs__msg__SensorPerformanceMetric(
  const gazebo_msgs__msg__SensorPerformanceMetric * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_gazebo_msgs__msg__SensorPerformanceMetric(
  eprosima::fastcdr::Cdr & cdr,
  gazebo_msgs__msg__SensorPerformanceMetric * ros_message);

size_t get_serialized_size_gazebo_msgs__msg__SensorPerformanceMetric(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_gazebo_msgs__msg__SensorPerformanceMetric(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_gazebo_msgs__msg__SensorPerformanceMetric(
  const gazebo_msgs__msg__SensorPerformanceMetric * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_gazebo_msgs__msg__SensorPerformanceMetric(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_gazebo_msgs__msg__SensorPerformanceMetric(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, msg, SensorPerformanceMetric)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gazebo_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gazebo_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gazebo_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gazebo_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gazebo_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gazebo_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gazebo_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gazebo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PerformanceMetrics__ros_msg_type = gazebo_msgs__msg__PerformanceMetrics;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
bool cdr_serialize_gazebo_msgs__msg__PerformanceMetrics(
  const gazebo_msgs__msg__PerformanceMetrics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: real_time_factor
  {
    cdr << ros_message->real_time_factor;
  }

  // Field name: sensors
  {
    size_t size = ros_message->sensors.size;
    auto array_ptr = ros_message->sensors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_gazebo_msgs__msg__SensorPerformanceMetric(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
bool cdr_deserialize_gazebo_msgs__msg__PerformanceMetrics(
  eprosima::fastcdr::Cdr & cdr,
  gazebo_msgs__msg__PerformanceMetrics * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: real_time_factor
  {
    cdr >> ros_message->real_time_factor;
  }

  // Field name: sensors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sensors.data) {
      gazebo_msgs__msg__SensorPerformanceMetric__Sequence__fini(&ros_message->sensors);
    }
    if (!gazebo_msgs__msg__SensorPerformanceMetric__Sequence__init(&ros_message->sensors, size)) {
      fprintf(stderr, "failed to create array for field 'sensors'");
      return false;
    }
    auto array_ptr = ros_message->sensors.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_gazebo_msgs__msg__SensorPerformanceMetric(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t get_serialized_size_gazebo_msgs__msg__PerformanceMetrics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PerformanceMetrics__ros_msg_type * ros_message = static_cast<const _PerformanceMetrics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: real_time_factor
  {
    size_t item_size = sizeof(ros_message->real_time_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sensors
  {
    size_t array_size = ros_message->sensors.size;
    auto array_ptr = ros_message->sensors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_gazebo_msgs__msg__SensorPerformanceMetric(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t max_serialized_size_gazebo_msgs__msg__PerformanceMetrics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: real_time_factor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sensors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_gazebo_msgs__msg__SensorPerformanceMetric(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gazebo_msgs__msg__PerformanceMetrics;
    is_plain =
      (
      offsetof(DataType, sensors) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
bool cdr_serialize_key_gazebo_msgs__msg__PerformanceMetrics(
  const gazebo_msgs__msg__PerformanceMetrics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: real_time_factor
  {
    cdr << ros_message->real_time_factor;
  }

  // Field name: sensors
  {
    size_t size = ros_message->sensors.size;
    auto array_ptr = ros_message->sensors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_gazebo_msgs__msg__SensorPerformanceMetric(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t get_serialized_size_key_gazebo_msgs__msg__PerformanceMetrics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PerformanceMetrics__ros_msg_type * ros_message = static_cast<const _PerformanceMetrics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: real_time_factor
  {
    size_t item_size = sizeof(ros_message->real_time_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sensors
  {
    size_t array_size = ros_message->sensors.size;
    auto array_ptr = ros_message->sensors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_gazebo_msgs__msg__SensorPerformanceMetric(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t max_serialized_size_key_gazebo_msgs__msg__PerformanceMetrics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: real_time_factor
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sensors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_gazebo_msgs__msg__SensorPerformanceMetric(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gazebo_msgs__msg__PerformanceMetrics;
    is_plain =
      (
      offsetof(DataType, sensors) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PerformanceMetrics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const gazebo_msgs__msg__PerformanceMetrics * ros_message = static_cast<const gazebo_msgs__msg__PerformanceMetrics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_gazebo_msgs__msg__PerformanceMetrics(ros_message, cdr);
}

static bool _PerformanceMetrics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  gazebo_msgs__msg__PerformanceMetrics * ros_message = static_cast<gazebo_msgs__msg__PerformanceMetrics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_gazebo_msgs__msg__PerformanceMetrics(cdr, ros_message);
}

static uint32_t _PerformanceMetrics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gazebo_msgs__msg__PerformanceMetrics(
      untyped_ros_message, 0));
}

static size_t _PerformanceMetrics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gazebo_msgs__msg__PerformanceMetrics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PerformanceMetrics = {
  "gazebo_msgs::msg",
  "PerformanceMetrics",
  _PerformanceMetrics__cdr_serialize,
  _PerformanceMetrics__cdr_deserialize,
  _PerformanceMetrics__get_serialized_size,
  _PerformanceMetrics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PerformanceMetrics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PerformanceMetrics,
  get_message_typesupport_handle_function,
  &gazebo_msgs__msg__PerformanceMetrics__get_type_hash,
  &gazebo_msgs__msg__PerformanceMetrics__get_type_description,
  &gazebo_msgs__msg__PerformanceMetrics__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, msg, PerformanceMetrics)() {
  return &_PerformanceMetrics__type_support;
}

#if defined(__cplusplus)
}
#endif

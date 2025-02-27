// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice
#ifndef GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "gazebo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gazebo_msgs/msg/detail/ode_joint_properties__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
bool cdr_serialize_gazebo_msgs__msg__ODEJointProperties(
  const gazebo_msgs__msg__ODEJointProperties * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
bool cdr_deserialize_gazebo_msgs__msg__ODEJointProperties(
  eprosima::fastcdr::Cdr &,
  gazebo_msgs__msg__ODEJointProperties * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t get_serialized_size_gazebo_msgs__msg__ODEJointProperties(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t max_serialized_size_gazebo_msgs__msg__ODEJointProperties(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
bool cdr_serialize_key_gazebo_msgs__msg__ODEJointProperties(
  const gazebo_msgs__msg__ODEJointProperties * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t get_serialized_size_key_gazebo_msgs__msg__ODEJointProperties(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t max_serialized_size_key_gazebo_msgs__msg__ODEJointProperties(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, msg, ODEJointProperties)();

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

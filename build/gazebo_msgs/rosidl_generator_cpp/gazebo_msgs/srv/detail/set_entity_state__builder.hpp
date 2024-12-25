// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/SetEntityState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gazebo_msgs/srv/set_entity_state.hpp"


#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_ENTITY_STATE__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_ENTITY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/set_entity_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEntityState_Request_state
{
public:
  Init_SetEntityState_Request_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gazebo_msgs::srv::SetEntityState_Request state(::gazebo_msgs::srv::SetEntityState_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SetEntityState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SetEntityState_Request>()
{
  return gazebo_msgs::srv::builder::Init_SetEntityState_Request_state();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEntityState_Response_success
{
public:
  Init_SetEntityState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gazebo_msgs::srv::SetEntityState_Response success(::gazebo_msgs::srv::SetEntityState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SetEntityState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SetEntityState_Response>()
{
  return gazebo_msgs::srv::builder::Init_SetEntityState_Response_success();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEntityState_Event_response
{
public:
  explicit Init_SetEntityState_Event_response(::gazebo_msgs::srv::SetEntityState_Event & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SetEntityState_Event response(::gazebo_msgs::srv::SetEntityState_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SetEntityState_Event msg_;
};

class Init_SetEntityState_Event_request
{
public:
  explicit Init_SetEntityState_Event_request(::gazebo_msgs::srv::SetEntityState_Event & msg)
  : msg_(msg)
  {}
  Init_SetEntityState_Event_response request(::gazebo_msgs::srv::SetEntityState_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetEntityState_Event_response(msg_);
  }

private:
  ::gazebo_msgs::srv::SetEntityState_Event msg_;
};

class Init_SetEntityState_Event_info
{
public:
  Init_SetEntityState_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEntityState_Event_request info(::gazebo_msgs::srv::SetEntityState_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetEntityState_Event_request(msg_);
  }

private:
  ::gazebo_msgs::srv::SetEntityState_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SetEntityState_Event>()
{
  return gazebo_msgs::srv::builder::Init_SetEntityState_Event_info();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_ENTITY_STATE__BUILDER_HPP_

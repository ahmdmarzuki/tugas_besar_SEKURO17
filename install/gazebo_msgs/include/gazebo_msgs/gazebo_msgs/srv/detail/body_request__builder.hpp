// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/BodyRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gazebo_msgs/srv/body_request.hpp"


#ifndef GAZEBO_MSGS__SRV__DETAIL__BODY_REQUEST__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__BODY_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/body_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_BodyRequest_Request_body_name
{
public:
  Init_BodyRequest_Request_body_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gazebo_msgs::srv::BodyRequest_Request body_name(::gazebo_msgs::srv::BodyRequest_Request::_body_name_type arg)
  {
    msg_.body_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::BodyRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::BodyRequest_Request>()
{
  return gazebo_msgs::srv::builder::Init_BodyRequest_Request_body_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::BodyRequest_Response>()
{
  return ::gazebo_msgs::srv::BodyRequest_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_BodyRequest_Event_response
{
public:
  explicit Init_BodyRequest_Event_response(::gazebo_msgs::srv::BodyRequest_Event & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::BodyRequest_Event response(::gazebo_msgs::srv::BodyRequest_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::BodyRequest_Event msg_;
};

class Init_BodyRequest_Event_request
{
public:
  explicit Init_BodyRequest_Event_request(::gazebo_msgs::srv::BodyRequest_Event & msg)
  : msg_(msg)
  {}
  Init_BodyRequest_Event_response request(::gazebo_msgs::srv::BodyRequest_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_BodyRequest_Event_response(msg_);
  }

private:
  ::gazebo_msgs::srv::BodyRequest_Event msg_;
};

class Init_BodyRequest_Event_info
{
public:
  Init_BodyRequest_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyRequest_Event_request info(::gazebo_msgs::srv::BodyRequest_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_BodyRequest_Event_request(msg_);
  }

private:
  ::gazebo_msgs::srv::BodyRequest_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::BodyRequest_Event>()
{
  return gazebo_msgs::srv::builder::Init_BodyRequest_Event_info();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__BODY_REQUEST__BUILDER_HPP_

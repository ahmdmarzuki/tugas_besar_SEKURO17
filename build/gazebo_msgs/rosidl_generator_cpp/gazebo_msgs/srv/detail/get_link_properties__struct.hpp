// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:srv/GetLinkProperties.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gazebo_msgs/srv/get_link_properties.hpp"


#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_LINK_PROPERTIES__STRUCT_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_LINK_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Request __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Request __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLinkProperties_Request_
{
  using Type = GetLinkProperties_Request_<ContainerAllocator>;

  explicit GetLinkProperties_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
    }
  }

  explicit GetLinkProperties_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
    }
  }

  // field types and members
  using _link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_name_type link_name;

  // setters for named parameter idiom
  Type & set__link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Request
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Request
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLinkProperties_Request_ & other) const
  {
    if (this->link_name != other.link_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLinkProperties_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLinkProperties_Request_

// alias to use template instance with default allocator
using GetLinkProperties_Request =
  gazebo_msgs::srv::GetLinkProperties_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs


// Include directives for member types
// Member 'com'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Response __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Response __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLinkProperties_Response_
{
  using Type = GetLinkProperties_Response_<ContainerAllocator>;

  explicit GetLinkProperties_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : com(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gravity_mode = false;
      this->mass = 0.0;
      this->ixx = 0.0;
      this->ixy = 0.0;
      this->ixz = 0.0;
      this->iyy = 0.0;
      this->iyz = 0.0;
      this->izz = 0.0;
      this->success = false;
      this->status_message = "";
    }
  }

  explicit GetLinkProperties_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : com(_alloc, _init),
    status_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gravity_mode = false;
      this->mass = 0.0;
      this->ixx = 0.0;
      this->ixy = 0.0;
      this->ixz = 0.0;
      this->iyy = 0.0;
      this->iyz = 0.0;
      this->izz = 0.0;
      this->success = false;
      this->status_message = "";
    }
  }

  // field types and members
  using _com_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _com_type com;
  using _gravity_mode_type =
    bool;
  _gravity_mode_type gravity_mode;
  using _mass_type =
    double;
  _mass_type mass;
  using _ixx_type =
    double;
  _ixx_type ixx;
  using _ixy_type =
    double;
  _ixy_type ixy;
  using _ixz_type =
    double;
  _ixz_type ixz;
  using _iyy_type =
    double;
  _iyy_type iyy;
  using _iyz_type =
    double;
  _iyz_type iyz;
  using _izz_type =
    double;
  _izz_type izz;
  using _success_type =
    bool;
  _success_type success;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type & set__com(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->com = _arg;
    return *this;
  }
  Type & set__gravity_mode(
    const bool & _arg)
  {
    this->gravity_mode = _arg;
    return *this;
  }
  Type & set__mass(
    const double & _arg)
  {
    this->mass = _arg;
    return *this;
  }
  Type & set__ixx(
    const double & _arg)
  {
    this->ixx = _arg;
    return *this;
  }
  Type & set__ixy(
    const double & _arg)
  {
    this->ixy = _arg;
    return *this;
  }
  Type & set__ixz(
    const double & _arg)
  {
    this->ixz = _arg;
    return *this;
  }
  Type & set__iyy(
    const double & _arg)
  {
    this->iyy = _arg;
    return *this;
  }
  Type & set__iyz(
    const double & _arg)
  {
    this->iyz = _arg;
    return *this;
  }
  Type & set__izz(
    const double & _arg)
  {
    this->izz = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Response
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Response
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLinkProperties_Response_ & other) const
  {
    if (this->com != other.com) {
      return false;
    }
    if (this->gravity_mode != other.gravity_mode) {
      return false;
    }
    if (this->mass != other.mass) {
      return false;
    }
    if (this->ixx != other.ixx) {
      return false;
    }
    if (this->ixy != other.ixy) {
      return false;
    }
    if (this->ixz != other.ixz) {
      return false;
    }
    if (this->iyy != other.iyy) {
      return false;
    }
    if (this->iyz != other.iyz) {
      return false;
    }
    if (this->izz != other.izz) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLinkProperties_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLinkProperties_Response_

// alias to use template instance with default allocator
using GetLinkProperties_Response =
  gazebo_msgs::srv::GetLinkProperties_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Event __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Event __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLinkProperties_Event_
{
  using Type = GetLinkProperties_Event_<ContainerAllocator>;

  explicit GetLinkProperties_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetLinkProperties_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gazebo_msgs::srv::GetLinkProperties_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gazebo_msgs::srv::GetLinkProperties_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Event
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__GetLinkProperties_Event
    std::shared_ptr<gazebo_msgs::srv::GetLinkProperties_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLinkProperties_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLinkProperties_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLinkProperties_Event_

// alias to use template instance with default allocator
using GetLinkProperties_Event =
  gazebo_msgs::srv::GetLinkProperties_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs

namespace gazebo_msgs
{

namespace srv
{

struct GetLinkProperties
{
  using Request = gazebo_msgs::srv::GetLinkProperties_Request;
  using Response = gazebo_msgs::srv::GetLinkProperties_Response;
  using Event = gazebo_msgs::srv::GetLinkProperties_Event;
};

}  // namespace srv

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_LINK_PROPERTIES__STRUCT_HPP_

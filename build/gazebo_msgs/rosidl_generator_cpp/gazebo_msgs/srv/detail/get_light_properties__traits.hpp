// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/GetLightProperties.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gazebo_msgs/srv/get_light_properties.hpp"


#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_LIGHT_PROPERTIES__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_LIGHT_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/srv/detail/get_light_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLightProperties_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: light_name
  {
    out << "light_name: ";
    rosidl_generator_traits::value_to_yaml(msg.light_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLightProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: light_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_name: ";
    rosidl_generator_traits::value_to_yaml(msg.light_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLightProperties_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gazebo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gazebo_msgs::srv::GetLightProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::GetLightProperties_Request & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::GetLightProperties_Request>()
{
  return "gazebo_msgs::srv::GetLightProperties_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::GetLightProperties_Request>()
{
  return "gazebo_msgs/srv/GetLightProperties_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetLightProperties_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetLightProperties_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::GetLightProperties_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'diffuse'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLightProperties_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: diffuse
  {
    out << "diffuse: ";
    to_flow_style_yaml(msg.diffuse, out);
    out << ", ";
  }

  // member: attenuation_constant
  {
    out << "attenuation_constant: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_constant, out);
    out << ", ";
  }

  // member: attenuation_linear
  {
    out << "attenuation_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_linear, out);
    out << ", ";
  }

  // member: attenuation_quadratic
  {
    out << "attenuation_quadratic: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_quadratic, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: status_message
  {
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLightProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: diffuse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diffuse:\n";
    to_block_style_yaml(msg.diffuse, out, indentation + 2);
  }

  // member: attenuation_constant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attenuation_constant: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_constant, out);
    out << "\n";
  }

  // member: attenuation_linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attenuation_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_linear, out);
    out << "\n";
  }

  // member: attenuation_quadratic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attenuation_quadratic: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_quadratic, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: status_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLightProperties_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gazebo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gazebo_msgs::srv::GetLightProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::GetLightProperties_Response & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::GetLightProperties_Response>()
{
  return "gazebo_msgs::srv::GetLightProperties_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::GetLightProperties_Response>()
{
  return "gazebo_msgs/srv/GetLightProperties_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetLightProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetLightProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::GetLightProperties_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLightProperties_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLightProperties_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLightProperties_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gazebo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gazebo_msgs::srv::GetLightProperties_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::GetLightProperties_Event & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::GetLightProperties_Event>()
{
  return "gazebo_msgs::srv::GetLightProperties_Event";
}

template<>
inline const char * name<gazebo_msgs::srv::GetLightProperties_Event>()
{
  return "gazebo_msgs/srv/GetLightProperties_Event";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetLightProperties_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetLightProperties_Event>
  : std::integral_constant<bool, has_bounded_size<gazebo_msgs::srv::GetLightProperties_Request>::value && has_bounded_size<gazebo_msgs::srv::GetLightProperties_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<gazebo_msgs::srv::GetLightProperties_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetLightProperties>()
{
  return "gazebo_msgs::srv::GetLightProperties";
}

template<>
inline const char * name<gazebo_msgs::srv::GetLightProperties>()
{
  return "gazebo_msgs/srv/GetLightProperties";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetLightProperties>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::GetLightProperties_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::GetLightProperties_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetLightProperties>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::GetLightProperties_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::GetLightProperties_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::GetLightProperties>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::GetLightProperties_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::GetLightProperties_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_LIGHT_PROPERTIES__TRAITS_HPP_

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:srv/SetModelState.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/srv/detail/set_model_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `model_state`
#include "gazebo_msgs/msg/detail/model_state__functions.h"

bool
gazebo_msgs__srv__SetModelState_Request__init(gazebo_msgs__srv__SetModelState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // model_state
  if (!gazebo_msgs__msg__ModelState__init(&msg->model_state)) {
    gazebo_msgs__srv__SetModelState_Request__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__SetModelState_Request__fini(gazebo_msgs__srv__SetModelState_Request * msg)
{
  if (!msg) {
    return;
  }
  // model_state
  gazebo_msgs__msg__ModelState__fini(&msg->model_state);
}

bool
gazebo_msgs__srv__SetModelState_Request__are_equal(const gazebo_msgs__srv__SetModelState_Request * lhs, const gazebo_msgs__srv__SetModelState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // model_state
  if (!gazebo_msgs__msg__ModelState__are_equal(
      &(lhs->model_state), &(rhs->model_state)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__srv__SetModelState_Request__copy(
  const gazebo_msgs__srv__SetModelState_Request * input,
  gazebo_msgs__srv__SetModelState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // model_state
  if (!gazebo_msgs__msg__ModelState__copy(
      &(input->model_state), &(output->model_state)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__srv__SetModelState_Request *
gazebo_msgs__srv__SetModelState_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetModelState_Request * msg = (gazebo_msgs__srv__SetModelState_Request *)allocator.allocate(sizeof(gazebo_msgs__srv__SetModelState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SetModelState_Request));
  bool success = gazebo_msgs__srv__SetModelState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SetModelState_Request__destroy(gazebo_msgs__srv__SetModelState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__srv__SetModelState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__srv__SetModelState_Request__Sequence__init(gazebo_msgs__srv__SetModelState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetModelState_Request * data = NULL;

  if (size) {
    data = (gazebo_msgs__srv__SetModelState_Request *)allocator.zero_allocate(size, sizeof(gazebo_msgs__srv__SetModelState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SetModelState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SetModelState_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gazebo_msgs__srv__SetModelState_Request__Sequence__fini(gazebo_msgs__srv__SetModelState_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SetModelState_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gazebo_msgs__srv__SetModelState_Request__Sequence *
gazebo_msgs__srv__SetModelState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetModelState_Request__Sequence * array = (gazebo_msgs__srv__SetModelState_Request__Sequence *)allocator.allocate(sizeof(gazebo_msgs__srv__SetModelState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SetModelState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SetModelState_Request__Sequence__destroy(gazebo_msgs__srv__SetModelState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__srv__SetModelState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__srv__SetModelState_Request__Sequence__are_equal(const gazebo_msgs__srv__SetModelState_Request__Sequence * lhs, const gazebo_msgs__srv__SetModelState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__srv__SetModelState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__srv__SetModelState_Request__Sequence__copy(
  const gazebo_msgs__srv__SetModelState_Request__Sequence * input,
  gazebo_msgs__srv__SetModelState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__srv__SetModelState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__srv__SetModelState_Request * data =
      (gazebo_msgs__srv__SetModelState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__srv__SetModelState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__srv__SetModelState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__srv__SetModelState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status_message`
#include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__srv__SetModelState_Response__init(gazebo_msgs__srv__SetModelState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    gazebo_msgs__srv__SetModelState_Response__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__SetModelState_Response__fini(gazebo_msgs__srv__SetModelState_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

bool
gazebo_msgs__srv__SetModelState_Response__are_equal(const gazebo_msgs__srv__SetModelState_Response * lhs, const gazebo_msgs__srv__SetModelState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // status_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_message), &(rhs->status_message)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__srv__SetModelState_Response__copy(
  const gazebo_msgs__srv__SetModelState_Response * input,
  gazebo_msgs__srv__SetModelState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // status_message
  if (!rosidl_runtime_c__String__copy(
      &(input->status_message), &(output->status_message)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__srv__SetModelState_Response *
gazebo_msgs__srv__SetModelState_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetModelState_Response * msg = (gazebo_msgs__srv__SetModelState_Response *)allocator.allocate(sizeof(gazebo_msgs__srv__SetModelState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SetModelState_Response));
  bool success = gazebo_msgs__srv__SetModelState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SetModelState_Response__destroy(gazebo_msgs__srv__SetModelState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__srv__SetModelState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__srv__SetModelState_Response__Sequence__init(gazebo_msgs__srv__SetModelState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetModelState_Response * data = NULL;

  if (size) {
    data = (gazebo_msgs__srv__SetModelState_Response *)allocator.zero_allocate(size, sizeof(gazebo_msgs__srv__SetModelState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SetModelState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SetModelState_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gazebo_msgs__srv__SetModelState_Response__Sequence__fini(gazebo_msgs__srv__SetModelState_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SetModelState_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gazebo_msgs__srv__SetModelState_Response__Sequence *
gazebo_msgs__srv__SetModelState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetModelState_Response__Sequence * array = (gazebo_msgs__srv__SetModelState_Response__Sequence *)allocator.allocate(sizeof(gazebo_msgs__srv__SetModelState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SetModelState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SetModelState_Response__Sequence__destroy(gazebo_msgs__srv__SetModelState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__srv__SetModelState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__srv__SetModelState_Response__Sequence__are_equal(const gazebo_msgs__srv__SetModelState_Response__Sequence * lhs, const gazebo_msgs__srv__SetModelState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__srv__SetModelState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__srv__SetModelState_Response__Sequence__copy(
  const gazebo_msgs__srv__SetModelState_Response__Sequence * input,
  gazebo_msgs__srv__SetModelState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__srv__SetModelState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__srv__SetModelState_Response * data =
      (gazebo_msgs__srv__SetModelState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__srv__SetModelState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__srv__SetModelState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__srv__SetModelState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "gazebo_msgs/srv/detail/set_model_state__functions.h"

bool
gazebo_msgs__srv__SetModelState_Event__init(gazebo_msgs__srv__SetModelState_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    gazebo_msgs__srv__SetModelState_Event__fini(msg);
    return false;
  }
  // request
  if (!gazebo_msgs__srv__SetModelState_Request__Sequence__init(&msg->request, 0)) {
    gazebo_msgs__srv__SetModelState_Event__fini(msg);
    return false;
  }
  // response
  if (!gazebo_msgs__srv__SetModelState_Response__Sequence__init(&msg->response, 0)) {
    gazebo_msgs__srv__SetModelState_Event__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__SetModelState_Event__fini(gazebo_msgs__srv__SetModelState_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  gazebo_msgs__srv__SetModelState_Request__Sequence__fini(&msg->request);
  // response
  gazebo_msgs__srv__SetModelState_Response__Sequence__fini(&msg->response);
}

bool
gazebo_msgs__srv__SetModelState_Event__are_equal(const gazebo_msgs__srv__SetModelState_Event * lhs, const gazebo_msgs__srv__SetModelState_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!gazebo_msgs__srv__SetModelState_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!gazebo_msgs__srv__SetModelState_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__srv__SetModelState_Event__copy(
  const gazebo_msgs__srv__SetModelState_Event * input,
  gazebo_msgs__srv__SetModelState_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!gazebo_msgs__srv__SetModelState_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!gazebo_msgs__srv__SetModelState_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__srv__SetModelState_Event *
gazebo_msgs__srv__SetModelState_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetModelState_Event * msg = (gazebo_msgs__srv__SetModelState_Event *)allocator.allocate(sizeof(gazebo_msgs__srv__SetModelState_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SetModelState_Event));
  bool success = gazebo_msgs__srv__SetModelState_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SetModelState_Event__destroy(gazebo_msgs__srv__SetModelState_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__srv__SetModelState_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__srv__SetModelState_Event__Sequence__init(gazebo_msgs__srv__SetModelState_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetModelState_Event * data = NULL;

  if (size) {
    data = (gazebo_msgs__srv__SetModelState_Event *)allocator.zero_allocate(size, sizeof(gazebo_msgs__srv__SetModelState_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SetModelState_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SetModelState_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gazebo_msgs__srv__SetModelState_Event__Sequence__fini(gazebo_msgs__srv__SetModelState_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SetModelState_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gazebo_msgs__srv__SetModelState_Event__Sequence *
gazebo_msgs__srv__SetModelState_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetModelState_Event__Sequence * array = (gazebo_msgs__srv__SetModelState_Event__Sequence *)allocator.allocate(sizeof(gazebo_msgs__srv__SetModelState_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SetModelState_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SetModelState_Event__Sequence__destroy(gazebo_msgs__srv__SetModelState_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__srv__SetModelState_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__srv__SetModelState_Event__Sequence__are_equal(const gazebo_msgs__srv__SetModelState_Event__Sequence * lhs, const gazebo_msgs__srv__SetModelState_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__srv__SetModelState_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__srv__SetModelState_Event__Sequence__copy(
  const gazebo_msgs__srv__SetModelState_Event__Sequence * input,
  gazebo_msgs__srv__SetModelState_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__srv__SetModelState_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__srv__SetModelState_Event * data =
      (gazebo_msgs__srv__SetModelState_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__srv__SetModelState_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__srv__SetModelState_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__srv__SetModelState_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

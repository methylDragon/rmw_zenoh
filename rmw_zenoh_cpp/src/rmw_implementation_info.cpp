// Copyright 2020 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "rcutils/logging_macros.h"
#include "rmw/error_handling.h"
#include "rmw/rmw.h"

#include "rmw_zenoh_cpp/identifier.hpp"

extern "C"
{
const char *
rmw_get_implementation_identifier()
{
  return eclipse_zenoh_identifier;
}

const char *
rmw_get_serialization_format()
{
  RCUTILS_LOG_DEBUG_NAMED("rmw_zenoh_cpp", "rmw_get_serialization_format");
  return nullptr;
}
}  // extern "C"

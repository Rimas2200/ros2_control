// Copyright 2026 ros2_control contributors
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

// Keep this include order to test public header composition.
// clang-format off
#include "transmission_interface/simple_transmission.hpp"
#include "transmission_interface/differential_transmission.hpp"
// clang-format on

#include "gtest/gtest.h"

TEST(TransmissionPublicHeaders, SimpleThenDifferential)
{
  EXPECT_STREQ("absolute_position", transmission_interface::HW_IF_ABSOLUTE_POSITION);
}

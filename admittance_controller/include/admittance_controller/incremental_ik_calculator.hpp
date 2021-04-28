// Copyright (c) 2021, PickNik, Inc.
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
//
/// \author: Andy Zelenak

#pragma once

#include <moveit/robot_model_loader/robot_model_loader.h>
#include <moveit/robot_state/robot_state.h>

namespace admittance_controller
{

class IncrementalIKCalculator
{
public:
  /**
   * Create an object which takes Cartesian delta-x and converts to joint delta-theta.
   */
  IncrementalIKCalculator();

  bool convertCartesianDeltasToJointDeltas()
  {
    return true;
  }

private:
  // MoveIt setup, required to retrieve the Jacobian
  const moveit::core::JointModelGroupPtr joint_model_group_;
  moveit::core::RobotStatePtr kinematic_state_;
};

}  // namespace admittance_controller
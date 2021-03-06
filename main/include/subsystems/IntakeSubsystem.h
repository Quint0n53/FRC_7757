// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>

#include "Constants.h"

class Intake : public frc2::SubsystemBase {
 public:
  Intake();
  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void Swallow();

  void SpitOut();

  void StopIntake();

 private:
    WPI_VictorSPX intakeMotor;
};

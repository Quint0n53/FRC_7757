// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

#include "subsystems/IntakeSubsystem.h"


class SpitOut
    : public frc2::CommandHelper<frc2::CommandBase, SpitOut> {
 public:
  explicit SpitOut(Intake* subsystem);

  void Initialize() override;

  void End(bool interrupted) override;

  private:
    Intake* m_intake;
};

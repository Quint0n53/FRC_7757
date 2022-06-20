// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/Downtake.h"

using namespace IndexConstants;

Downtake::Downtake(IndexSubSystem* subsystem)
  :m_index{subsystem} {
    AddRequirements({subsystem});
  }

// Called when the command is initially scheduled.
void Downtake::Initialize() {
  m_index->Downtake();
}

void Downtake::End(bool interrupted) {
  m_index->Stoptake();
}



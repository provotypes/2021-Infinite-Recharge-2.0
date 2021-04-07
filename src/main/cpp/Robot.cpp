// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"
#include "Drivetrain.h"
#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>


void Robot::RobotInit() {}

void Robot::TeleopPeriodic() {
      Drivetrain::getInstance().ArcadeDrive(-joystick.GetY(), joystick.GetX());
}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS

int main() {
  return frc::StartRobot<Robot>();
}

#endif

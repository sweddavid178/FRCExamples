#include "Robot.h"

#include <fmt/core.h>
//1. include Joystick library
#include "frc/Joystick.h"
//2. include PWMSparkMax library
#include "frc/motorcontrol/PWMSparkMax.h"

//3. declare joystick object
frc::Joystick joystick{0};
//4. declare basic motor object with PWM port number inbetween {}
frc::PWMSparkMax basicMotor{0};

void Robot::TeleopPeriodic() {
  if (joystick.GetRawButton(1) == true) {
    //if button 1 is pressed, turn on motor full speed clock wise
    basicMotor.Set(-1.0);
  } else {
    //else stop motor
    basicMotor.Set(0);
  }
}

void Robot::RobotInit() {
}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {
}

void Robot::AutonomousPeriodic() {
}

void Robot::TeleopInit() {}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}

void Robot::TestPeriodic() {}

void Robot::SimulationInit() {}

void Robot::SimulationPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif

#include "Robot.h"

#include <fmt/core.h>
//1. import PWMSparkMax library
#include "frc/motorcontrol/PWMSparkMax.h"

//2. declare basic motor object with PWM port number inbetween {}
frc::PWMSparkMax basicMotor{0};

void Robot::TeleopPeriodic() {
  //3. set motor to run 50% speed counter clockwise
  basicMotor.Set(0.5);
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

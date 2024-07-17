package frc.robot;

import edu.wpi.first.wpilibj.TimedRobot;
//0. import PWMSparkMax (VS code will automatically do this after you declare your motor)
import edu.wpi.first.wpilibj.motorcontrol.PWMSparkMax;

public class Robot extends TimedRobot {
  //1. declare PWMSpark max motor
  public PWMSparkMax basicMotor;

  @Override
  public void robotInit() {
    //2. Initialize basic motor to use PWM channel Zero
    basicMotor = new PWMSparkMax(0);
  }

  @Override
  public void teleopPeriodic() {
    //3. Run the motor at 50% speed counter clockwise
    basicMotor.set(0.5);
  }
}

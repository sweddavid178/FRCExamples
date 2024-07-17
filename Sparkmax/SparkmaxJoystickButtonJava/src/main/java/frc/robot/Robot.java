package frc.robot;

// import Joystick (VS code will automatically do this after you declare your joystick)
import edu.wpi.first.wpilibj.Joystick;
import edu.wpi.first.wpilibj.TimedRobot;
//0. import PWMSparkMax (VS code will automatically do this after you declare your motor)
import edu.wpi.first.wpilibj.motorcontrol.PWMSparkMax;

public class Robot extends TimedRobot {
  // declare the joystick object
  public Joystick joystick;
  // declare PWMSpark max motor
  public PWMSparkMax basicMotor;
  

  @Override
  public void robotInit() {
    //Initialize the joystick to port 0
    joystick = new Joystick(0);
    //Initialize basic motor to use PWM channel Zero
    basicMotor = new PWMSparkMax(0);
  }

  @Override
  public void teleopPeriodic() {
    //if joystick button 1 is pressed
    if (joystick.getRawButton(1) == true) {
      // Run the motor at 100% speed clockwise
      basicMotor.set(-1.0);
    } 
    else {
      //if button isn't pressed, stop the motor
      basicMotor.set(0.0);
    }
  }
}

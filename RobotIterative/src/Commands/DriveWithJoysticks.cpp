
/*
 * DriveWithJoysticks.cpp
 *
 */


#include "DriveWithJoysticks.h"
#include "../OI.h"


DriveWithJoysticks::DriveWithJoysticks()
{
	Requires(Robot::drivetrain.get());
}

// Called just before this Command runs the first time
void DriveWithJoysticks::Initialize()
{
}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoysticks::Execute()
{
/*	if (XboxController.GetRawButton(kDoubleSolenoidForward))
		{
		//LeftTopMotor.Set(LeftController.GetY());
		LeftFrontMotor.Set(-LeftController.GetY());
		LeftRearMotor.Set(-LeftController.GetY());
	  	//rightTopDrive.Set(-RightController.GetY());
	 	RightFrontMotor.Set(RightController.GetY());
	 	RightRearMotor.Set(RightController.GetY());
		ShifterDoubleSolenoid.Set(DoubleSolenoid::kForward);
		Wait(1);
		//LeftTopMotor.Set(LeftController.GetY());
		LeftFrontMotor.Set(-LeftController.GetY());
		LeftRearMotor.Set(-LeftController.GetY());
	  	//rightTopDrive.Set(-RightController.GetY());
	 	RightFrontMotor.Set(RightController.GetY());
	 	RightRearMotor.Set(RightController.GetY());
		ShifterDoubleSolenoid.Set(DoubleSolenoid::kOff);
		}

 	if (XboxController.GetRawButton(kDoubleSolenoidReverse))
	{
		//LeftTopMotor.Set(LeftController.GetY());
		LeftFrontMotor.Set(-LeftController.GetY());
		LeftRearightMotor.Set(-LeftController.GetY());
	  	//rightTopDrive.Set(-RightController.GetY());
	 	RightFrontMotor.Set(RightController.GetY());
	 	RightRearMotor.Set(RightController.GetY());
		ShifterDoubleSolenoid.Set(DoubleSolenoid::kReverse);
		Wait(1);
		//leftTopDrive.Set(LeftController.GetY());
		LeftFrontMotor.Set(-LeftController.GetY());
		LeftRearMotor.Set(-LeftController.GetY());
	  	//rightTopDrive.Set(-RightController.GetY());
	 	RightFrontMotor.Set(RightController.GetY());
	 	RightRearMotor.Set(RightController.GetY());
		ShifterDoubleSolenoid.Set(DoubleSolenoid::kOff);
	}

	else
		shifterRightDoubleSolenoid.Set(DoubleSolenoid::kOff);*/

	 // Takes a number from -1.0 (full reverse) to +1.0 (full forwards).

	LeftTopMotor.Set(LeftController.GetY());
	LeftFrontMotor.Set(-LeftController.GetY());
	LeftRearMotor.Set(-LeftController.GetY());
  	RightTopMotor.Set(-RightController.GetY());
 	RightFrontMotor.Set(RightController.GetY());
 	RightRearMotor.Set(RightController.GetY());

}

// Make this return true when this Command no longer needs to run
//currently always returns true because when would it be false?
bool DriveWithJoysticks::IsFinished() {
	return false;
}

// Called once after isFinished returns true.  Never called because would it be?
void DriveWithJoysticks::End() {
	Robot::drivetrain->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoysticks::Interrupted() {
	End();
}



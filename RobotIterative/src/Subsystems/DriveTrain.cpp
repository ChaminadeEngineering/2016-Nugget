#include "DriveTrain.h"


DriveTrain::DriveTrain()
		: Subsystem("DriveTrain"),
			RightFrontMotor(new CANTalon(1)),		//Define the Talons
			RightRearMotor(new CANTalon(2)),
//			RightTopMotor(new CANTalon(3)),
			LeftFrontMotor(new CANTalon(4)),
			LeftRearMotor(new CANTalon(5)),
//			LeftTopMotor(new CANTalon(6)),
//			drive(RightFrontMotor, RightRearMotor, RightTopMotor, LeftFrontMotor, LeftRearMotor, LeftTopMotor),
			drive(RightFrontMotor, RightRearMotor, LeftFrontMotor, LeftRearMotor)

{
	// Set Motor Options
	drive.SetSafetyEnabled(false);
	drive.SetExpiration(0.1);
	drive.SetSensitivity(0.5);
	drive.SetMaxOutput(1.0);
	drive.SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);
	drive.SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
	drive.SetInvertedMotor(RobotDrive::kFrontRightMotor, false);
	drive.SetInvertedMotor(RobotDrive::kRearRightMotor, false);
}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new DriveWithJoystick());
}

void DriveTrain::TankDrive(double leftAxis, double rightAxis)
{
	drive.TankDrive(leftAxis, rightAxis);
}

void DriveTrain::Stop()
{
	drive.TankDrive(0.0, 0.0);
}





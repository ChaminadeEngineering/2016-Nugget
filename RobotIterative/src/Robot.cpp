#include "Robot.h"

std::shared_ptr<DriveTrain> Robot::drivetrain;
//std::shared_ptr<Pneumatics> Robot::pneumatics;

std::unique_ptr<OI> Robot::oi;

void Robot::RobotInit()
{
	drivetrain.reset(new DriveTrain());
//	pneumatics.reset(new Pneumatics());

	oi.reset(new OI());

	// Show what command your subsystem is running on the SmartDashboard
	SmartDashboard::PutData(drivetrain.get());
//	SmartDashboard::PutData(pneumatics.get());

//	pneumatics->Start(); // Pressurize the pneumatics.
}

void Robot::AutonomousInit()
{

}

void Robot::AutonomousPeriodic()
{

}

void Robot::TeleopInit()
{
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// this line or comment it out.
	if (autonomousCommand != nullptr)
	{
		autonomousCommand->Cancel();
	}
	std::cout << "Starting Teleop" << std::endl;
}

void Robot::TeleopPeriodic()
{
	Scheduler::GetInstance()->Run();
	Log();
}

void Robot::TestPeriodic()
{
  LiveWindow::GetInstance()->Run();
}

void Robot::DisabledInit()
{

}

void Robot::DisabledPeriodic()
{
	Log();
}

/**
 * Log interesting values to the SmartDashboard.
 */
void Robot::Log()
{

}

START_ROBOT_CLASS(Robot)


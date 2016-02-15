/*
 * Robot.h
 *
 *  Created on: Feb 11, 2016
 *      Author: eeuser
 */

#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_


/*
*/

#include "WPILib.h"
#include "Commands/Command.h"

#include "Commands/DriveWithJoysticks.h"
#include "Subsystems/DriveTrain.h"
#include "OI.h"

class Robot: public IterativeRobot {
public:
	static std::shared_ptr<DriveTrain> drivetrain;
	static std::unique_ptr<OI> oi;
	//static std::shared_ptr<Pneumatics> pneumatics;

private:
	Command* autonomousCommand = nullptr;

//	SendableChooser autoChooser;

	void RobotInit();
	void AutonomousInit();
	void AutonomousPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TestPeriodic();
	void DisabledInit();
	void DisabledPeriodic();
	void Log();
};

#endif /* ROBOT_H_ */


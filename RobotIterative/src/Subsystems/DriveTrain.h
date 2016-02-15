#ifndef SRC_SUBSYSTEMS_DRIVETRAIN_H_
#define SRC_SUBSYSTEMS_DRIVETRAIN_H_

//#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 * The DriveTrain subsystem controls the robot's chassis and reads in
 * information about it's speed and position.
 */
class DriveTrain: public Subsystem
{
private:
	// Subsystem devices
//	std::shared_ptr<SpeedController> LeftFrontMotor, LeftRearMotor, LeftTopMotor;
//	std::shared_ptr<SpeedController> RightFrontMotor, RightRearMotor, RightTopMotor;

	std::shared_ptr<SpeedController> RightFrontMotor, RightRearMotor;
	std::shared_ptr<SpeedController> LeftFrontMotor, LeftRearMotor;
	RobotDrive drive;


public:
	DriveTrain();

	/**
	 * When other commands aren't using the drivetrain, allow tank drive with
	 * the joystick.
	 */
	void InitDefaultCommand();

	/**
	 * leftAxis Left sides value
	 * rightAxis Right sides value
	 */
	void TankDrive(double leftAxis, double rightAxis);

	/**
	 * Stop the drivetrain from moving.
	 */
	void Stop();


};

#endif  /* SRC_SUBSYSTEMS_DRIVETRAIN_H_ */


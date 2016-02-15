#ifndef SRC_COMMANDS_DRIVEWITHJOYSTICK_H_
#define SRC_COMMANDS_DRIVEWITHJOYSTICK_H_

#include "WPILib.h"
#include "../OI.h"
#include "../Robot.h"
#include "../Subsystems/DriveTrain.h"


/*
 * This commands drives the chassis with joysticks.  It uses 2 Logitech arcade sticks,
 * designated as Left and Right.  The Shifter and the Drive Reverse are also on these joysticks
 * all of the collector and shooter functions are on the XBox joystick
 */


class DriveWithJoysticks: public Command
{
public:
	DriveWithJoysticks();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};


#endif /* SRC_COMMANDS_DRIVEWITHJOYSTICK_H_ */

/*
 * Oi.cpp
 *
 *  Created on: Feb 11, 2016
 *      Author: Pauline
 */
/*
 * Logitech Definition
 * Axis - drive base control
 * Left Joystick button - Shift
 * Right Joystick button - Reverse drive base definition
 * XBox Controller Definition
 * A - Shoot
 * B - Manual Kick
 * X -
 * Y -
 * Dpad - Collector positions based on hall effect sensor
 *
*/
#include "OI.h"


#include "Subsystems/Collector.h"
#include "Commands/DriveForward.h"


OI::OI()
    : RightController(new Joystick(0)),
	  LeftController(new Joystick(1))
	  //XBoxController(new Joystick(2))
	  /*A (new JoystickButton(1)),
	  B (new JoystickButton(2)),
	  X (new JoystickButton(3)),
	  Y (new JoystickButton(4)),
	  Dpad (new Joystickbutton(5)),
	  LeftTrigger (new Joystickbutton(11))*/

	  {



	// SmartDashboard Buttons
	/*SmartDashboard::PutData("Drive Forward", new DriveForward(2.25));
	SmartDashboard::PutData("Drive Backward", new DriveForward(-2.25));*/

}


Joystick* OI::GetJoystick() {
	return &LeftController;
}




/*
 * Oi.h
 *
 *  Created on: Feb 11, 2016
 *      Author: Pauline
 */

#ifndef OI_H
#define OI_H

#include "WPILib.h"


class OI {
private:
	Joystick RightController, LeftController, XBoxController;
//JoystickButton A, B, X, Y;

public:
	OI();
	Joystick* GetJoystick();
};

#endif

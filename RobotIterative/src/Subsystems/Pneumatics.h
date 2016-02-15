/*
 * Pneumatics.h
 *
 *  Created on: Feb 11, 2016
 *      Author: eeuser
 */

#include "WPILib.h"

#ifndef SRC_SUBSYSTEMS_PNEUMATICS_H_
#define SRC_SUBSYSTEMS_PNEUMATICS_H_

class Pneumatics: public Subsystems
{
private:

	//add stuff

public:
	Solenoid *ShooterSingleSolenoid = new Solenoid(2);
	Pneumatics();

	void InitDefaultCommand()
	{

	}
	void Push()
	{
		ShooterSingleSolenoid->Set(true);
	}
	void Pull()
	{
		ShooterSingleSolenoid->Set(false);
	}
	void Stop()
	{

	}


};

#endif /* SRC_SUBSYSTEMS_PNEUMATICS_H_ */

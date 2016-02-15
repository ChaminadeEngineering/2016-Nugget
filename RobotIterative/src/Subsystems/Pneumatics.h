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
	Compressor *c;
	Pneumatics();

	void InitDefaultCommand()
	{

	}
	void Push()
	{
		c->Start();
	}
	void Pull()
	{
		c->Stop();
	}
	void Stop()
	{

	}


};

#endif /* SRC_SUBSYSTEMS_PNEUMATICS_H_ */

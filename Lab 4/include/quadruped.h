#pragma once

#include "leg.h"
#include <iostream>
#include <stdlib.h>

//main class, all other animal classes are subclasses of this class
class Quadruped
{
protected:
	static const int kiNoLegs = 4; //allows sharing between every instance of class
	Leg legs[kiNoLegs];
public:
	void raiseLeg(int legIndex);
	void lowerLeg(int legIndex);
	virtual void Speak() = 0; //allows behaviour to be overriden
};

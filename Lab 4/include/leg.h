#pragma once

#include <stdlib.h>

//creating the class to be used in quadruped.h, which will then be inherited by other subclasses
class Leg
{
private:
	bool bRaised;
public:
	Leg();
	void raise();
	void lower();
};
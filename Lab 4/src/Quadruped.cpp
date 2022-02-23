#include "../include/quadruped.h"
#include <stdlib.h>

void Quadruped::raiseLeg(int legIndex)
{
	//To allow only correct amount of legs being raised
	if (legIndex > 0 && legIndex < kiNoLegs)
	{
		legs[legIndex].raise();
	}
}

void Quadruped::lowerLeg(int legIndex)
{
	//To allow only correct amount of legs being lowered
	if (legIndex > 0 && legIndex < kiNoLegs)
	{
		legs[legIndex].lower();
	}
}
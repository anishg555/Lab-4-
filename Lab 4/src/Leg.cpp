#include "../include/leg.h"
#include <stdlib.h>

//functions from leg class being defined
Leg::Leg()
{
	bRaised = false;
}

void Leg::raise()
{
	bRaised = true;
}

void Leg::lower()
{
	bRaised = false;
}
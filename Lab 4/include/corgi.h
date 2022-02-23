#pragma once

#include "dog.h"

class Corgi : public Dog //allows inheritance from classes above
{
public:
	void Speak(); //this has been inherited from the dog class, which was inherited from the quadruped class
	void Action(string sJump);
	void Action(int iSleep);
};
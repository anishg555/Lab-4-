#pragma once

#include <iostream>
#include <stdlib.h>
#include "quadruped.h"

using namespace std;

class Lizard : public Quadruped //allows inheritance from classes above
{
public:
	void Speak();
};
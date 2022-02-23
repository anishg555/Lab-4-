#include <iostream>
#include <stdlib.h>

#include "../include/cat.h"
#include "../include/dog.h"
#include "../include/lizard.h"
#include "../include/corgi.h"

using namespace std;

int main()
{
	//Assigning variables to the classes
	Dog Lassie;
	Cat Garfield;
	Lizard Gex;
	Corgi Gizmo;

	//How many legs are being raised or lowered
	Lassie.raiseLeg(2);
	Garfield.raiseLeg(0);
	Gex.lowerLeg(0);
	Gizmo.lowerLeg(2);

	//Using the linked libraries to output the commands from the classes
	cout << "Lassie said: ";
	Lassie.Speak();
	cout << endl;
	
	cout << "Garfield replied: ";
	Garfield.Speak();
	cout << endl;

	cout << "Gex replied: ";
	Gex.Speak();
	cout << endl;

	cout << "Gizmo then ";
	Gizmo.Action("jump"); //method overload, jump is a string therefore the "string sJump" function will be used
	cout << "And then, Gizmo ";
	Gizmo.Action(9); //method overload, 9 is an integer therefore "int iSleep" would be used
	cout << endl;

	system("pause");

	return 0;
}
#include "../include/corgi.h"

//functions from Corgi class
void Corgi::Speak()
{
	cout << "Woof" << endl;
}

void Corgi::Action(string sJump)
{
	cout << "jumps" << endl;
}

void Corgi::Action(int iSleep)
{
	cout << "sleeps for " << iSleep << " hours" << endl;
}
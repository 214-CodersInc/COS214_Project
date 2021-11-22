#include "Humans.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Humans::Humans(int capacity):Load(capacity)	//Initialises Humans Constructor
{
	
}

bool Humans::receive()	//returns receipt variable 'received'
{
	return this->received;
}

bool Humans::test()	//checks that the amount of humans on board is less than 600 and returns boolean true, else false
{
	int max = 600;
	if(loadCapacity <= max)
	{
		cout<<"Crew loaded onto Spacecraft"<<endl;
		cout<<" "<<endl;
		return true;
	}
	else
	{
		return false;
	}
}

Humans::~Humans()	//Humans destructor
{
	cout<<"Crew safely transported"<<endl;
}


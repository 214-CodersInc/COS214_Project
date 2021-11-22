#include "Humans.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Humans::Humans(int capacity):Load(capacity)
{
	
}

bool Humans::receive()
{
	return this->received;
}

bool Humans::test()
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

Humans::~Humans()
{
	cout<<"Crew safely transported"<<endl;
}


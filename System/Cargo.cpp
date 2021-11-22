#include "Cargo.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Cargo::Cargo(int capacity):Load(capacity)	//Initialises Cargo constructor 
{
	
}

bool Cargo::receive()	//receive function which returns receipt variable
{
	return this->received;
}

bool Cargo::test()	//makes sure the amount of cargo on the is less than 10000 and sends boolean true confirmation, else false
{
	
	int max = 10000;
	if(loadCapacity <= max)
	{
		cout<<"Cargo loaded onto Spacecraft"<<endl;
		cout<<" "<<endl;
		return true;
	}
	else
	{
		return false;
	}
}

Cargo::~Cargo()		//Cargo destructor
{
	cout<<"Cargo safely transported"<<endl;
}


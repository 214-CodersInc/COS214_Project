#include "Cargo.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Cargo::Cargo(int capacity):Load(capacity)
{
	
}

bool Cargo::receive()
{
	return this->received;
}

bool Cargo::test()
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

Cargo::~Cargo()
{
	cout<<"Cargo safely transported"<<endl;
}


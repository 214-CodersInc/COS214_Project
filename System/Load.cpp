#include "Load.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Load::Load(int loadCapacity)	//initialises Load Constuctor with loadCapacity variable and received variable
{
	this->loadCapacity = loadCapacity;
	this->received = false;
}

void Load::setReceipt(bool b)	//sets the receipt variable 'received'
{
	this->received = b;
}

void Load::setCapacity(int c)	//sets the capacity variable 'loadCapacity
{
	this->loadCapacity = c;
}

Load::~Load()	//Load destructor
{
	
}


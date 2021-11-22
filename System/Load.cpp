#include "Load.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Load::Load(int loadCapacity)
{
	this->loadCapacity = loadCapacity;
	this->received = false;
}

void Load::setReceipt(bool b)
{
	this->received = b;
}

void Load::setCapacity(int c)
{
	this->loadCapacity = c;
}

Load::~Load()
{
	
}


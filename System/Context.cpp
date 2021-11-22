#include "Context.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Context::Context(Load* l)	///Context Constructor, instatiates Strategy Design pattern
{
	this->strategy = l;
	
}

void Context::setReceipt(bool b)	///calls setReceipt()
{
	strategy->setReceipt(b);
}

void Context::setCapacity(int c)	///calls setCapacity()
{
	strategy->setCapacity(c);
}

bool Context::loadReceipt()	///calls receive()
{
	return strategy->receive();
	
}

bool Context::testCapacity()	///calls test()
{
	return strategy->test();
}


Context::~Context()	///Context destructor
{
	delete strategy;
	strategy=0;
}


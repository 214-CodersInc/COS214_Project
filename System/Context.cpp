#include "Context.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Context::Context(Load* l)
{
	this->strategy = l;
	
}

void Context::setReceipt(bool b)
{
	strategy->setReceipt(b);
}

void Context::setCapacity(int c)
{
	strategy->setCapacity(c);
}

bool Context::loadReceipt()
{
	return strategy->receive();
	
}

bool Context::testCapacity()
{
	return strategy->test();
}


Context::~Context()
{
	delete strategy;
	strategy=0;
}


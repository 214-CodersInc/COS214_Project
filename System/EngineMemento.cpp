#include "EngineMemento.h"

EngineMemento::EngineMemento(int i,int t):fuel(i),temperature(t)  //Constructor
{
}

void EngineMemento::setFuel(int f) // Initialising fuel
{
    fuel=f;
}
void EngineMemento::setTemp(int f)  //Initialising temperature
{
    temperature=f;
}

int EngineMemento::getFuel()
{
    return fuel;
}

int EngineMemento::getTemp()
{
    return temperature;
}

EngineMemento::~EngineMemento()  //Destructor
{
}

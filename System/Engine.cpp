#include "Engine.h"

Engine::Engine(int num1,int num2,int num3,int num4):temp(num1),pressure(num2),fGradient(num3),fuel(num4)   ///Constructor
{
}

/*void Engine::refill()  ///Refuel the engine
{
    fuel=100;
}*/

void Engine::On()    ///Switch engine on
{
    on=true;
}

void Engine::Off()   ///Swtch engine off
{
    on=false;
}

EngineMemento *Engine::createMemento()      ///A memento  to restore the state of the Engine
{
    return new EngineMemento(fuel,temp);
}

void Engine::retrieveMemento(EngineMemento* engi)    ///Restoring the state of fuel and temperature
{
    this->fuel=engi->getFuel();
    this->temp=engi->getTemp();
}

Engine::~Engine()   ///Destructor
{
    
}

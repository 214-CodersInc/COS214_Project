#include "Engine.h"

Engine::Engine(int num1,int num2,int num3,int num4):temp(num1),pressure(num2),fGradient(num3),fuel(num4)
{
}

/*void Engine::refill()
{
    fuel=100;
}*/

void Engine::On()
{
    on=true;
}

void Engine::Off()
{
    on=false;
}

Engine::~Engine()
{
}

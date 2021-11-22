#ifndef VacuumEngine_H
#define VacuumEngine_H
#include "Engine.h"


class VacuumEngine :public Engine
{
private:
    /* data */
public:
    VacuumEngine(int,int,int,int);
     void On();
     void Off();
     bool staticFire();
     bool testEngine();
     void refill();
     Engine* clone();
    ~VacuumEngine();
};


#endif
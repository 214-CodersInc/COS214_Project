#ifndef MerlinEngine_H
#define MerlinEngine_H
#include "Engine.h"


class MerlinEngine:public Engine
{
private:
    /* data */
public:
    MerlinEngine(int,int,int,int);
     void On();
     void Off();
     bool testEngine();
     Engine* clone();
    // bool staticFire();
     //void refill();
    ~MerlinEngine();
};



#endif
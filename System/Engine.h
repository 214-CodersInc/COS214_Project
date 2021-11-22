#ifndef Engine_H
#define Engine_H
#include "EngineMemento.h"
#include "EngineStore.h"
#include <string>
#include<iostream>

using namespace std;
class Engine
{
protected:
    /* data */
    int pressure;
    int temp;
    int fGradient;
    int fuel;
    bool on;
    bool status;
public:
    Engine(int,int,int,int);
    void On();
    void Off();
    //virtual bool staticFire()=0;
    //virtual void refill();
    virtual Engine* clone()=0; 
    EngineMemento *createMemento();
    void retrieveMemento(EngineMemento *mem);
    friend class Rocket;
    virtual bool testEngine()=0; //Strategy design pattern
    //string getType();

    virtual ~Engine();
};

#endif
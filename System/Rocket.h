#ifndef Rocket_H
#define Rocket_H
#include "Engine.h"
#include<string>
#include<vector>
#include<iostream>
#include "TurnOff.h"
#include "TurnOn.h"
#include "ConcreteIterator.h"

using namespace std;

class LaunchSimulator;

class Rocket
{
protected:
    /* data */
    //static int numEngines;
    vector<Engine*> MerlinEngines;
    vector<Engine*> VacuumEngines;
public:
    Rocket();
    //void press();
    void addMerlinEngine(Engine*);
    void addVacuumEngine(Engine*);
    void replaceMerlinEngine(Engine*,int);
    void replaceVacuum(Engine*,int);
    EngineIterator* createIterator(vector<Engine*>);
    friend class LaunchSimulator;
    virtual bool stage1Test();
    virtual bool stage2Test();
    virtual ~Rocket();
};

#endif
#ifndef LaunchSimulator_H
#define LaunchSimulator_H
#include "MerlinEngine.h"
#include "VacuumEngine.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "Satellite.h"
#include "Spacecraft.h"
#include "Cargo.h"
#include "Humans.h"
#include "TurnOn.h"
#include "TurnOff.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;

class LaunchSimulator
{
private:
    /* data */
    vector<Rocket*> rockets;
public:
    LaunchSimulator(/* args */);
    void addRocket(Rocket*);
    void removeRocket(int);
    bool batchTest();
    void batchLaunch();
    bool testRocket(int);  //simulation
    void launchRocket(int);
    ~LaunchSimulator();
};

#endif
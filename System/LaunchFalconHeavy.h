#ifndef LaunchFalconHeavy_H
#define LaunchFalconHeavy_H
#include "Launch.h"
#include "LaunchSimulator.h"
#include "MerlinEngine.h"
#include "VacuumEngine.h"
#include "Falcon9.h"
#include "Falconheavy.h"
#include "Satellite.h"
#include "SpaceCraft.h"
#include "Cargo.h"
#include "Humans.h"
#include "CrewDragon.h"
#include "DragonSpaceCraft.h"
#include "LaunchSimulator.h"
//#include "User.h"
#include<vector>
#include<string>
#include<iostream>
#include<list>
using namespace std;

class LaunchFalconHeavy:public Launch
{
private:
    Rocket* rocket;
public:
    LaunchFalconHeavy(Rocket*);
    void HandleRequest();
    ~LaunchFalconHeavy();
};

#endif
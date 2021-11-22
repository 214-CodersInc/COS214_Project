#ifndef LaunchFalcon9_H
#define LaunchFalcon9_H
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
#include "User.h"
#include<vector>
#include<string>
#include<iostream>
#include<list>
using namespace std;

class LaunchFalcon9:public Launch
{
private:
    Rocket* rocket;
public:
    LaunchFalcon9(Rocket*);
    void HandleRequest();
    ~LaunchFalcon9();
};

#endif
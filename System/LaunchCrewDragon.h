#ifndef LaunchCrewDragon_H
#define LaunchCrewDragon_H
#include "Spacecraft.h"
#include "Load.h"
#include "Context.h"
#include "Creator.h"
#include "DragonSpaceCraft.h"
#include "DragonSpacecraftCreator.h"
#include "CrewDragon.h"
#include "CrewDragonCreator.h"
#include "Cargo.h"
#include "Humans.h"
#include "Launch.h"

#include <iostream>
#include <string>

using namespace std;

class LaunchCrewDragon:public Launch
{
public:
    LaunchCrewDragon();
    void HandleRequest();
    ~LaunchCrewDragon();
};

#endif
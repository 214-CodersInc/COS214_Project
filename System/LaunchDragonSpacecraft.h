#ifndef LaunchDragonSpacecraft_H
#define LaunchDragonSpacecraft_H
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

class LaunchDragonSpacecraft:public Launch
{
public:
    LaunchDragonSpacecraft();
    void HandleRequest();
    ~LaunchDragonSpacecraft();
};

#endif
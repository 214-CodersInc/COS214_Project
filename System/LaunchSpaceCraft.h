#ifndef LaunchSpaceCraft_H
#define LaunchSpaceCraft_H
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

class LaunchSpaceCraft:public Launch
{
public:
    LaunchSpaceCraft();
    void HandleRequest();
    ~LaunchSpaceCraft();
};

#endif
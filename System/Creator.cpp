#include <iostream>
#include <string>
#include "Spacecraft.h"
#include "Creator.h"
#include "CrewDragonCreator.h"
#include "DragonSpacecraftCreator.h"
#include "CrewDragon.h"
#include "DragonSpaceCraft.h"

using namespace std;

Spacecraft* Creator::create(Context* l,string s) 
{
    cout<<"Preparing spacecraft...."<<endl;
    return createCraft(l, s);
}

Spacecraft* CrewDragonCreator::createCraft(Context* l,string s)
{
    cout<< "Crew Dragon Ready..." <<endl;
    Spacecraft* space = new CrewDragon(l, s);
    return space;
}

Spacecraft* DragonSpacecraftCreator::createCraft(Context* l,string s)
{
    cout<< "Dragon Spacecraft Ready..." <<endl;
    Spacecraft* space = new DragonSpaceCraft(l, s);
    return space;
}


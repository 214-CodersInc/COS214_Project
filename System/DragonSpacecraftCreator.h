#ifndef DragonSpacecraftCreator_H
#define DragonSpacecraftCreator_H
#include "Spacecraft.h"
#include "Creator.h"

using namespace std;

class DragonSpacecraftCreator: public Creator
{
protected:
    Spacecraft* createCraft(Context* l,string s);
};

#endif
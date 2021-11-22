#ifndef DragonSpacecraftCreator_H
#define DragonSpacecraftCreator_H
#include "Spacecraft.h"
#include "Creator.h"

using namespace std;

class DragonSpacecraftCreator: public Creator
{
protected:
    ///Brief Description: Instantiates a DragonSpaceCraft object
    ///
    ///@param l : The type of cargo passed in to determine the type of Spacecraft to be created
    ///@param s : The base of said spacecraft
    ///@returns : Returns Spacecraft object
    ///@see DragonSpaceCraft(Context* l,string s)
    Spacecraft* createCraft(Context* l,string s);
};

#endif
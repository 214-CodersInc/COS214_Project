#ifndef CrewDragonCreator_H
#define CrewDragonCreator_H
#include "Spacecraft.h"
#include "Creator.h"

using namespace std;

class CrewDragonCreator: public Creator
{
    protected:
        ///Brief Description: Instantiates a CrewDragon object
        ///
        ///@param l : The type of cargo passed in to determine the type of Spacecraft to be created
        ///@param s : The base of said spacecraft
        ///@returns : Returns Spacecraft object
        ///@see CrewDragon(Context* l,string s)
        Spacecraft* createCraft(Context* l,string s);
};
#endif
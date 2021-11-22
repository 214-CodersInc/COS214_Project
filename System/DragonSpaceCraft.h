#ifndef DragonSpaceCraft_H
#define DragonSpaceCraft_H
#include "Spacecraft.h"

using namespace std;

class DragonSpaceCraft :public Spacecraft
{
public:
    ///Brief Description: DragonSpaceCraft constructor
    ///
    ///@param l : The cargo passed in to be loaded onto the CrewDragon
    ///@param s : The base of said spacecraft
    ///@attention : Uses the base class constructor of the Spacecraft class
    ///@see Spacecraft(Context* l,string s)
    DragonSpaceCraft(Context* l,string s);
protected:
    ///Brief Description: Launches spacecraft from the base and outputs an appropriate message
    void sendSpaceCraft();
    ///Brief Description: Returns spacecraft to the base and outputs an appropriate message
    void returnSpaceCraft();
};

#endif
#ifndef CrewDragon_H
#define CrewDragon_H
#include "Spacecraft.h"

using namespace std;

class CrewDragon :public Spacecraft
{
public:
    CrewDragon(Context* l,string s);
protected:
    void sendSpaceCraft();
    void returnSpaceCraft();
};

#endif
#ifndef DragonSpaceCraft_H
#define DragonSpaceCraft_H
#include "Spacecraft.h"

using namespace std;

class DragonSpaceCraft :public Spacecraft
{
public:
    DragonSpaceCraft(Context* l,string s);
protected:
    void sendSpaceCraft();
    void returnSpaceCraft();
};

#endif
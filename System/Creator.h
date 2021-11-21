#ifndef Creator_H
#define Creator_H
#include "Spacecraft.h"
#include <string>

using namespace std;

class Spacecraft;

class Creator
{
public:
    Spacecraft* create(Context* l,string s);
protected:
    virtual Spacecraft* createCraft(Context* l,string s)=0;
};

#endif
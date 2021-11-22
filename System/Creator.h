#ifndef Creator_H
#define Creator_H
#include "Spacecraft.h"
#include <string>

using namespace std;

class Spacecraft;

class Creator
{
public:
    ///Brief Description: Creates a spacecraft object
    ///
    ///@param l : The type of cargo passed in to determine the type of Spacecraft to be created
    ///@param s : The base of said spacecraft
    ///@returns : Returns Spacecraft object
    Spacecraft* create(Context* l,string s);
protected:
    ///Virual functions defined in the derived classes
    virtual Spacecraft* createCraft(Context* l,string s)=0;
};

#endif
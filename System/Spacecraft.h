#ifndef Spacecraft_H
#define Spacecraft_H
#include "Context.h"
#include "Creator.h"
#include<string>

using namespace std;

class Spacecraft
{
    public:
        Context* load;
        string destination;
        int loadCapacity;
        Spacecraft(Context* l,string s);
        ~Spacecraft();
        void loadCargo(Context* crewC);

    protected:
       virtual void sendSpaceCraft()=0;
       virtual void returnSpaceCraft()=0;
    
};


#endif

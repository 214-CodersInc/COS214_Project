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
        ///Brief Description: Tests the capacity given by the user against the maximum capacity of the CrewDragon and checks whether the cargo is off-loaded
        ///
        ///@attention : The maximum capacity of this spcecraft is defined in the Cargo class
        ///@see testCapacity()
        ///@see loadReceipt()
        ///@attention : This function defines the appropriate virtual functions from Spacecraft
        void loadCargo(Context* crewC);

    protected:
       virtual void sendSpaceCraft()=0;
       virtual void returnSpaceCraft()=0;
    
};


#endif

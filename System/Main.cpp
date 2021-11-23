#include "LaunchCrewDragon.h"
#include "LaunchDragonSpaceCraft.h"
#include "LaunchFalcon9.h"
#include "LaunchFalconHeavy.h"
#include "LaunchSatellite.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    Falcon9* f9=new Falcon9();
    FalconHeavy* fh=new FalconHeavy();
    FalconHeavy* fh2=new FalconHeavy();

    LaunchCrewDragon* cD=new LaunchCrewDragon();
    LaunchDragonSpacecraft* dragon=new LaunchDragonSpacecraft();
    LaunchSatellite* satie=new LaunchSatellite();
    LaunchFalcon9* falcon9=new LaunchFalcon9(f9);
    LaunchFalconHeavy* heavy=new LaunchFalconHeavy(fh);
    LaunchFalconHeavy* heavy2=new LaunchFalconHeavy(fh2);

    heavy->SetSuccessor(cD);
    cD->SetSuccessor(heavy2);
    heavy2->SetSuccessor(dragon);
    dragon->SetSuccessor(falcon9);
    falcon9->SetSuccessor(satie);
    satie->SetSuccessor(NULL);

    Launch* l = heavy;

    while(l != NULL)
    {
        l->HandleRequest();
        l = l->getSuccessor();
    }

    delete f9;
    delete fh;
    delete fh2;
    delete cD;
    delete dragon;
    delete falcon9;
    delete satie;
    delete heavy;
    delete heavy2;
    
    return 0;
}
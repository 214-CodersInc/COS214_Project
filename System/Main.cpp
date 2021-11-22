#include "LaunchCrewDragon.h"
#include "LaunchDragonSpaceCraft.h"
#include "LaunchFalcon9.h"
#include "LaunchFalconHeavy.h"
#include "LaunchSatellite.h"

using namespace std;

int main()
{
    Falcon9* f9=new Falcon9();
    FalconHeavy* fh=new FalconHeavy();

    LaunchCrewDragon* cD=new LaunchCrewDragon();
    LaunchDragonSpacecraft* dragon=new LaunchDragonSpacecraft();
    LaunchSatellite* satie=new LaunchSatellite();
    LaunchFalcon9* falcon9=new LaunchFalcon9(f9);
    LaunchFalconHeavy* heavy=new LaunchFalconHeavy(fh);

    heavy->HandleRequest();
    falcon9->HandleRequest();
    cD->HandleRequest();
    dragon->HandleRequest();
    satie->HandleRequest();

    delete f9;
    delete fh;
    delete cD;
    delete dragon;
    delete falcon9;
    delete satie;
    
    return 0;
}
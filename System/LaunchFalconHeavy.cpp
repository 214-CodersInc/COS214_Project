#include "LaunchFalconHeavy.h"

LaunchFalconHeavy::LaunchFalconHeavy(Rocket* roc)
{
    rocket=roc;
}

void LaunchFalconHeavy::HandleRequest()
{
    Engine* merlinEngines[27];
    merlinEngines[0]=new MerlinEngine(210,32,34,100);
    for(int i=1;i<27;i++)
    {
        merlinEngines[i]=merlinEngines[0]->clone();
    }

    //Vacuum Engines
    /* 
    240<=Temp<350
    50 <=oilPresure<=100
    40<=FlowGradient<=50
    */
    Engine* vacuumEngine=new VacuumEngine(280,55,40,100);
    //adding engines to falconHeavy
    for(int i=0;i<27;i++)
    {
        rocket->addMerlinEngine(merlinEngines[i]);
    }
    //adding vacuumEngine
    rocket->addVacuumEngine(vacuumEngine);

    //Simulate the rockets
    LaunchSimulator* DroneShip=new LaunchSimulator();
    DroneShip->addRocket(rocket);

    DroneShip->launchRocket(0);  //test rocket 1

    cout<<"Batch Testing the Rockets"<<endl;
    DroneShip->batchLaunch();

    //DELETING
    for(int i=0;i<27;i++)
    {
        delete merlinEngines[i];
    }
    delete vacuumEngine;

    cout<<"SpaceCraft succesfully loaded on the rocket"<<endl;
}

LaunchFalconHeavy::~LaunchFalconHeavy()
{}
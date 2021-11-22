#include "LaunchFalcon9.h"

LaunchFalcon9::LaunchFalcon9(Rocket* roc)  ///Construtor, initialising the rocket
{
    rocket=roc;
}

void LaunchFalcon9::HandleRequest() /// Handling the requests of the engines before launching to orbit
{
    Engine* merlinEngines[9];
    merlinEngines[0]=new MerlinEngine(210,32,34,100);
    for(int i=1;i<9;i++)
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

    //Falcon 9 Rocket
    //adding engines
    for(int i=0;i<9;i++)
    {
        rocket->addMerlinEngine(merlinEngines[i]);
    }
    //adding vacuum engine
    rocket->addVacuumEngine(vacuumEngine);




    //Simulate the rockets
    LaunchSimulator* DroneShip=new LaunchSimulator();
    DroneShip->addRocket(rocket);

    DroneShip->launchRocket(0);  //test rocket 1 

    cout<<"Batch Testing the Rockets"<<endl;
    //DroneShip->batchLaunch();

    //DELETING
    for(int i=0;i<9;i++)
    {
        delete merlinEngines[i];
    }
    delete vacuumEngine;
    delete DroneShip;
    cout<<"Satellites have been attached to the rocket"<<endl;
}

LaunchFalcon9::~LaunchFalcon9()  ///Destructor
{}

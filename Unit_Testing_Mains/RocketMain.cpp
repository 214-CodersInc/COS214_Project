#include "MerlinEngine.h"
#include "VacuumEngine.h"
#include "Falcon9.h"
#include "Falconheavy.h"
#include "Satellite.h"
#include "SpaceCraft.h"
#include "Cargo.h"
#include "Humans.h"
#include "CrewDragon.h"
#include "DragonSpaceCraft.h"
#include "LaunchSimulator.h"
#include<vector>
#include<string>
#include<iostream>
#include<list>
#include "User.h"
using namespace std;


int main()
{
     Engine* merlinEngines[27];
    for(int i=0;i<27;i++)
    {
        merlinEngines[i]=new MerlinEngine(210,32,34,100);
    }

    //Vacuum Engines
    /* 
    240<=Temp<350
    50 <=oilPresure<=100
    40<=FlowGradient<=50
    */
    Engine* VacuumEngines[2];
    for(int i=0;i<2;i++)
    {
        VacuumEngines[i]=new VacuumEngine(280,55,40,100);
    }

    //Falcon 9 Rocket
    Falcon9* falcon9_1=new Falcon9();
    User* user1=new User("Gift");
    Satellite* saties[60];
    saties[0]=new Satellite(user1,"Sattie 1",25);
    for(int i=1;i<60;i++)
    {
        saties[i]=saties[0]->clone();
    }

    //attaching a Cluister of sattelites
    falcon9_1->attachSatellite(*saties);
    cout<<"Satellites loaded onto the rocket"<<endl;

    //adding engines
    for(int i=0;i<9;i++)
    {
        falcon9_1->addMerlinEngine(merlinEngines[i]);
    }
    //adding vacuum engine
    falcon9_1->addVacuumEngine(VacuumEngines[0]);


    //FalcomHeavy Rocket
    FalconHeavy* FH=new FalconHeavy();
    //adding engines to falconHeavy
    for(int i=0;i<27;i++)
    {
        FH->addMerlinEngine(merlinEngines[i]);
    }
    //adding vacuumEngine
    FH->addVacuumEngine(VacuumEngines[1]);

    //Load the SpaceCraft with humans and cargo
    Humans* humans=new Humans(30);
    Cargo* cargo=new Cargo(100);
    CrewDragon* CD=new CrewDragon(cargo,humans);
    //ATTACH THE SPACECRAFT
    FH->loadSpaceCraft(CD);

    //Simulate the rockets
    LaunchSimulator* DroneShip=new LaunchSimulator();
    DroneShip->addRocket(falcon9_1);
    DroneShip->addRocket(FH);

    DroneShip->launchRocket(0);  //test rocket 1
    //DroneShip->testRocket(1);  //test Rocket 2  

    cout<<"Batch Testing the Rockets"<<endl;
    DroneShip->batchLaunch();

    //DELETING
    delete falcon9_1;
    for(int i=0;i<27;i++)
    {
        delete merlinEngines[i];
    }

    for(int i=0;i<2;i++)
    {
        delete VacuumEngines[i];
    }

    for(int i=0;i<59;i++)
    {
        delete saties[i];
    }

    delete FH;
    delete humans;
    delete cargo;
    delete CD;
    delete user1;

    return 0;
}

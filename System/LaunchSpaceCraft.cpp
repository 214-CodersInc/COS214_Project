#include "Launch.h"
#include "LaunchSpaceCraft.h"

#include <iostream>
#include <string>

using namespace std;

LaunchSpaceCraft::LaunchSpaceCraft()
{
    SetSuccessor(nullptr);
}

void LaunchSpaceCraft::HandleRequest()
{
    int cargoC = 0;
    bool check1 = false;
    bool check2 = false;
    int crewC = 0;
    string crewDest = " ";
    string dragonDest = " ";

    cout<<"Beginning Spacecraft simulation....."<<endl;
    cout<<" "<<endl;

    cout<<"Enter the take off base for the Crew Dragon (just the city name; e.g. - Pretoria): ";
    //cin.ignore();
    getline(cin, crewDest, '\n');

    cout<<" "<<endl;

    cout<<"Enter the take off base for the Dragon Spacecraft (just the city name; e.g. - Pretoria): ";
    //cin.ignore();
    getline(cin, dragonDest, '\n');

    cout<<" "<<endl;

    cout<<"Enter the weight of the cargo being loaded (in kg): ";
    cin>>cargoC;

    cout<<" "<<endl;

    Load* c = new Cargo(cargoC);
    Context* cargo = new Context(c);

    cout<<"Enter the weight of the crew boarding (in kg): ";
    cin>>crewC;

    cout<<" "<<endl;

    Load* cc = new Humans(crewC);
    Context* crew = new Context(cc);

    while((check1 == false)||(check2 == false))
    {
        if(cargo->testCapacity() == false)
        {
            cout<<"The cargo load is too heavy to be transported, please reconsider. Enter the weight of the cargo being loaded (in kg): ";
            cin>>cargoC;
            cargo->setCapacity(cargoC);

            cout<<" "<<endl;
        }
        else
        {
            check1 = true;
        }

        if(crew->testCapacity() == false)
        {
            cout<<"The crew is too heavy to be transported, please reconsider. Enter the weight of the cargo being loaded (in kg): ";
            cin>>crewC;
            crew->setCapacity(crewC);

            cout<<" "<<endl;
        }
        else
        {
            check2 = true;
        }        
    }
 
    /*cout<<"========Dragon Spacecraft Simulation========"<<endl;
    cout<<" "<<endl;*/

    Creator* crewDragonFact = new CrewDragonCreator();
    Creator* DragonFact = new DragonSpacecraftCreator();

    Spacecraft* crewDragon = crewDragonFact->create(crew, crewDest);

    Spacecraft* dragonSpace = DragonFact->create(cargo, dragonDest);

    cout<<" "<<endl;
    cout<<"========Dragon Spacecraft Simulation========"<<endl;
    cout<<" "<<endl;

    dragonSpace->loadCargo(cargo);

    cout<<" "<<endl;
    cout<<"==========End of simulation=========="<<endl;
    cout<<" "<<endl;

    cout<<"========Crew Dragon Simulation========"<<endl;
    cout<<" "<<endl;

    crewDragon->loadCargo(crew);

    cout<<" "<<endl;
    cout<<"==========End of simulation=========="<<endl;

}
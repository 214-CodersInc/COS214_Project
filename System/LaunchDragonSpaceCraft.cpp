#include "Launch.h"
#include "LaunchDragonSpaceCraft.h"

#include <iostream>
#include <string>

using namespace std;

LaunchDragonSpacecraft::LaunchDragonSpacecraft()  ///Constructor
{
    SetSuccessor(NULL);
}

void LaunchDragonSpacecraft::HandleRequest()  ///handling the requests of Spacecraft before launching to orbit
{
    bool check1 = false;
    string dragonDest = " ";
    int cargoC = 0;

    cout<<"Beginning Spacecraft simulation....."<<endl;
    cout<<" "<<endl;

    cout<<"Enter the take off base for the Dragon Spacecraft (just the city name; e.g. - Pretoria): ";
    //cin.ignore();
    //getline(cin, dragonDest, '\n');
    cin>>dragonDest;

    cout<<" "<<endl;

    cout<<"Enter the weight of the cargo being loaded (in kg): ";
    cin>>cargoC;

    cout<<" "<<endl;

    Load* c = new Cargo(cargoC);
    Context* cargo = new Context(c);

    while(check1 == false)
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

    }
 
    /*cout<<"========Dragon Spacecraft Simulation========"<<endl;
    cout<<" "<<endl;*/

    Creator* DragonFact = new DragonSpacecraftCreator();
    Spacecraft* dragonSpace = DragonFact->create(cargo, dragonDest);

    cout<<" "<<endl;
    cout<<"========Dragon Spacecraft Simulation========"<<endl;
    cout<<" "<<endl;

    dragonSpace->loadCargo(cargo);

    cout<<" "<<endl;
    cout<<"==========End of simulation=========="<<endl;
    cout<<" "<<endl;


}

LaunchDragonSpacecraft::~LaunchDragonSpacecraft()   ///Destructor
{
    
}

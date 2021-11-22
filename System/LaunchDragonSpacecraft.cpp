#include "Launch.h"
#include "LaunchDragonSpacecraft.h"

#include <iostream>
#include <string>

using namespace std;

LaunchDragonSpacecraft::LaunchDragonSpacecraft()
{
    SetSuccessor(nullptr);
}

void LaunchDragonSpacecraft::HandleRequest()
{
    bool check1 = false;
    string dragonDest = " ";
    int cargoC = 0;

    cout<<"Beginning Spacecraft simulation....."<<endl;
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
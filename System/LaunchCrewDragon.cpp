#include "Launch.h"
#include "LaunchCrewDragon.h"

#include <iostream>
#include <string>

using namespace std;

LaunchCrewDragon::LaunchCrewDragon()
{
    SetSuccessor(nullptr);
}

void LaunchCrewDragon::HandleRequest()
{
    bool check1 = false;
    int crewC = 0;
    string crewDest = " ";
    
    cout<<"Beginning Spacecraft simulation....."<<endl;
    cout<<" "<<endl;

    cout<<"Enter the take off base for the Crew Dragon (just the city name; e.g. - Pretoria): ";
    //cin.ignore();
    getline(cin, crewDest, '\n');

    cout<<" "<<endl;

    cout<<"Enter the weight of the crew boarding (in kg): ";
    cin>>crewC;

    cout<<" "<<endl;

    Load* cc = new Humans(crewC);
    Context* crew = new Context(cc);

    while(check1 == false)
    {
        if(crew->testCapacity() == false)
        {
            cout<<"The crew is too heavy to be transported, please reconsider. Enter the weight of the cargo being loaded (in kg): ";
            cin>>crewC;
            crew->setCapacity(crewC);

            cout<<" "<<endl;
        }
        else
        {
            check1 = true;
        }        
    }
 
    /*cout<<"========Dragon Spacecraft Simulation========"<<endl;
    cout<<" "<<endl;*/

    Creator* crewDragonFact = new CrewDragonCreator();
    
    Spacecraft* crewDragon = crewDragonFact->create(crew, crewDest);

    cout<<" "<<endl;
    
    cout<<"========Crew Dragon Simulation========"<<endl;
    cout<<" "<<endl;

    crewDragon->loadCargo(crew);

    cout<<" "<<endl;
    cout<<"==========End of simulation=========="<<endl;

}

LaunchCrewDragon::~LaunchCrewDragon()
{
}
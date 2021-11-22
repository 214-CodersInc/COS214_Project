#include<iostream>
#include<string>
#include "Spacecraft.h"
#include "Creator.h"
#include "CrewDragon.h"
#include "DragonSpaceCraft.h"

using namespace std;

Spacecraft::Spacecraft(Context* l,string s)
{
    this->load = l;
    this->destination = s;
}

void DragonSpaceCraft::sendSpaceCraft()
{
    load->setReceipt(true);

    string s = "Dragon Spacecraft has launched from the " + destination + " base with cargo aboard.....heading to International Space Station";

    cout<< s << endl;
}

void DragonSpaceCraft::returnSpaceCraft()
{
    string s = "Dragon Spacecraft returning from International Space Station......heading to the " + destination + " base";

    cout<< s << endl;
}

void CrewDragon::sendSpaceCraft()
{
    load->setReceipt(true);

    string s = "The Crew Dragon has launched from the " + destination + " base with the crew and cargo safely aboard.....heading to International Space Station";

    cout<< s << endl;
}

void CrewDragon::returnSpaceCraft()
{
    string s = "The Crew Dragon returning from International Space Station......heading to the " + destination + " base";

    cout<< s << endl;
}
    
Spacecraft::~Spacecraft()
{

}

void Spacecraft::loadCargo(Context* crewC)
{
    load = crewC;

    if(load->testCapacity() == true)
    {
        sendSpaceCraft();

        if(load->loadReceipt() == true)
        {
            returnSpaceCraft();
        }
        else
        {
            cout << "There was an issue in unloading the cargo from the Dragon Spacecraft"<<endl;
        }
    }
    else
    {
        cout << "There was an issue in loading the cargo onto the Dragon Spacecraft"<<endl;
    }
    
}

CrewDragon::CrewDragon(Context* l, string s):Spacecraft(l,s)
{

}

DragonSpaceCraft::DragonSpaceCraft(Context* l,string s):Spacecraft(l,s)
{

}
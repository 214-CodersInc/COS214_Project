#include "Satellite.h"

using namespace std;

Satellite::Satellite(Mediator* _user, string Name, string Status, double dist, double _area)  ///Constructor, initialising all the variables
{
    this->name= Name;                                   ///SETALLITE NAME
    this->user = _user;                                 ///USER
    this->status= Status;
    this->distance= dist;
    this->area= _area;
}
double Satellite::getDistance()                         ///GETTER FOR DISTANCE
{ return distance;}

void Satellite::setStatus(string s)                     ///SETTER FOR STATUS
{
    status= s;
}

Satellite::Satellite(const Satellite& sat)             ///CONSTRUCTOR-HELPER FOR CLONE
{
    user= sat.user;
    name=sat.name;
    status= sat.status;
    distance = sat.distance;
    area= sat.area;
}

Satellite* Satellite::clone()                          ///CLONES THE ONE-SELF
{
    return new Satellite(*this);
}

void Satellite::updateDistance()                       ///UPDATE DISTANCE AFTER 200KM
{
    distance+=200;
}

Satellite::~Satellite()                                 ///Destructor
{
}

bool Satellite::testDistance()                          ///Testing and validating distance
{
    if( this->distance == distanceToOrbit)
    {
        cout<<"Orbits reached"<<endl;
        cout<<"Satellites will slowly spread out equally to cover a large area"<<endl;

        return true;
    
    }
    else{
        if(this->distance < distanceToOrbit)
        {
            cout<<"Orbit not yet reached"<<endl;

            double distanceLeft= distanceToOrbit - distance;

            cout<<"Falcon is still "<<distanceLeft <<" away"<<endl;

        }
        else{
            cout<<"Warning !!! PASSING ORBIT"<<endl;
        }

        return false;
    }

}

string Satellite::getName()
{ return name;}

/*string Satellite::getUserName()
{ return user->getName();}*/

void Satellite::statusChange()
{
    //Communicating to user
    
    /*assuming states will be:
    -on earth
]   -on orbit
    -spreaded out 
    -in Position

    as well as communicating to user respectively
       */
    
    if(status=="on Earth" && distance==distanceToOrbit)
    {
        setStatus("on orbit");
    }
    else{
        cout<<"Could not change the state because the Falcon haven't reached the orbit"<<endl;
    }
    
    if(status== "on orbit")
    {
        setStatus("spreaded out");
    }
    else if(status =="spreaded out")
    {
        setStatus("in Position");
    }
    else if(status== "in Position")
    {
        cout<<"Satellite already in Position."<<endl;
    }
    
}

void Satellite::sendSignal()
{
    cout<<getName() <<" sent communication via signal to "<<endl;//getUserName()<<endl;
}

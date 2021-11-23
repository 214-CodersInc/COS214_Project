#include "Satellite.h"

using namespace std;

Satellite::Satellite(Mediator* _user, string Name, string Status, double dist, double _area)
{
    this->name= Name;
    this->user = _user;
    this->status= Status;
    this->distance= dist;
    this->area= _area;
}
double Satellite::getDistance()
{ return distance;}

void Satellite::setStatus(string s)
{
    status= s;
}

Satellite::Satellite(const Satellite& sat)
{
    user= sat.user;
    name=sat.name;
    status= sat.status;
    distance = sat.distance;
    area= sat.area;
}

Satellite* Satellite::clone()
{
    return new Satellite(*this);
}

void Satellite::updateDistance()
{
    distance+=200;
}

Satellite::~Satellite()
{
}

bool Satellite::testDistance()
{
    double distanceLeft=0.0;
    
    if( this->distance == distanceToOrbit)
    {
        cout<<"Orbits reached"<<endl;
        cout<<"Satellites will slowly spread out equally to cover a large area"<<endl;

    
    }
    else{
        if(this->distance < distanceToOrbit)
        {
            cout<<"Orbit not yet reached"<<endl;

            distanceLeft= distanceToOrbit - this->distance;

            cout<<"Falcon is still "<<distanceLeft <<" away"<<endl;
        }
        else{
            cout<<"Warning !!!"<<endl;
        }
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
    cout<<getName() <<" sent communication via signal to "<<user->getName();
}
#include "Satellite.h"

using namespace std;

Satellite::Satellite(User* _user, string Name, string Status, double dist, double _area)
{
    this->name= Name;
    this->user = _user;
    this->status= Status;
    this->distance= dist;
    this->area= _area;
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

void Satellite::setDistanceToOrbit(double dis)
{
    distanceToOrbit= dis;
}

Satellite::~Satellite()
{
}

bool Satellite::testDistance()
{
    if( this->distance == distanceToOrbit)
    {
        cout<<"Orbits reached"<<endl;
        cout<<"Satellites will slowly spread out equally to cover a large area"<<endl;

    }
    else{
        if(this->distance < distanceToOrbit)
        {
            cout<<"Orbit not yet reached"<<endl;

            int distanceLeft= distanceToOrbit - distance;

            cout<<"Falcon is still "<<distanceLeft <<" away"<<endl;
        }
        else{
            cout<<"Warning !!!"<<endl;
        }
    }

}

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
    cout<<getName() <<" sent communication via signal to "<<getUserName()<<endl;
}
#include "Satellite.h"

Satellite::Satellite(User* Name,string Status, int dist)
{
    user=Name;
    name= Status;
    distance= dist;
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

        //calculation to get the area that each satellite will occupy
    
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

Satellite* Satellite::clone()
{
    Satellite* satie=new Satellite(this->user,this->name,this->distanceToOrbit);
    return satie;
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
#include "Satellite.h"

using namespace std;

Satellite::Satellite(Mediator* _user, string Name, string Status, double dist, double _area)            //CONSTRUCTOR -INITIALIZES EVERYTHING
{
    this->name= Name;                                                                                   //SATELLITE NAME
    this->user = _user;
    this->status= Status;
    this->distance= dist;                                                                               //DISTANCE
    this->area= _area;
}
double Satellite::getDistance()                                                                        //RETURNS TRAVELLED DISTANCE
{ return distance;}

void Satellite::setStatus(string s)
{
    status= s;
}

Satellite::Satellite(const Satellite& sat)                                                             //CONSTRUCTOR TO HELP WITH CLONE
{
    user= sat.user;
    name=sat.name;
    status= sat.status;
    distance = sat.distance;
    area= sat.area;
}

Satellite* Satellite::clone()                                                                          //MAKES A COPY OF ONESELF
{
    return new Satellite(*this);
}

void Satellite::updateDistance()                                                                       //UPDATE DISTANCE AFTER EACH 200KM
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
    
    return true;
}

string Satellite::getName()                                                                             //GETTER FOR NAME
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

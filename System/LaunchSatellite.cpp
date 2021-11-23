#include "Launch.h"
#include "LaunchSatellite.h"

#include <iostream>
#include <string>

using namespace std;

LaunchSatellite::LaunchSatellite()
{
    
}

void LaunchSatellite::HandleRequest()
{
   

    cout<<"================Beginning Satellite simulation============"<<endl;
    cout<<" "<<endl;

   
 
    User* Nally=new User("Nally con");
    User* Nate=new User("Nate");

    string setalliteName= "Satellite A";
    string stat="on Earth";
    double dist=0; //in km
    double distanceToOrbit= 2400;
    double area= 36000;

    Satellite* setallite=new Satellite(Nally,setalliteName, stat, dist ,area);

    cout<<"User: "<<Nally->getName()<<" is managing "<<setallite->getName()<<endl;
    cout<<"Area: "<<area<<endl;
    cout<<"Total distance to Orbit: "<<distanceToOrbit<<endl;
    cout<<" "<<endl;

    setallite->updateDistance();

    setallite->statusChange();
   

   
        while(setallite->getDistance() <distanceToOrbit)
        {
            setallite->updateDistance();
        
        }
    
    setallite->statusChange();
    //setallite->testDistance();


    if(setallite->getDistance()>=distanceToOrbit)
        setallite->setStatus("in Position");

     //prototype design pattern
    Satellite* clones[59];
    Nate->attach(setallite);

    for(int i=0; i<59; i++)
    {
        clones[i]=setallite->clone();
        Nally->attach(clones[i]);
      
    }
   
cout<<"Satellites are now "<<setallite->getStatus()<<endl;
Nate->notify();

    cout<<" "<<endl;
    cout<<"==========End of simulation=========="<<endl;

}

LaunchSatellite::~LaunchSatellite()
{
    
}
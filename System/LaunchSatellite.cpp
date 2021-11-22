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
   

    cout<<"Beginning Satellite simulation....."<<endl;
    cout<<" "<<endl;

   
 
    User* Nally=new User("Nally con");
    User* Nate=new User("Nate");

    string setalliteName= "Satellite A";
    string stat="on Earth";
    double dist=0; //in km
    double distanceToOrbit= 24000;
    double area= 36000;

    Satellite* setallite=new Satellite(Nally,setalliteName, stat, dist ,area);

    setallite->updateDistance();
    setallite->testDistance();

    setallite->statusChange();

    for(int i=0; i<120; i++)
    {
        if(setallite->getDistance() >=distanceToOrbit)
        {
            setallite->updateDistance();
            break;
        }
    }
    setallite->statusChange();

    



    cout<<"Beginning Satellite simulation....."<<endl;
    cout<<" "<<endl;

   
    cout<<" "<<endl;
    cout<<"==========End of simulation=========="<<endl;

}
#ifndef Satellite_H
#define Satellite_H
#include <string>
#include<vector>
#include <iostream>
#include "Mediator.h"
//#include "User.h"
using namespace std;

class Mediator;
class Satellite
{
private:
    /* data */
    string name;
    string status;

    Mediator* user;
    double distance;
    double distanceToOrbit;
    double area;

public:
    
    ///Brief Description: Creates a satellite object and allows the satellites to communicate with each other. Uses the medaitor and observer pattern
    Satellite(Mediator* ,string, string,double, double);
    Satellite(const Satellite& sat);
    Satellite* clone();

    void sendSignal(); ///This is void update()
    void registerSatellite(Mediator*);
    void statusChange(); /// updates the status of the satellite
    void updateDistance(); // updates the distance till satellite is in the correct place
    void Communicate(); ///this function communications between satellites

    //string sendSignal(); ///communication between user and satellite
     
    bool testDistance();
    double getDistance();
    void setStatus(string s);
    string getName();
    string getUserName();
    
    ~Satellite();
};


#endif

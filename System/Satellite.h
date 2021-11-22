#ifndef Satellite_H
#define Satellite_H
#include "User.h"
#include <string>
#include <iostream>
using namespace std;

class Satellite
{
private:
    /* data */
    string name;
    string status;

    User* user;
    double distance;
    double distanceToOrbit;
    double area;

public:
    Satellite(User*,string, string,double, double);
    Satellite(const Satellite& sat);
    Satellite* clone();

    void sendSignal(); //This is void update()
    void registerSatellite(User*);
    void statusChange();
    void updateDistance(); //new
    void Communicate(); //communication between satellites

    //string sendSignal(); //new -communicstion between user and satellite
     //new
    bool testDistance();
    double getDistance(){ return distance;}

    void setStatus(string s){status= s;}
    string getName(){ return name;}
    string getUserName(){ return user->getName();}
    
    ~Satellite();
};


#endif
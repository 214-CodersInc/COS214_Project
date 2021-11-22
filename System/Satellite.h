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
    Satellite(User*,string,int);
    void update();
    void registerSatellite(User*);
    bool testDistance();
    void statusChange();
    void setDistanceToOrbit(double dis); //new
    void Communicate(); //communication between satellites
    string sendSignal(); //new -communicstion between user and satellite
    void setStatus(string s){status= s;} //new
    Satellite* clone();
    ~Satellite();
};


#endif
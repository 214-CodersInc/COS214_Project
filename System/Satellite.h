#ifndef Satellite_H
#define Satellite_H
#include "User.h"
#include<iostream>
#include <string>

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
    Satellite(User*,string,double, double);
    virtual void update()=0;
    virtual void registerSatellite(User*)=0;
    virtual bool testDistance();
    void statusChange();
    void setDistanceToOrbit(double dis); //new
    void Communicate(); //communication between satellites
    void sendSignal(); //new -communicstion between user and satellite
    void setStatus(string s){status= s;} //new
    ~Satellite();

    string getUserName(){return user->getName();}
    string getName(){ return name;}
};
#endif
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
    Satellite(User*,string, string,double, double);
    Satellite(const Satellite& sat);
    virtual void update();
    virtual void registerSatellite(User*);
    virtual bool testDistance();
    void statusChange();
    void setDistanceToOrbit(double dis); //new
    void Communicate(); //communication between satellites
    void sendSignal(); //new -communicstion between user and satellite
    void setStatus(string s){status= s;} //new
    Satellite* clone();
    ~Satellite();

    string getUserName(){return user->getName();}
    string getName(){ return name;}
};
#endif
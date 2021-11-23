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
    Satellite(Mediator* ,string, string,double, double);
    Satellite(const Satellite& sat);
    Satellite* clone();

    void sendSignal(); //This is void update()
    void registerSatellite(Mediator*);
    void statusChange();
    void updateDistance(); //new
    void Communicate(); //communication between satellites

    //string sendSignal(); //new -communicstion between user and satellite
     //new
    bool testDistance();
    double getDistance();
    void setStatus(string s);
    string getStatus(){return status;}
    void setName(string n){name =n;}
    string getName();
    string getUserName();
    
    ~Satellite();
};


#endif

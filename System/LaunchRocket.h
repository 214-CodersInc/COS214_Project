#ifndef LaunchRocket_H
#define LaunchRocket_H
#include "MerlinEngine.h"
#include "VacuumEngine.h"
#include "Falcon9.h"
#include "Falconheavy.h"
#include "Satellite.h"
#include "SpaceCraft.h"
#include "Cargo.h"
#include "Humans.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;

class LaunchRocket
{
private:
    /* data */
    vector<Rocket*> rockets;
public:
    LaunchRocket(/* args */);
    void addRocket(Rocket*);
    void removeRocket(int);
    void batchTest();
    void batchLaunch();
    void testRocket(int);  //simulation
  
    ~LaunchRocket();
};

#endif

#ifndef LaunchSatellite_H
#define LaunchSatellite_H

#include <iostream>
#include <string>

#include "User.h"
#include "Mediator.h"
#include "Satellite.h"

using namespace std;

class LaunchSatellite:public Launch
{
public:
    LaunchSatellite();
    void HandleRequest();
    ~LaunchSatellite();
};

#endif
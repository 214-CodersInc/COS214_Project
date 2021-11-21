#ifndef LaunchRocket_H
#define LaunchRocket_H
#include "Launch.h"

class LaunchRocket:public Launch
{
private:
    Rocket* rocket;
public:
    LaunchRocket(Rocket*);
    void HandleRequest();
    ~LaunchRocket();
};

#endif

#ifndef Falcon9_H
#define Falcon9_H
#include "Rocket.h"
#include "Satellite.h"
#include <vector>

class Falcon9 :public Rocket
{
private:
    /* data */
public:
    Falcon9();
    bool stage1Test();
    bool stage2Test();
    ~Falcon9();
};

#endif
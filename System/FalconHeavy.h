#ifndef FalconHeavy_H
#define FalconHeavy_H
#include "Rocket.h"
#include "SpaceCraft.h"
using namespace std;

class FalconHeavy : public Rocket
{
private:
    /* data */
public:
    FalconHeavy();
    bool stage1Test();
    bool stage2Test();
    ~FalconHeavy();
};


#endif
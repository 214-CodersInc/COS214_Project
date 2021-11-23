#ifndef Launch_H
#define Launch_H
#include "MerlinEngine.h"
#include "VacuumEngine.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "Satellite.h"
#include "Spacecraft.h"
#include "Cargo.h"
#include "Humans.h"


class Launch
{
private:
    Launch* Succesor;

public:
    Launch();
    virtual void HandleRequest()=0;
    void SetSuccessor(Launch*);
    Launch* getSuccessor();
    virtual ~Launch();
};

#endif
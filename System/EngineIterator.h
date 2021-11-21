#ifndef EngineIterator_H
#define EngineIterator_H
#include "Engine.h"
#include <vector>
#include <iostream>

using namespace std;

class EngineIterator
{
protected:
    /* data */
    vector<Engine*> list;
    int currentPos;
public:
    EngineIterator(vector<Engine*>);
    virtual Engine* next()=0;
    virtual bool hasNext()=0;
    virtual Engine* first()=0;
    virtual Engine* current()=0;

    virtual ~EngineIterator();
};

#endif

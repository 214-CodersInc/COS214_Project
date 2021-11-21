#ifndef ConcreteIterator_H
#define ConcreteIterator_H
#include "EngineIterator.h"

class ConcreteIterator:public EngineIterator
{
private:
    /* data */
public:
    ConcreteIterator(vector<Engine*>);
    Engine* next();
    bool hasNext();
    Engine* first();
    Engine* current();
    ~ConcreteIterator();
};

#endif
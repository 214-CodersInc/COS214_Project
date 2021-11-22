#include "EngineIterator.h"

EngineIterator::EngineIterator(vector<Engine*> lis)
{
    list=lis;
    currentPos=0;
}

EngineIterator::~EngineIterator()
{
}
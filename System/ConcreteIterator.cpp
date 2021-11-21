#include "ConcreteIterator.h"

ConcreteIterator::ConcreteIterator(vector<Engine*> lis):EngineIterator(lis)
{
}

Engine* ConcreteIterator::next()
{
    if(hasNext())
    {
        currentPos++;
        return list.at(currentPos);
    }
    else
    {
        return NULL;
    }
}

bool ConcreteIterator::hasNext()
{
    if(currentPos+1<list.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

Engine* ConcreteIterator::first()
{
    if(list.at(0)!=NULL)
    {
        return list.at(0);
    }
    else{
        return NULL;
    }
}

Engine* ConcreteIterator::current()
{
    return list.at(currentPos);
}

ConcreteIterator::~ConcreteIterator()
{
}
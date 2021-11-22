#include "EngineStore.h"


EngineStore::EngineStore(/* args */)  /// Constructor
{
}

void EngineStore::storeMemento(EngineMemento* sol)  ///restoring 
{
    memento=new EngineMemento(sol->getFuel(),sol->getTemp());
}

EngineMemento* EngineStore::retrieve()
{
    return memento;
}

EngineStore::~EngineStore()  ///Destructor
{
}

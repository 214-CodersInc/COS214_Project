#include "Launch.h"

Launch::Launch()  ///Constructor
{
}

void Launch::SetSuccessor(Launch* set)
{
    Succesor=set;
}

Launch* Launch::getSuccessor()
{
    return this->Succesor;
}

Launch::~Launch()  ///Destructor
{
}

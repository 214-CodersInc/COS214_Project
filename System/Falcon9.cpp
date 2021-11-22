#include "Falcon9.h"

Falcon9::Falcon9()
{
}


bool Falcon9::stage1Test()
{
    cout<<"Initiating stage1 test of a Falcon9"<<endl;
    return Rocket::stage1Test();
}

bool Falcon9::stage2Test()
{
    cout<<"Initiating Stage 2 test of Falcon 9"<<endl;
    return Rocket::stage2Test();
}

Falcon9::~Falcon9()
{
}
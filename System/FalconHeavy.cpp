#include "Falconheavy.h"

FalconHeavy::FalconHeavy()
{

}


bool FalconHeavy::stage1Test()  //
{
    cout<<"Initiating stage1 test of a FalconHeavy"<<endl;
    return Rocket::stage1Test();
}

bool FalconHeavy::stage2Test()
{
    cout<<"Initiating Stage 2 test of FalconHeavy"<<endl;
    return Rocket::stage2Test();
}

FalconHeavy::~FalconHeavy()
{
}

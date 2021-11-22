#include "Falconheavy.h"

FalconHeavy::FalconHeavy()     ///Constructor
{

}


bool FalconHeavy::stage1Test()  ///Stage1 test for Falcon heavy engine
{
    cout<<"Initiating stage1 test of a FalconHeavy"<<endl;
    return Rocket::stage1Test();
}

bool FalconHeavy::stage2Test()   ///Stage2 test for Falcon heavy engine
{
    cout<<"Initiating Stage 2 test of FalconHeavy"<<endl;
    return Rocket::stage2Test();
}

FalconHeavy::~FalconHeavy()   ///Destructor
{
}

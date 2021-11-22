#include "LaunchFalconHeavy.h"
#include "LaunchFalcon9.h"

using namespace std;

int main()
{
    Falcon9* f9=new Falcon9();
    FalconHeavy* FH=new FalconHeavy();

    LaunchFalcon9* launch1=new LaunchFalcon9(f9);
    launch1->HandleRequest();
    LaunchFalconHeavy* launch2=new LaunchFalconHeavy(FH);
    launch2->HandleRequest();
    return 0;
}
#include "TurnOff.h"

TurnOff::TurnOff(Engine* e):Command(e)    ///The turnOff function that inherits from the command class
{

}

void TurnOff::execute()                 /// The execute function that triggers the receiver's engine OFF function  
{
    getReceiver()->Off();
}

void TurnOff::undo()                  ///The undo function that triggers the receiver's ON function
{
    getReceiver()->On();
}

TurnOff::~TurnOff()                 ///The destructor
{

}

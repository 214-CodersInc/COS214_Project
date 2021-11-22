#include "TurnOn.h"

TurnOn::TurnOn(Engine* e):Command(e)      ///The turnOn fuction that inherits from the command class
{
}

void TurnOn::execute()                  /// The execute function that triggers the receiver's engine ON function
{
    getReceiver()->On();
}

void TurnOn::undo()                   /// The undo function that triggers the receiver's engine OFF function
{
    getReceiver()->Off();
}

TurnOn::~TurnOn()                    /// The destructor
{
}

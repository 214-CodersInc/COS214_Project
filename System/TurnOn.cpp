#include "TurnOn.h"

TurnOn::TurnOn(Engine* e):Command(e)
{
}

void TurnOn::execute()
{
    getReceiver()->On();
}

void TurnOn::undo()
{
    getReceiver()->Off();
}

TurnOn::~TurnOn()
{
}
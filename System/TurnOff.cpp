#include "TurnOff.h"

TurnOff::TurnOff(Engine* e):Command(e)
{

}

void TurnOff::execute()
{
    getReceiver()->Off();
}

void TurnOff::undo()
{
    getReceiver()->On();
}

TurnOff::~TurnOff()
{

}
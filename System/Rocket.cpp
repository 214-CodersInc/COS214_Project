#include "Rocket.h"

Rocket::Rocket()
{
}

void Rocket::addMerlinEngine(Engine* e)
{
   // numEngines++;
    MerlinEngines.push_back(e);
}

void Rocket::addVacuumEngine(Engine* e)
{
    //numEngines++;
    VacuumEngines.push_back(e);
}

EngineIterator* Rocket::createIterator(vector<Engine*> lis)   //creating a new Itertar
{
    return new ConcreteIterator(lis);
}

bool Rocket::stage1Test()
{
    cout<<"Stage 1:Merlin engines static fire test is initiated!"<<endl;
    bool ok=false;
    int index=1;
    EngineIterator* it=createIterator(MerlinEngines);
    //Iterator Design Pattern
    Engine* temp=it->first();
    while(temp!=NULL)  //first engine
    {
        TurnOn* TO=new TurnOn(temp);    //COMMAND DESIGN PATTERN
        TO->execute();

        if(temp->testEngine())
        {
            cout<<"Merlin Engine "<<index++<<" is fully functional"<<endl;
        }
        else
        {
            cout<<"Merlin engine "<<index++<<" is faulty and needs to be repaired or replaced"<<endl;
            return false;
        }
        temp=it->next();
       TO->undo();
    }
    return true;
}

bool Rocket::stage2Test()
{
    cout<<endl;
    cout<<"Stage 2:Vacuum Engine static Test is initiated."<<endl;
    bool ok=false;
    int index=1;
    EngineIterator* it=createIterator(MerlinEngines);
    //Iterator Design Pattern
    Engine* temp=it->first();
    while(temp!=NULL)  //first engine
    {
        TurnOn* TO=new TurnOn(temp);    //COMMAND DESIGN PATTERN
        TO->execute();

        if(temp->testEngine())
        {
            cout<<"Vacuum Engine "<<index++<<" is fully functional"<<endl;
        }
        else
        {
            cout<<"Vacuum engine "<<index++<<" is faulty and needs to be repaired or replaced"<<endl;
            return false;
        }
        temp=it->next();
       TO->undo();
    }
    return true;
}

Rocket::~Rocket()
{
}

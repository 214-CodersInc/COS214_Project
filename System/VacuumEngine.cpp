#include "VacuumEngine.h"

VacuumEngine::VacuumEngine(int num1,int num2,int num3,int num4):Engine(num1,num2,num3,num4)  //Constructor initialising the status of the engine
{
    status=false;
}

Engine* VacuumEngine::clone()   //Clone function to duplicate the vacuum engine 
{
    return new VacuumEngine(this->temp,this->pressure,this->fGradient,this->fuel);
}

bool VacuumEngine::testEngine()  //Test engine function to test all aspects of the vacuum engine
{
    if(on)
    {
        EngineStore* storage=new EngineStore();
        storage->storeMemento(this->createMemento());    //store the Initial Temp and fuel of engine before testing
        fuel-=28; 
        temp+=8;
        if(fGradient>=30 && fGradient<60)  //Flow gradi3ent between 30 and 40
        {
            status=true;
            if(pressure>=50 && pressure<100 && status)  //oil pressure  between 30 and 100 
            {
                fuel-=28;
                temp+=10;
                if(temp>=200 && temp<350 && status)  //Temperature between 200 and 350
                {

                    retrieveMemento(storage->retrieve());     //restore the original fuel and temperature values 
                }
                else
                {
                    cout<<"Vacumm Engine  had abnormal Temperature"<<endl;
                    status=false;
                }

            }
            else
            {
                cout<<"Vacuum Engine  had abnormal Oil pressure"<<endl;
                status=false;
            }
        }
        else
        {
            cout<<"Vacuum Engine  had abnormal flow gradient"<<endl;
            status=false;
        }

        
        return status;
    }
    else
    {
        cout<<"Please switch Engine on"<<endl;
        status=false;
        return false;
    }
}

VacuumEngine::~VacuumEngine()  //Destructor
{
}

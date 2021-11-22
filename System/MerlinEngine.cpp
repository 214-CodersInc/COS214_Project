#include "MerlinEngine.h"

MerlinEngine::MerlinEngine(int num1 ,int num2,int num3,int num4):Engine(num1,num2,num3,num4)  //Constructor
{
}
Engine* MerlinEngine::clone()    // The clone function to duplicate the merlin engine
{
    return new MerlinEngine(this->temp,this->pressure,this->fGradient,this->fuel);
}

bool MerlinEngine::testEngine()   //Test engine function to test all the aspects of the merlin engine
{
    if(on)
    {
        EngineStore* storage=new EngineStore();
        storage->storeMemento(this->createMemento());    //store the Initial Temp and fuel of engine before testing
        fuel-=25; 
        temp+=4;
        if(fGradient>=30 && fGradient<40)  //Flow gradi3ent between 30 and 40
        {
            status=true;
            if(pressure>=30 && pressure<50 && status)  //oil pressure  between 30 and 50 
            {
                fuel-=25;
                temp+=4;
                if(temp>=200 && temp<250 && status)  //Temperature between 200 and 250
                {
                    retrieveMemento(storage->retrieve());     //restore the original fuel and temperature values
                }
                else
                {
                    cout<<"Merlin Engine  had abnormal Temperature"<<endl;
                    status=false;
                }

            }
            else
            {
                cout<<"Merlin Engine  had abnormal Oil pressure"<<endl;
                status=false;
            }
        }
        else
        {
            cout<<"Merlin Engine  had abnormal flow gradient"<<endl;
            status=false;
        }

        
        return status;
    }
    else
    {
        cout<<"Engine is not on"<<endl;
        status=false;
        return false;
    }
}

MerlinEngine::~MerlinEngine()   //Destructor
{
}

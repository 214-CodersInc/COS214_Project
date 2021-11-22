#include "LaunchSimulator.h"

LaunchSimulator::LaunchSimulator(/* args */)  //Constructor
{
}

void LaunchSimulator::addRocket(Rocket* roc)  //Adding Rockets to the Launch Simulator
{
    rockets.push_back(roc);
}

bool LaunchSimulator::testRocket(int i)   //Testing the Rocket
{
    int j=0;
    vector<Rocket*>::iterator it;

    for(it=rockets.begin();it<rockets.end();it++)
    {
        if(j==i)  //rocket found
        {
            if((*it)->stage1Test())
            {
                cout<<"=====The rocket has been launched halfway into orbit====="<<endl;
                if((*it)->stage2Test())
                {
                    cout<<"The rocket has been succefully launched into the orbit"<<endl;
                    cout<<endl;
                    return true;
                    
                }
                else{
                    cout<<"The Rocket has failed the stage 2 test"<<endl;
                }
            }
            else{
                cout<<"The rocket has failed stage 1 test"<<endl;
            }
            return false;
        }
        else
        {
            j++;
        }
    }
    return true;
}

bool LaunchSimulator::batchTest()   //Batch Testing the Rocket
{
    int j=1;
    vector<Rocket*>::iterator it;
    bool launch=false;

    for(it=rockets.begin();it<rockets.end();it++)
    {
        cout<<"Simulating Rocket "<<j<<endl;
        if((*it)->stage1Test())
        {
            cout<<"The rocket "<<j<<" has been launched halfway into orbit"<<endl;
            if((*it)->stage2Test())
            {
                cout<<"The rocket has been succefully launched into the orbit"<<endl;
                launch=true;  //succesful launch simulation
            }
            else
            {
                cout<<"Rocket "<<j<<"failed stage 2 test"<<endl;
                launch=false;
            }
        }
        else
        {
            cout<<"Rocket "<<j<<"failed stage 1 test"<<endl;
            launch=false;
        }
       j++;
    }
    return launch;
}

void LaunchSimulator::launchRocket(int i)   //Launching the rocket to orbit
{
    if(testRocket(i))
    {
        cout<<"The Rocket was succesfully Launched "<<endl;
    }
    else
    {
        cout<<"The Rocket has failed to launch"<<endl;
    }
}

void LaunchSimulator::batchLaunch()   //Launching multiple rockets at once
{
    if(batchTest())
    {
        cout<<"All rockets were succesfully launched"<<endl;
    }
    else{
        cout<<"Some Rockets couldn't launch"<<endl;
    }
}

LaunchSimulator::~LaunchSimulator()  // Destructor
{
}

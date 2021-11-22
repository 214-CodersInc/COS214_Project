#include "LaunchSimulator.h"

LaunchSimulator::LaunchSimulator(/* args */)
{
}

void LaunchSimulator::addRocket(Rocket* roc)
{
    rockets.push_back(roc);
}

void LaunchSimulator::testRocket(int i)
{
    int j=0;
    vector<Rocket*>::iterator it;

    for(it=rockets.begin();it<rockets.end();it++)
    {
        if(j==i)  //rocket found
        {
            if((*it)->stage1Test())
            {
                cout<<"The rocket has been launched halfway into orbit"<<endl;
                if((*it)->stage2Test())
                {
                    cout<<"The rocket has been succefully launched into the orbit"<<endl;
                }
            }
        }
        else
        {
            j++;
        }
    }

}

LaunchSimulator::~LaunchSimulator()
{
}
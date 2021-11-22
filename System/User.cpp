#include "User.h"
#include<iostream>

using namespace std;

User::User(/* args */)
{
}

User::User(string userName)
{
    this->userName= userName;
}

User::~User()
{
}

void User::setName(string Name)
{
    userName= Name;
}

string User::getName()
{
    return userName;
}

void User::attach(Satellite* sat)
{
    if(satellites.size() != satellites.max_size())
    {
        satellites.push_back(sat);
    }
}

void User::detach(Satellite* sat)
{
    if(satellites.empty()==false )          //IF THE LIST IS NOT EMPTY
    {
       bool found = false;

        vector<satellites*>::iterator it = satellites.begin();

        while ((it != satellites.end()) && (!found)) {
            
            if ( *it == sat) {
                found = true;
                satellites.erase(it);
            }

            ++it;
        }
    }

}

void User::notify()
{
    //sendSignal() and receive signal

}

#include "User.h"
#include<iostream>

using namespace std;

User::User(/* args */)                                  //DEFAULT CONSTRUCTOR
{
}

User::User(string userName)
{
    this->userName= userName;
}

User::~User()
{
}

void User::setName(string Name)                         //SETTER FOR NAME
{
    userName= Name;
}

string User::getName()                                 //GETTER FOR NAME
{
    return userName;
}

void User::attach(Satellite* sat)                      //ATTACH SETALLITE TO THE LIST
{
    if(satellites.size() != satellites.max_size())
    {
        satellites.push_back(sat);
    }
}

void User::detach(Satellite* sat)                       //DETACH FROM THE LIST
{
    if(satellites.empty()==false )                     //IF THE LIST IS NOT EMPTY
    {
       bool found = false;

        vector<Satellite*>::iterator it = satellites.begin();

        while ((it != satellites.end()) && (!found)) {
            
            if ( *it == sat) {
                found = true;                           //IF FOUND
                satellites.erase(it);
            }

            ++it;
        }
    }

}

void User::notify()                                 //NOTIFY SATELLITE
{
    //sendSignal() and receive signal
     vector<Satellite*>::iterator it = satellites.begin();

  for (it = satellites.begin(); it != satellites.end(); ++it){
    (*it)->sendSignal();

}
}

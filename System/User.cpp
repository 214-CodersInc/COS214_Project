#include "User.h"
#include<iostream>

using namespace std;

User::User(/* args */)                      //DEFAULT CONSTRUCTOR
{
}

User::User(string userName)
{
    this->userName= userName;
}

User::~User()
{
}

void User::setName(string Name)                     //A SETTER FOR NAME
{
    userName= Name;
}

string User::getName()                             //A GETTER FOR NAME
{
    return userName;
}

void User::attach(Satellite* sat)                 //ATTACH TO ADD A SATELLITE
{
    if(satellites.size() != satellites.max_size())
    {
        satellites.push_back(sat);
    }
}

void User::detach(Satellite* sat)                   //REMOVES SETALLITE
{
    if(satellites.empty()==false )                  //IF THE LIST IS NOT EMPTY
    {
       bool found = false;

        vector<Satellite*>::iterator it = satellites.begin();

        while ((it != satellites.end()) && (!found)) {
            
            if ( *it == sat) {
                found = true;                           // FOUND
                satellites.erase(it);
            }

            ++it;
        }
    }

}

void User::notify()
{
    //sendSignal() and receive signal
     vector<Satellite*>::iterator it = satellites.begin();

  for (it = satellites.begin(); it != satellites.end(); ++it){
    (*it)->sendSignal();            //NOTIFY EACH SATELLITE IN satellites vector

}
}

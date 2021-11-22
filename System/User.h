#ifndef User_H
#define User_H
#include<string>
#include<vector>
#include "Satellite.h"
#include "Mediator.h"

class User: public Mediator
{
private:
    /* data */
    vector<Satellite*> satellites;
    string userName;

public:
    User(/* args */);
    User(string userName);
    void attach(Satellite*);
    void detach(Satellite*);
    void notify();
    void setName(string);
    string getName();
    ~User();
};
#endif

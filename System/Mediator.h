
#ifndef Mediator_H
#define Mediator_H
#include<string>

using namespace std;
class Mediator
{
private:
    /* data */
public:
    Mediator(/* args */);
    virtual void notify()=0;
    virtual string getName()=0;
    ~Mediator();
};

#endif

#ifndef Mediator_H
#define Mediator_H

class Mediator
{
private:
    /* data */
public:
    Mediator(/* args */);
    virtual void notify()=0;
    ~Mediator();
};

#endif
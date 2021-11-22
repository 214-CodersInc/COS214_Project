#ifndef Humans_H
#define Humans_H
#include "Load.h"

using namespace std;

class Humans :public Load
{
public:
    Humans(int capacity); //Refer to load constructor
    virtual bool test();
    virtual bool receive();
    ~Humans();
};

#endif
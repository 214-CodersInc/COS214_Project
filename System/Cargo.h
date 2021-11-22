#ifndef Cargo_H
#define Cargo_H
#include "Load.h"

using namespace std;

class Cargo :public Load
{
public:
    Cargo(int capacity);  //Refer to load constructor
    virtual  bool test();
    virtual bool receive();
    ~Cargo();
};

#endif
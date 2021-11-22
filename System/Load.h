#ifndef Load_H
#define Load_H

using namespace std;

class Load
{
public:
    Load(int loadCapacity);
    int loadCapacity;
    bool received;
    void setCapacity(int c);
    void setReceipt(bool b);  //Setter function to set "received" attribute
    virtual bool receive()=0;
    virtual bool test()=0;
    virtual ~Load();

};

#endif
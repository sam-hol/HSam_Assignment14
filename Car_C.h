#ifndef Car_C_H
#define Car_C_H

#include "Vehicle_C.h"

class Car_C :
    public Vehicle_C
{
private:
    int doorCount;

public:
    Car_C();
    Car_C(int);
    Car_C(int, string, int);

    int Get_Doors() const;
    void Set_Doors(int);

    virtual void Display_Info() const;
};

#endif


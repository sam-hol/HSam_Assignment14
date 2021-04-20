#ifndef Car_C_H
#define Car_C_H

#include "Vehicle_C.h"

class Car_C :
    public Vehicle_C
{
private:
    int doorCount;

public:
    Car_C(); //default constructor
    Car_C(int); //constructor accpeting doorCount, using default vehicle constructor
    Car_C(int, string, int); //constructor accepting arguments for all parameters

    int Get_Doors() const; //returns doorCount
    void Set_Doors(int); //sets doorCount

    virtual void Display_Info() const; //redefinition of Display_Info including doorCount
};

#endif


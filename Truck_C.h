#ifndef Truck_C_H
#define Truck_C_H

#include "Vehicle_C.h"

class Truck_C :
    public Vehicle_C
{
private:
    double towCapacity;

public:
    Truck_C(); //default constructor
    Truck_C(double); //constructor accepting towCapacity, default vehicle constructor
    Truck_C(double, string, int); //constructor accepting arguments for all parameters

    double Get_Towing() const; //returns towCapacity
    void Set_Towing(double); //sets towCapacity

    virtual void Display_Info() const; //redefinition of Display_Info including towCapacity
};

#endif


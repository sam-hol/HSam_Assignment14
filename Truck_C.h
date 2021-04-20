#ifndef Truck_C_H
#define Truck_C_H

#include "Vehicle_C.h"

class Truck_C :
    public Vehicle_C
{
private:
    double towCapacity;

public:
    Truck_C();
    Truck_C(double);
    Truck_C(double, string, int);

    double Get_Towing() const;
    void Set_Towing(double);

    virtual void Display_Info() const;
};

#endif


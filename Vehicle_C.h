#ifndef Vehicle_C_H
#define Vehicle_C_H

#include <string>
#include <iostream>

using namespace std;

class Vehicle_C
{

private:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle_C();
	Vehicle_C(string, int);

	string Get_Make() const;
	int Get_Built() const;

	void Set_Make(string);
	void Set_Built(int);

	virtual void Display_Info() const;
};

#endif

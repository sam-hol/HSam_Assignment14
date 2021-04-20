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
	Vehicle_C(); //default constructor
	Vehicle_C(string, int); //constructor accepting arguments for both manufacturer and yearBuilt
	Vehicle_C(string); //constructor accepting argument for manufacturer
	Vehicle_C(int); //constructor accepting argument for yearBuilt

	string Get_Make() const;
	int Get_Built() const;

	void Set_Make(string);
	void Set_Built(int);

	virtual void Display_Info() const; //prints manufacturer and yearBuilt to console
};

#endif

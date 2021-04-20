#include "Car_C.h"

Car_C::Car_C() : Vehicle_C() {
	doorCount = 0;
}

Car_C::Car_C(int doors) : Vehicle_C() {
	doorCount = doors;
}

Car_C::Car_C(int doors, string man, int year) : Vehicle_C(man, year) {
	doorCount = doors;
}

int Car_C::Get_Doors() const {
	return doorCount;
}

void Car_C::Set_Doors(int doors) {
	doorCount = doors;
}

void Car_C::Display_Info() const {
	cout << "\nVehicle Information:";
	cout << "\nManufacturer: " << Get_Make();
	cout << "\nYear Built: " << Get_Built();
	cout << "\nDoors: " << doorCount;
}
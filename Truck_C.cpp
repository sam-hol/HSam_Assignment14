#include "Truck_C.h"

Truck_C::Truck_C() : Vehicle_C() {
	towCapacity = 0;
}

Truck_C::Truck_C(double towCap) : Vehicle_C() {
	towCapacity = towCap;
}

Truck_C::Truck_C(double towCap, string man, int year) : Vehicle_C(man, year) {
	towCapacity = towCap;
}

double Truck_C::Get_Towing() const {
	return towCapacity;
}

void Truck_C::Set_Towing(double towCap) {
	towCapacity = towCap;
}

void Truck_C::Display_Info() const {
	cout << "\nVehicle Information:";
	cout << "\nManufacturer: " << Get_Make();
	cout << "\nYear Built: " << Get_Built();
	cout << "\nTowing Capacity: " << towCapacity;
}
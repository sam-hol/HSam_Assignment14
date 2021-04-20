#include "Vehicle_C.h"

Vehicle_C::Vehicle_C() {
	manufacturer = "";
	yearBuilt = 0;
}

Vehicle_C::Vehicle_C(string man, int year) {
	manufacturer = man;
	yearBuilt = year;
}

Vehicle_C::Vehicle_C(string man) {
	manufacturer = man;
	yearBuilt = 0;
}

Vehicle_C::Vehicle_C(int year) {
	manufacturer = "";
	yearBuilt = year;
}

string Vehicle_C::Get_Make() const {
	return manufacturer;
}

int Vehicle_C::Get_Built() const {
	return yearBuilt;
}

void Vehicle_C::Set_Make(string man) {
	manufacturer = man;
}

void Vehicle_C::Set_Built(int year) {
	yearBuilt = year;
}

void Vehicle_C::Display_Info() const {
	cout << "\nVehicle Information:";
	cout << "\nManufacturer: " << manufacturer;
	cout << "\nYear Built: " << yearBuilt;
}
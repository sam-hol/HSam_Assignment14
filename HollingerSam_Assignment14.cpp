/*
Sam Hollinger
CIS1202-NR1
April 19, 2021
*/

#include "Truck_C.h"
#include "Car_C.h"

int main() {
	string make;
	int doors, buildYear;
	double towCap;

	cout << "\nVEHICLE:";
	cout << "\nInput the manufacturer for vehicle:> ";
	getline(cin, make);
	cout << "\nInput the build year for vehicle:> ";
	cin >> buildYear;

	Vehicle_C vehicle(make, buildYear);
	vehicle.Display_Info();

	cout << "\n\nCAR:";
	cout << "\nInput the manufacturer for car:> ";
	cin.ignore();
	cin.clear();
	getline(cin, make);
	cout << "\nInput the build year for car:> ";
	cin >> buildYear;
	cout << "\nInput the number of doors for car:> ";
	cin >> doors;

	Car_C car(doors, make, buildYear);
	car.Display_Info();

	cout << "\n\nTRUCK:";
	cout << "\nInput the manufacturer for truck:> ";
	cin.ignore();
	cin.clear();
	getline(cin, make);
	cout << "\nInput the build year for truck:> ";
	cin >> buildYear;
	cout << "\nInput the towing capacity of truck:> ";
	cin >> towCap;

	Truck_C truck(towCap, make, buildYear);
	truck.Display_Info();

	cout << "\n\n";
	system("pause");
	return 0;
}
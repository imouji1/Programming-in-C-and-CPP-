#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;

	//new parameter
	string gender;
	int age;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	//using the new parameter setters
	cout << "Gender: ";
	getline(cin, gender);
	c.setGender(gender);
	cout << "Age: ";
	cin >> age;
	c.setAge(age);

	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}

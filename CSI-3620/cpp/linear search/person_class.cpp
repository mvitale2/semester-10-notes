#include "person.h"
#include <iostream>
using namespace std;

Person::Person(const string& newName, const string& id, const int& bank) {
	name = newName;
	idNum = id;
	bankAcct = bank;
}

// Person print function
void Person::print() {
	cout << "Name: " << name << endl;
	cout << "IDNum: " << idNum << endl;
	cout << "Bank Account in Person: " << bankAcct << endl;
}

// Define a getter function for a private class attribute
string Person::getName() {
	return name;
}
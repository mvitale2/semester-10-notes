#include "person.h"
#include "student.h"
#include <iostream>
using namespace std;

Student::Student(const string& newName, const string& id, const int& bank, const string& newMajor, 
	const int& year) : Person(newName, id, bank) { // Calls parent constructor for first 2 parameters

	// Now in the Student constructor, handle the Student-only attributes
	major = newMajor;
	gradyear = year;
}


void Student::print() {
	Person::print(); // call the parent function for this class object

	// This will not work: 
	// cout << "Name: " << name << endl;

	// Then print out the Student-specific attributes
	cout << "Major: " << major << endl;
	cout << "Year: " << gradyear << endl;

	// Let's try to access the protected parent member through the child class
	cout << "Bank account Student: " << bankAcct << endl;
}

// This is called a setter function (used to change values of private class attributes)
void Student::changeMajor(const string& newMajor) {
	major = newMajor;
}
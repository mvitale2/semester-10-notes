#include "person.h"
#include "student.h"

#include <iostream>
using namespace std;

int main() {
	// Create a person
	Person person("SpongeBob", "12234", 13475908);

	// Create a student
	Student student("Squidward", "149857", 134984, "Clarinet", 2045);	

	// Call person-specific functions
	person.print();
	cout << person.getName() << endl;
	// This will return an error:
	// person.changeMajor("Driving");

	// Let's try to access a protected member from the parent class
	// NOPE! It's protected, which means access through class obj directly is blocked
	// cout << person.bankAcct << endl;

	// Call student-specific functions
	student.print();
	student.changeMajor("Painting");
	student.print();
}
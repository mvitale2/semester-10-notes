// Description: We love pointers!
/* Expected output:
The value of grade is: 100
The value of grade_ptr is: <memory location>
The dereferenced value of grade_ptr is: 100. 
*/

#include <iostream>
using namespace std;

int main() {
	//Define a new integer variable
	
	int grade = 100;

	// Define a new pointer variable that points to an integer variable
	
	int* grade_ptr;

	// We have two unrelated variables
	// grade_ptr is a pointer that refers to the address of the grade variable
	grade_ptr = &grade;

	cout << "The value of grade is: " << grade << "\n";
	cout << "The value of grade_ptr is: " << grade_ptr << "\n";

	// Dereferencing pointers means to extract the value from the memory address
	// To dereference: *pointer_name
	cout << "The dereferenced value of grade_ptr is: " << *grade_ptr << ".\n";
}

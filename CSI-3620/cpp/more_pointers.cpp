// Description: Get more practice with pointers

#include <iostream>
using namespace std;

int main() {
	// Define a normal variable
	char ch = 'h';
	// Define a pointer that refers to the memory location of the ch variable
	char* p = &ch;
	// Print the value of the pointer
	cout << "Memory location: " << p << "\n";
	// Print the value of the dereferenced pointer
	cout << "Value of pointer: " << *p << "\n";
	// Modify the value of the variable with the pointer
	*p = 's';
	cout << "New value of the variable: " << ch << "\n";
	cout << "New value of the pointer: " << *p << "\n";
}

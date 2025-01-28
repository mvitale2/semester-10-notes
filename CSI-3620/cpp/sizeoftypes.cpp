// Description: Find how much space each data type takes up in memory.

#include <iostream>
using namespace std;

int main() {
	// Declare variables
	bool a;
	char b;
	short c;
	int d;
	long e;
	float f;
	double g;

	// Print the size
	cout << "bool: " << sizeof(a) << "\n";
	cout << "char: " << sizeof(b) << "\n";
	cout << "short: " << sizeof(c) << "\n";
	cout << "int: " << sizeof(d) << "\n";
	cout << "long: " << sizeof(e) << "\n";
	cout << "float: " << sizeof(f) << "\n";
	cout << "double: " << sizeof(g) << "\n";
}

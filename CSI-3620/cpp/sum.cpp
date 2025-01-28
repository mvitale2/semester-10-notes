/* Filename: sum.cpp
 * Description: Takes two numbers as input then returns the sum
 */
#include <cstdlib>
#include <iostream>

using namespace std; // shortcut for std::cout & std::cin

int main() {
	int x, y; // the two numbers
	// Prompt the user for input
	cout << "Please enter two numbers: ";
	// Get the input
	cin >> x >> y;
	// Define output variables
	int sum = x + y;
	// Print the sum
	cout << x << " plus " << y << " is " << sum << std::endl;
	// Specify an exit code
	return EXIT_SUCCESS;
}

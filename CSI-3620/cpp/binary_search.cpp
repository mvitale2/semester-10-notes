/* Filename: binarySearch.cpp
 * Description: Implement binary search to find an element in an array
 */

#include <iostream>
using namespace std;

// Define a global constant
const int ARRAY_SIZE = 10;
bool binarySearch(int list[], int size, int element);

int main() {
	// Define the array to be searched
	int grades[] = {62, 65, 74, 77, 80, 83, 88, 91, 93, 98};	

	// Get element to find from the user
	int userInput = 0;

	cout << "Enter an item to search for: ";
	cin >> userInput;

	if (binarySearch(grades, ARRAY_SIZE, userInput))
		cout << userInput << " was found in the grades list!\n";
	else
		cout << userInput << " was not found in the grades list\n";
}

bool binarySearch(int list[], int size, int element) {
	// Save the indices of our search space
	int lower = 0;
	int upper = size - 1;

	// Initialize mid to 0 for now, will update before we do our first comparison
	int mid = 0;

	// Keep track of the number of comparisons 
	int comparisons = 0;

	// Keep comparing until the high and low indices are flipped (meaning element not found)
	while (lower <= upper) {
		// Update our middle comparison point; rely on integer division to round down
		mid = (upper + lower) / 2;

		cout << "Number of comparisons in binary search: " << ++comparisons << endl;
		// We found our element!
		if (element == list[mid]) {
			return true;
		}
		else if (element < list[mid]) {
			upper = mid - 1;
		}
		else {
			lower = mid + 1;
		}

	}
	// If we get to this point, then the element was not found
	return false;
}

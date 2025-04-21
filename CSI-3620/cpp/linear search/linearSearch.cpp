/* Filename: linearSearch.cpp
 * Description: Implement linear search in an array
 */

#include <iostream>
#include <string>
using namespace std;

// Declare our linear search function
bool linearSearch(string list[], int size, string element);

int main() {
	string avengers[] = {"Captain_America", "Hulk", "Thor", "Iron_Man", "Black_Widow", "Hawkeye"};

	string user_input = "";

	cout << "\nEnter an Avenger to search (use underscores for spaces): ";
	// This will backfire with spaces, use underscores
	cin >> user_input;

	if (linearSearch(avengers, 6, user_input))
		cout << user_input << " is in the Avengers!\n";
	else
		cout << user_input << " is not in the Avengers :(\n";

	cout << avengers[5] << endl;
}

bool linearSearch(string list[], int size, string element) {
	int numComparisons = 0;
	for (int i=0; i<size; i++) {
		cout << "Num comparisons: " << ++numComparisons << endl;
		if (element == list[i])
			return true;
	}
	return false;
}

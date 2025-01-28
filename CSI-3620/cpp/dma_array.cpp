// Description: How to create an array using DMA

#include <iostream>
using namespace std;

int main() {
	// Declare a normal empty array using stack memory
	// string star_wars[7];

	// Declare an empty array of pointers using stack memory
	// string* star_wars[7];

	// Declare an empty array of pointers with DMA
	string* star_wars = new string[4];

	// Fill the empty array
	star_wars[0] = "Rogue One";
	star_wars[1] = "A New Hope";
	star_wars[2] = "The Empire Strikes Back";
	star_wars[3] = "Return of the Jedi";

	// Print out contents of the heap
	cout << "The best star wars movie is: " << star_wars[0] << endl;
	cout << "The second best star wars movie is: " << star_wars[2] << endl;

	// muy importante, the brackets are used when the variable is an array
	delete [] star_wars;
}
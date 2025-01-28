// Description: Uses enumerated types.

/* Expected Output:
Silly movie: 1.
My favorite class: 2.
*/

#include <iostream>
using namespace std;

int main() {
	// Declare enums. Each value in the enum is in caps in order to declare it as a constant. 
	enum LOTR { FELLOWSHIP, TOWERS, KING };
	enum DDCLASSES { RANGER, BARBARIAN, WIZARD, SORCERER, CLERIC, FIGHTER, PALADIN, MONK };
	
	// Create a variable that is enum data type 1
	LOTR movie = TOWERS;
	cout << "Silly movie: " << movie << ".\n";
	DDCLASSES character = WIZARD;
	cout << "My favorite class: " << character << ".\n";
}

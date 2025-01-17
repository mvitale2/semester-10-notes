1. On my machine, the size of an `int` is 4 bytes.
2. Another use for the enum type is to store car gears. Example:
```c++
#include <iostream>
use namespace std;

enum GEARS {PARK, DRIVE, NEUTRAL, REVERSE}
GEARS current_gear = PARK
cout << "Current gear: " << current_gear

// expected output: Current gear: 0
```
3. An integer pointer variable contains the value of the memory location of the standard integer variable. The size of the pointer variable will also be different than the standard variable. 
4. The `&` operator sets a variable equal to the memory location of the variable that comes after `&`.  
   The `*` operator has two use cases:
   1. It defines a variable as a pointer.
   2. It is used to de-reference a pointer, which prints the current value instead of the memory location. 
5. Arrays store values of any type, such as `string` or `int`. 
   Enums allow the programmer to create their own "types." A variable declared with a type of an `enum` can only have a value stored within the `enum`. 
   Structures or `struct` are a way to declare pseudo-objects in C++. You define a template of an object and can assign values to attributes of that object. Example:
```c++
struct house {
	string street
	string family
	int entrances
	int windows
} house1

house1.street = "main";
house1.family = "smiths";
house1.entrances = 4;
house1.windows = 10;
```
6. Debug the code:
```c++
int main() { // Declare final grade categories 

float assignments, midterm, finalexam; 

// Assign values to each grade 
assignments = 0.9; midterm = 0.83; finalexam = 0.87; 

// Declares three new pointer variables that are initially empty 
float* assignments_ptr, midterm_ptr, final_ptr; 

// Define pointers to point to each corresponding grade 
assignments_ptr = &assignments; 
midterm_ptr = &midterm; 
final_ptr = &finalexam; 
}
```
**Description of the problem:** The error arises because a memory address cannot be assigned to a variable declared as a `float`. This suggests that the way the pointer variables are declared is incorrect. 
**How to solve it:** To fix the issue, they need to be declared like so:
```c++
// Declares three new pointer variables that are initially empty
float* assignments_ptr;
float* midterm_ptr;
float* final_ptr;
assignments_ptr = &assignments;
midterm_ptr = &midterm;
final_ptr = &finalexam;
```
7. Debug the code:
```c++
int main() { 
// Create empty array of employees string 
employees[]; 
// Fill array with employee names 
employees[0] = "Jacob Peralta"; 
employees[1] = "Amy Santiago";
employees[2] = "Rosa Diaz"; 
employees[3] = "Raymond Holt"; 
}
```
**Description of the problem:** The `employees[]` array is not properly declared. When an empty array is declared in C, its index size must be specified.  
**How to fix it:** The array needs a type declaration as well as an index number.
```c++
string employees[4];
```
8. Debug the code:
```c++
int main() { 
	// Declares a non-empty array 
	// First column represents course number 
	// Second column represents section number 
	// Third column represents GPA grade received 
	float transcript[3][2]; 
	// Fill in 2-D array with info for CSI 3620 
	transcript[0][0] = 3620;
	transcript[0][1] = 14667;
	transcript[0][2] = 3.7;
	// Fill in array with info for CSI 4660 
	transcript[1][0] = 4660; 
	transcript[1][1] = 42259; 
	transcript[1][2] = 3.9; 
}
```
**Description of the problem:** Arrays in C++ start at 0, so it isn't necessary to declare the first column with an index of 3. 
**How to fix it:** Change `float transcript[3][2]` to `float transcript[2][2]`.
9. Debug the code:
```c++
#include <iostream> 
using namespace std; 
int main() { 
	// Declares an array of video games 
	string video_games[] = {"Skyrim", "RDR2", "Mass Effect", "Witcher 3", "Age of Innocence"}; 
	// Create a pointer equal to the video_games array
	string* video_games_ptr = video_games; 
	// Create a pointer equal to the address of the first element of the video_games array 
	string* first_game_ptr = &video_games[0]; 
	// Prints out each variable, demonstrating that they all point to the same memory location 
	cout << "Printing video_games array: " << video_games << "\n"; 
	cout << "Printing video_games_ptr: " << video_games_ptr << "\n"; 
	cout << "Printing first_game_ptr: " << first_game_ptr << "\n\n"; 
	// Prints various values from array 
	cout << "Print RDR2 with video_games array: " << video_games[1] << "\n"; 
	cout << "Print Skyrim with video_games_ptr: " << *video_games_ptr << "\n"; 
	cout << "Print Age of Innocence with first_game_ptr: " << first_game_ptr + 5 << "\n"; 
}
```
**Description of the problem:** Adding 5 to the `first_game_ptr` just prints the memory location plus 5, not the string "Age of Innocence."
**How to fix it:** change `first_game_ptr + 5` to `first_game_ptr[4]`, which properly references the stored string. 
10. Debug the code:
```c++
#include <iostream> 
using namespace std; 
int main() { 
	// Declares structure to include various details about a movie struct 
	Movie { 
		string title; 
		int year_released; 
		float rating; 
	} 
	// Define Interstellar movie according to IMDB Movie
	favorite_movie = { "Interstellar"; 2014; 8.6 } 
}
```
**Description of the problem:** This is a syntax error. When instantiating `favorite_move`, commas are used instead of semicolons to separate each attribute. 
**How to fix it:** Use commas instead of semicolons when instantiating `favorite_movie`.
```c++
favorite_movie = { "Interstellar", 2014, 8.6 }
```
11. write code :)
```c++
/* Filename: a2_q11.cpp
* Author: Michael Vitale
* Description: Demonstrate how pointers work. 
*/

#include <iostream>
using namespace std;

int main() {
    // Declare float variable
    float a = 2.1;
    // Declare a float pointer variable
    float* a_ptr;
    // Assign the a variable to the pointer to point to a's memory location
    a_ptr = &a;

    // Print the stored memory size of a and a_ptr
    cout << sizeof(a) << endl; 
    cout << sizeof(a_ptr) << endl;
}
```
12. write code :)
```c++
/* Filename: a2_q12.cpp
* Author: Michael Vitale
* Description: String variable and pointer shenanigans
*/

#include <iostream>
using namespace std;

int main() {
    // Declare string variable & pointer
    string book = "The Crystal Shard";
    string* book_ptr;
    book_ptr = &book;
    
    // Print the variables
    cout << book << endl;
    cout << book_ptr << endl;
    cout << "Dereferenced pointer: " << *book_ptr << endl;

    // Modify the book string
    book = "House of Leaves";

    // Reprint the variables
    cout << book << endl;
    cout << book_ptr << endl;
    cout << "Dereferenced pointer: " << *book_ptr << endl;
}
```

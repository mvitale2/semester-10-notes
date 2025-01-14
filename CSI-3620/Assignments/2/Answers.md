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
5. `Arrays` store values of any type, such as `string` or `int`. 
   `Enums` allow the programmer to create their own "types." A variable declared with a type of an `enum` can only have a value stored within the `enum`. 
   `Structures` or `struct` are a way to declare pseudo-objects in C++. You define a template of an object and can assign values to attributes of that object. Example:
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
final_ptr = &final;
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
**Description of the problem:** The `employees[]` array is not properly declared. 
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
**Description of the problem:** 
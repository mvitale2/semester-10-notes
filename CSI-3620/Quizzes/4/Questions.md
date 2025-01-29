1. What would be printed to the screen if the following code were execute? In the event of a memory location, write "memory location of X", where X is a vlue stored at that memory location.
```c++
#include <iostream>
using namespace std;

int main() {
	string star_wars[] = {"A New Hope", "Empire Strikes Back", "Return of the Jedi"};
	string* star_wars_ptr1 = star_wars;
	string* star_wars_ptr2 = &star_wars[1];

	cout << star_wars << endl; // #1
	cout << star_wars_ptr2 << endl; // #2
	cout << star_wars_ptr2 << endl; // #3
	cout << &star_wars[1] << endl; // #4
	cout << star_wars_ptr1[1] << endl; //#5
	cout << star_wars_ptr2[1] << endl; // #6
}
```
Expected output
#1: 
#2: 
#3: 
#4: 
#5: 
#6: 
2. Write C++ code in the main function below that:
   - Defines 3 integers with initial values (can be anything)
   - Creates an empty array of 3 integer pointers
   - Links each element in your pointer array to the memory location of your 3 integers from part A.
   - Prints one of the integer values using the pointer (i.e. do not use one of the integer variables)
```c++
#include <iostream>
using namespace std;

int main() {
	
}
```
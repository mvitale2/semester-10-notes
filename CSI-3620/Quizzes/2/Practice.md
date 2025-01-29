1. What is the difference between the `float` and `double` data types in C++?
   Both float and double store floating point numbers, but double has a higher limit than float does. 
2. What would the following code output?
```c++
#include <iostream>
using namespace std;

int main() {
	enum Games {RDR2, STARDEW, DISHONORED, HALO};

	Games fav_game = RDR2
	cout << "My overall favorite video game is: " << fav_game << "\n";
	fav_game = DISHONORED;
	cout << "My favorite stealth video game is: " << fav_game << "\n";
}
```
This code would output: `0\n2`
3. Write C++ code in the main function below that:
	- Creates a double variable called **gpa**, with a value of anything you like
	- Creates a double pointer variable called **gpa_pointer**, and sets the pointer equal to the memory address of **gpa**
	- Prints the value of **gpa**
	- Prints the value of **gpa_ptr**
	- Prints the dereferenced value of **gpa_ptr**
```c++
#include <iostream>
using namespace std;

int main() {
	double gpa = 3.9;
	double* gpa_ptr = &gpa;
	cout << gpa << endl;
	cout << gpa_pointer << endl;
	cout << *gpa_pointer << endl;
}
```

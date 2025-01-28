1. What is the difference between the `float` and `double` data types in C++?
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
3. Write C++ code in the main function below that:
	- Creates a double variable called **gpa**, with a value of anything you like
	- Creates a double pointer variable called **gpa_pointer**, and sets the pointer equal to the memory address of **gpa**
	- Prints the value of **gpa**
	- Prints the value of **gpa_ptr**
	- Prints the dereferenced value of **gpa_ptr**

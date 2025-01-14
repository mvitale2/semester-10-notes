1. What is the difference between the `float` and `double` data types in C++?
   They both store decimal numbers, except `double` can store twice as much. 
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
The output would be:
```
My overall favorite video game is: 0
My favorite stealth video game is: 2
```
3. Write C++ code in the main function below that demonstrates knowledge of how pointers work
```c++
double gpa = 3.99;
double* gpa_ptr = &gpa;

cout << gpa;
cout << gpa_ptr;
cout << *gpa_ptr;
```
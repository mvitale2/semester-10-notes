1. Describe the error in the following code:
```c++
#include <iostream>
using namespace std;

int main() {
	double gpa = 3.97;
	void* void_ptr = &gpa;

	coout << "Value of void_ptr: " << void_ptr << "\n";
	cout << "Dereferenced value of void_ptr: " << *void_ptr << "\n";
}
```
The error in this code lies in the last line of the main function. Void pointers cannot be dereferenced since C does not know how many bytes it needs to read. 

2. What would be printed to the screen if the following code were executed?
```c++
#include <iostream>
using namespace std;

int main() {
	double f[] = {9.2, 3.3, 3.1, 2.18};
	int m[]= {2, 0 ,3};
	cout << f[m[2]] << "\n";
}
```
The following would be printed to the screen: `3.1`

3. Write C++ code in the main function below that:
	- Creates an array of 3 strings, with whatever values you like
	- Prints one of the strings to the terminal window
	- Modifies one of the strings to a different value
```c++
#include <iostream>
using namespace std;

int main() {
	string array = ["shoe", "moo", "foo"];
	cout << array[0] << endl;
	array[0] = "jumbo";
}
```
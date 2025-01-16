Every variable and data structure is stored in computer memory somewhere. 

Variables have information associated with them:
- Name
- Value
- Data type to indicate size
- Location in memory
# Why are pointers such a big deal?
- Manage memory at a low-level
- Pointers take up less space than an entire data structure
- Pointers can be used for simple variables
# Declaring Pointers
A pointer uses the same data types followed by an asterisk. 

```c++
int grade; // normal int variable

int* grade_ptr; // defines a pointer that refers to a memory location

grade_ptr = &grade; // sets the pointer equal to the memory location of grade
```
## Example 1
```c++
// Description: We love pointers!

#include <iostream>
using namespace std;

int main() {
    //Define a new integer variable
    int grade = 100;
    // Define a new pointer variable that points to an integer variable
    int* grade_ptr;
    // We have two unrelated variables
    // grade_ptr is a pointer that refers to the address of the grade variable
    grade_ptr = &grade;
    cout << "The value of grade is: " << grade << "\n";
    cout << "The value of grade_ptr is: " << grade_ptr << "\n";
}
```
## How to not declare a pointer
It is not possible to declare pointers on one line.
```c++
int a, b, c
int* x, y, z
x = &a
// These next two lines will throw an error. 
y = &b
z = &c
```
## Dereferencing a Pointer
```c++
 // Dereferencing pointers means to extract the value from the memory address
 // To dereference: *pointer_name
 cout << "The dereferenced value of grade_ptr is: " << *grade_ptr << ".\n";
```
Dereferencing a pointer while the memory location has no assigned value is a logical error, not a compilation error. C will just return a value of 1. 

Additionally, it's a hacking technique to refer to a location in memory to try to decipher the value of, for example, an encryption key. 
## Example 2
```c++
// Description: Get more practice with pointers

#include <iostream>
using namespace std;

int main() {
    // Define a normal variable
    char ch = 'h';
    // Define a pointer that refers to the memory location of the ch variable
    char* p = &ch;
    //Print the value of the pointer
    cout << "Memory location: " << p << "\n";
    //Print the value of the dereferenced pointer
    cout << "Value of pointer: " << *p << "\n";
}
```
### Example output
![[Pasted image 20250109114048.png]]
For variables of type `char`, its value will always be in front of the memory address. 
# Special types
**Void pointer**: pointer that can point to a variable of any type. 
- Use `void*` notation.
- `void` pointers cannot be dereferenced. 

Example
```c++
/* Filename: special_pointers.cpp
* Description: Provide an overview of how to use void and null pointers.
*/

#include <iostream>
using namespace std;

int main() {
	int* nullpointer = NULL;
	
	cout << "Value of null_pointer: " << nullpointer << "\n";
    cout << "Dereferenced value of null_pointer: " << *nullpointer << "\n";

    int value = 5;
    void* void_ptr;
    cout << "value of void_ptr: " << void_ptr << "\n";
    // C will not like this line because the void pointer has no bytes to dereference
    // cout << "dereferenced value of void_ptr: " << *void_ptr << "\n";
}
```
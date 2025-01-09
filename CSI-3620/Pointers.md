Every variable and data structure is stored in computer memory somewhere. 

Variables have information associated with them:
- Name
- Value
- Data type to indicate size
- Location in memory
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
For `char`, its value will always be in front of the memory address. 
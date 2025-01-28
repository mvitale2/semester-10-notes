Every variable and data structure is stored in computer memory somewhere. 

Pointers are essentially variables that store memory locations.  

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
- Need to use a data type (unless it's `void`)
- Need to use `*` after the data type
- Type the variable name

To link it to a variable's memory location, use the `&` operator. The target variable must be defined. 

```c++
int grade; // normal int variable

int* grade_ptr; // defines a pointer that refers to a memory location

grade_ptr = &grade; // sets the pointer equal to the memory location of grade
```
## Example 1
```embed-cpp
PATH: "vault://CSI-3620/cpp/intro_to_pointers.cpp"
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
```embed-cpp
PATH: "vault://CSI-3620/cpp/more_pointers.cpp"
```
### Example output
![[Pasted image 20250109114048.png]]
For variables of type `char`, its value will always be in front of the memory address. 
# Special types
**Void pointer**: pointer that can point to a variable of any type. 
- Use `void*` notation.
- `void` pointers cannot be dereferenced. 

Example
```embed-cpp
PATH: "vault://CSI-3620/cpp/special_pointers.cpp"
```

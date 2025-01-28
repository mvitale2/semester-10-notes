Arrays must have a type declared based on what will be stored within them:
```c++
string bumbo = {"hi", "bye"};
```
If you want to declare an empty array, the size of the array must be specified.
```c++
int gumbo[3];
```
You can then modify elements of the array as normal, as long as the specified index is within bounds. 
```c++
gumbo[0] = 4;
```
# Example
```embed-cpp
PATH: "vault://CSI-3620/cpp/array_ex.cpp"
```
# Nested Arrays
You can use the elements of arrays to refer to the elements of separate arrays.
## Example
```c++
// Description: Example of how nested arrays work.

#include <iostream>
using namespace std;

int main() {
    // Declare an empty array of 5 doubles
    double a[5];
    // Declare an empty array 10 integers
    int b[10];
    // Defines one element in the double array
    a[0] = 1.0;
    // Defines one element in the integer array
    b[0] = 1;
    // Nested reference example:
    cout << a[b[0]] << "\n";
    // Expected output: 1.0
    // Note: index positions cannot be floats, only integers
}
```
## Two-Dimensional Arrays
It's possible to create arrays with multiple "rows" and "columns."
### Example
```embed-cpp
PATH: "vault://CSI-3620/cpp/2d_arrays.cpp"
```
# Array of [[Pointers]]
Three ways to access the first element of an array of [[pointers]]:
1. The array name is a pointer to the 0th element
2. Can create a pointer to point to the array (as a whole)
3. Can create a pointer to point to the 0th element in the array

Additionally, pointers in arrays don't need to be dereferenced. 

To access other memory locations:
`cout << &star_wars[n] << endl`
Where *n* is the index of the desired pointer. 
## Example 1
```embed-cpp
PATH: "vault://CSI-3620/cpp/array_of_pointers.cpp"
```

## Example 2
```embed-cpp
PATH: "vault://CSI-3620/cpp/review_array_ptrs.cpp"
```

## Example 3
```embed-cpp
PATH: "vault://CSI-3620/cpp/array_name_ptr.cpp"
```
# Strings are Arrays, too
Strings in C++ are treated as fixed-length arrays that end with the null character. Due to this, not many string operations are available by default. 
## Example 1
```embed-cpp
PATH: "vault://CSI-3620/cpp/basic_string.cpp"
```
## Example 2
```embed-cpp
PATH: "vault://CSI-3620/cpp/stl_strings.cpp"
```
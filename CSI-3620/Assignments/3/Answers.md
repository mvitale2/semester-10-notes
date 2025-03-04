# Section 1
1. The `const` keyword means that a declared variable cannot be changed. An example of when you would want to use it is when a variable contains information that is not meant to be overwritten or changed throughout the program.
```c++
#include <iostream>
using namespace std

int main {
	const string secret_phrase = "wombo";
	string guess;
	cout << "What is the secret phrase?\n> ";
	cin << guess;
	// logic here
}
```
2. Unsigned integers contain only positive values starting from 0. This means that they can contain a larger amount of data. Signed integers contain less data because they can represent negative numbers. All signed integers are represented in binary with a 1 in the beginning. For example, a 4-bit unsigned integer can represent up to the decimal value 15 (1111), while a signed integer can only represent up to 7 (0111) and at least -8 (1000). 
3. `break` Ends a loop. `continue` Causes the loop to progress. 
4. A function declaration determines the return type as well as the parameters. The definition declares the actual logic to be run when the function is called. 
5. `int` and `int` pointer variables are passed by value by default, but can also be passed by reference. Structs can be passed by value or by reference, as well. Arrays are always passed by reference. Class objects can be passed by reference or by value.
   
   In order to specify that a parameter should only be passed by reference, an ampersand is put after the variable declaration. For example: `void print(int& x)`

# Section 2
## Question 6
**Description of the problem:** The `sizeof()` function returns the amount of space the array uses in memory, so it will not work in the for loop.
**How to fix it:** Since we know how many elements are in the array, use an `int` variable to store the size of the array and use that in the for loop.
```cpp
// ...
int size = 5;
// ...
for (int=0; i<size; i++) {
// ...
```
## Question 7
**Description of the problem:** The result of the ternary operator is swapped. It should produce "Even" when true and "Odd" when false.
**How to fix it:** `string result = (num % 2 == 0) ? "Even" : "Odd";`
## Question 8
**Description of the problem:** 
## Question 9
**Description of the problem:** The function's logic should is defined before it is declared. 
**How to fix it:** 
```c++
// ...
double area(double radius);
// ...
double area(double radius) {
	return 3.1459 * radius * radius;
}
```
## Question 10
**Description of the problems:** The operator overloading function returns a string instead of a boolean.
**How to fix it:** Rewrite the operator overloading function.
```c++
// ...
bool operator==(const Rectangle& r1, const Rectangle& r2) {
	if (r.1length == r2.length && r1.width == r2.width)
		return true;
	else
		return false;
}
// ...
```
# Section 3
## Question 11
```c++

```
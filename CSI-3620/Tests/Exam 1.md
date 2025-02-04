1. What step in the C++ development process pulls library functions and creates the a.out executable file? **Linker**
2. What does a pointer variable store? **Memory locations**
3. From top to bottom: 14, 36, 86, 51
4. enum, array, or struct
	1. enum
	2. array
	3. struct
	4. struct
	5. array, struct
	6. array, struct
5. heap, stack, or both
	1. stack
	2. both
	3. heap
	4. heap
	5. stack
	6. heap
6. A double cannot point to a memory location. `double* gpa_ptr = &gpa;`
7. Missing `[]` on array declaration. Double pointer was pointing to an integer array. The data types need to match. 
8. Void pointers can't be dereferenced. `string* indie_ptr = &indie;`
9. Floats can't be used to refer to the index of an array. Change the float array to an array of integers.
10. This is a two-dimensional array of strings. The error is that integers are being stored inside it. Store the integers as strings instead.
11. Output: `3\n0`
12. Output of array silliness
	1. memory location of `shows[0]`
	2. memory location of `shows[0]`
	3. Andor
	4. Supernatural
	5. You
	6. Ted Lasso
	7. IT Crowd
	8. memory location of `shows[1]`
13. Write a C++ program that shows you know how array of pointers work
```c++
#include <iostream>
using namespace std;

int main() {
	float a = 1.1;
	float b = 1.2;
	float c = 1.3;
	float* z[3];
	
	z[0] = &a;
	z[1] = &b;
	z[2] = &c;

	cout << *z[0] << endl;
}
```
14. Write a C++ program that shows you know how to use structs.
```c++
struct video_game {
	string game1;
	float rating;
	int year;
};

// Option 1: stack
// video_game game1;
// game1.name = "RDR2";
// game1.rating = 10.0;
// game1.year = 2018;

// cout << game1.name;

// Option 2: heap
video_game* game1 = new video_game;
game1->name = "RDR2";
game1->rating = 10.0;
game1->year = 2018;

cout << game1->name << endl;

delete game1;
```

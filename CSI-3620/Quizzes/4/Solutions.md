1. array silliness
	1. memory location pointing to the 0th element in star_wars array
	2. memory location pointing to 0th element in star_wars array
	3. memory location pointing to 1st element in star_wars array
	4. memory location pointing to 1st element in star_wars array
	5. Empire Strikes Back
	6. Return of the Jedi
2. code
```c++
#include <iostream>
using namespace std;

int main() {
	int grade1 = 90;
	int grade2 = 95;
	int grade3 = 100;

	int* grade_ptrs[3];

	grade_ptrs[0] = &grade1;
	grade_ptrs[1] = &grade2;
	grade_ptrs[2] = &grade3;

	cout << *grade_ptrs[0] << endl;
}
```
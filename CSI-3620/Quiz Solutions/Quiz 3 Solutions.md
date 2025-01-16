1. A void pointer cannot be dereferenced
2. 2.18
3. 
```c++
#include <iostream>
using namespace stf;

int main {
	string fruits[] = {"Apples", "Oranges", "Bananas"};
	cout << fruits[0];
	fruits[1] = "Clementine";
}
```
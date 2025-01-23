# Memory in C++
1. Compiled program is loaded into memory
2. Global variables are stored during the entire life of your program
3. Stack: Local variables remain in computer memory as long as the function continues, but as soon as the function exits, the info is erased from  the stack.
4. Heap: larger amount of memory available than the stack, allows programmers to dynamically allocate memory. 
Both the heap and the stack use RAM!
## Stack memory
Stacks follow a last-in, first-out methodology. The last item added to the stack is the first one that is removed. 
### Function call stack
Calling 30 nested functions is great way to exceed the function call stack limit. 
# Example of Using Heap Memory
```c++
// Description: How to use heap memory

#include <iostream>
using namespace std;

int main() {
    struct Student {
        string first_name;
        string last_name;
        int id;
        bool ITmajor;
        float GPA;
    };

    // More efficent way to instantiate
    Student student1 = {"Jane", "Doe", 654321, false, 3.0};

    Student* student2 = new Student;

    student2->first_name = "Amy";
    student2->last_name = "Santiago";
    student2->id = 123;
    student2->ITmajor = false;
    student2->GPA = 3.5;

    // modify some values
    student2->last_name = "Peralta";
    student2->GPA = 4.0;

    // print a value
    cout << student2->first_name << endl;

    // Most important part
    delete student2;
}
```

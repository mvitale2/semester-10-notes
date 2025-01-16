A structure is a collection of variables that can be different types. 
- Each variable within a structure is called a **member** or a **filed**. 
- Referred to by a given name

# Example
```c++
// Description: How to use structs

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

    // Instantiate a student
    Student student1;
    student1.first_name = "John";
    student1.last_name = "Doe";
    student1.id = 123456;
    student1.ITmajor = true;
    student1.GPA = 3.5;

    // More efficent way to instantiate
    Student student2 = {"Jane", "Doe", 654321, false, 3.0};
}
```

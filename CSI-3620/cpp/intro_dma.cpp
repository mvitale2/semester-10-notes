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
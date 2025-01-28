// Description: How to use structs

#include <iostream>
using namespace std;

int main() {
    struct Student {
        string first_name;
        string last_name;
        string classes[4];
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
    Student student2 = {"Jane", "Doe", {"wombo", "skombo", "fombo"}, 654321, false, 3.0};

    // Modify values in the struct
    student1.last_name = "Larry";
    student1.GPA = 4.0;

    // Print values in the struct
    cout << student1.first_name << " " << student1.last_name << " has a " << student1.GPA << " GPA." << endl;
    cout << student2.first_name << " is in " << student2.classes[0] << endl;
}